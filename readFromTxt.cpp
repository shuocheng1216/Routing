#include <string>
#include <fstream>
#include <iostream>
#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <glog/logging.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl.h>
#include <google/protobuf/text_format.h>
#include <fcntl.h>
#include <unistd.h>
#include <fstream>
#include "topo_graph/topo_graph.pb.h"
#include "topo_graph.h" 
#include "strategy/a_star_strategy.h"
using google::protobuf::io::FileInputStream;
using google::protobuf::io::FileOutputStream;
using google::protobuf::io::ZeroCopyInputStream;
using google::protobuf::io::CodedInputStream;
using google::protobuf::io::ZeroCopyOutputStream;
using google::protobuf::io::CodedOutputStream;
using google::protobuf::Message;
using namespace std;
int main(void) 
{ 
        apollo::routing::Graph graph;


        //lm::helloworld msg1; 
	//msg1.set_id(101); 
	//msg1.set_str("hello");
        int fd=open("../routing_map1.txt",O_RDONLY);
        CHECK_NE(fd, -1) << "File not found: " << "a.txt";
        FileInputStream* input = new FileInputStream(fd);
        //FileOutputStream* output = new FileOutputStream(fd);
        bool success = google::protobuf::TextFormat::Parse(input, &graph);
        //释放input对象
       delete input;
       //关闭stream流
       close(fd);
       //返回是否成功

    // cout<<msg1.id()<<endl;
   // cout<<msg1.str()<<endl;
     for(int i = 0; i < graph.node_size(); i++)
    {
        cout<<"node["<<i<<"] lane_id:"<< graph.node(i).lane_id()<< endl;
        cout<<"node["<<i<<"] road_id:"<< graph.node(i).road_id()<< endl;
       // cout<<"person["<<i<<"]  age:"<< user_list.users(i).age()<< endl;
       // cout<<"person["<<i<<"]email:"<< user_list.users(i).email()<< endl;
      //  for(int j = 0; j < user_list.users(i).phonenum_size(); j++)
      //  {
       //     cout<<"person["<<i<<"] phonenum["<<j<<"] type:"<< user_list.users(i).phonenum(j).type()<< endl;
      //      cout<<"person["<<i<<"] phonenum["<<j<<"] no:"<< user_list.users(i).phonenum(j).id()<< endl;
      //  }
    }
    

         for(int i = 0; i < graph.edge_size(); i++)
    {
        cout<<"edge["<<i<<"] from_lane_id:"<< graph.edge(i).from_lane_id()<< endl;
        cout<<"edge["<<i<<"] to_lane_id:"<< graph.edge(i).to_lane_id()<< endl;
        cout<<"edge["<<i<<"] direction_type:"<< graph.edge(i).direction_type()<< endl;
       // cout<<"person["<<i<<"]  age:"<< user_list.users(i).age()<< endl;
       // cout<<"person["<<i<<"]email:"<< user_list.users(i).email()<< endl;
      //  for(int j = 0; j < user_list.users(i).phonenum_size(); j++)
      //  {
       //     cout<<"person["<<i<<"] phonenum["<<j<<"] type:"<< user_list.users(i).phonenum(j).type()<< endl;
      //      cout<<"person["<<i<<"] phonenum["<<j<<"] no:"<< user_list.users(i).phonenum(j).id()<< endl;
      //  }
    }
     apollo::routing::TopoGraph graph_;
     graph_.LoadGraph(graph);
    cout<<graph_.MapVersion()<<"aaaaaaaa"<<endl;
    const apollo::routing::TopoNode* node =  graph_.GetNode("lane_85");
    std::unordered_set<const apollo::routing::TopoEdge*> in_from_all_edge_set=node->InFromAllEdge();
    for(auto i=in_from_all_edge_set.begin();i!=in_from_all_edge_set.end();i++){
      cout<<"from_lane_id:"<<(*i)->FromLaneId()<<"to_lane_id:"<<(*i)->ToLaneId()<<endl;
    }
    std::vector<apollo::routing::NodeWithRange> result_nodes;
    const apollo::routing::TopoNode* node1 =  graph_.GetNode("lane_1");
    const apollo::routing::TopoNode* node2 =  graph_.GetNode("lane_85");
    apollo::routing::AStarStrategy Astar(true);
    Astar.Search(&graph_,node1,node2,&result_nodes);
    for(const auto& nodewithrange: result_nodes ){
      cout<<nodewithrange.LaneId()<<endl;
    }

	return 0;
}
