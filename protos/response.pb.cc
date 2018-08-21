// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: response.proto

#include "response.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace wproject {
class ResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Response> _instance;
} _Response_default_instance_;
}  // namespace wproject
static void InitDefaultsResponse_response_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::wproject::_Response_default_instance_;
    new (ptr) ::wproject::Response();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::wproject::Response::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Response_response_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsResponse_response_2eproto}, {}};

void InitDefaults_response_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Response_response_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_response_2eproto[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors_response_2eproto[1];
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_response_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_response_2eproto::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::wproject::Response, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::wproject::Response, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::wproject::Response, text_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::wproject::Response)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::wproject::_Response_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_response_2eproto = {
  {}, AddDescriptors_response_2eproto, "response.proto", schemas,
  file_default_instances, TableStruct_response_2eproto::offsets,
  file_level_metadata_response_2eproto, 1, file_level_enum_descriptors_response_2eproto, file_level_service_descriptors_response_2eproto,
};

::google::protobuf::internal::DescriptorTable descriptor_table_response_2eproto = {
  false, InitDefaults_response_2eproto, 
  "\n\016response.proto\022\010wproject\"_\n\010Response\022%"
  "\n\004type\030\001 \001(\0162\027.wproject.Response.Type\022\014\n"
  "\004text\030\002 \001(\t\"\036\n\004Type\022\013\n\007SUCCESS\020\000\022\t\n\005ERRO"
  "R\020\001b\006proto3"
,
  "response.proto", &assign_descriptors_table_response_2eproto, 131,
};

void AddDescriptors_response_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_response_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_response_2eproto = []() { AddDescriptors_response_2eproto(); return true; }();
namespace wproject {
const ::google::protobuf::EnumDescriptor* Response_Type_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&assign_descriptors_table_response_2eproto);
  return file_level_enum_descriptors_response_2eproto[0];
}
bool Response_Type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Response_Type Response::SUCCESS;
const Response_Type Response::ERROR;
const Response_Type Response::Type_MIN;
const Response_Type Response::Type_MAX;
const int Response::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Response::InitAsDefaultInstance() {
}
class Response::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Response::kTypeFieldNumber;
const int Response::kTextFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Response::Response()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:wproject.Response)
}
Response::Response(const Response& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.text().size() > 0) {
    text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:wproject.Response)
}

void Response::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Response_response_2eproto.base);
  text_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_ = 0;
}

Response::~Response() {
  // @@protoc_insertion_point(destructor:wproject.Response)
  SharedDtor();
}

void Response::SharedDtor() {
  text_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Response::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Response& Response::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Response_response_2eproto.base);
  return *internal_default_instance();
}


void Response::Clear() {
// @@protoc_insertion_point(message_clear_start:wproject.Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Response::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Response*>(object);
  ::google::protobuf::uint32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ::google::protobuf::uint32 tag;
    ptr = Varint::Parse32Inline(ptr, &tag);
    if (!ptr) goto error;
    switch (tag >> 3) {
      case 0: goto error;
      // .wproject.Response.Type type = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 8) goto handle_unusual;
        ::google::protobuf::uint64 val;
        ptr = Varint::Parse64(ptr, &val);
        if (!ptr) goto error;
        ::wproject::Response_Type value = static_cast<::wproject::Response_Type>(val);
        msg->set_type(value);
        break;
      }
      // string text = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = Varint::Parse32Inline(ptr, &size);
        if (!ptr) goto error;
        ctx->extra_parse_data().SetFieldName("wproject.Response.text");
        parser_till_end = ::google::protobuf::internal::StringParserUTF8;
        ::std::string* str = msg->mutable_text();
        str->clear();
        object = str;
        if (size > end - ptr) goto len_delim_till_end;
        auto newend = ptr + size;
        if (!ctx->ParseExactRange({parser_till_end, object}, ptr, newend)) goto error;
        ptr = newend;
        break;
      }
      default: {
      handle_unusual: (void)&&handle_unusual;
        if ((tag & 7) == 4) {
          if (!ctx->ValidEndGroup(tag)) goto error;
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
error:
  return nullptr;
len_delim_till_end: (void)&&len_delim_till_end;
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                                 {parser_till_end, object}, size);
group_continues: (void)&&group_continues;
  GOOGLE_DCHECK(ptr >= end);
  ctx->StoreGroup({_InternalParse, msg}, {parser_till_end, object}, depth);
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Response::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:wproject.Response)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .wproject.Response.Type type = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (8 & 0xFF)) {
          int value = 0;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::wproject::Response_Type >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string text = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_text()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->text().data(), static_cast<int>(this->text().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "wproject.Response.text"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:wproject.Response)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:wproject.Response)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Response::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:wproject.Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .wproject.Response.Type type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // string text = 2;
  if (this->text().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->text().data(), static_cast<int>(this->text().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "wproject.Response.text");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->text(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:wproject.Response)
}

::google::protobuf::uint8* Response::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:wproject.Response)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .wproject.Response.Type type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // string text = 2;
  if (this->text().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->text().data(), static_cast<int>(this->text().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "wproject.Response.text");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->text(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:wproject.Response)
  return target;
}

size_t Response::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:wproject.Response)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string text = 2;
  if (this->text().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->text());
  }

  // .wproject.Response.Type type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Response::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:wproject.Response)
  GOOGLE_DCHECK_NE(&from, this);
  const Response* source =
      ::google::protobuf::DynamicCastToGenerated<Response>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:wproject.Response)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:wproject.Response)
    MergeFrom(*source);
  }
}

void Response::MergeFrom(const Response& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:wproject.Response)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.text().size() > 0) {

    text_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.text_);
  }
  if (from.type() != 0) {
    set_type(from.type());
  }
}

void Response::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:wproject.Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Response::CopyFrom(const Response& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:wproject.Response)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Response::IsInitialized() const {
  return true;
}

void Response::Swap(Response* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Response::InternalSwap(Response* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  text_.Swap(&other->text_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(type_, other->type_);
}

::google::protobuf::Metadata Response::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_response_2eproto);
  return ::file_level_metadata_response_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace wproject
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::wproject::Response* Arena::CreateMaybeMessage< ::wproject::Response >(Arena* arena) {
  return Arena::CreateInternal< ::wproject::Response >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)