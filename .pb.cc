// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: 

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include ".pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {


}  // namespace


void protobuf_AssignDesc_() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_() {
  protobuf_AddDesc_();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "");
  GOOGLE_CHECK(file != NULL);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_() {
}

void protobuf_InitDefaults__impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults__once_);
void protobuf_InitDefaults_() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults__once_,
                 &protobuf_InitDefaults__impl);
}
void protobuf_AddDesc__impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\000", 2);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc__once_);
void protobuf_AddDesc_() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc__once_,
                 &protobuf_AddDesc__impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ {
  StaticDescriptorInitializer_() {
    protobuf_AddDesc_();
  }
} static_descriptor_initializer__;

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
