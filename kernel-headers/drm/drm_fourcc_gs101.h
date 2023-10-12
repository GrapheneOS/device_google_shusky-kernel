/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef DRM_FOURCC_GS101_H
#define DRM_FOURCC_GS101_H
#include <drm/drm_fourcc.h>
#ifdef __cplusplus
extern "C" {
#endif
#define DRM_FORMAT_Y010 fourcc_code('Y', '0', '1', '0')
#define DRM_FORMAT_MOD_PROTECTION fourcc_mod_code(NONE, (1ULL << 51))
#define DRM_FORMAT_MOD_SAMSUNG_YUV_8_2_SPLIT fourcc_mod_code(SAMSUNG, 3)
#define DRM_FORMAT_MOD_SAMSUNG_COLORMAP fourcc_mod_code(SAMSUNG, 4)
#define SBWC_IDENTIFIER (1 << 4)
#define SBWC_FORMAT_MOD_BLOCK_SIZE_MASK (0xfULL << 5)
#define SBWC_BLOCK_SIZE_SET(blk_size) (((blk_size) << 5) & SBWC_FORMAT_MOD_BLOCK_SIZE_MASK)
#define SBWC_BLOCK_SIZE_GET(modifier) (((modifier) & SBWC_FORMAT_MOD_BLOCK_SIZE_MASK) >> 5)
#define SBWC_FORMAT_MOD_BLOCK_SIZE_32x2 (2ULL)
#define SBWC_FORMAT_MOD_BLOCK_SIZE_32x3 (3ULL)
#define SBWC_FORMAT_MOD_BLOCK_SIZE_32x4 (4ULL)
#define SBWC_FORMAT_MOD_BLOCK_SIZE_32x5 (5ULL)
#define SBWC_FORMAT_MOD_BLOCK_SIZE_32x6 (6ULL)
#define SBWC_FORMAT_MOD_LOSSY (1 << 12)
#define DRM_FORMAT_MOD_SAMSUNG_SBWC(blk_size) fourcc_mod_code(SAMSUNG, (SBWC_BLOCK_SIZE_SET(blk_size) | SBWC_IDENTIFIER))
#define AFBC_FORMAT_MOD_SOURCE_MASK (0xfULL << 52)
#define AFBC_FORMAT_MOD_SOURCE_GPU (1ULL << 52)
#define AFBC_FORMAT_MOD_SOURCE_G2D (2ULL << 52)
#define AFBC_BLOCK_SIZE_GET(modifier) (modifier & AFBC_FORMAT_MOD_BLOCK_SIZE_MASK)
#ifdef __cplusplus
}
#endif
#endif
