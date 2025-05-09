// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TEXTANNOTATION_FOXGLOVE_H_
#define FLATBUFFERS_GENERATED_TEXTANNOTATION_FOXGLOVE_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 25,
             "Non-compatible flatbuffers version included");

#include "Color_generated.h"
#include "Point2_generated.h"
#include "Time_generated.h"

namespace foxglove {

struct TextAnnotation;
struct TextAnnotationBuilder;

/// A text label on a 2D image
struct TextAnnotation FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef TextAnnotationBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TIMESTAMP = 4,
    VT_POSITION = 6,
    VT_TEXT = 8,
    VT_FONT_SIZE = 10,
    VT_TEXT_COLOR = 12,
    VT_BACKGROUND_COLOR = 14
  };
  /// Timestamp of annotation
  const foxglove::Time *timestamp() const {
    return GetStruct<const foxglove::Time *>(VT_TIMESTAMP);
  }
  foxglove::Time *mutable_timestamp() {
    return GetStruct<foxglove::Time *>(VT_TIMESTAMP);
  }
  /// Bottom-left origin of the text label in 2D image coordinates (pixels)
  const foxglove::Point2 *position() const {
    return GetPointer<const foxglove::Point2 *>(VT_POSITION);
  }
  foxglove::Point2 *mutable_position() {
    return GetPointer<foxglove::Point2 *>(VT_POSITION);
  }
  /// Text to display
  const ::flatbuffers::String *text() const {
    return GetPointer<const ::flatbuffers::String *>(VT_TEXT);
  }
  ::flatbuffers::String *mutable_text() {
    return GetPointer<::flatbuffers::String *>(VT_TEXT);
  }
  /// Font size in pixels
  double font_size() const {
    return GetField<double>(VT_FONT_SIZE, 12.0);
  }
  bool mutate_font_size(double _font_size = 12.0) {
    return SetField<double>(VT_FONT_SIZE, _font_size, 12.0);
  }
  /// Text color
  const foxglove::Color *text_color() const {
    return GetPointer<const foxglove::Color *>(VT_TEXT_COLOR);
  }
  foxglove::Color *mutable_text_color() {
    return GetPointer<foxglove::Color *>(VT_TEXT_COLOR);
  }
  /// Background fill color
  const foxglove::Color *background_color() const {
    return GetPointer<const foxglove::Color *>(VT_BACKGROUND_COLOR);
  }
  foxglove::Color *mutable_background_color() {
    return GetPointer<foxglove::Color *>(VT_BACKGROUND_COLOR);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<foxglove::Time>(verifier, VT_TIMESTAMP, 4) &&
           VerifyOffset(verifier, VT_POSITION) &&
           verifier.VerifyTable(position()) &&
           VerifyOffset(verifier, VT_TEXT) &&
           verifier.VerifyString(text()) &&
           VerifyField<double>(verifier, VT_FONT_SIZE, 8) &&
           VerifyOffset(verifier, VT_TEXT_COLOR) &&
           verifier.VerifyTable(text_color()) &&
           VerifyOffset(verifier, VT_BACKGROUND_COLOR) &&
           verifier.VerifyTable(background_color()) &&
           verifier.EndTable();
  }
};

struct TextAnnotationBuilder {
  typedef TextAnnotation Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_timestamp(const foxglove::Time *timestamp) {
    fbb_.AddStruct(TextAnnotation::VT_TIMESTAMP, timestamp);
  }
  void add_position(::flatbuffers::Offset<foxglove::Point2> position) {
    fbb_.AddOffset(TextAnnotation::VT_POSITION, position);
  }
  void add_text(::flatbuffers::Offset<::flatbuffers::String> text) {
    fbb_.AddOffset(TextAnnotation::VT_TEXT, text);
  }
  void add_font_size(double font_size) {
    fbb_.AddElement<double>(TextAnnotation::VT_FONT_SIZE, font_size, 12.0);
  }
  void add_text_color(::flatbuffers::Offset<foxglove::Color> text_color) {
    fbb_.AddOffset(TextAnnotation::VT_TEXT_COLOR, text_color);
  }
  void add_background_color(::flatbuffers::Offset<foxglove::Color> background_color) {
    fbb_.AddOffset(TextAnnotation::VT_BACKGROUND_COLOR, background_color);
  }
  explicit TextAnnotationBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<TextAnnotation> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<TextAnnotation>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<TextAnnotation> CreateTextAnnotation(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const foxglove::Time *timestamp = nullptr,
    ::flatbuffers::Offset<foxglove::Point2> position = 0,
    ::flatbuffers::Offset<::flatbuffers::String> text = 0,
    double font_size = 12.0,
    ::flatbuffers::Offset<foxglove::Color> text_color = 0,
    ::flatbuffers::Offset<foxglove::Color> background_color = 0) {
  TextAnnotationBuilder builder_(_fbb);
  builder_.add_font_size(font_size);
  builder_.add_background_color(background_color);
  builder_.add_text_color(text_color);
  builder_.add_text(text);
  builder_.add_position(position);
  builder_.add_timestamp(timestamp);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<TextAnnotation> CreateTextAnnotationDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const foxglove::Time *timestamp = nullptr,
    ::flatbuffers::Offset<foxglove::Point2> position = 0,
    const char *text = nullptr,
    double font_size = 12.0,
    ::flatbuffers::Offset<foxglove::Color> text_color = 0,
    ::flatbuffers::Offset<foxglove::Color> background_color = 0) {
  auto text__ = text ? _fbb.CreateString(text) : 0;
  return foxglove::CreateTextAnnotation(
      _fbb,
      timestamp,
      position,
      text__,
      font_size,
      text_color,
      background_color);
}

inline const foxglove::TextAnnotation *GetTextAnnotation(const void *buf) {
  return ::flatbuffers::GetRoot<foxglove::TextAnnotation>(buf);
}

inline const foxglove::TextAnnotation *GetSizePrefixedTextAnnotation(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<foxglove::TextAnnotation>(buf);
}

inline TextAnnotation *GetMutableTextAnnotation(void *buf) {
  return ::flatbuffers::GetMutableRoot<TextAnnotation>(buf);
}

inline foxglove::TextAnnotation *GetMutableSizePrefixedTextAnnotation(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<foxglove::TextAnnotation>(buf);
}

inline bool VerifyTextAnnotationBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<foxglove::TextAnnotation>(nullptr);
}

inline bool VerifySizePrefixedTextAnnotationBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<foxglove::TextAnnotation>(nullptr);
}

inline void FinishTextAnnotationBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::TextAnnotation> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedTextAnnotationBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<foxglove::TextAnnotation> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace foxglove

#endif  // FLATBUFFERS_GENERATED_TEXTANNOTATION_FOXGLOVE_H_
