
int FUN_00e3f090(undefined8 *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  int iStack_60;
  undefined4 uStack_5c;
  void *local_58;
  ulong uStack_50;
  int local_44;
  
  lVar4 = param_1[1];
  *(undefined8 **)(param_2 + 0x428) = param_1;
  *(undefined1 *)(param_2 + 0x421) = 0;
  if ((*(long *)(param_2 + 200) == 0) || (*(long *)(param_2 + 0xd0) == 0)) {
    return 0;
  }
  memset((void *)(param_2 + 0x148),0,0x2d0);
  *(long *)(param_2 + 0x418) = param_2;
  *(undefined4 *)(param_2 + 0x450) = param_3;
  *(undefined8 *)(param_2 + 0x2e0) = 1;
  *(undefined4 *)(param_2 + 0x3e0) = 0xffffffff;
  *(undefined8 *)(param_2 + 1000) = 0xf5c;
  *(undefined8 *)(param_2 + 0x2d8) = 7;
  *(undefined8 *)(param_2 + 0x2d0) = 0x27a000;
  *(undefined8 *)(param_2 + 0x458) = param_4;
  if (*(char *)(param_1 + 6) == '\0') {
    iVar2 = 0x61;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xf5) + 1;
  }
  local_90 = (undefined8 *)*param_1;
  uVar5 = *local_90;
  uStack_5c = 0x2000;
  if (*(char *)(param_1 + 6) != '\0') {
    uStack_5c = 0x5000;
  }
  local_68 = 0;
  uStack_70 = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  iStack_60 = 0;
  uStack_50 = (ulong)*(uint *)(param_2 + 0x134);
  local_58 = (void *)(param_2 + 0x148);
  uStack_70 = FUN_00e13bcc(uVar5,8,0,iVar2,0,&local_44);
  uVar1 = uStack_70;
  if (local_44 == 0) {
LAB_00e3f1c8:
    iStack_60 = iVar2;
    local_68 = uVar1;
    iVar2 = FUN_00e1bb5c(lVar4,*(long *)(param_2 + 200) + param_1[3]);
    if ((iVar2 != 0) || (iVar2 = FUN_00e1d718(lVar4,*(undefined8 *)(param_2 + 0xd0)), iVar2 != 0))
    goto LAB_00e3f27c;
    iVar2 = FUN_00e3f6ac(&local_90,*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x48));
    FUN_00e1d90c(lVar4);
    if (iVar2 != 0) goto LAB_00e3f27c;
    lVar4 = *(long *)(param_2 + 0x3f0);
    *(byte *)(param_2 + 0x148) = *(byte *)(param_2 + 0x148) & 0xfe;
    if (lVar4 < 0) {
      *(long *)(param_2 + 0x3f0) = -lVar4;
      uVar3 = *(ulong *)(param_2 + 0x2d8);
joined_r0x00e3f260:
      if (uVar3 < 0x3e9) goto LAB_00e3f264;
LAB_00e3f238:
      *(undefined8 *)(param_2 + 0x2d8) = 7;
      uVar3 = *(ulong *)(param_2 + 0x2e0);
    }
    else {
      if (lVar4 == 0) {
        *(undefined8 *)(param_2 + 0x3f0) = 0x3ade68b1;
        uVar3 = *(ulong *)(param_2 + 0x2d8);
        goto joined_r0x00e3f260;
      }
      if (1000 < *(ulong *)(param_2 + 0x2d8)) goto LAB_00e3f238;
LAB_00e3f264:
      uVar3 = *(ulong *)(param_2 + 0x2e0);
    }
    if (1000 < uVar3) {
      iVar2 = 0;
      *(undefined8 *)(param_2 + 0x2e0) = 1;
      goto LAB_00e3f27c;
    }
  }
  else {
    FUN_00e139fc(uVar5);
    uStack_70 = 0;
    uVar1 = local_68;
    iVar2 = iStack_60;
    if (local_44 == 0) goto LAB_00e3f1c8;
  }
  iVar2 = 0;
LAB_00e3f27c:
  *(undefined4 *)(param_2 + 0x470) = 0;
  *(undefined8 *)(param_2 + 0x468) = *(undefined8 *)(param_2 + 0x460);
  FUN_00e139fc(*local_90,uStack_70);
  return iVar2;
}

