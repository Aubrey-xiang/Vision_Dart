// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_SCENEUPDATE_FOXGLOVE_H_
#define FLATBUFFERS_GENERATED_SCENEUPDATE_FOXGLOVE_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 25,
             "Non-compatible flatbuffers version included");

#include "SceneEntity_generated.h"
#include "SceneEntityDeletion_generated.h"

namespace foxglove {

struct SceneUpdate;
struct SceneUpdateBuilder;

/// An update to the entities displayed in a 3D scene
struct SceneUpdate FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef SceneUpdateBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_DELETIONS = 4,
    VT_ENTITIES = 6
  };
  /// Scene entities to delete
  const ::flatbuffers::Vector<::flatbuffers::Offset<foxglove::SceneEntityDeletion>> *deletions() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<foxglove::SceneEntityDeletion>> *>(VT_DELETIONS);
  }
  ::flatbuffers::Vector<::flatbuffers::Offset<foxglove::SceneEntityDeletion>> *mutable_deletions() {
    return GetPointer<::flatbuffers::Vector<::flatbuffers::Offset<foxglove::SceneEntityDeletion>> *>(VT_DELETIONS);
  }
  /// Scene entities to add or replace
  const ::flatbuffers::Vector<::flatbuffers::Offset<foxglove::SceneEntity>> *entities() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<foxglove::SceneEntity>> *>(VT_ENTITIES);
  }
  ::flatbuffers::Vector<::flatbuffers::Offset<foxglove::SceneEntity>> *mutable_entities() {
    return GetPointer<::flatbuffers::Vector<::flatbuffers::Offset<foxglove::SceneEntity>> *>(VT_ENTITIES);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_DELETIONS) &&
           verifier.VerifyVector(deletions()) &&
           verifier.VerifyVectorOfTables(deletions()) &&
           VerifyOffset(verifier, VT_ENTITIES) &&
           verifier.VerifyVector(entities()) &&
           verifier.VerifyVectorOfTables(entities()) &&
           verifier.EndTable();
  }
};

struct SceneUpdateBuilder {
  typedef SceneUpdate Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_deletions(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<foxglove::SceneEntityDeletion>>> deletions) {
    fbb_.AddOffset(SceneUpdate::VT_DELETIONS, deletions);
  }
  void add_entities(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<foxglove::SceneEntity>>> entities) {
    fbb_.AddOffset(SceneUpdate::VT_ENTITIES, entities);
  }
  explicit SceneUpdateBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<SceneUpdate> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<SceneUpdate>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<SceneUpdate> CreateSceneUpdate(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<foxglove::SceneEntityDeletion>>> deletions = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<foxglove::SceneEntity>>> entities = 0) {
  SceneUpdateBuilder builder_(_fbb);
  builder_.add_entities(entities);
  builder_.add_deletions(deletions);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<SceneUpdate> CreateSceneUpdateDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<::flatbuffers::Offset<foxglove::SceneEntityDeletion>> *deletions = nullptr,
    const std::vector<::flatbuffers::Offset<foxglove::SceneEntity>> *entities = nullptr) {
  auto deletions__ = deletions ? _fbb.CreateVector<::flatbuffers::Offset<foxglove::SceneEntityDeletion>>(*deletions) : 0;
  auto entities__ = entities ? _fbb.CreateVector<::flatbuffers::Offset<foxglove::SceneEntity>>(*entities) : 0;
  return foxglove::CreateSceneUpdate(
      _fbb,
      deletions__,
      entities__);
}

inline const foxglove::SceneUpdate *GetSceneUpdate(const void *buf) {
  return ::flatbuffers::GetRoot<foxglove::SceneUpdate>(buf);
}

inline const foxglove::SceneUpdate *GetSizePrefixedSceneUpdate(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<foxglove::SceneUpdate>(buf);
}

inline SceneUpdate *GetMutableSceneUpdate(void *buf) {
  return ::flatbuffers::GetMutableRoot<SceneUpdate>(buf);
}

inline foxglove::SceneUpdate *GetMutableSizePrefixedSceneUpdate(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<foxglove::SceneUpdate>(buf);
}

inline bool VerifySceneUpdateBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<foxglove::SceneUpdate>(nullptr);
}

inline bool VerifySizePrefixedSceneUpdateBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<foxglove::SceneUpdate>(nullptr);
}

inline void FinishSceneUpdateBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::SceneUpdate> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedSceneUpdateBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::SceneUpdate> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace foxglove

#endif  // FLATBUFFERS_GENERATED_SCENEUPDATE_FOXGLOVE_H_
