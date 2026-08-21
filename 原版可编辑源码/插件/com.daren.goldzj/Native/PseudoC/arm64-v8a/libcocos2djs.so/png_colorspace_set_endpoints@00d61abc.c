
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
  
  local_70 = (int)param_3[4];
  lVar10 = param_3[3];
  lVar7 = param_3[2];
  lVar11 = param_3[1];
  lVar8 = *param_3;
  local_90._4_4_ = (int)((ulong)lVar8 >> 0x20);
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
        dVar9 = (double)(long)(((double)(int)local_90 * 100000.0) / (double)iVar2 + 0.5);
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_00d6205c;
        iVar6 = (int)dVar9;
      }
      local_90 = CONCAT44(local_90._4_4_,iVar6);
      iVar5 = 0;
      if (local_90._4_4_ != 0) {
        dVar9 = (double)(long)(((double)local_90._4_4_ * 100000.0) / (double)iVar2 + 0.5);
        lVar8 = local_90;
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_00d6205c;
        iVar5 = (int)dVar9;
      }
      local_90 = CONCAT44(iVar5,iVar6);
      iVar6 = 0;
      lVar8 = local_90;
      if ((int)uStack_88 != 0) {
        dVar9 = (double)(long)(((double)(int)uStack_88 * 100000.0) / (double)iVar2 + 0.5);
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_00d6205c;
        iVar6 = (int)dVar9;
      }
      uStack_88 = CONCAT44(uStack_88._4_4_,iVar6);
      iVar5 = 0;
      if (uStack_88._4_4_ != 0) {
        dVar9 = (double)(long)(((double)uStack_88._4_4_ * 100000.0) / (double)iVar2 + 0.5);
        lVar11 = uStack_88;
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_00d6205c;
        iVar5 = (int)dVar9;
      }
      uStack_88 = CONCAT44(iVar5,iVar6);
      iVar6 = 0;
      lVar11 = uStack_88;
      if ((int)local_80 != 0) {
        dVar9 = (double)(long)(((double)(int)local_80 * 100000.0) / (double)iVar2 + 0.5);
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_00d6205c;
        iVar6 = (int)dVar9;
      }
      local_80 = CONCAT44(local_80._4_4_,iVar6);
      iVar5 = 0;
      if (local_80._4_4_ != 0) {
        dVar9 = (double)(long)(((double)local_80._4_4_ * 100000.0) / (double)iVar2 + 0.5);
        lVar7 = local_80;
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_00d6205c;
        iVar5 = (int)dVar9;
      }
      local_80 = CONCAT44(iVar5,iVar6);
      iVar6 = 0;
      lVar7 = local_80;
      if ((int)uStack_78 != 0) {
        dVar9 = (double)(long)(((double)(int)uStack_78 * 100000.0) / (double)iVar2 + 0.5);
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_00d6205c;
        iVar6 = (int)dVar9;
      }
      uStack_78 = CONCAT44(uStack_78._4_4_,iVar6);
      iVar5 = 0;
      if (uStack_78._4_4_ != 0) {
        dVar9 = (double)(long)(((double)uStack_78._4_4_ * 100000.0) / (double)iVar2 + 0.5);
        lVar10 = uStack_78;
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_00d6205c;
        iVar5 = (int)dVar9;
      }
      uStack_78 = CONCAT44(iVar5,iVar6);
      lVar10 = uStack_78;
      if (local_70 != 0) {
        dVar9 = (double)(long)(((double)local_70 * 100000.0) / (double)iVar2 + 0.5);
        if ((2147483647.0 < dVar9) || (dVar9 < -2147483648.0)) goto LAB_00d6205c;
        local_70 = (int)dVar9;
      }
    }
    uStack_78 = lVar10;
    local_80 = lVar7;
    uStack_88 = lVar11;
    local_90 = lVar8;
    iVar2 = FUN_00d654f4(&local_b0,&local_90);
    if (iVar2 == 0) {
      local_40 = local_70;
      lStack_58 = uStack_88;
      local_60 = local_90;
      lStack_48 = uStack_78;
      lStack_50 = local_80;
      iVar2 = FUN_00d61298(&local_60,&local_b0);
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
      if ((1 < param_4) || ((uVar1 >> 1 & 1) == 0)) {
LAB_00d61ccc:
        *(ulong *)(param_2 + 0xc) = CONCAT44(iStack_a4,iStack_a8);
        *(ulong *)(param_2 + 4) = CONCAT44(iStack_ac,local_b0);
        *(ulong *)(param_2 + 0x1c) = CONCAT44(local_94,local_98);
        *(ulong *)(param_2 + 0x14) = CONCAT44(local_9c,local_a0);
        *(int *)(param_2 + 0x44) = local_70;
        *(long *)(param_2 + 0x3c) = uStack_78;
        *(long *)(param_2 + 0x34) = local_80;
        *(long *)(param_2 + 0x2c) = uStack_88;
        *(long *)(param_2 + 0x24) = local_90;
        if ((((local_98 - 0x763eU < 0x7d1) && (local_94 - 0x7c9cU < 0x7d1)) &&
            ((local_b0 - 63000U < 0x7d1 &&
             (((iStack_ac - 32000U < 0x7d1 && (iStack_a8 - 29000U < 0x7d1)) &&
              (iStack_a4 - 59000U < 0x7d1)))))) && (local_a0 - 14000U < 0x7d1)) {
          uVar4 = uVar1 | 0x42;
          if (2000 < local_9c - 5000U) {
            uVar4 = uVar1 & 0xffbf | 2;
          }
        }
        else {
          uVar4 = uVar1 & 0xffbf | 2;
        }
        *(ushort *)(param_2 + 0x4a) = uVar4;
        return 2;
      }
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
        goto LAB_00d61ccc;
      }
      pcVar3 = "inconsistent chromaticities";
      goto LAB_00d6206c;
    }
  }
LAB_00d6205c:
  uStack_78 = lVar10;
  local_80 = lVar7;
  uStack_88 = lVar11;
  local_90 = lVar8;
  uVar1 = *(ushort *)(param_2 + 0x4a);
  pcVar3 = "invalid end points";
LAB_00d6206c:
  *(ushort *)(param_2 + 0x4a) = uVar1 | 0x8000;
  png_benign_error(param_1,pcVar3);
  return 0;
}

