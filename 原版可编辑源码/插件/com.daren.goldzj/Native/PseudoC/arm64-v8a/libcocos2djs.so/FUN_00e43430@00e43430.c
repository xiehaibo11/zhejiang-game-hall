
int FUN_00e43430(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
                long param_5,int param_6,undefined8 *param_7,long param_8)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long local_b8;
  long local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  int iStack_74;
  undefined8 *local_70;
  undefined8 local_68;
  
  bVar2 = param_6 == 0x3000;
  bVar3 = param_6 == 0x4000;
  local_b0 = 0;
  lVar6 = *(long *)(param_8 + 0x390);
  local_a8 = (undefined8 *)*param_7;
  uVar8 = *local_a8;
  uVar5 = 0x201;
  if (!bVar2 && !bVar3) {
    uVar5 = 0x60;
  }
  local_80 = 0;
  uStack_78 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
  local_68 = 0;
  local_70 = param_1;
  iStack_74 = param_6;
  local_88 = FUN_00e13bcc(uVar8,8,0,uVar5,0,&local_b8);
  uVar1 = local_88;
  if ((int)local_b8 != 0) {
    FUN_00e139fc(uVar8);
    local_88 = 0;
    iVar4 = (int)local_b8;
    uVar1 = local_80;
    uVar5 = uStack_78;
    if ((int)local_b8 != 0) goto LAB_00e43788;
  }
  uStack_78 = uVar5;
  local_80 = uVar1;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[1] = 0xffff0000ffff;
  *param_1 = 0xffff0000ffff;
  param_1[0x1c] = 0xffff0000ffff;
  *(undefined4 *)((long)param_1 + 0x3c) = 2;
  param_1[8] = 0x10000;
  param_1[0xb] = 0x10000;
  param_1[0x22] = 0x2210;
  param_1[2] = 0xffff0000ffff;
  *(undefined4 *)(param_1 + 0x1d) = 0xffff;
  *(undefined4 *)(param_1 + 0x26) = 0xffff;
  uVar5 = 0x201;
  if (!bVar2 && !bVar3) {
    uVar5 = 0x30;
  }
  param_1[6] = 
  "d12FontFreeTypeC1ERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEEfPNS_15LabelLayoutInfoE"
  ;
  param_1[5] = 0xffffffffff9c0000;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  uVar8 = param_4;
  if (*(int *)((long)param_2 + 0x14) == 0) {
    iVar4 = FUN_00e1bb5c(param_4,param_2[4]);
    if ((iVar4 != 0) || (iVar4 = FUN_00e1d5c4(param_4,param_2[5],&local_b0), iVar4 != 0))
    goto LAB_00e43788;
    local_b8 = param_2[5];
LAB_00e43648:
    iVar4 = FUN_00e3f6ac(&local_a8,local_b0,local_b0 + local_b8);
    if (*(int *)((long)param_2 + 0x14) == 0) goto LAB_00e4366c;
LAB_00e435f8:
    if (param_2[7] == 0) {
      uVar8 = *param_2;
      goto LAB_00e4366c;
    }
  }
  else {
    iVar4 = FUN_00e428e8(param_2,param_3,&local_b0,&local_b8);
    if (iVar4 == 0) goto LAB_00e43648;
    if (*(int *)((long)param_2 + 0x14) != 0) goto LAB_00e435f8;
LAB_00e4366c:
    FUN_00e1d86c(uVar8,&local_b0);
  }
  if (iVar4 != 0) goto LAB_00e43788;
  if (*(int *)((long)param_1 + 0xe4) == 0xffff) {
    iVar4 = FUN_00e3f090(param_7,param_1,0,0);
    if (iVar4 != 0) goto LAB_00e43788;
    if ((param_6 != 0x3000) && (param_6 != 0x4000)) {
      iVar4 = *(int *)(*(long *)(param_8 + 0xf0) + 0x74);
      if (iVar4 == -1) {
        lVar7 = *(long *)(param_8 + 0xb0);
        iVar4 = *(int *)(lVar7 + 0x60);
        *(int *)(param_1 + 0x98) = iVar4;
        if (iVar4 != 0) {
          do {
            iVar4 = (**(code **)(lVar6 + 0x28))();
            *(int *)(lVar7 + 0x60) = iVar4;
          } while (iVar4 < 0);
          goto LAB_00e43710;
        }
      }
      else {
        *(int *)(param_1 + 0x98) = iVar4;
        if (iVar4 != 0) {
          do {
            iVar4 = (**(code **)(lVar6 + 0x28))();
            *(int *)(*(long *)(param_8 + 0xf0) + 0x74) = iVar4;
          } while (iVar4 < 0);
LAB_00e43710:
          if (*(int *)(param_1 + 0x98) != 0) goto LAB_00e43720;
        }
      }
      *(int *)(param_1 + 0x98) = (int)param_1[0x7e];
    }
LAB_00e43720:
    if (param_1[0x7f] != 0) {
      iVar4 = FUN_00e1bb5c(param_4,param_1[0x7f] + param_5 + param_1[0x19]);
      if (iVar4 == 0) {
        iVar4 = FUN_00e42ef0(param_1 + 0x8f,param_4,1,bVar2 || bVar3);
        if (iVar4 == 0) {
          iVar4 = FUN_00e430a8(param_1 + 0x8f,param_1 + 0x97,0,0);
        }
      }
      goto LAB_00e43788;
    }
  }
  iVar4 = 0;
LAB_00e43788:
  FUN_00e139fc(*local_a8,local_88);
  return iVar4;
}

