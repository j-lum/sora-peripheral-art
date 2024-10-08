/*
 *
 * Copyright (c) 2023 Collin Hodge
 * Copyright (c) 2023 The ZMK Contributors
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_CORRO01
#define LV_ATTRIBUTE_IMG_CORRO01
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_CORRO01 uint8_t sora_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#else
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#endif

  0x02, 0x80, 0x08, 0x88, 0x3c, 0x80, 0x8a, 0x18, 0xf2, 0xb0, 0x10, 0x34, 0x1b, 0xbf, 0xfb, 0x6b, 
  0x76, 0xd0, 0x00, 0x00, 0x12, 0x22, 0xc0, 0x0a, 0x22, 0xe7, 0xad, 0x4d, 0xc2, 0x95, 0xde, 0xdf, 
  0xd2, 0xde, 0xd5, 0xb0, 0x08, 0x80, 0x00, 0x8d, 0x01, 0x20, 0x1d, 0x18, 0x0a, 0xa2, 0x5c, 0x8c, 
  0x57, 0xef, 0x7d, 0x75, 0xbf, 0xf0, 0x21, 0x00, 0x24, 0x38, 0x40, 0x00, 0x42, 0xe3, 0xb0, 0x7d, 
  0x82, 0x0a, 0x27, 0xbd, 0xf3, 0xbf, 0xe5, 0x20, 0x00, 0x00, 0x49, 0xc0, 0x00, 0x00, 0x80, 0x3c, 
  0x45, 0x8e, 0x5a, 0x61, 0x1b, 0xd7, 0xfd, 0x63, 0x3f, 0xf0, 0x92, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x04, 0x83, 0x1e, 0x11, 0xb1, 0x8c, 0x15, 0xee, 0xe3, 0xde, 0xeb, 0x50, 0x00, 0x00, 0x5c, 0x00, 
  0x00, 0x00, 0x00, 0x1d, 0xc2, 0xe4, 0x64, 0x29, 0x04, 0xdb, 0xde, 0x35, 0xbe, 0xf0, 0x01, 0x00, 
  0x30, 0x00, 0x00, 0x02, 0x02, 0x0a, 0x60, 0xab, 0x0a, 0x99, 0x05, 0xf5, 0xfd, 0xde, 0xf5, 0xd0, 
  0x40, 0x02, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x41, 0x98, 0x18, 0x89, 0x48, 0x42, 0x7f, 0xdb, 0x67, 
  0xaf, 0xb0, 0x04, 0x03, 0x80, 0x00, 0x00, 0x00, 0x01, 0x00, 0x64, 0x27, 0x7a, 0x38, 0x41, 0x7d, 
  0xfb, 0x5d, 0x7d, 0x50, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x22, 0x40, 0xc5, 0x41, 
  0x20, 0xbb, 0x72, 0x7e, 0xd3, 0xf0, 0x14, 0x04, 0x02, 0x00, 0x00, 0x02, 0x00, 0x01, 0x0e, 0x8a, 
  0x3b, 0x1a, 0x12, 0x4f, 0xf5, 0xdb, 0xff, 0x50, 0x00, 0x0c, 0x00, 0x00, 0x08, 0x00, 0x02, 0x80, 
  0x01, 0x21, 0x92, 0x30, 0x00, 0x5f, 0x23, 0xf6, 0xad, 0xf0, 0x00, 0x08, 0x00, 0x00, 0x00, 0x01, 
  0x00, 0x00, 0x04, 0xc4, 0x0e, 0x91, 0x19, 0x17, 0xe1, 0x9d, 0xfb, 0x50, 0x01, 0x3c, 0x00, 0x00, 
  0x80, 0x00, 0x01, 0x00, 0x08, 0x21, 0xd1, 0x93, 0x01, 0x23, 0xa1, 0x7b, 0xdf, 0xf0, 0x08, 0x30, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x06, 0x50, 0x04, 0x5c, 0x60, 0x57, 0xb5, 0x50, 
  0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x04, 0x06, 0xf0, 0x18, 0x68, 0x53, 0x45, 0x00, 0xe0, 0xed, 
  0x7e, 0xf0, 0x09, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xaf, 0xfa, 0x0a, 0xb0, 0x42, 0x2e, 
  0xa0, 0x6e, 0xd7, 0xd0, 0x03, 0x38, 0x00, 0x40, 0x00, 0x00, 0x00, 0x1c, 0xff, 0xfe, 0x41, 0x23, 
  0x20, 0x52, 0x10, 0x5b, 0xff, 0x70, 0x0a, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x42, 0x18, 0x07, 0x7a, 
  0x8c, 0x50, 0x40, 0x84, 0x10, 0x6e, 0xd5, 0xf0, 0x05, 0xf0, 0x01, 0x00, 0x10, 0x00, 0x00, 0x10, 
  0xfe, 0xff, 0xc2, 0x32, 0x99, 0xab, 0x10, 0x5e, 0xef, 0xd0, 0x0f, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x33, 0xff, 0xff, 0x94, 0x50, 0x20, 0x04, 0x10, 0x2d, 0xdf, 0xb0, 0x1a, 0xf0, 0x00, 0x00, 
  0x00, 0x08, 0x40, 0x63, 0xff, 0x9f, 0x41, 0xe2, 0x40, 0x59, 0x04, 0x1b, 0xfd, 0x70, 0x16, 0xa2, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0xff, 0x3f, 0xd0, 0x20, 0x2c, 0x22, 0x08, 0x1e, 0x57, 0xd0, 
  0x05, 0xe0, 0x00, 0x04, 0x00, 0x00, 0x00, 0xc3, 0xbb, 0xff, 0xa4, 0xd3, 0x10, 0x14, 0x84, 0x03, 
  0xff, 0x70, 0x0a, 0x50, 0x00, 0x00, 0x08, 0x00, 0x00, 0xc3, 0xff, 0xbf, 0x38, 0x22, 0x02, 0x2a, 
  0x82, 0x1e, 0xeb, 0xd0, 0x1a, 0xa0, 0x00, 0x12, 0x00, 0x00, 0x01, 0xc3, 0x7d, 0xfe, 0xe4, 0x54, 
  0x0c, 0x01, 0x04, 0x05, 0xdf, 0x70, 0x12, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x10, 0x21, 0xf7, 0xbe, 
  0x0e, 0x22, 0xc1, 0x0a, 0x42, 0x0e, 0xbd, 0xf0, 0x25, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  0x7e, 0xfe, 0xfd, 0x22, 0x05, 0x05, 0x44, 0x0b, 0xfe, 0xd0, 0x2d, 0x20, 0x00, 0x00, 0x00, 0x01, 
  0x00, 0x0a, 0xef, 0xfd, 0x02, 0x20, 0x22, 0x02, 0x00, 0x86, 0xd3, 0xb0, 0x1a, 0x60, 0x00, 0x04, 
  0x00, 0x00, 0x00, 0x02, 0xbf, 0xf8, 0x3b, 0x94, 0x00, 0x01, 0xa2, 0x05, 0xbf, 0xf0, 0x35, 0xc0, 
  0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0xfb, 0xfa, 0x84, 0xa0, 0x91, 0x82, 0x20, 0x07, 0x76, 0xd0, 
  0x2b, 0x60, 0x00, 0x80, 0x00, 0x00, 0x00, 0x08, 0xef, 0xf0, 0x4a, 0xa2, 0x20, 0x00, 0x00, 0x02, 
  0xed, 0xb0, 0x5e, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xe2, 0x04, 0x60, 0x00, 0xc1, 
  0x90, 0x43, 0xbf, 0xf0, 0xa0, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc5, 0x4b, 0xe0, 
  0x58, 0x00, 0x02, 0x02, 0xeb, 0x50, 0xdb, 0x20, 0x01, 0x00, 0x02, 0x00, 0x00, 0x10, 0x0f, 0xb4, 
  0x20, 0x24, 0x40, 0x21, 0x10, 0x01, 0xbe, 0xf0, 0x36, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 
  0xff, 0x09, 0x11, 0xe8, 0x28, 0x40, 0x00, 0x03, 0x75, 0xd0, 0xca, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x1e, 0xda, 0x40, 0xa1, 0x14, 0x10, 0x08, 0x02, 0xdf, 0xf0, 0x25, 0xe0, 0x00, 0x00, 
  0x10, 0x00, 0x00, 0xc4, 0x75, 0x24, 0x91, 0xa0, 0x88, 0x20, 0x00, 0x01, 0xf6, 0x50, 0xaa, 0x60, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xa0, 0x04, 0xc5, 0x09, 0xa0, 0x42, 0x00, 0x18, 0x02, 0xbf, 0xf0, 
  0x69, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x11, 0x20, 0xaa, 0x99, 0x2a, 0x24, 0x4c, 0x08, 0x00, 0x01, 
  0xd5, 0xf0, 0xcd, 0x50, 0x00, 0x00, 0x00, 0x80, 0x00, 0x9c, 0x12, 0xa2, 0x45, 0x24, 0x22, 0x08, 
  0x08, 0x01, 0x7f, 0xd0, 0xba, 0x20, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x41, 0x00, 0x94, 0x4c, 0x20, 
  0x25, 0x00, 0x00, 0x01, 0xde, 0xb0, 0x5a, 0xd8, 0x00, 0x00, 0x00, 0x00, 0x10, 0x96, 0x4a, 0x04, 
  0xba, 0x21, 0x11, 0x04, 0x08, 0x03, 0xf3, 0xf0, 0xa5, 0xb0, 0x40, 0x04, 0x49, 0x20, 0x00, 0xa1, 
  0x00, 0x49, 0x32, 0x64, 0x12, 0x04, 0x00, 0x05, 0x2f, 0xd0, 0x4f, 0x48, 0x00, 0x00, 0x10, 0x00, 
  0x41, 0x08, 0xb0, 0x22, 0x65, 0x20, 0x85, 0x04, 0x04, 0x02, 0xfe, 0xb0, 0xca, 0x58, 0x01, 0x20, 
  0x00, 0x00, 0x00, 0x40, 0x84, 0x84, 0xc8, 0x24, 0x10, 0x02, 0x00, 0x01, 0xdb, 0xf0, 0x2a, 0xed, 
  0x10, 0x00, 0x00, 0x00, 0x80, 0x4a, 0x50, 0x21, 0x15, 0xa0, 0x45, 0x80, 0x00, 0x03, 0xbf, 0xd0, 
  0xe5, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x02, 0xd1, 0x22, 0x93, 0xc5, 0x26, 0x00, 0x02, 0x00, 0x05, 
  0x75, 0xb0, 0x05, 0x22, 0x10, 0x00, 0xf0, 0x12, 0x14, 0x04, 0x14, 0x04, 0x22, 0x50, 0x24, 0x02, 
  0x00, 0x03, 0xef, 0x70, 0xf2, 0xdd, 0x12, 0x03, 0xcc, 0x00, 0x00, 0x28, 0x89, 0x58, 0xcd, 0xa2, 
  0x00, 0xc0, 0x00, 0x03, 0x5e, 0xd0, 0xa5, 0xa1, 0x00, 0x47, 0x0b, 0x00, 0x1a, 0x41, 0x04, 0x00, 
  0x20, 0x51, 0x02, 0x01, 0x00, 0x06, 0xfd, 0xf0, 0x91, 0x5c, 0x98, 0x0e, 0x3b, 0x80, 0x10, 0x1a, 
  0x42, 0xa8, 0x42, 0xe0, 0x10, 0x00, 0x00, 0x05, 0xd7, 0xd0, 0x52, 0x52, 0x80, 0x9c, 0x37, 0xc0, 
  0x44, 0xc0, 0x29, 0x08, 0x5c, 0xb1, 0x02, 0x40, 0x00, 0x0b, 0xbe, 0xf0, 0xa8, 0xec, 0x68, 0x02, 
  0x3f, 0xe2, 0x89, 0x0a, 0x82, 0x40, 0x21, 0x60, 0x08, 0x00, 0x00, 0x05, 0x77, 0xd0, 0x50, 0xab, 
  0x62, 0x82, 0x3f, 0x34, 0x09, 0x20, 0x28, 0x94, 0x04, 0x30, 0x88, 0x00, 0x00, 0x0f, 0xee, 0xb0, 
  0xa8, 0x59, 0x24, 0x00, 0x1e, 0xb8, 0x24, 0x42, 0x82, 0x42, 0x24, 0x10, 0x00, 0x00, 0x00, 0x05, 
  0x5f, 0xf0, 0x29, 0x64, 0x94, 0x40, 0x7f, 0xec, 0x86, 0x05, 0x28, 0x4c, 0x06, 0xd4, 0x04, 0x00, 
  0x00, 0x1e, 0xfd, 0xd0, 0xe4, 0x1e, 0x96, 0x80, 0xeb, 0xfe, 0x22, 0xd0, 0x02, 0xb0, 0x10, 0x10, 
  0x00, 0x00, 0x00, 0x1b, 0xef, 0x70, 0x1c, 0x32, 0xd2, 0x40, 0x3f, 0xf9, 0x05, 0x23, 0x49, 0x83, 
  0x03, 0x50, 0x02, 0x00, 0x00, 0x17, 0xbe, 0xf0, 0xf4, 0x04, 0xa1, 0xc2, 0x3b, 0xfc, 0x92, 0x10, 
  0x10, 0x1c, 0x01, 0x54, 0x00, 0x00, 0x00, 0x15, 0x7b, 0xd0, 0x0c, 0x9f, 0x51, 0xa8, 0x0f, 0xf1, 
  0xc3, 0xa1, 0x45, 0xc1, 0x00, 0x20, 0x00, 0x00, 0x00, 0x2f, 0xdf, 0xf0, 0x53, 0x02, 0x59, 0x22, 
  0x0f, 0xf5, 0x2c, 0x08, 0x8a, 0x2d, 0x00, 0xd8, 0x02, 0x00, 0x00, 0x3b, 0xfa, 0xd0, 0x0e, 0x0d, 
  0xb0, 0xe9, 0x03, 0xcb, 0x51, 0x48, 0x28, 0x54, 0x00, 0x24, 0x00, 0x00, 0x00, 0x56, 0xaf, 0xf0, 
  0xa1, 0x03, 0x19, 0x22, 0x87, 0xd2, 0x42, 0xd8, 0x91, 0xa2, 0xc0, 0xd8, 0x00, 0x00, 0x00, 0x6f, 
  0xfd, 0xb0, 0x64, 0x10, 0xa0, 0x54, 0x7f, 0x82, 0x1d, 0x20, 0x42, 0x2a, 0x00, 0x24, 0x00, 0x00, 
  0x00, 0x3d, 0xde, 0xf0, 0x0e, 0x81, 0x9c, 0xe3, 0x7f, 0x24, 0x22, 0x54, 0x24, 0xa9, 0xc0, 0x28, 
  0x00, 0x00, 0x00, 0x75, 0xbb, 0xd0, 0xd9, 0x80, 0x48, 0x18, 0x5d, 0x09, 0x2a, 0xd2, 0x49, 0x40, 
  0x80, 0x14, 0x00, 0x00, 0x00, 0xdf, 0xff, 0xf0 
};

const lv_img_dsc_t sora = {
  .header.cf = LV_IMG_CF_INDEXED_1BIT,
  .header.always_zero = 0,
  .header.reserved = 0,
  .header.w = 140,
  .header.h = 68,
  .data_size = 1232,
  .data = sora_map,
};
