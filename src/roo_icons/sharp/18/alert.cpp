#include "alert.h"

using namespace roo_display;

// Image file ic_sharp_18_alert_add_alert 18x18, 4-bit Alpha,  RLE, 75 bytes.
static const unsigned char ic_sharp_18_alert_add_alert_data[] PROGMEM = {
  0x58, 0x21, 0xDD, 0x17, 0x30, 0x1A, 0x01, 0x72, 0x04, 0x0B, 0xA0, 0xB0, 0x47, 0x08, 0xE0, 0x85,
  0x06, 0xF9, 0x06, 0x40, 0xDB, 0x00, 0x3B, 0x0D, 0x30, 0x1C, 0x00, 0x3C, 0x01, 0x20, 0x3A, 0x84,
  0x33, 0x11, 0x33, 0xA0, 0x32, 0x03, 0xA8, 0x43, 0x31, 0x13, 0x3A, 0x03, 0x20, 0x3C, 0x00, 0x3C,
  0x03, 0x20, 0x3C, 0x00, 0x3C, 0x03, 0x20, 0x4F, 0xB8, 0x24, 0x01, 0xDF, 0xB8, 0x1D, 0x1B, 0xFD,
  0x0B, 0x58, 0x21, 0x33, 0x17, 0x30, 0x3A, 0x03, 0x74, 0x00, 0x16,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_alert_add_alert() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 1, 15, 17), Box(0, 0, 17, 17),
      ic_sharp_18_alert_add_alert_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_alert_auto_delete 18x18, 4-bit Alpha,  RLE, 74 bytes.
static const unsigned char ic_sharp_18_alert_auto_delete_data[] PROGMEM = {
  0x38, 0x00, 0x37, 0x81, 0x15, 0x7C, 0x81, 0xB5, 0x44, 0x02, 0x80, 0x47, 0x05, 0x50, 0x38, 0x02,
  0x90, 0x76, 0x06, 0xE0, 0xC6, 0x06, 0xE8, 0x2E, 0xB8, 0x13, 0x06, 0xD8, 0x4A, 0x32, 0x6D, 0x32,
  0x06, 0xC8, 0x5A, 0x03, 0xA0, 0x3C, 0x20, 0x6C, 0x82, 0x30, 0x3A, 0x28, 0x2B, 0x20, 0x6C, 0x89,
  0x02, 0x02, 0xD5, 0x0A, 0x30, 0x6C, 0x06, 0x28, 0x22, 0xA6, 0xD2, 0x85, 0x37, 0x77, 0x7D, 0x33,
  0x09, 0x08, 0x78, 0x43, 0xDB, 0xAD, 0x87, 0x30, 0x03, 0x40,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_alert_auto_delete() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 2, 15, 15), Box(0, 0, 17, 17),
      ic_sharp_18_alert_auto_delete_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_alert_error_outline 18x18, 4-bit Alpha,  RLE, 99 bytes.
static const unsigned char ic_sharp_18_alert_error_outline_data[] PROGMEM = {
  0x68, 0x25, 0x77, 0x57, 0x20, 0x10, 0x9E, 0x09, 0x01, 0x58, 0x32, 0xDF, 0x83, 0x28, 0x33, 0x8F,
  0xD2, 0x38, 0x21, 0xDD, 0x26, 0x82, 0x2D, 0xD1, 0x28, 0x19, 0xF2, 0x30, 0x08, 0x38, 0x52, 0xF9,
  0x01, 0xF8, 0x40, 0x0B, 0x48, 0x48, 0xF0, 0x5F, 0x34, 0x00, 0xB4, 0x82, 0x3F, 0x56, 0x95, 0x00,
  0xB5, 0x90, 0x06, 0x95, 0x00, 0x85, 0x98, 0x26, 0x5F, 0x37, 0x38, 0x43, 0xF5, 0x1F, 0x84, 0x00,
  0x84, 0x08, 0x92, 0x81, 0x9F, 0x23, 0x00, 0x83, 0x81, 0x2F, 0x92, 0x82, 0x1D, 0xD2, 0x68, 0x22,
  0xDD, 0x13, 0x83, 0x2D, 0xF8, 0x32, 0x83, 0x38, 0xFD, 0x25, 0x01, 0x09, 0xE0, 0x90, 0x17, 0x28,
  0x25, 0x77, 0x56,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_alert_error_outline() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_sharp_18_alert_error_outline_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_alert_error 18x18, 4-bit Alpha,  RLE, 73 bytes.
static const unsigned char ic_sharp_18_alert_error_data[] PROGMEM = {
  0x68, 0x25, 0x77, 0x57, 0x20, 0x10, 0x9E, 0x09, 0x01, 0x50, 0x20, 0xDF, 0x90, 0xD0, 0x23, 0x01,
  0x0D, 0xFB, 0x0D, 0x01, 0x20, 0x9D, 0x00, 0x6D, 0x09, 0x2E, 0x00, 0x3E, 0x10, 0x5E, 0x00, 0x3E,
  0x05, 0x06, 0xE0, 0x03, 0xE0, 0x06, 0xE0, 0x06, 0xE0, 0x60, 0x5F, 0xF0, 0x51, 0xE0, 0x06, 0xE2,
  0x09, 0xD0, 0x06, 0xD0, 0x92, 0x01, 0x0D, 0xFB, 0x0D, 0x01, 0x30, 0x20, 0xDF, 0x90, 0xD0, 0x25,
  0x01, 0x09, 0xE0, 0x90, 0x17, 0x28, 0x25, 0x77, 0x56,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_alert_error() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 16), Box(0, 0, 17, 17),
      ic_sharp_18_alert_error_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_alert_notification_important 18x18, 4-bit Alpha,  RLE, 69 bytes.
static const unsigned char ic_sharp_18_alert_notification_important_data[] PROGMEM = {
  0x58, 0x21, 0xDD, 0x17, 0x30, 0x1A, 0x01, 0x72, 0x04, 0x0B, 0xA0, 0xB0, 0x47, 0x08, 0xE0, 0x85,
  0x06, 0xF9, 0x06, 0x40, 0xDB, 0x00, 0x3B, 0x0D, 0x30, 0x1C, 0x00, 0x3C, 0x01, 0x20, 0x3C, 0x00,
  0x3C, 0x03, 0x20, 0x3F, 0xB0, 0x32, 0x03, 0xC0, 0x09, 0xC0, 0x32, 0x03, 0xC0, 0x03, 0xC0, 0x32,
  0x04, 0xFB, 0x82, 0x40, 0x1D, 0xFB, 0x81, 0xD1, 0xBF, 0xD0, 0xB5, 0x82, 0x13, 0x31, 0x73, 0x03,
  0xA0, 0x37, 0x40, 0x01, 0x60,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_alert_notification_important() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(2, 1, 15, 17), Box(0, 0, 17, 17),
      ic_sharp_18_alert_notification_important_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_alert_warning_amber 18x18, 4-bit Alpha,  RLE, 80 bytes.
static const unsigned char ic_sharp_18_alert_warning_amber_data[] PROGMEM = {
  0x70, 0x01, 0x77, 0x00, 0x87, 0x60, 0x2A, 0x02, 0x75, 0x82, 0xBE, 0xEB, 0x74, 0x84, 0x4F, 0x66,
  0xF4, 0x73, 0x0D, 0x0C, 0x20, 0xC0, 0xD7, 0x28, 0x67, 0xF4, 0x55, 0x4F, 0x77, 0x89, 0x01, 0xEA,
  0x0B, 0xB0, 0xAE, 0x16, 0x89, 0x09, 0xF2, 0x0B, 0xB0, 0x2F, 0x95, 0x81, 0x3F, 0x82, 0x00, 0x52,
  0x81, 0x8F, 0x34, 0x0C, 0x0D, 0x71, 0x0D, 0x0C, 0x38, 0x15, 0xF5, 0x30, 0x0B, 0x38, 0x15, 0xF5,
  0x20, 0xD0, 0xC4, 0x00, 0x54, 0x84, 0xCD, 0x08, 0xFD, 0x80, 0x6B, 0x81, 0xDF, 0x88, 0x09, 0x4B,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_alert_warning_amber() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 15), Box(0, 0, 17, 17),
      ic_sharp_18_alert_warning_amber_data, Alpha4(color::Black));
  return value;
}

// Image file ic_sharp_18_alert_warning 18x18, 4-bit Alpha,  RLE, 61 bytes.
static const unsigned char ic_sharp_18_alert_warning_data[] PROGMEM = {
  0x70, 0x01, 0x77, 0x00, 0x87, 0x60, 0x2A, 0x02, 0x75, 0x0B, 0xA0, 0xB7, 0x40, 0x4C, 0x04, 0x73,
  0x0D, 0xC0, 0xD7, 0x20, 0x7A, 0x00, 0x9A, 0x07, 0x70, 0x10, 0xEA, 0x00, 0x3A, 0x0E, 0x01, 0x60,
  0x9B, 0x00, 0x3B, 0x09, 0x50, 0x3C, 0x00, 0x9C, 0x03, 0x40, 0xCF, 0xB0, 0xC3, 0x05, 0xD0, 0x03,
  0xD0, 0x52, 0x0D, 0xD0, 0x09, 0xD8, 0x1D, 0x08, 0xFF, 0x08, 0x80, 0x94, 0xB0,
};

const RleImage4bppxBiased<Alpha4, ProgMemPtr>& ic_sharp_18_alert_warning() {
  static RleImage4bppxBiased<Alpha4, ProgMemPtr> value(
      Box(1, 1, 16, 15), Box(0, 0, 17, 17),
      ic_sharp_18_alert_warning_data, Alpha4(color::Black));
  return value;
}
