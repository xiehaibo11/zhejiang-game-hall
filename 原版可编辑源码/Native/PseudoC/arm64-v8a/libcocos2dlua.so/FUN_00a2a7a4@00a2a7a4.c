
ulong FUN_00a2a7a4(long param_1,ulong param_2,int param_3,uint param_4,undefined4 *param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  _union_1457 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  char local_78;
  _union_1457 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong local_48;
  
  auVar11 = FUN_00a2e828();
  if ((param_2 & 1) != 0) {
    uVar1 = FUN_00a28850(param_1,param_5);
    if (uVar1 == 1) {
      return 1;
    }
    for (plVar6 = *(long **)(param_1 + 8); plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
      FUN_00a27b08(param_1,plVar6);
    }
    return (ulong)uVar1;
  }
  if (param_3 == -1) {
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    goto LAB_00a2a984;
  }
  local_98._0_4_ = param_3;
  plVar6 = (long *)FUN_00a4b04c(param_1 + 0x88,&local_98,4);
  if (plVar6 == (long *)0x0) {
    uVar9 = 0;
    goto LAB_00a2a984;
  }
  lVar10 = *plVar6;
  if (*(int *)(lVar10 + 0x8e60) != -0x3f212453) {
    return 4;
  }
  lVar5 = *(long *)(lVar10 + 0x10);
  if (lVar5 == 0) {
LAB_00a2a8b8:
    lVar5 = *(long *)(lVar10 + 0x10);
  }
  else {
    if ((((param_4 >> 1 & 1) == 0) || (*(long **)(lVar5 + 0x478) == (long *)0x0)) ||
       (plVar6 = (long *)**(long **)(lVar5 + 0x478), plVar6 == (long *)0x0)) {
      if ((((param_4 & 1) != 0) && (*(long **)(lVar5 + 0x480) != (long *)0x0)) &&
         (plVar6 = (long *)**(long **)(lVar5 + 0x480), plVar6 != (long *)0x0)) {
        lVar10 = *plVar6;
      }
      goto LAB_00a2a8b8;
    }
    lVar10 = *plVar6;
    lVar5 = *(long *)(lVar10 + 0x10);
  }
  if ((lVar5 != 0) && ((*(byte *)(*(long *)(lVar5 + 0x400) + 0x7c) >> 3 & 1) == 0)) {
    *(uint *)(lVar5 + 0x6f8) = param_4;
  }
  local_78 = *(char *)(lVar10 + 0x63c);
  if (local_78 == '\0') {
    uStack_80 = 0;
    local_88 = 0;
    uStack_90 = 0;
    local_98.sa_handler = (__sighandler_t)0x0;
    sigaction(0xd,(sigaction *)0x0,(sigaction *)&local_98);
    local_70.sa_handler = local_98.sa_handler;
    uStack_58 = uStack_80;
    uStack_60 = local_88;
    uStack_68 = 1;
    sigaction(0xd,(sigaction *)&local_70,(sigaction *)0x0);
  }
  uVar2 = FUN_00a28a88(param_1,auVar11._0_8_,auVar11._8_8_,lVar10);
  uVar9 = uVar2 & 0xffffffff;
  uVar3 = uVar2;
  if (local_78 == '\0') {
    uVar1 = sigaction(0xd,(sigaction *)&local_98,(sigaction *)0x0);
    uVar3 = (ulong)uVar1;
  }
  lVar5 = *(long *)(lVar10 + 0x10);
  if ((lVar5 != 0) && ((*(byte *)(*(long *)(lVar5 + 0x400) + 0x7c) >> 3 & 1) == 0)) {
    *(undefined4 *)(lVar5 + 0x6f8) = 0;
  }
  if ((int)uVar2 < 1) {
    uVar3 = FUN_00a27b08(param_1,lVar10);
  }
  auVar11 = FUN_00a2e828(uVar3);
LAB_00a2a984:
  uVar8 = auVar11._8_8_;
  uVar7 = auVar11._0_8_;
  lVar10 = 0;
  do {
    if (lVar10 != 0) {
      local_78 = *(char *)(lVar10 + 0x63c);
      if (local_78 == '\0') {
        uStack_80 = 0;
        local_88 = 0;
        uStack_90 = 0;
        local_98.sa_handler = (__sighandler_t)0x0;
        sigaction(0xd,(sigaction *)0x0,(sigaction *)&local_98);
        local_70.sa_handler = local_98.sa_handler;
        uStack_58 = uStack_80;
        uStack_60 = local_88;
        uStack_68 = 1;
        sigaction(0xd,(sigaction *)&local_70,(sigaction *)0x0);
      }
      uVar1 = FUN_00a28a88(param_1,uVar7,uVar8,lVar10);
      uVar9 = (ulong)uVar1;
      if (local_78 == '\0') {
        sigaction(0xd,(sigaction *)&local_98,(sigaction *)0x0);
      }
      if ((int)uVar1 < 1) {
        FUN_00a27b08(param_1,lVar10);
      }
    }
    uVar4 = FUN_00a2baf4(uVar7,uVar8,*(undefined8 *)(param_1 + 0x80),&local_48);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
    if (local_48 == 0) break;
    lVar10 = *(long *)(local_48 + 0x28);
    FUN_00a29d58(uVar7,uVar8,param_1,lVar10);
  } while (local_48 != 0);
  *param_5 = *(undefined4 *)(param_1 + 0x1c);
  return uVar9;
}

