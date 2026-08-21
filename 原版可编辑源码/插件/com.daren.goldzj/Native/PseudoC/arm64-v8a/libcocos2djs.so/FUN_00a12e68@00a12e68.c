
int FUN_00a12e68(long *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  int iVar9;
  long *plVar10;
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
  
  auVar11 = FUN_00a18e40();
  uVar6 = auVar11._8_8_;
  uVar2 = auVar11._0_8_;
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 == (long *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    do {
      local_78 = *(char *)((long)plVar10 + 0x63c);
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
      iVar1 = FUN_00a130a0(param_1,uVar2,uVar6,plVar10);
      if (local_78 == '\0') {
        sigaction(0xd,(sigaction *)&local_98,(sigaction *)0x0);
      }
      plVar10 = (long *)*plVar10;
      if (iVar1 != 0) {
        iVar9 = iVar1;
      }
    } while (plVar10 != (long *)0x0);
  }
  do {
    lVar3 = FUN_00a1610c(uVar2,uVar6,param_1[0x10],&local_98);
    param_1[0x10] = lVar3;
    if (local_98.sa_handler == (__sighandler_t)0x0) break;
    FUN_00a14370(uVar2,uVar6,param_1,*(undefined8 *)(local_98.sa_handler + 0x28));
  } while (local_98.sa_handler != (__sighandler_t)0x0);
  *param_2 = *(undefined4 *)((long)param_1 + 0x1c);
  if (0 < iVar9) {
    return iVar9;
  }
  if (param_1[0x2c] == 0) {
    return iVar9;
  }
  if (param_1[0x10] == 0) {
LAB_00a1301c:
    if ((param_1[0x2e] == 0) && (param_1[0x2f] == 0)) {
      return iVar9;
    }
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    pcVar8 = (code *)param_1[0x2c];
    lVar3 = param_1[0x2d];
    lVar7 = -1;
  }
  else {
    auVar11 = FUN_00a18e40();
    lVar3 = auVar11._0_8_;
    lVar4 = FUN_00a15f20(0,0,param_1[0x10]);
    param_1[0x10] = lVar4;
    lVar5 = *(long *)(lVar4 + 0x18);
    lVar7 = 0;
    if (lVar3 <= lVar5) {
      if ((lVar3 < lVar5) || (auVar11._8_8_ < *(long *)(lVar4 + 0x20))) {
        lVar7 = FUN_00a18ea0(lVar5,*(long *)(lVar4 + 0x20),lVar3,auVar11._8_8_);
        if (lVar7 == 0) {
          lVar7 = 1;
        }
        else if (lVar7 < 0) goto LAB_00a1301c;
      }
      else {
        lVar7 = 0;
      }
    }
    lVar3 = param_1[0x10];
    if ((*(long *)(lVar3 + 0x18) == param_1[0x2e]) && (*(long *)(lVar3 + 0x20) == param_1[0x2f])) {
      return iVar9;
    }
    lVar4 = *(long *)(lVar3 + 0x18);
    param_1[0x2f] = *(long *)(lVar3 + 0x20);
    param_1[0x2e] = lVar4;
    pcVar8 = (code *)param_1[0x2c];
    lVar3 = param_1[0x2d];
  }
  (*pcVar8)(param_1,lVar7,lVar3);
  return iVar9;
}

