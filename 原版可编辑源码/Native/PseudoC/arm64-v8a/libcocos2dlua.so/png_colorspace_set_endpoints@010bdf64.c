
undefined8 png_colorspace_set_endpoints(undefined8 param_1,long param_2,long *param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  long lVar10;
  long lVar11;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  int local_70;
  long local_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  int local_40;
  
                    /* try { // try from 010bdf70 to 011bdf7f has its CatchHandler @ 010be858 */
  local_70 = (int)param_3[4];
  lVar10 = param_3[3];
  lVar7 = param_3[2];
  lVar11 = param_3[1];
  lVar8 = *param_3;
  local_90._4_4_ = (int)((ulong)lVar8 >> 0x20);
                    /* try { // try from 010bdfc0 to 011bdfd7 has its CatchHandler @ 010be7e8 */
  if (((((-1 < lVar8) && (local_80._0_4_ = (int)lVar7, -1 < (int)local_80)) &&
       (uStack_78._4_4_ = (int)((ulong)lVar10 >> 0x20), -1 < lVar10)) &&
      (((local_90._0_4_ = (int)lVar8, -1 < (int)local_90 &&
        (uStack_88._4_4_ = (int)((ulong)lVar11 >> 0x20), -1 < lVar11)) &&
       ((uStack_78._0_4_ = (int)lVar10, -1 < (int)uStack_78 &&
        ((uStack_88._0_4_ = (int)lVar11, -1 < (int)uStack_88 &&
         (local_80._4_4_ = (int)((ulong)lVar7 >> 0x20), -1 < lVar7)))))))) &&
     ((uStack_88._4_4_ <= 0x7fffffff - local_90._4_4_ &&
      (((-1 < local_70 && ((int)uStack_78 <= 0x7fffffff - ((int)local_80 + local_90._4_4_))) &&
       (iVar2 = uStack_78._4_4_ + (int)local_80 + local_90._4_4_, iVar2 != 0)))))) {
    if (iVar2 != 100000) {
      iVar6 = 0;
      if ((int)local_90 != 0) {
                    /* try { // try from 010be250 to 011be257 has its CatchHandler @ 010be824 */
        dVar9 = (double)(long)(((double)(int)local_90 * 100000.0) / (double)iVar2 + 0.5);
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_010be504;
        iVar6 = (int)dVar9;
      }
      local_90 = CONCAT44(local_90._4_4_,iVar6);
      iVar5 = 0;
      if (local_90._4_4_ != 0) {
                    /* try { // try from 010be2a4 to 011be2b3 has its CatchHandler @ 010be850 */
        dVar9 = (double)(long)(((double)local_90._4_4_ * 100000.0) / (double)iVar2 + 0.5);
        lVar8 = local_90;
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_010be504;
        iVar5 = (int)dVar9;
      }
      local_90 = CONCAT44(iVar5,iVar6);
      iVar6 = 0;
      lVar8 = local_90;
      if ((int)uStack_88 != 0) {
                    /* try { // try from 010be2f4 to 011be30b has its CatchHandler @ 010be7dc */
        dVar9 = (double)(long)(((double)(int)uStack_88 * 100000.0) / (double)iVar2 + 0.5);
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_010be504;
        iVar6 = (int)dVar9;
      }
      uStack_88 = CONCAT44(uStack_88._4_4_,iVar6);
      iVar5 = 0;
      if (uStack_88._4_4_ != 0) {
        dVar9 = (double)(long)(((double)uStack_88._4_4_ * 100000.0) / (double)iVar2 + 0.5);
        lVar11 = uStack_88;
                    /* try { // try from 010be360 to 011be36f has its CatchHandler @ 010be880 */
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_010be504;
        iVar5 = (int)dVar9;
      }
      uStack_88 = CONCAT44(iVar5,iVar6);
      iVar6 = 0;
      lVar11 = uStack_88;
      if ((int)local_80 != 0) {
        dVar9 = (double)(long)(((double)(int)local_80 * 100000.0) / (double)iVar2 + 0.5);
                    /* try { // try from 010be3a0 to 011be3d3 has its CatchHandler @ 010be868 */
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_010be504;
        iVar6 = (int)dVar9;
      }
      local_80 = CONCAT44(local_80._4_4_,iVar6);
      iVar5 = 0;
      if (local_80._4_4_ != 0) {
                    /* try { // try from 010be3e8 to 011be3f3 has its CatchHandler @ 010be81c */
        dVar9 = (double)(long)(((double)local_80._4_4_ * 100000.0) / (double)iVar2 + 0.5);
        lVar7 = local_80;
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_010be504;
        iVar5 = (int)dVar9;
      }
                    /* try { // try from 010be40c to 011be413 has its CatchHandler @ 010be818 */
      local_80 = CONCAT44(iVar5,iVar6);
      iVar6 = 0;
      lVar7 = local_80;
      if ((int)uStack_78 != 0) {
        dVar9 = (double)(long)(((double)(int)uStack_78 * 100000.0) / (double)iVar2 + 0.5);
                    /* try { // try from 010be448 to 011be457 has its CatchHandler @ 010be84c */
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_010be504;
        iVar6 = (int)dVar9;
      }
      uStack_78 = CONCAT44(uStack_78._4_4_,iVar6);
      iVar5 = 0;
      if (uStack_78._4_4_ != 0) {
        dVar9 = (double)(long)(((double)uStack_78._4_4_ * 100000.0) / (double)iVar2 + 0.5);
        lVar10 = uStack_78;
                    /* try { // try from 010be498 to 011be4af has its CatchHandler @ 010be7d8 */
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_010be504;
        iVar5 = (int)dVar9;
      }
      uStack_78 = CONCAT44(iVar5,iVar6);
      lVar10 = uStack_78;
      if (local_70 != 0) {
                    /* try { // try from 010be4c0 to 011be4cb has its CatchHandler @ 010be7c8 */
        dVar9 = (double)(long)(((double)local_70 * 100000.0) / (double)iVar2 + 0.5);
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_010be504;
        local_70 = (int)dVar9;
      }
    }
    uStack_78 = lVar10;
    local_80 = lVar7;
    uStack_88 = lVar11;
    local_90 = lVar8;
                    /* try { // try from 010be028 to 011be037 has its CatchHandler @ 010be964 */
    iVar2 = FUN_010c199c(&local_b0,&local_90);
    if (iVar2 == 0) {
      local_40 = local_70;
      lStack_58 = uStack_88;
      local_60 = local_90;
      lStack_48 = uStack_78;
      lStack_50 = local_80;
      iVar2 = FUN_010bd740(&local_60,&local_b0);
    }
    lVar8 = local_90;
    lVar11 = uStack_88;
    lVar7 = local_80;
    lVar10 = uStack_78;
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
                    /* WARNING: Subroutine does not return */
        png_error(param_1,"internal error checking chromaticities");
      }
      uVar1 = *(ushort *)(param_2 + 0x4a);
      if ((short)uVar1 < 0) {
        return 0;
      }
                    /* try { // try from 010be068 to 011be083 has its CatchHandler @ 010be87c */
      if ((1 < param_4) || ((uVar1 >> 1 & 1) == 0)) {
LAB_010be174:
        *(ulong *)(param_2 + 0xc) = CONCAT44(iStack_a4,iStack_a8);
        *(ulong *)(param_2 + 4) = CONCAT44(iStack_ac,local_b0);
        *(ulong *)(param_2 + 0x1c) = CONCAT44(local_94,local_98);
        *(ulong *)(param_2 + 0x14) = CONCAT44(local_9c,local_a0);
        *(int *)(param_2 + 0x44) = local_70;
        *(long *)(param_2 + 0x3c) = uStack_78;
        *(long *)(param_2 + 0x34) = local_80;
        *(long *)(param_2 + 0x2c) = uStack_88;
        *(long *)(param_2 + 0x24) = local_90;
                    /* try { // try from 010be1c4 to 011be1d3 has its CatchHandler @ 010be8fc */
                    /* try { // try from 010be204 to 011be223 has its CatchHandler @ 010be86c */
        if ((((local_98 - 0x763eU < 0x7d1) && (local_94 - 0x7c9cU < 0x7d1)) &&
            ((local_b0 - 63000U < 0x7d1 &&
             (((iStack_ac - 32000U < 0x7d1 && (iStack_a8 - 29000U < 0x7d1)) &&
              (iStack_a4 - 59000U < 0x7d1)))))) && (local_a0 - 14000U < 0x7d1)) {
                    /* try { // try from 010be54c to 011be54f has its CatchHandler @ 010be78c */
          uVar4 = uVar1 | 0x42;
          if (2000 < local_9c - 5000U) {
            uVar4 = uVar1 & 0xffbf | 2;
          }
        }
        else {
          uVar4 = uVar1 & 0xffbf | 2;
        }
                    /* try { // try from 010be228 to 011be237 has its CatchHandler @ 010be83c */
        *(ushort *)(param_2 + 0x4a) = uVar4;
        return 2;
      }
                    /* try { // try from 010be098 to 011be0a3 has its CatchHandler @ 010be844 */
                    /* try { // try from 010be0bc to 011be0c3 has its CatchHandler @ 010be840 */
                    /* try { // try from 010be0f8 to 011be107 has its CatchHandler @ 010be854 */
                    /* try { // try from 010be148 to 011be15f has its CatchHandler @ 010be7e4 */
      if (((*(int *)(param_2 + 0x1c) + -100 <= local_98) &&
          (((((local_98 <= *(int *)(param_2 + 0x1c) + 100 &&
              (*(int *)(param_2 + 0x20) + -100 <= local_94)) &&
             (local_94 <= *(int *)(param_2 + 0x20) + 100)) &&
            ((iVar2 = *(int *)(param_2 + 4), iVar2 + -100 <= local_b0 && (local_b0 <= iVar2 + 100)))
            ) && (*(int *)(param_2 + 8) + -100 <= iStack_ac)))) &&
         (((((iStack_ac <= *(int *)(param_2 + 8) + 100 &&
             (*(int *)(param_2 + 0xc) + -100 <= iStack_a8)) &&
            (iStack_a8 <= *(int *)(param_2 + 0xc) + 100)) &&
           ((((*(int *)(param_2 + 0x10) + -100 <= iStack_a4 &&
              (iStack_a4 <= *(int *)(param_2 + 0x10) + 100)) &&
             (*(int *)(param_2 + 0x14) + -100 <= local_a0)) &&
            ((local_a0 <= *(int *)(param_2 + 0x14) + 100 &&
             (local_9c <= *(int *)(param_2 + 0x18) + 100)))))) &&
          (*(int *)(param_2 + 0x18) + -100 <= local_9c)))) {
        if (param_4 == 0) {
          return 1;
        }
        goto LAB_010be174;
      }
      pcVar3 = "inconsistent chromaticities";
      goto LAB_010be514;
    }
  }
LAB_010be504:
  uStack_78 = lVar10;
  local_80 = lVar7;
  uStack_88 = lVar11;
  local_90 = lVar8;
  uVar1 = *(ushort *)(param_2 + 0x4a);
  pcVar3 = "invalid end points";
LAB_010be514:
  *(ushort *)(param_2 + 0x4a) = uVar1 | 0x8000;
  png_benign_error(param_1,pcVar3);
  return 0;
}

