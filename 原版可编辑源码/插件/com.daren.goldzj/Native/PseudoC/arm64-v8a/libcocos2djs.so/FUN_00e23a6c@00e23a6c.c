
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00e23a6c(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint local_70;
  undefined4 uStack_6c;
  long local_68;
  long local_60;
  long lStack_58;
  uint local_44;
  
  iVar1 = *(int *)((long)param_1 + 0x54);
  if (iVar1 == 0) {
    lVar8 = param_1[0xd];
    FT_Vector_From_Polar
              (&local_60,lVar8,
               "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
               + param_2 + 2);
    local_60 = local_60 + param_1[2];
    lStack_58 = lStack_58 + param_1[3];
    if ((char)param_1[0x11] == '\0') {
      uVar7 = *(uint *)(param_1 + 0xe);
      if (uVar7 <= *(uint *)((long)param_1 + 0x8c)) {
LAB_00e23be0:
        uVar2 = *(uint *)((long)param_1 + 0x74);
        local_70 = 0;
        if (uVar2 < uVar7 + 1) {
          lVar6 = param_1[0x12];
          uVar9 = uVar2;
          do {
            uVar9 = uVar9 + (uVar9 >> 1) + 0x10;
          } while (uVar9 < uVar7 + 1);
          lVar5 = FUN_00e13bcc(lVar6,0x10,uVar2,uVar9,param_1[0xf],&local_70);
          param_1[0xf] = lVar5;
          uVar4 = (ulong)local_70;
          if (local_70 != 0) goto LAB_00e24040;
          lVar6 = FUN_00e13bcc(lVar6,1,uVar2,uVar9,param_1[0x10],&local_70);
          param_1[0x10] = lVar6;
          uVar4 = (ulong)local_70;
          if (local_70 != 0) goto LAB_00e24040;
          uVar7 = *(uint *)(param_1 + 0xe);
          *(uint *)((long)param_1 + 0x74) = uVar9;
        }
        else {
          lVar6 = param_1[0x10];
        }
        plVar3 = (long *)(param_1[0xf] + (ulong)uVar7 * 0x10);
        plVar3[1] = lStack_58;
        *plVar3 = local_60;
        *(undefined1 *)(lVar6 + (ulong)uVar7) = 1;
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
        goto LAB_00e23d78;
      }
      if ((2 < (ulong)((1 - local_60) + *(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10))) ||
         (2 < (ulong)((1 - lStack_58) + *(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10 + 8))))
      goto LAB_00e23be0;
    }
    else {
      plVar3 = (long *)(param_1[0xf] + (ulong)((int)param_1[0xe] - 1) * 0x10);
      plVar3[1] = lStack_58;
      *plVar3 = local_60;
LAB_00e23d78:
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    FT_Vector_From_Polar(&local_60,lVar8,param_2 + -0x5a0000);
    local_60 = local_60 + param_1[2];
    lStack_58 = lStack_58 + param_1[3];
    if ((char)param_1[0x11] != '\0') goto LAB_00e23f10;
    uVar7 = *(uint *)(param_1 + 0xe);
    if (*(uint *)((long)param_1 + 0x8c) < uVar7) {
      if (((ulong)((1 - local_60) + *(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10)) < 3) &&
         ((ulong)((1 - lStack_58) + *(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10 + 8)) < 3)) {
        return 0;
      }
    }
    uVar2 = *(uint *)((long)param_1 + 0x74);
    local_70 = 0;
    if (uVar7 + 1 <= uVar2) goto LAB_00e24014;
    lVar8 = param_1[0x12];
    uVar9 = uVar2;
    do {
      uVar9 = uVar9 + (uVar9 >> 1) + 0x10;
    } while (uVar9 < uVar7 + 1);
    lVar6 = FUN_00e13bcc(lVar8,0x10,uVar2,uVar9,param_1[0xf],&local_70);
    param_1[0xf] = lVar6;
    uVar4 = (ulong)local_70;
    if (local_70 != 0) goto LAB_00e24040;
    lVar8 = FUN_00e13bcc(lVar8,1,uVar2,uVar9,param_1[0x10],&local_70);
    param_1[0x10] = lVar8;
joined_r0x00e23e84:
    uVar4 = (ulong)local_70;
    if (local_70 != 0) goto LAB_00e24040;
    uVar7 = *(uint *)(param_1 + 0xe);
    *(uint *)((long)param_1 + 0x74) = uVar9;
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 1) {
        return 0;
      }
      *param_1 = param_2;
      param_1[1] = param_2 + 0xb40000;
      uVar4 = FUN_00e25b14(param_1,0);
      return uVar4;
    }
    lVar8 = param_1[0xd];
    FT_Vector_From_Polar
              (&local_70,lVar8,
               "_ZN2v88internal8compiler23EffectControlLinearizer24LowerObjectIsNonCallableEPNS1_4NodeE"
               + param_2 + 2);
    FT_Vector_From_Polar(&local_60,lVar8,param_2);
    local_60 = CONCAT44(uStack_6c,local_70) + param_1[2] + local_60;
    lStack_58 = local_68 + param_1[3] + lStack_58;
    if ((char)param_1[0x11] == '\0') {
      uVar7 = *(uint *)(param_1 + 0xe);
      if (uVar7 <= *(uint *)((long)param_1 + 0x8c)) {
LAB_00e23cc0:
        uVar2 = *(uint *)((long)param_1 + 0x74);
        local_44 = 0;
        if (uVar2 < uVar7 + 1) {
          lVar6 = param_1[0x12];
          uVar9 = uVar2;
          do {
            uVar9 = uVar9 + (uVar9 >> 1) + 0x10;
          } while (uVar9 < uVar7 + 1);
          lVar5 = FUN_00e13bcc(lVar6,0x10,uVar2,uVar9,param_1[0xf],&local_44);
          param_1[0xf] = lVar5;
          uVar4 = (ulong)local_44;
          if (local_44 != 0) goto LAB_00e24040;
          lVar6 = FUN_00e13bcc(lVar6,1,uVar2,uVar9,param_1[0x10],&local_44);
          param_1[0x10] = lVar6;
          uVar4 = (ulong)local_44;
          if (local_44 != 0) goto LAB_00e24040;
          uVar7 = *(uint *)(param_1 + 0xe);
          *(uint *)((long)param_1 + 0x74) = uVar9;
        }
        else {
          lVar6 = param_1[0x10];
        }
        plVar3 = (long *)(param_1[0xf] + (ulong)uVar7 * 0x10);
        plVar3[1] = lStack_58;
        *plVar3 = local_60;
        *(undefined1 *)(lVar6 + (ulong)uVar7) = 1;
        *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
        goto LAB_00e23eb4;
      }
      if ((2 < (ulong)((1 - local_60) + *(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10))) ||
         (2 < (ulong)((1 - lStack_58) + *(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10 + 8))))
      goto LAB_00e23cc0;
    }
    else {
      plVar3 = (long *)(param_1[0xf] + (ulong)((int)param_1[0xe] - 1) * 0x10);
      plVar3[1] = lStack_58;
      *plVar3 = local_60;
LAB_00e23eb4:
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    FT_Vector_From_Polar(&local_70,lVar8,param_2 + -0x5a0000);
    FT_Vector_From_Polar(&local_60,lVar8,param_2);
    local_60 = param_1[2] + CONCAT44(uStack_6c,local_70) + local_60;
    lStack_58 = param_1[3] + local_68 + lStack_58;
    if ((char)param_1[0x11] != '\0') {
LAB_00e23f10:
      uVar4 = 0;
      plVar3 = (long *)(param_1[0xf] + (ulong)((int)param_1[0xe] - 1) * 0x10);
      plVar3[1] = lStack_58;
      *plVar3 = local_60;
      goto LAB_00e24040;
    }
    uVar7 = *(uint *)(param_1 + 0xe);
    if (*(uint *)((long)param_1 + 0x8c) < uVar7) {
      if (((ulong)((1 - local_60) + *(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10)) < 3) &&
         ((ulong)((1 - lStack_58) + *(long *)(param_1[0xf] + (ulong)(uVar7 - 1) * 0x10 + 8)) < 3)) {
        return 0;
      }
    }
    uVar2 = *(uint *)((long)param_1 + 0x74);
    local_44 = 0;
    if (uVar2 < uVar7 + 1) {
      lVar8 = param_1[0x12];
      uVar9 = uVar2;
      do {
        uVar9 = uVar9 + (uVar9 >> 1) + 0x10;
      } while (uVar9 < uVar7 + 1);
      lVar6 = FUN_00e13bcc(lVar8,0x10,uVar2,uVar9,param_1[0xf],&local_44);
      param_1[0xf] = lVar6;
      uVar4 = (ulong)local_44;
      if (local_44 != 0) goto LAB_00e24040;
      lVar8 = FUN_00e13bcc(lVar8,1,uVar2,uVar9,param_1[0x10],&local_44);
      param_1[0x10] = lVar8;
      local_70 = local_44;
      goto joined_r0x00e23e84;
    }
LAB_00e24014:
    lVar8 = param_1[0x10];
  }
  uVar4 = 0;
  plVar3 = (long *)(param_1[0xf] + (ulong)uVar7 * 0x10);
  plVar3[1] = lStack_58;
  *plVar3 = local_60;
  *(undefined1 *)(lVar8 + (ulong)uVar7) = 1;
  *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
LAB_00e24040:
  *(undefined1 *)(param_1 + 0x11) = 0;
  return uVar4;
}

