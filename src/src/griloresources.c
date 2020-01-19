#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.totem"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[3768]; const double alignment; void * const ptr;}  _totem_resource_data = { {
  0x47, 0x56, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x74, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x28, 0x08, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 
  0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 
  0x98, 0x38, 0x13, 0x6c, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x00, 0x00, 0x08, 0x00, 0x76, 0x00, 
  0x08, 0x01, 0x00, 0x00, 0x17, 0x05, 0x00, 0x00, 
  0x43, 0x7d, 0x8c, 0x4e, 0x02, 0x00, 0x00, 0x00, 
  0x17, 0x05, 0x00, 0x00, 0x06, 0x00, 0x4c, 0x00, 
  0x20, 0x05, 0x00, 0x00, 0x24, 0x05, 0x00, 0x00, 
  0x4b, 0x50, 0x90, 0x0b, 0x03, 0x00, 0x00, 0x00, 
  0x24, 0x05, 0x00, 0x00, 0x04, 0x00, 0x4c, 0x00, 
  0x28, 0x05, 0x00, 0x00, 0x2c, 0x05, 0x00, 0x00, 
  0xd4, 0xb5, 0x02, 0x00, 0xff, 0xff, 0xff, 0xff, 
  0x2c, 0x05, 0x00, 0x00, 0x01, 0x00, 0x4c, 0x00, 
  0x30, 0x05, 0x00, 0x00, 0x34, 0x05, 0x00, 0x00, 
  0x9c, 0x76, 0x15, 0xe7, 0x07, 0x00, 0x00, 0x00, 
  0x34, 0x05, 0x00, 0x00, 0x13, 0x00, 0x76, 0x00, 
  0x48, 0x05, 0x00, 0x00, 0x57, 0x09, 0x00, 0x00, 
  0x5d, 0x4b, 0x7a, 0xe6, 0x07, 0x00, 0x00, 0x00, 
  0x57, 0x09, 0x00, 0x00, 0x18, 0x00, 0x76, 0x00, 
  0x70, 0x09, 0x00, 0x00, 0x7f, 0x0d, 0x00, 0x00, 
  0x56, 0xeb, 0x33, 0xa6, 0x07, 0x00, 0x00, 0x00, 
  0x7f, 0x0d, 0x00, 0x00, 0x10, 0x00, 0x76, 0x00, 
  0x90, 0x0d, 0x00, 0x00, 0x9f, 0x0e, 0x00, 0x00, 
  0x6f, 0xd3, 0x41, 0x55, 0x01, 0x00, 0x00, 0x00, 
  0x9f, 0x0e, 0x00, 0x00, 0x06, 0x00, 0x4c, 0x00, 
  0xa8, 0x0e, 0x00, 0x00, 0xb8, 0x0e, 0x00, 0x00, 
  0x67, 0x72, 0x69, 0x6c, 0x6f, 0x2e, 0x75, 0x69, 
  0x18, 0x1a, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0xed, 0x59, 0x4b, 0x8f, 0xdb, 0x36, 
  0x10, 0x3e, 0xef, 0xfe, 0x0a, 0x95, 0x87, 0x5c, 
  0x0a, 0xad, 0xe2, 0x6e, 0x1b, 0x14, 0x88, 0xac, 
  0x60, 0x53, 0x34, 0xdb, 0x43, 0xd3, 0x16, 0xdd, 
  0x6d, 0xaf, 0x02, 0x45, 0xcd, 0xda, 0x5c, 0x53, 
  0xa4, 0x3a, 0xa4, 0xfc, 0xf8, 0xf7, 0x1d, 0x4a, 
  0xb6, 0xeb, 0x97, 0x64, 0xd9, 0x4e, 0x91, 0x8b, 
  0x7d, 0x30, 0x4c, 0x8a, 0xdf, 0x70, 0xe6, 0x9b, 
  0x07, 0x87, 0x72, 0xfc, 0x61, 0x5e, 0xa8, 0x60, 
  0x0a, 0x68, 0xa5, 0xd1, 0x43, 0x36, 0xb8, 0x7b, 
  0xcb, 0x02, 0xd0, 0xc2, 0xe4, 0x52, 0x8f, 0x86, 
  0xec, 0xaf, 0xe7, 0x4f, 0xe1, 0x8f, 0xec, 0x43, 
  0x72, 0x1b, 0x4b, 0xed, 0x00, 0x5f, 0xb8, 0x80, 
  0xe4, 0x36, 0x08, 0xe2, 0x6f, 0xc2, 0x30, 0x58, 
  0xcf, 0x84, 0x08, 0xff, 0x54, 0x12, 0xc1, 0x06, 
  0x23, 0x37, 0xf9, 0x36, 0xb8, 0xbf, 0x1b, 0x0c, 
  0x82, 0x30, 0x24, 0x4c, 0x01, 0xba, 0x0a, 0x64, 
  0x3e, 0x64, 0x16, 0x14, 0x08, 0xe7, 0x87, 0x2c, 
  0xb9, 0xbd, 0x89, 0x2d, 0x0d, 0x68, 0x37, 0xfa, 
  0x79, 0x13, 0x4b, 0x07, 0x85, 0xff, 0x71, 0x13, 
  0x73, 0xe7, 0x50, 0x66, 0x95, 0x83, 0x40, 0xf3, 
  0x02, 0x86, 0x4c, 0xf1, 0x0c, 0x14, 0x0b, 0x1c, 
  0x72, 0x6d, 0x15, 0x77, 0x3c, 0x53, 0x34, 0xb9, 
  0x00, 0xcb, 0x92, 0xa7, 0x5a, 0x5c, 0xf0, 0xa0, 
  0x54, 0x1c, 0xad, 0x51, 0x87, 0x85, 0xf0, 0x7a, 
  0x27, 0x96, 0xf0, 0xb2, 0xbc, 0x6b, 0xb4, 0x08, 
  0x79, 0x2f, 0x98, 0xa0, 0xbd, 0x93, 0x37, 0xca, 
  0xbd, 0xff, 0xc9, 0xa1, 0x7a, 0x33, 0x72, 0xef, 
  0x1f, 0x76, 0x40, 0x71, 0xb4, 0x52, 0xfd, 0x12, 
  0x1b, 0x7e, 0x33, 0x1a, 0xce, 0x31, 0x42, 0xef, 
  0xe3, 0xd6, 0x0a, 0xc5, 0xd1, 0x9a, 0xe0, 0x38, 
  0xf2, 0xa4, 0x27, 0xb7, 0xde, 0x67, 0x26, 0x7b, 
  0xf5, 0x3b, 0x0a, 0xc5, 0xad, 0x1d, 0xb2, 0x47, 
  0x37, 0x79, 0xc8, 0x5f, 0x2b, 0xeb, 0xbd, 0xe2, 
  0x58, 0xed, 0xa5, 0xd1, 0x2c, 0xe5, 0xf9, 0x6b, 
  0x5a, 0xf0, 0x79, 0xea, 0x25, 0x91, 0x92, 0x04, 
  0x23, 0x60, 0x89, 0xa6, 0x04, 0x74, 0x8b, 0x95, 
  0x4d, 0x66, 0x06, 0xc8, 0x92, 0x41, 0x1c, 0xad, 
  0x1e, 0x1c, 0x5e, 0x57, 0x95, 0x65, 0xbd, 0xee, 
  0x2d, 0x7d, 0x8e, 0xad, 0x9d, 0x72, 0x55, 0x01, 
  0x4b, 0xee, 0x8f, 0xaf, 0xb4, 0x0e, 0xca, 0x54, 
  0x6a, 0x81, 0x50, 0x2b, 0x9e, 0xfc, 0xb0, 0x0d, 
  0x88, 0xa3, 0xc6, 0xcc, 0xe4, 0xa0, 0xc5, 0xcf, 
  0x08, 0xf0, 0xe4, 0x0c, 0x42, 0x63, 0x30, 0x82, 
  0x20, 0x19, 0x69, 0x61, 0x72, 0xef, 0xec, 0x66, 
  0x3b, 0x61, 0x54, 0x55, 0x68, 0xdb, 0x8c, 0x96, 
  0x91, 0xde, 0xcc, 0x85, 0x5e, 0x01, 0xc2, 0xd5, 
  0xb1, 0xbd, 0x7c, 0xda, 0x3c, 0x09, 0xdc, 0xa2, 
  0x24, 0xd5, 0x46, 0x62, 0xcc, 0x91, 0x23, 0xf2, 
  0x05, 0x8b, 0x5a, 0xf1, 0x15, 0xca, 0xcb, 0x04, 
  0x94, 0x28, 0x0b, 0x8e, 0x8b, 0xd4, 0xc1, 0xdc, 
  0x5d, 0x26, 0x89, 0xa2, 0xc4, 0xe8, 0xfc, 0xcb, 
  0xc8, 0x92, 0x24, 0xaa, 0x55, 0xc2, 0x63, 0x3e, 
  0xf9, 0x43, 0xce, 0xb3, 0xea, 0xa5, 0x43, 0x40, 
  0xe1, 0x24, 0x7d, 0xb7, 0xea, 0x40, 0xc5, 0xe6, 
  0xdd, 0xf7, 0x9d, 0xb6, 0xf8, 0xb4, 0x80, 0x0e, 
  0xe7, 0x64, 0xc6, 0x28, 0xe0, 0xba, 0x8b, 0xd9, 
  0x4a, 0xd9, 0x0e, 0x15, 0x2a, 0xd2, 0xc1, 0xa3, 
  0x5b, 0x55, 0x30, 0x15, 0x8a, 0x76, 0xfc, 0xe3, 
  0xef, 0x75, 0x34, 0x76, 0xec, 0x4f, 0x14, 0x3a, 
  0x8a, 0xc7, 0x0b, 0x24, 0x48, 0x9b, 0x96, 0x08, 
  0x6e, 0x5c, 0x15, 0x99, 0xe6, 0x52, 0x5d, 0x44, 
  0x06, 0x1f, 0x75, 0xbb, 0xa3, 0x03, 0x4b, 0xb9, 
  0xc9, 0xa5, 0xa6, 0x03, 0xe4, 0x38, 0x99, 0xed, 
  0x41, 0x6e, 0x50, 0x52, 0xd2, 0x9f, 0xa9, 0x81, 
  0xe0, 0x9a, 0x4e, 0xa5, 0xc2, 0x4c, 0xfb, 0xd9, 
  0x10, 0x47, 0x1b, 0x69, 0x7f, 0x52, 0x09, 0xc9, 
  0xd0, 0xcc, 0x2c, 0xe0, 0xb5, 0x86, 0x5c, 0x6b, 
  0xc8, 0xb5, 0x86, 0x5c, 0x6b, 0xc8, 0xc1, 0x1a, 
  0x42, 0xbd, 0x54, 0x49, 0xcd, 0x1f, 0xac, 0xaa, 
  0xc8, 0xb3, 0xa1, 0x99, 0x47, 0x94, 0xca, 0x30, 
  0xa2, 0x08, 0xc9, 0x5d, 0x75, 0x65, 0xf9, 0x68, 
  0xe6, 0x2d, 0x1d, 0xd7, 0x54, 0x5a, 0x49, 0x9d, 
  0x23, 0x4b, 0x9e, 0xb1, 0x82, 0x63, 0x0d, 0x12, 
  0xa9, 0x9d, 0xbe, 0x18, 0x51, 0x51, 0xfb, 0xf6, 
  0x89, 0x53, 0x30, 0x1e, 0x5b, 0x9f, 0x19, 0xcc, 
  0xa9, 0x80, 0xcd, 0x64, 0xee, 0xc6, 0x2c, 0x39, 
  0xde, 0x7f, 0x95, 0x5c, 0x90, 0x57, 0x7a, 0xac, 
  0x24, 0xf2, 0xc9, 0x34, 0xde, 0xb4, 0xae, 0x74, 
  0xc1, 0x70, 0x52, 0x70, 0xb5, 0x07, 0x12, 0x63, 
  0xa9, 0xf2, 0x35, 0xbb, 0x7b, 0xe5, 0xf6, 0x09, 
  0x38, 0x8a, 0xf1, 0x47, 0x8e, 0x6c, 0x79, 0x91, 
  0xf0, 0xc3, 0x34, 0xa3, 0xf1, 0x0a, 0x73, 0x22, 
  0x5d, 0xe7, 0x50, 0xb6, 0xaf, 0xe8, 0x61, 0x65, 
  0x7f, 0xf1, 0x2e, 0x5c, 0xb5, 0xd2, 0xd9, 0xda, 
  0x9d, 0x67, 0xeb, 0x79, 0xae, 0xae, 0x9d, 0x7e, 
  0x7b, 0xd7, 0x17, 0x51, 0x47, 0x44, 0xea, 0xef, 
  0x76, 0x60, 0x7d, 0xa3, 0xbd, 0xdf, 0x9b, 0xb7, 
  0x21, 0xc7, 0x5c, 0xc9, 0x11, 0x39, 0xdd, 0x77, 
  0xd7, 0x80, 0xad, 0xa8, 0x3d, 0x46, 0x0f, 0xb0, 
  0x5a, 0xe7, 0x4a, 0x13, 0x04, 0x3f, 0x6b, 0x87, 
  0x8b, 0xad, 0x30, 0x80, 0x7a, 0x66, 0x57, 0xc2, 
  0x99, 0x44, 0x1f, 0x21, 0xbb, 0x1b, 0xba, 0x99, 
  0xef, 0xdb, 0x02, 0xb9, 0x98, 0x10, 0xed, 0xc7, 
  0xb7, 0x82, 0x79, 0xc9, 0x75, 0x7e, 0xba, 0x8a, 
  0x2f, 0x52, 0xa9, 0xd3, 0x51, 0xa5, 0xb1, 0xb2, 
  0x49, 0xcc, 0x41, 0x97, 0x51, 0x07, 0xb5, 0xa7, 
  0x42, 0xb7, 0x97, 0x0a, 0x7b, 0xe6, 0xef, 0x2c, 
  0xda, 0x5d, 0xb0, 0xcf, 0x4b, 0x1b, 0x1f, 0xed, 
  0x09, 0x79, 0x12, 0x11, 0x27, 0x11, 0xb0, 0x63, 
  0xf8, 0x96, 0x2d, 0xdd, 0x05, 0x2b, 0xff, 0x4c, 
  0x87, 0xd6, 0xdf, 0x12, 0x66, 0x5b, 0xdd, 0xe1, 
  0xff, 0x54, 0xab, 0xfa, 0x42, 0x96, 0xbd, 0xe9, 
  0x56, 0xab, 0x7a, 0x10, 0x67, 0xdd, 0x42, 0xc1, 
  0x96, 0x5f, 0x6b, 0xbb, 0x56, 0x3b, 0x37, 0xad, 
  0x45, 0x38, 0xf5, 0xe6, 0x45, 0x9b, 0xae, 0xde, 
  0xc2, 0x9d, 0xef, 0xea, 0xbe, 0xf6, 0x9c, 0xeb, 
  0xe9, 0xef, 0xbe, 0xa4, 0xa7, 0xdd, 0xe4, 0x4f, 
  0x98, 0x02, 0x57, 0xb0, 0x3e, 0x99, 0x54, 0xf3, 
  0xd2, 0x85, 0x2a, 0xe6, 0x72, 0xfe, 0xeb, 0x9f, 
  0x50, 0xd4, 0x76, 0x08, 0x18, 0x1b, 0x45, 0x07, 
  0x7c, 0xf4, 0xf5, 0x73, 0xb3, 0xf7, 0xf2, 0xff, 
  0x5c, 0x76, 0x7f, 0x8a, 0xcb, 0xe2, 0x68, 0xd5, 
  0x69, 0xf5, 0xba, 0xba, 0x2d, 0x0f, 0x11, 0x04, 
  0x5b, 0x29, 0x67, 0xaf, 0x37, 0xb8, 0xeb, 0x0d, 
  0xee, 0x7a, 0x83, 0xbb, 0xde, 0xe0, 0xfa, 0xbd, 
  0x05, 0xfa, 0x55, 0x5a, 0xb7, 0x51, 0x4a, 0xa8, 
  0xdd, 0x5f, 0x56, 0x13, 0xeb, 0x27, 0xd3, 0x26, 
  0x08, 0x6c, 0xdf, 0x6a, 0x72, 0x71, 0xcc, 0xd4, 
  0x5f, 0xfd, 0x33, 0xb7, 0xc5, 0xd0, 0x38, 0xda, 
  0xf8, 0x93, 0xe7, 0x5f, 0x35, 0xaa, 0xd4, 0x2c, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x74, 
  0x6f, 0x74, 0x65, 0x6d, 0x2f, 0x00, 0x00, 0x00, 
  0x07, 0x00, 0x00, 0x00, 0x6f, 0x72, 0x67, 0x2f, 
  0x01, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x00, 0x00, 0x74, 0x6f, 0x74, 0x65, 
  0x6d, 0x6d, 0x61, 0x69, 0x6e, 0x74, 0x6f, 0x6f, 
  0x6c, 0x62, 0x61, 0x72, 0x2e, 0x75, 0x69, 0x00, 
  0x23, 0x15, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0xed, 0x58, 0x4b, 0x73, 0xd3, 0x30, 
  0x10, 0x3e, 0x3b, 0xbf, 0x42, 0xe8, 0xca, 0xa8, 
  0x26, 0x70, 0x61, 0x3a, 0x76, 0x3a, 0x94, 0x99, 
  0x02, 0x87, 0x0e, 0x87, 0x86, 0x73, 0x46, 0x96, 
  0x37, 0x8e, 0x88, 0x2c, 0x19, 0x49, 0x0e, 0x0d, 
  0xbf, 0x1e, 0xd9, 0xce, 0xab, 0xb6, 0xf2, 0x9c, 
  0x92, 0x21, 0x85, 0x9c, 0xe2, 0xd5, 0x3e, 0xb4, 
  0x9f, 0x76, 0xbf, 0x95, 0x1d, 0xdd, 0x3c, 0xe6, 
  0x02, 0xcd, 0x40, 0x1b, 0xae, 0x64, 0x8c, 0xfb, 
  0x57, 0x6f, 0x30, 0x02, 0xc9, 0x54, 0xca, 0x65, 
  0x16, 0xe3, 0x6f, 0xc3, 0x3b, 0xf2, 0x1e, 0xdf, 
  0x0c, 0x7a, 0x11, 0x97, 0x16, 0xf4, 0x98, 0x32, 
  0x40, 0xa9, 0xca, 0x29, 0x77, 0xaa, 0x56, 0x59, 
  0xc8, 0xf1, 0xa0, 0x87, 0x50, 0xf4, 0x8a, 0x10, 
  0xb4, 0x52, 0x20, 0x1a, 0x7e, 0x94, 0x5c, 0x83, 
  0x41, 0x99, 0x9d, 0xbe, 0x46, 0xef, 0xae, 0xfa, 
  0x7d, 0x44, 0x48, 0xad, 0xe7, 0x0c, 0x0a, 0x41, 
  0x2d, 0x20, 0x26, 0xa8, 0x31, 0x31, 0x1e, 0x56, 
  0x2e, 0xee, 0x9d, 0xb7, 0xa1, 0x52, 0x22, 0xa1, 
  0x1a, 0xa3, 0x82, 0x6a, 0x90, 0x36, 0xc6, 0x9f, 
  0xec, 0xf4, 0x33, 0xd0, 0x14, 0xf4, 0xad, 0x93, 
  0x56, 0xb6, 0xcd, 0x2f, 0x2a, 0xb4, 0x2a, 0x40, 
  0xdb, 0x39, 0x92, 0x34, 0x87, 0x18, 0xcf, 0xb8, 
  0xe1, 0x89, 0x00, 0x3c, 0x18, 0xea, 0x12, 0xa2, 
  0x70, 0xb9, 0xba, 0xdd, 0x80, 0x51, 0x39, 0x1a, 
  0x2b, 0x56, 0x1a, 0x3c, 0xb8, 0xa3, 0xc2, 0xf8, 
  0x6d, 0xd8, 0x84, 0x8b, 0x74, 0xfd, 0x5c, 0x79, 
  0x11, 0x2e, 0xb1, 0x89, 0x12, 0x6e, 0x43, 0xe1, 
  0x86, 0x62, 0xd8, 0xd2, 0xf4, 0x58, 0xaa, 0xe4, 
  0x3b, 0x30, 0xbb, 0x4c, 0xd8, 0xa5, 0x75, 0x5b, 
  0x5a, 0xab, 0x24, 0x46, 0x3c, 0x8d, 0x71, 0x42, 
  0xd9, 0x74, 0x94, 0x34, 0x82, 0x4d, 0xab, 0x13, 
  0x12, 0xdd, 0x93, 0xec, 0x31, 0x66, 0x1a, 0x18, 
  0xf0, 0x19, 0x98, 0x51, 0x0a, 0x63, 0x5a, 0x0a, 
  0x7b, 0x9c, 0xb5, 0x54, 0xc4, 0x4c, 0xd4, 0x4f, 
  0x42, 0x85, 0xd8, 0x63, 0x58, 0x83, 0xd5, 0xd4, 
  0x8d, 0xa4, 0x82, 0xd4, 0x8f, 0x31, 0xa6, 0x8c, 
  0x81, 0x59, 0x24, 0xfb, 0x44, 0xbf, 0x03, 0xe6, 
  0x07, 0x3b, 0xfd, 0x5a, 0x0b, 0xd6, 0x60, 0x92, 
  0x06, 0x4c, 0x42, 0xed, 0xb4, 0xd1, 0xed, 0xf8, 
  0xe8, 0x6e, 0x78, 0xe5, 0xe6, 0xfa, 0x7a, 0x1d, 
  0x9b, 0x54, 0x6b, 0x18, 0x59, 0x4d, 0xa5, 0x71, 
  0x15, 0x4b, 0x9d, 0x28, 0xc6, 0x73, 0x70, 0x48, 
  0xde, 0xba, 0x30, 0xdb, 0x52, 0xaa, 0x4a, 0xa2, 
  0x89, 0xfb, 0x44, 0xde, 0xa9, 0x93, 0x5a, 0x68, 
  0xec, 0x5c, 0x40, 0xc7, 0xbe, 0xce, 0x6d, 0xb1, 
  0x33, 0x9e, 0xd3, 0x0c, 0x16, 0x29, 0xe1, 0xb0, 
  0x65, 0x1e, 0x7a, 0xec, 0x23, 0x4f, 0x1c, 0x5f, 
  0x0d, 0x7e, 0xa9, 0x1c, 0x77, 0x4a, 0x70, 0x54, 
  0xc7, 0x3b, 0x00, 0xb1, 0x83, 0x8a, 0xf1, 0xd4, 
  0xee, 0xdb, 0x66, 0xcb, 0x99, 0xdb, 0x61, 0x7d, 
  0x2a, 0x83, 0x4c, 0x91, 0x42, 0xc3, 0x8c, 0xab, 
  0xd2, 0x10, 0x33, 0xcf, 0x13, 0x25, 0x38, 0x3b, 
  0xda, 0x95, 0xe1, 0xbf, 0x9c, 0xab, 0xfe, 0x91, 
  0x47, 0xe9, 0x3b, 0x4b, 0x9f, 0x62, 0x54, 0x38, 
  0x5c, 0x1d, 0x85, 0xee, 0xee, 0x95, 0x4a, 0x69, 
  0x64, 0xe7, 0x85, 0xdb, 0x88, 0xb1, 0x54, 0x5b, 
  0xff, 0x66, 0x9c, 0xb4, 0xed, 0xec, 0x24, 0xe6, 
  0x19, 0xaa, 0x2c, 0x13, 0xb0, 0xc9, 0x3f, 0x06, 
  0x84, 0x53, 0xb9, 0x78, 0x06, 0x7a, 0x66, 0x22, 
  0x69, 0x50, 0x39, 0x03, 0x95, 0x3c, 0xd4, 0x81, 
  0x5e, 0x10, 0x99, 0xd4, 0x31, 0xfa, 0x17, 0xc0, 
  0x20, 0x4d, 0x12, 0x64, 0x71, 0xd2, 0x2f, 0x85, 
  0x43, 0x40, 0xa6, 0x7f, 0x96, 0x41, 0x36, 0xb9, 
  0x23, 0x55, 0x12, 0x8e, 0x64, 0x8e, 0x9d, 0x27, 
  0x76, 0xfa, 0x3d, 0xe2, 0x6f, 0xb8, 0xf5, 0x08, 
  0x9a, 0x80, 0xf0, 0x36, 0xf9, 0x47, 0x2a, 0x19, 
  0x88, 0x73, 0x71, 0x57, 0x75, 0x2a, 0x67, 0x60, 
  0xae, 0xdd, 0x49, 0x3d, 0x33, 0x73, 0x59, 0x78, 
  0xb4, 0x87, 0x13, 0xd7, 0x65, 0x74, 0x92, 0x6f, 
  0x16, 0x53, 0xcd, 0x26, 0xff, 0x67, 0x71, 0x7b, 
  0x16, 0x57, 0xa8, 0x9c, 0x65, 0x16, 0x57, 0x81, 
  0x5e, 0xda, 0x2c, 0x7e, 0x7b, 0x01, 0xb3, 0x18, 
  0x52, 0x6e, 0xc9, 0x98, 0xcb, 0xf4, 0xdf, 0x9e, 
  0xc3, 0x2d, 0xfa, 0x40, 0x95, 0x2b, 0xc7, 0x7d, 
  0xdc, 0xb6, 0x7a, 0xa6, 0x7b, 0xe8, 0x0f, 0xd6, 
  0x39, 0x5d, 0xb4, 0x4b, 0xfd, 0xf7, 0xbc, 0xe4, 
  0x11, 0x9c, 0xc6, 0x1a, 0x5e, 0xb3, 0x89, 0xca, 
  0x55, 0x06, 0x12, 0x94, 0xb7, 0xa8, 0x82, 0xcd, 
  0x56, 0x08, 0xb6, 0xc1, 0x71, 0x0f, 0xb2, 0xec, 
  0xbe, 0xe4, 0x70, 0x57, 0x26, 0xb9, 0x5b, 0x59, 
  0x13, 0x6c, 0x10, 0x1c, 0x8c, 0x4c, 0x57, 0x75, 
  0x17, 0x1e, 0xc1, 0x09, 0x60, 0x04, 0x47, 0x5c, 
  0x28, 0x5c, 0x87, 0x4c, 0x91, 0x92, 0x88, 0x5b, 
  0xc8, 0x0d, 0xb2, 0x0a, 0x35, 0x19, 0x22, 0x3b, 
  0x81, 0x7c, 0xb7, 0xd3, 0xd2, 0x00, 0x29, 0x54, 
  0xa1, 0x66, 0xa0, 0xbd, 0x7b, 0x58, 0x30, 0x4f, 
  0x10, 0xb4, 0xf8, 0x6a, 0x05, 0x21, 0xa9, 0x20, 
  0xac, 0x18, 0xab, 0xa3, 0xd2, 0x1a, 0xd2, 0xce, 
  0xd9, 0x92, 0xc7, 0x82, 0x76, 0x67, 0x05, 0xed, 
  0xb6, 0x0a, 0xb6, 0xde, 0x01, 0x6b, 0x82, 0x30, 
  0x7b, 0x5f, 0x93, 0xfc, 0x0d, 0x7a, 0x48, 0x77, 
  0x6f, 0x28, 0x45, 0xe1, 0xf2, 0xf3, 0xe4, 0xa0, 
  0x17, 0x85, 0xab, 0xcf, 0x99, 0x83, 0xde, 0x6f, 
  0x05, 0x4c, 0x34, 0xf2, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x74, 
  0x6f, 0x74, 0x65, 0x6d, 0x73, 0x65, 0x6c, 0x65, 
  0x63, 0x74, 0x69, 0x6f, 0x6e, 0x74, 0x6f, 0x6f, 
  0x6c, 0x62, 0x61, 0x72, 0x2e, 0x75, 0x69, 0x00, 
  0xb5, 0x0e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0xed, 0x57, 0x4d, 0x8f, 0xda, 0x30, 
  0x10, 0x3d, 0x2f, 0xbf, 0xc2, 0xf5, 0xb5, 0xf2, 
  0xa6, 0xa8, 0x97, 0x6a, 0x95, 0xb0, 0x62, 0x55, 
  0x51, 0xf5, 0xd4, 0x4a, 0x4b, 0xcf, 0x91, 0x71, 
  0x06, 0x70, 0x71, 0xec, 0xd4, 0x9e, 0xd0, 0xd2, 
  0x5f, 0xdf, 0x49, 0x58, 0x58, 0x36, 0x01, 0x76, 
  0x53, 0x09, 0x2a, 0xd4, 0x3d, 0xda, 0x99, 0x37, 
  0x1f, 0x6f, 0xe6, 0x8d, 0xe2, 0xf8, 0xf6, 0x57, 
  0x6e, 0xd8, 0x12, 0x7c, 0xd0, 0xce, 0x26, 0xbc, 
  0x7f, 0xfd, 0x8e, 0x33, 0xb0, 0xca, 0x65, 0xda, 
  0xce, 0x12, 0xfe, 0x6d, 0x3c, 0x12, 0x1f, 0xf8, 
  0xed, 0xa0, 0x17, 0x6b, 0x8b, 0xe0, 0xa7, 0x52, 
  0x01, 0xcb, 0x5c, 0x2e, 0x35, 0x99, 0xa2, 0x43, 
  0xc8, 0xf9, 0xa0, 0xc7, 0x58, 0xfc, 0x46, 0x08, 
  0xb6, 0x35, 0x10, 0x1e, 0x7e, 0x94, 0xda, 0x43, 
  0x60, 0x33, 0x5c, 0xbc, 0x65, 0xef, 0xaf, 0xfb, 
  0x7d, 0x26, 0x44, 0x6d, 0x47, 0x80, 0xc2, 0x48, 
  0x04, 0xa6, 0x8c, 0x0c, 0x21, 0xe1, 0xe3, 0xca, 
  0xc5, 0x3d, 0x18, 0x50, 0x48, 0xd1, 0xc7, 0xce, 
  0x99, 0x89, 0xf4, 0x9c, 0x15, 0xd2, 0x83, 0xc5, 
  0x84, 0x7f, 0xc2, 0xc5, 0xb0, 0xfe, 0x72, 0x47, 
  0xb7, 0x95, 0x03, 0x72, 0x51, 0x78, 0x57, 0x80, 
  0xc7, 0x15, 0xb3, 0x32, 0x87, 0x84, 0xcb, 0xa2, 
  0x48, 0x0b, 0x4a, 0x07, 0xe5, 0xc4, 0x00, 0x1f, 
  0x8c, 0x7d, 0x09, 0x71, 0xb4, 0xb1, 0xd9, 0x0f, 
  0x51, 0xd2, 0xa6, 0x53, 0xa7, 0xca, 0xc0, 0x07, 
  0x23, 0x69, 0x42, 0xcb, 0x9e, 0x10, 0x6a, 0xae, 
  0x4d, 0xb6, 0x39, 0xd1, 0xd9, 0x4d, 0xbe, 0x53, 
  0x8a, 0x9b, 0xac, 0x29, 0xad, 0xbb, 0x12, 0xd1, 
  0x59, 0xce, 0x74, 0x46, 0x29, 0x64, 0x59, 0x8a, 
  0x2e, 0x9d, 0xca, 0x25, 0x7f, 0x84, 0xb4, 0xc3, 
  0x2e, 0x75, 0xd0, 0x07, 0x73, 0xdc, 0x0f, 0xd9, 
  0xc9, 0xf4, 0xe5, 0x20, 0x0f, 0x0a, 0xf4, 0x12, 
  0x42, 0x9a, 0xc1, 0x54, 0x96, 0x06, 0xbb, 0x60, 
  0xad, 0x13, 0x61, 0xee, 0x7e, 0x0a, 0x69, 0xcc, 
  0x51, 0x58, 0xcd, 0xcf, 0xba, 0xe3, 0x56, 0x1a, 
  0x51, 0x1f, 0x89, 0x08, 0xa5, 0x20, 0x3c, 0x14, 
  0xb9, 0x63, 0xdd, 0xe2, 0x6f, 0x88, 0x8b, 0x2f, 
  0xf5, 0xc5, 0x96, 0x3f, 0x81, 0x4e, 0x10, 0x7f, 
  0x42, 0xe2, 0x62, 0x6d, 0xda, 0x70, 0xd0, 0xce, 
  0x74, 0xeb, 0xe3, 0xe6, 0xe6, 0x31, 0xac, 0xa8, 
  0xbe, 0x71, 0x86, 0x5e, 0xda, 0x40, 0x63, 0x56, 
  0x8d, 0x44, 0xc2, 0x57, 0x40, 0xf4, 0x0d, 0xb3, 
  0x8c, 0xa1, 0x63, 0x23, 0xb9, 0x74, 0xa5, 0xd7, 
  0x08, 0x61, 0x7f, 0x61, 0x14, 0x27, 0x5a, 0x27, 
  0xb0, 0x73, 0x1b, 0x47, 0x8d, 0x71, 0xa0, 0xab, 
  0x80, 0x2b, 0x03, 0x0d, 0x64, 0x5d, 0xdd, 0x43, 
  0x7a, 0x3a, 0x97, 0x33, 0x10, 0x93, 0xf5, 0x94, 
  0x44, 0x4f, 0xa0, 0x51, 0x0b, 0x1b, 0xb7, 0xfc, 
  0xef, 0x1b, 0xb9, 0xcf, 0x95, 0xcb, 0xe6, 0xc4, 
  0xa5, 0x75, 0xa0, 0x67, 0xd9, 0x7a, 0xc1, 0xec, 
  0xfd, 0x9d, 0x52, 0x0e, 0x21, 0xb5, 0x72, 0x36, 
  0xad, 0xbb, 0x31, 0x80, 0x9c, 0x22, 0xe7, 0x55, 
  0x7b, 0x5d, 0xc5, 0xbc, 0x08, 0xab, 0x7c, 0xe2, 
  0x8c, 0x56, 0x1d, 0x9d, 0x05, 0xfd, 0x9b, 0x9c, 
  0xf5, 0x3b, 0xf4, 0xad, 0xdd, 0xb8, 0xb6, 0x51, 
  0x5c, 0x48, 0xb5, 0xa0, 0x4d, 0x77, 0x4c, 0x14, 
  0x95, 0x49, 0x8a, 0xab, 0x82, 0xc2, 0x07, 0x94, 
  0x1e, 0xf7, 0xa5, 0x40, 0x77, 0x4f, 0x1d, 0x35, 
  0x62, 0x77, 0xdb, 0x28, 0xb4, 0x23, 0x57, 0xff, 
  0xcd, 0x2e, 0x69, 0xc0, 0x8c, 0x9c, 0x80, 0xd9, 
  0xab, 0xe1, 0xaf, 0xc4, 0xca, 0x39, 0xf6, 0x51, 
  0xc5, 0xfe, 0xe9, 0x36, 0xd1, 0xe1, 0x2a, 0xfe, 
  0xc5, 0xf2, 0xb9, 0x14, 0x45, 0x84, 0x79, 0x39, 
  0x9d, 0x36, 0xfa, 0xf8, 0x2a, 0x0a, 0x4a, 0xfb, 
  0x7e, 0x4d, 0xcc, 0x39, 0x74, 0xf1, 0xd0, 0x83, 
  0xd3, 0x49, 0xe3, 0x68, 0x2d, 0xaf, 0xea, 0x38, 
  0xac, 0x8e, 0x8c, 0xfe, 0xa0, 0xf1, 0x52, 0xc4, 
  0x71, 0xd5, 0x51, 0x15, 0x57, 0x5d, 0xe4, 0xf0, 
  0xb1, 0x66, 0xe2, 0x1c, 0x6a, 0x58, 0x73, 0x7e, 
  0x3a, 0x31, 0x1c, 0xab, 0xe4, 0x22, 0xb5, 0x00, 
  0x36, 0xeb, 0xaa, 0x84, 0x38, 0xda, 0x3c, 0x18, 
  0xe9, 0x01, 0x1a, 0x6d, 0x1f, 0x98, 0x83, 0xde, 
  0x1f, 0x57, 0x8c, 0x6e, 0x83, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x74, 
  0x6f, 0x74, 0x65, 0x6d, 0x2d, 0x67, 0x72, 0x69, 
  0x6c, 0x6f, 0x2e, 0x63, 0x6f, 0x6e, 0x66, 0x00, 
  0x2a, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0x6d, 0x90, 0xcb, 0x6e, 0xc2, 0x30, 
  0x14, 0x44, 0xf7, 0xfe, 0x8a, 0xfc, 0x40, 0xa4, 
  0xe6, 0x41, 0x6c, 0x2f, 0xba, 0xa0, 0x12, 0x90, 
  0x88, 0x50, 0xda, 0x52, 0x21, 0x21, 0xc4, 0xc2, 
  0x37, 0xbe, 0x8e, 0x42, 0x12, 0xdc, 0xfa, 0x11, 
  0x02, 0x5f, 0xdf, 0x87, 0x40, 0xea, 0xa2, 0xb3, 
  0x9e, 0xa3, 0x33, 0x9a, 0x7d, 0x6d, 0xba, 0x70, 
  0x68, 0x7a, 0xd4, 0x07, 0x22, 0x3e, 0x9a, 0xb0, 
  0xc5, 0x4b, 0x70, 0xcf, 0x63, 0x20, 0x81, 0xc7, 
  0xa9, 0x4c, 0x80, 0xaa, 0x48, 0x4e, 0x54, 0x22, 
  0x33, 0x25, 0x15, 0x42, 0x9a, 0x32, 0x26, 0xe4, 
  0x43, 0x84, 0xf1, 0x2f, 0x62, 0xb1, 0x32, 0xe8, 
  0xee, 0x08, 0xa0, 0xe2, 0x94, 0x4b, 0x46, 0x55, 
  0xcc, 0xb0, 0x4a, 0x29, 0x21, 0xfb, 0x1f, 0xc5, 
  0x45, 0x7b, 0xe7, 0x01, 0xff, 0x93, 0x4c, 0x8b, 
  0x84, 0xdb, 0x86, 0x16, 0x63, 0x08, 0x8a, 0x8f, 
  0x6f, 0xe5, 0x38, 0x79, 0x59, 0x46, 0xf6, 0x68, 
  0x17, 0xf1, 0xfc, 0xf5, 0xb8, 0xc9, 0xa1, 0xf3, 
  0x27, 0x2f, 0x0a, 0xb6, 0x1b, 0x72, 0xb9, 0x83, 
  0x76, 0x1b, 0x3f, 0x55, 0xf5, 0x1a, 0xfb, 0x7c, 
  0x96, 0x3d, 0x5f, 0x81, 0xbb, 0xac, 0x14, 0x2b, 
  0x8b, 0xad, 0x56, 0xcb, 0xc5, 0xe6, 0x5c, 0x4f, 
  0x67, 0xef, 0x57, 0xd0, 0x74, 0x3d, 0x94, 0xac, 
  0x4c, 0x86, 0x3c, 0x1d, 0xcc, 0x5c, 0x7c, 0x9e, 
  0x89, 0xd2, 0xa6, 0x17, 0x2e, 0xf8, 0x23, 0x05, 
  0xb4, 0xee, 0x36, 0xad, 0xd3, 0x95, 0xe8, 0xc2, 
  0x1e, 0x9d, 0x90, 0xc2, 0x89, 0x03, 0xa9, 0x3d, 
  0x5a, 0xfb, 0xfd, 0x89, 0x44, 0x7d, 0x2b, 0x3b, 
  0xe3, 0x91, 0x7c, 0x01, 0x58, 0x4d, 0x5b, 0x95, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x67, 
  0x72, 0x69, 0x6c, 0x6f, 0x2f, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 
  0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00
} };

static GStaticResource static_resource = { _totem_resource_data.data, sizeof (_totem_resource_data.data), NULL, NULL, NULL };
extern GResource *_totem_get_resource (void);
GResource *_totem_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a sane way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
