// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: response.proto

#ifndef PROTOBUF_INCLUDED_response_2eproto
#define PROTOBUF_INCLUDED_response_2eproto

#include <limits>
#include <string>

#include <google/protobuf/stubs/common.h>
#if GOOGLE_PROTOBUF_VERSION < 3006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_response_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_response_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_response_2eproto();
namespace wproject {
class Response;
class ResponseDefaultTypeInternal;
extern ResponseDefaultTypeInternal _Response_default_instance_;
}  // namespace wproject
namespace google {
namespace protobuf {
template<> ::wproject::Response* Arena::CreateMaybeMessage<::wproject::Response>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace wproject {

enum Response_Type {
  Response_Type_SUCCESS = 0,
  Response_Type_ERROR = 1,
  Response_Type_Response_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::min(),
  Response_Type_Response_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::google::protobuf::int32>::max()
};
bool Response_Type_IsValid(int value);
const Response_Type Response_Type_Type_MIN = Response_Type_SUCCESS;
const Response_Type Response_Type_Type_MAX = Response_Type_ERROR;
const int Response_Type_Type_ARRAYSIZE = Response_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Response_Type_descriptor();
inline const ::std::string& Response_Type_Name(Response_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Response_Type_descriptor(), value);
}
inline bool Response_Type_Parse(
    const ::std::string& name, Response_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Response_Type>(
    Response_Type_descriptor(), name, value);
}
// ===================================================================

class Response : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:wproject.Response) */ {
 public:
  Response();
  virtual ~Response();

  Response(const Response& from);

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Response(Response&& from) noexcept
    : Response() {
    *this = ::std::move(from);
  }

  inline Response& operator=(Response&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Response& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Response* internal_default_instance() {
    return reinterpret_cast<const Response*>(
               &_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Response* other);
  friend void swap(Response& a, Response& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Response* New() const final {
    return CreateMaybeMessage<Response>(NULL);
  }

  Response* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Response>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Response& from);
  void MergeFrom(const Response& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Response* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Response_Type Type;
  static const Type SUCCESS =
    Response_Type_SUCCESS;
  static const Type ERROR =
    Response_Type_ERROR;
  static inline bool Type_IsValid(int value) {
    return Response_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Response_Type_Type_MIN;
  static const Type Type_MAX =
    Response_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Response_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Response_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Response_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Response_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // string text = 2;
  void clear_text();
  static const int kTextFieldNumber = 2;
  const ::std::string& text() const;
  void set_text(const ::std::string& value);
  #if LANG_CXX11
  void set_text(::std::string&& value);
  #endif
  void set_text(const char* value);
  void set_text(const char* value, size_t size);
  ::std::string* mutable_text();
  ::std::string* release_text();
  void set_allocated_text(::std::string* text);

  // .wproject.Response.Type type = 1;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::wproject::Response_Type type() const;
  void set_type(::wproject::Response_Type value);

  // @@protoc_insertion_point(class_scope:wproject.Response)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr text_;
  int type_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_response_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Response

// .wproject.Response.Type type = 1;
inline void Response::clear_type() {
  type_ = 0;
}
inline ::wproject::Response_Type Response::type() const {
  // @@protoc_insertion_point(field_get:wproject.Response.type)
  return static_cast< ::wproject::Response_Type >(type_);
}
inline void Response::set_type(::wproject::Response_Type value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:wproject.Response.type)
}

// string text = 2;
inline void Response::clear_text() {
  text_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Response::text() const {
  // @@protoc_insertion_point(field_get:wproject.Response.text)
  return text_.GetNoArena();
}
inline void Response::set_text(const ::std::string& value) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:wproject.Response.text)
}
#if LANG_CXX11
inline void Response::set_text(::std::string&& value) {
  
  text_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:wproject.Response.text)
}
#endif
inline void Response::set_text(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:wproject.Response.text)
}
inline void Response::set_text(const char* value, size_t size) {
  
  text_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:wproject.Response.text)
}
inline ::std::string* Response::mutable_text() {
  
  // @@protoc_insertion_point(field_mutable:wproject.Response.text)
  return text_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Response::release_text() {
  // @@protoc_insertion_point(field_release:wproject.Response.text)
  
  return text_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Response::set_allocated_text(::std::string* text) {
  if (text != NULL) {
    
  } else {
    
  }
  text_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), text);
  // @@protoc_insertion_point(field_set_allocated:wproject.Response.text)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace wproject

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::wproject::Response_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::wproject::Response_Type>() {
  return ::wproject::Response_Type_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_response_2eproto