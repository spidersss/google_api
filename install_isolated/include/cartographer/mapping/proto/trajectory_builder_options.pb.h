// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/trajectory_builder_options.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/transform/proto/transform.pb.h"
#include "cartographer/mapping_2d/proto/local_trajectory_builder_options.pb.h"
#include "cartographer/mapping_3d/proto/local_trajectory_builder_options.pb.h"
// @@protoc_insertion_point(includes)
namespace cartographer {
namespace mapping {
namespace proto {
class InitialTrajectoryPose;
class InitialTrajectoryPoseDefaultTypeInternal;
extern InitialTrajectoryPoseDefaultTypeInternal _InitialTrajectoryPose_default_instance_;
class TrajectoryBuilderOptions;
class TrajectoryBuilderOptionsDefaultTypeInternal;
extern TrajectoryBuilderOptionsDefaultTypeInternal _TrajectoryBuilderOptions_default_instance_;
}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

namespace cartographer {
namespace mapping {
namespace proto {

namespace protobuf_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static void InitDefaultsImpl();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto

// ===================================================================

class InitialTrajectoryPose : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.InitialTrajectoryPose) */ {
 public:
  InitialTrajectoryPose();
  virtual ~InitialTrajectoryPose();

  InitialTrajectoryPose(const InitialTrajectoryPose& from);

  inline InitialTrajectoryPose& operator=(const InitialTrajectoryPose& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  InitialTrajectoryPose(InitialTrajectoryPose&& from) noexcept
    : InitialTrajectoryPose() {
    *this = ::std::move(from);
  }

  inline InitialTrajectoryPose& operator=(InitialTrajectoryPose&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const InitialTrajectoryPose& default_instance();

  static inline const InitialTrajectoryPose* internal_default_instance() {
    return reinterpret_cast<const InitialTrajectoryPose*>(
               &_InitialTrajectoryPose_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(InitialTrajectoryPose* other);
  friend void swap(InitialTrajectoryPose& a, InitialTrajectoryPose& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline InitialTrajectoryPose* New() const PROTOBUF_FINAL { return New(NULL); }

  InitialTrajectoryPose* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const InitialTrajectoryPose& from);
  void MergeFrom(const InitialTrajectoryPose& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(InitialTrajectoryPose* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .cartographer.transform.proto.Rigid3d relative_pose = 1;
  bool has_relative_pose() const;
  void clear_relative_pose();
  static const int kRelativePoseFieldNumber = 1;
  const ::cartographer::transform::proto::Rigid3d& relative_pose() const;
  ::cartographer::transform::proto::Rigid3d* mutable_relative_pose();
  ::cartographer::transform::proto::Rigid3d* release_relative_pose();
  void set_allocated_relative_pose(::cartographer::transform::proto::Rigid3d* relative_pose);

  // int64 timestamp = 3;
  void clear_timestamp();
  static const int kTimestampFieldNumber = 3;
  ::google::protobuf::int64 timestamp() const;
  void set_timestamp(::google::protobuf::int64 value);

  // int32 to_trajectory_id = 2;
  void clear_to_trajectory_id();
  static const int kToTrajectoryIdFieldNumber = 2;
  ::google::protobuf::int32 to_trajectory_id() const;
  void set_to_trajectory_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.InitialTrajectoryPose)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::cartographer::transform::proto::Rigid3d* relative_pose_;
  ::google::protobuf::int64 timestamp_;
  ::google::protobuf::int32 to_trajectory_id_;
  mutable int _cached_size_;
  friend struct protobuf_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class TrajectoryBuilderOptions : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.TrajectoryBuilderOptions) */ {
 public:
  TrajectoryBuilderOptions();
  virtual ~TrajectoryBuilderOptions();

  TrajectoryBuilderOptions(const TrajectoryBuilderOptions& from);

  inline TrajectoryBuilderOptions& operator=(const TrajectoryBuilderOptions& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  TrajectoryBuilderOptions(TrajectoryBuilderOptions&& from) noexcept
    : TrajectoryBuilderOptions() {
    *this = ::std::move(from);
  }

  inline TrajectoryBuilderOptions& operator=(TrajectoryBuilderOptions&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const TrajectoryBuilderOptions& default_instance();

  static inline const TrajectoryBuilderOptions* internal_default_instance() {
    return reinterpret_cast<const TrajectoryBuilderOptions*>(
               &_TrajectoryBuilderOptions_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    1;

  void Swap(TrajectoryBuilderOptions* other);
  friend void swap(TrajectoryBuilderOptions& a, TrajectoryBuilderOptions& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline TrajectoryBuilderOptions* New() const PROTOBUF_FINAL { return New(NULL); }

  TrajectoryBuilderOptions* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const TrajectoryBuilderOptions& from);
  void MergeFrom(const TrajectoryBuilderOptions& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(TrajectoryBuilderOptions* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .cartographer.mapping_2d.proto.LocalTrajectoryBuilderOptions trajectory_builder_2d_options = 1;
  bool has_trajectory_builder_2d_options() const;
  void clear_trajectory_builder_2d_options();
  static const int kTrajectoryBuilder2DOptionsFieldNumber = 1;
  const ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions& trajectory_builder_2d_options() const;
  ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* mutable_trajectory_builder_2d_options();
  ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* release_trajectory_builder_2d_options();
  void set_allocated_trajectory_builder_2d_options(::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* trajectory_builder_2d_options);

  // .cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions trajectory_builder_3d_options = 2;
  bool has_trajectory_builder_3d_options() const;
  void clear_trajectory_builder_3d_options();
  static const int kTrajectoryBuilder3DOptionsFieldNumber = 2;
  const ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions& trajectory_builder_3d_options() const;
  ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* mutable_trajectory_builder_3d_options();
  ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* release_trajectory_builder_3d_options();
  void set_allocated_trajectory_builder_3d_options(::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* trajectory_builder_3d_options);

  // .cartographer.mapping.proto.InitialTrajectoryPose initial_trajectory_pose = 4;
  bool has_initial_trajectory_pose() const;
  void clear_initial_trajectory_pose();
  static const int kInitialTrajectoryPoseFieldNumber = 4;
  const ::cartographer::mapping::proto::InitialTrajectoryPose& initial_trajectory_pose() const;
  ::cartographer::mapping::proto::InitialTrajectoryPose* mutable_initial_trajectory_pose();
  ::cartographer::mapping::proto::InitialTrajectoryPose* release_initial_trajectory_pose();
  void set_allocated_initial_trajectory_pose(::cartographer::mapping::proto::InitialTrajectoryPose* initial_trajectory_pose);

  // bool pure_localization = 3;
  void clear_pure_localization();
  static const int kPureLocalizationFieldNumber = 3;
  bool pure_localization() const;
  void set_pure_localization(bool value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.TrajectoryBuilderOptions)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* trajectory_builder_2d_options_;
  ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* trajectory_builder_3d_options_;
  ::cartographer::mapping::proto::InitialTrajectoryPose* initial_trajectory_pose_;
  bool pure_localization_;
  mutable int _cached_size_;
  friend struct protobuf_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InitialTrajectoryPose

// .cartographer.transform.proto.Rigid3d relative_pose = 1;
inline bool InitialTrajectoryPose::has_relative_pose() const {
  return this != internal_default_instance() && relative_pose_ != NULL;
}
inline void InitialTrajectoryPose::clear_relative_pose() {
  if (GetArenaNoVirtual() == NULL && relative_pose_ != NULL) delete relative_pose_;
  relative_pose_ = NULL;
}
inline const ::cartographer::transform::proto::Rigid3d& InitialTrajectoryPose::relative_pose() const {
  const ::cartographer::transform::proto::Rigid3d* p = relative_pose_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.InitialTrajectoryPose.relative_pose)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::transform::proto::Rigid3d*>(
      &::cartographer::transform::proto::_Rigid3d_default_instance_);
}
inline ::cartographer::transform::proto::Rigid3d* InitialTrajectoryPose::mutable_relative_pose() {
  
  if (relative_pose_ == NULL) {
    relative_pose_ = new ::cartographer::transform::proto::Rigid3d;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.InitialTrajectoryPose.relative_pose)
  return relative_pose_;
}
inline ::cartographer::transform::proto::Rigid3d* InitialTrajectoryPose::release_relative_pose() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.InitialTrajectoryPose.relative_pose)
  
  ::cartographer::transform::proto::Rigid3d* temp = relative_pose_;
  relative_pose_ = NULL;
  return temp;
}
inline void InitialTrajectoryPose::set_allocated_relative_pose(::cartographer::transform::proto::Rigid3d* relative_pose) {
  delete relative_pose_;
  relative_pose_ = relative_pose;
  if (relative_pose) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.InitialTrajectoryPose.relative_pose)
}

// int32 to_trajectory_id = 2;
inline void InitialTrajectoryPose::clear_to_trajectory_id() {
  to_trajectory_id_ = 0;
}
inline ::google::protobuf::int32 InitialTrajectoryPose::to_trajectory_id() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.InitialTrajectoryPose.to_trajectory_id)
  return to_trajectory_id_;
}
inline void InitialTrajectoryPose::set_to_trajectory_id(::google::protobuf::int32 value) {
  
  to_trajectory_id_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.InitialTrajectoryPose.to_trajectory_id)
}

// int64 timestamp = 3;
inline void InitialTrajectoryPose::clear_timestamp() {
  timestamp_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 InitialTrajectoryPose::timestamp() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.InitialTrajectoryPose.timestamp)
  return timestamp_;
}
inline void InitialTrajectoryPose::set_timestamp(::google::protobuf::int64 value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.InitialTrajectoryPose.timestamp)
}

// -------------------------------------------------------------------

// TrajectoryBuilderOptions

// .cartographer.mapping_2d.proto.LocalTrajectoryBuilderOptions trajectory_builder_2d_options = 1;
inline bool TrajectoryBuilderOptions::has_trajectory_builder_2d_options() const {
  return this != internal_default_instance() && trajectory_builder_2d_options_ != NULL;
}
inline void TrajectoryBuilderOptions::clear_trajectory_builder_2d_options() {
  if (GetArenaNoVirtual() == NULL && trajectory_builder_2d_options_ != NULL) delete trajectory_builder_2d_options_;
  trajectory_builder_2d_options_ = NULL;
}
inline const ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions& TrajectoryBuilderOptions::trajectory_builder_2d_options() const {
  const ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* p = trajectory_builder_2d_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.TrajectoryBuilderOptions.trajectory_builder_2d_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions*>(
      &::cartographer::mapping_2d::proto::_LocalTrajectoryBuilderOptions_default_instance_);
}
inline ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* TrajectoryBuilderOptions::mutable_trajectory_builder_2d_options() {
  
  if (trajectory_builder_2d_options_ == NULL) {
    trajectory_builder_2d_options_ = new ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.TrajectoryBuilderOptions.trajectory_builder_2d_options)
  return trajectory_builder_2d_options_;
}
inline ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* TrajectoryBuilderOptions::release_trajectory_builder_2d_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.TrajectoryBuilderOptions.trajectory_builder_2d_options)
  
  ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* temp = trajectory_builder_2d_options_;
  trajectory_builder_2d_options_ = NULL;
  return temp;
}
inline void TrajectoryBuilderOptions::set_allocated_trajectory_builder_2d_options(::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* trajectory_builder_2d_options) {
  delete trajectory_builder_2d_options_;
  trajectory_builder_2d_options_ = trajectory_builder_2d_options;
  if (trajectory_builder_2d_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.TrajectoryBuilderOptions.trajectory_builder_2d_options)
}

// .cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions trajectory_builder_3d_options = 2;
inline bool TrajectoryBuilderOptions::has_trajectory_builder_3d_options() const {
  return this != internal_default_instance() && trajectory_builder_3d_options_ != NULL;
}
inline void TrajectoryBuilderOptions::clear_trajectory_builder_3d_options() {
  if (GetArenaNoVirtual() == NULL && trajectory_builder_3d_options_ != NULL) delete trajectory_builder_3d_options_;
  trajectory_builder_3d_options_ = NULL;
}
inline const ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions& TrajectoryBuilderOptions::trajectory_builder_3d_options() const {
  const ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* p = trajectory_builder_3d_options_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.TrajectoryBuilderOptions.trajectory_builder_3d_options)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions*>(
      &::cartographer::mapping_3d::proto::_LocalTrajectoryBuilderOptions_default_instance_);
}
inline ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* TrajectoryBuilderOptions::mutable_trajectory_builder_3d_options() {
  
  if (trajectory_builder_3d_options_ == NULL) {
    trajectory_builder_3d_options_ = new ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.TrajectoryBuilderOptions.trajectory_builder_3d_options)
  return trajectory_builder_3d_options_;
}
inline ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* TrajectoryBuilderOptions::release_trajectory_builder_3d_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.TrajectoryBuilderOptions.trajectory_builder_3d_options)
  
  ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* temp = trajectory_builder_3d_options_;
  trajectory_builder_3d_options_ = NULL;
  return temp;
}
inline void TrajectoryBuilderOptions::set_allocated_trajectory_builder_3d_options(::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* trajectory_builder_3d_options) {
  delete trajectory_builder_3d_options_;
  trajectory_builder_3d_options_ = trajectory_builder_3d_options;
  if (trajectory_builder_3d_options) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.TrajectoryBuilderOptions.trajectory_builder_3d_options)
}

// bool pure_localization = 3;
inline void TrajectoryBuilderOptions::clear_pure_localization() {
  pure_localization_ = false;
}
inline bool TrajectoryBuilderOptions::pure_localization() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.TrajectoryBuilderOptions.pure_localization)
  return pure_localization_;
}
inline void TrajectoryBuilderOptions::set_pure_localization(bool value) {
  
  pure_localization_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.TrajectoryBuilderOptions.pure_localization)
}

// .cartographer.mapping.proto.InitialTrajectoryPose initial_trajectory_pose = 4;
inline bool TrajectoryBuilderOptions::has_initial_trajectory_pose() const {
  return this != internal_default_instance() && initial_trajectory_pose_ != NULL;
}
inline void TrajectoryBuilderOptions::clear_initial_trajectory_pose() {
  if (GetArenaNoVirtual() == NULL && initial_trajectory_pose_ != NULL) delete initial_trajectory_pose_;
  initial_trajectory_pose_ = NULL;
}
inline const ::cartographer::mapping::proto::InitialTrajectoryPose& TrajectoryBuilderOptions::initial_trajectory_pose() const {
  const ::cartographer::mapping::proto::InitialTrajectoryPose* p = initial_trajectory_pose_;
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.TrajectoryBuilderOptions.initial_trajectory_pose)
  return p != NULL ? *p : *reinterpret_cast<const ::cartographer::mapping::proto::InitialTrajectoryPose*>(
      &::cartographer::mapping::proto::_InitialTrajectoryPose_default_instance_);
}
inline ::cartographer::mapping::proto::InitialTrajectoryPose* TrajectoryBuilderOptions::mutable_initial_trajectory_pose() {
  
  if (initial_trajectory_pose_ == NULL) {
    initial_trajectory_pose_ = new ::cartographer::mapping::proto::InitialTrajectoryPose;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.TrajectoryBuilderOptions.initial_trajectory_pose)
  return initial_trajectory_pose_;
}
inline ::cartographer::mapping::proto::InitialTrajectoryPose* TrajectoryBuilderOptions::release_initial_trajectory_pose() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.TrajectoryBuilderOptions.initial_trajectory_pose)
  
  ::cartographer::mapping::proto::InitialTrajectoryPose* temp = initial_trajectory_pose_;
  initial_trajectory_pose_ = NULL;
  return temp;
}
inline void TrajectoryBuilderOptions::set_allocated_initial_trajectory_pose(::cartographer::mapping::proto::InitialTrajectoryPose* initial_trajectory_pose) {
  delete initial_trajectory_pose_;
  initial_trajectory_pose_ = initial_trajectory_pose;
  if (initial_trajectory_pose) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.TrajectoryBuilderOptions.initial_trajectory_pose)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto__INCLUDED
