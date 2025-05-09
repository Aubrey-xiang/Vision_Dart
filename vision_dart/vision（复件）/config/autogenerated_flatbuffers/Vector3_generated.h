// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_VECTOR3_FOXGLOVE_H_
#define FLATBUFFERS_GENERATED_VECTOR3_FOXGLOVE_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 25,
             "Non-compatible flatbuffers version included");

namespace foxglove {

struct Vector3;
struct Vector3Builder;

/// A vector in 3D space that represents a direction only
struct Vector3 FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef Vector3Builder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_X = 4,
    VT_Y = 6,
    VT_Z = 8
  };
  /// x coordinate length
  double x() const {
    return GetField<double>(VT_X, 1.0);
  }
  bool mutate_x(double _x = 1.0) {
    return SetField<double>(VT_X, _x, 1.0);
  }
  /// y coordinate length
  double y() const {
    return GetField<double>(VT_Y, 1.0);
  }
  bool mutate_y(double _y = 1.0) {
    return SetField<double>(VT_Y, _y, 1.0);
  }
  /// z coordinate length
  double z() const {
    return GetField<double>(VT_Z, 1.0);
  }
  bool mutate_z(double _z = 1.0) {
    return SetField<double>(VT_Z, _z, 1.0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<double>(verifier, VT_X, 8) &&
           VerifyField<double>(verifier, VT_Y, 8) &&
           VerifyField<double>(verifier, VT_Z, 8) &&
           verifier.EndTable();
  }
};

struct Vector3Builder {
  typedef Vector3 Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_x(double x) {
    fbb_.AddElement<double>(Vector3::VT_X, x, 1.0);
  }
  void add_y(double y) {
    fbb_.AddElement<double>(Vector3::VT_Y, y, 1.0);
  }
  void add_z(double z) {
    fbb_.AddElement<double>(Vector3::VT_Z, z, 1.0);
  }
  explicit Vector3Builder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Vector3> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Vector3>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Vector3> CreateVector3(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    double x = 1.0,
    double y = 1.0,
    double z = 1.0) {
  Vector3Builder builder_(_fbb);
  builder_.add_z(z);
  builder_.add_y(y);
  builder_.add_x(x);
  return builder_.Finish();
}

inline const foxglove::Vector3 *GetVector3(const void *buf) {
  return ::flatbuffers::GetRoot<foxglove::Vector3>(buf);
}

inline const foxglove::Vector3 *GetSizePrefixedVector3(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<foxglove::Vector3>(buf);
}

inline Vector3 *GetMutableVector3(void *buf) {
  return ::flatbuffers::GetMutableRoot<Vector3>(buf);
}

inline foxglove::Vector3 *GetMutableSizePrefixedVector3(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<foxglove::Vector3>(buf);
}

inline bool VerifyVector3Buffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<foxglove::Vector3>(nullptr);
}

inline bool VerifySizePrefixedVector3Buffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<foxglove::Vector3>(nullptr);
}

inline void FinishVector3Buffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::Vector3> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedVector3Buffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::Vector3> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace foxglove

#endif  // FLATBUFFERS_GENERATED_VECTOR3_FOXGLOVE_H_
