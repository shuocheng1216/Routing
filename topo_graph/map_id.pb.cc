// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: map_id.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "map_id.pb.h"

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

namespace apollo {
namespace hdmap {

namespace {

const ::google::protobuf::Descriptor* Id_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Id_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_map_5fid_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_map_5fid_2eproto() {
  protobuf_AddDesc_map_5fid_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "map_id.proto");
  GOOGLE_CHECK(file != NULL);
  Id_descriptor_ = file->message_type(0);
  static const int Id_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Id, id_),
  };
  Id_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Id_descriptor_,
      Id::internal_default_instance(),
      Id_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Id, _has_bits_),
      -1,
      -1,
      sizeof(Id),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Id, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_map_5fid_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Id_descriptor_, Id::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_map_5fid_2eproto() {
  Id_default_instance_.Shutdown();
  delete Id_reflection_;
}

void protobuf_InitDefaults_map_5fid_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  Id_default_instance_.DefaultConstruct();
  Id_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_map_5fid_2eproto_once_);
void protobuf_InitDefaults_map_5fid_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_map_5fid_2eproto_once_,
                 &protobuf_InitDefaults_map_5fid_2eproto_impl);
}
void protobuf_AddDesc_map_5fid_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_map_5fid_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014map_id.proto\022\014apollo.hdmap\"\020\n\002Id\022\n\n\002id"
    "\030\001 \001(\t", 46);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "map_id.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_map_5fid_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_map_5fid_2eproto_once_);
void protobuf_AddDesc_map_5fid_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_map_5fid_2eproto_once_,
                 &protobuf_AddDesc_map_5fid_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_map_5fid_2eproto {
  StaticDescriptorInitializer_map_5fid_2eproto() {
    protobuf_AddDesc_map_5fid_2eproto();
  }
} static_descriptor_initializer_map_5fid_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Id::kIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Id::Id()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_map_5fid_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.hdmap.Id)
}

void Id::InitAsDefaultInstance() {
}

Id::Id(const Id& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:apollo.hdmap.Id)
}

void Id::SharedCtor() {
  _cached_size_ = 0;
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Id::~Id() {
  // @@protoc_insertion_point(destructor:apollo.hdmap.Id)
  SharedDtor();
}

void Id::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Id::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Id::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Id_descriptor_;
}

const Id& Id::default_instance() {
  protobuf_InitDefaults_map_5fid_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Id> Id_default_instance_;

Id* Id::New(::google::protobuf::Arena* arena) const {
  Id* n = new Id;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Id::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.hdmap.Id)
  if (has_id()) {
    id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Id::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.hdmap.Id)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->id().data(), this->id().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "apollo.hdmap.Id.id");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.hdmap.Id)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.hdmap.Id)
  return false;
#undef DO_
}

void Id::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.hdmap.Id)
  // optional string id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.hdmap.Id.id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->id(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.hdmap.Id)
}

::google::protobuf::uint8* Id::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:apollo.hdmap.Id)
  // optional string id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->id().data(), this->id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "apollo.hdmap.Id.id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->id(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.hdmap.Id)
  return target;
}

size_t Id::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.hdmap.Id)
  size_t total_size = 0;

  // optional string id = 1;
  if (has_id()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->id());
  }

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Id::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.hdmap.Id)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Id* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Id>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.hdmap.Id)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.hdmap.Id)
    UnsafeMergeFrom(*source);
  }
}

void Id::MergeFrom(const Id& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.hdmap.Id)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void Id::UnsafeMergeFrom(const Id& from) {
  GOOGLE_DCHECK(&from != this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_has_id();
      id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void Id::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.hdmap.Id)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Id::CopyFrom(const Id& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.hdmap.Id)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool Id::IsInitialized() const {

  return true;
}

void Id::Swap(Id* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Id::InternalSwap(Id* other) {
  id_.Swap(&other->id_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Id::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Id_descriptor_;
  metadata.reflection = Id_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Id

// optional string id = 1;
bool Id::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Id::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
void Id::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void Id::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
const ::std::string& Id::id() const {
  // @@protoc_insertion_point(field_get:apollo.hdmap.Id.id)
  return id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Id::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:apollo.hdmap.Id.id)
}
void Id::set_id(const char* value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:apollo.hdmap.Id.id)
}
void Id::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:apollo.hdmap.Id.id)
}
::std::string* Id::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:apollo.hdmap.Id.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Id::release_id() {
  // @@protoc_insertion_point(field_release:apollo.hdmap.Id.id)
  clear_has_id();
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Id::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:apollo.hdmap.Id.id)
}

inline const Id* Id::internal_default_instance() {
  return &Id_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace hdmap
}  // namespace apollo

// @@protoc_insertion_point(global_scope)