/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 */

#ifndef __LINUX_REGULATOR_MT6358_H
#define __LINUX_REGULATOR_MT6358_H

enum {
	MT6358_ID_VDRAM1 = 0,
	MT6358_ID_VCORE,
	MT6358_ID_VPA,
	MT6358_ID_VPROC11,
	MT6358_ID_VPROC12,
	MT6358_ID_VGPU,
	MT6358_ID_VS2,
	MT6358_ID_VMODEM,
	MT6358_ID_VS1,
	MT6358_ID_VDRAM2 = 9,
	MT6358_ID_VSIM1,
	MT6358_ID_VIBR,
	MT6358_ID_VRF12,
	MT6358_ID_VIO18,
	MT6358_ID_VUSB,
	MT6358_ID_VCAMIO,
	MT6358_ID_VCAMD,
	MT6358_ID_VCN18,
	MT6358_ID_VFE28,
	MT6358_ID_VSRAM_PROC11,
	MT6358_ID_VCN28,
	MT6358_ID_VSRAM_OTHERS,
	MT6358_ID_VSRAM_GPU,
	MT6358_ID_VXO22,
	MT6358_ID_VEFUSE,
	MT6358_ID_VAUX18,
	MT6358_ID_VMCH,
	MT6358_ID_VBIF28,
	MT6358_ID_VSRAM_PROC12,
	MT6358_ID_VCAMA1,
	MT6358_ID_VEMC,
	MT6358_ID_VIO28,
	MT6358_ID_VA12,
	MT6358_ID_VRF18,
	MT6358_ID_VCN33,
	MT6358_ID_VCAMA2,
	MT6358_ID_VMC,
	MT6358_ID_VLDO28,
	MT6358_ID_VAUD28,
	MT6358_ID_VSIM2,
	MT6358_ID_RG_MAX,
};

enum {
	MT6366_ID_VDRAM1 = 0,
	MT6366_ID_VCORE,
	MT6366_ID_VPA,
	MT6366_ID_VPROC11,
	MT6366_ID_VPROC12,
	MT6366_ID_VGPU,
	MT6366_ID_VS2,
	MT6366_ID_VMODEM,
	MT6366_ID_VS1,
	MT6366_ID_VDRAM2,
	MT6366_ID_VSIM1,
	MT6366_ID_VIBR,
	MT6366_ID_VRF12,
	MT6366_ID_VIO18,
	MT6366_ID_VUSB,
	MT6366_ID_VCN18,
	MT6366_ID_VFE28,
	MT6366_ID_VSRAM_PROC11,
	MT6366_ID_VCN28,
	MT6366_ID_VSRAM_OTHERS,
	MT6366_ID_VSRAM_GPU,
	MT6366_ID_VXO22,
	MT6366_ID_VEFUSE,
	MT6366_ID_VAUX18,
	MT6366_ID_VMCH,
	MT6366_ID_VBIF28,
	MT6366_ID_VSRAM_PROC12,
	MT6366_ID_VEMC,
	MT6366_ID_VIO28,
	MT6366_ID_VA12,
	MT6366_ID_VRF18,
	MT6366_ID_VCN33,
	MT6366_ID_VMC,
	MT6366_ID_VAUD28,
	MT6366_ID_VSIM2,
	MT6366_ID_VM18,
	MT6366_ID_VMDDR,
	MT6366_ID_VSRAM_CORE,
	MT6366_ID_RG_MAX,
};

#define MT6358_MAX_REGULATOR	MT6358_ID_RG_MAX
#define MT6366_MAX_REGULATOR	MT6366_ID_RG_MAX

#endif /* __LINUX_REGULATOR_MT6358_H */
