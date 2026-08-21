
undefined4
FUN_00a1a5c0(long *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,long param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  uint local_94;
  _union_1457 local_88;
  code *pcStack_80;
  ulong local_78;
  ulong uStack_70;
  byte local_64;
  code *pcStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  local_64 = 0;
  local_94 = 0;
  lVar5 = *param_1;
  *param_4 = 0;
  if (param_5 < 0) {
    return 0xfffffffe;
  }
  if ((*(char *)(lVar5 + 0x63c) != '\0') || (param_5 == 0)) {
    uVar1 = FUN_00a1a458(param_1,param_2,param_3,param_4);
    return uVar1;
  }
  if (param_5 < 1000) {
    FUN_00a23020(lVar5,"remaining timeout of %ld too small to resolve via SIGALRM method",param_5);
    return 0xfffffffe;
  }
  iVar2 = sigsetjmp(&DAT_01d54390,1);
  if (iVar2 == 0) {
    sigaction(0xe,(sigaction *)0x0,(sigaction *)&local_88);
    pcStack_58 = pcStack_80;
    uStack_48 = uStack_70;
    uStack_50 = local_78;
    local_64 = 1;
    pcStack_80 = FUN_00a1a7e8;
    local_88._0_4_ = local_88._0_4_ & 0xefffffff;
    sigaction(0xe,(sigaction *)&local_88,(sigaction *)0x0);
    uVar3 = FUN_00a16d04(param_5 / 1000);
    local_94 = alarm(uVar3);
    uVar4 = FUN_00a1a458(param_1,param_2,param_3,param_4);
    uVar1 = (undefined4)uVar4;
    if (local_94 != 0) goto joined_r0x00a1a698;
  }
  else {
    FUN_00a23020(lVar5,"name lookup timed out");
    uVar1 = 0xffffffff;
  }
  uVar3 = alarm(0);
  uVar4 = (ulong)uVar3;
joined_r0x00a1a698:
  if ((local_64 & 1) != 0) {
    uVar3 = sigaction(0xe,(sigaction *)&stack0xffffffffffffffa0,(sigaction *)0x0);
    uVar4 = (ulong)uVar3;
  }
  if (local_94 != 0) {
    auVar6 = FUN_00a18e40(uVar4);
    uVar4 = FUN_00a18ea0(auVar6._0_8_,auVar6._8_8_,param_1[0x4a],param_1[0x4b]);
    uVar4 = (ulong)local_94 - uVar4 / 1000;
    if ((uVar4 == 0) || ((uVar4 >> 0x1f != 0 && (-1 < (int)local_94)))) {
      alarm(1);
      FUN_00a23020(lVar5,"Previous alarm fired off!");
      uVar1 = 0xfffffffe;
    }
    else {
      alarm((uint)uVar4);
    }
  }
  return uVar1;
}

