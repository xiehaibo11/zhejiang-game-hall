
undefined4 FUN_00a24a9c(long param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  _union_1457 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char local_98;
  _union_1457 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int local_64;
  
  if (param_1 == 0) {
    uVar7 = 0x2b;
  }
  else if (*(long *)(param_1 + 0x60) == 0) {
    lVar9 = *(long *)(param_1 + 0x68);
    if (lVar9 == 0) {
      lVar9 = FUN_00a26d9c(1,3);
      if (lVar9 == 0) {
        return 0x1b;
      }
      *(long *)(param_1 + 0x68) = lVar9;
    }
    FUN_00a2a184(lVar9,6,*(undefined8 *)(param_1 + 0x8d8));
    uVar5 = FUN_00a26f00(lVar9,param_1);
    if ((int)uVar5 == 0) {
      local_98 = *(char *)(param_1 + 0x63c);
      if (local_98 == '\0') {
        uStack_a0 = 0;
        local_a8 = 0;
        uStack_b0 = 0;
        local_b8.sa_handler = (__sighandler_t)0x0;
        sigaction(0xd,(sigaction *)0x0,(sigaction *)&local_b8);
        local_90.sa_handler = local_b8.sa_handler;
        uStack_78 = uStack_a0;
        uStack_80 = local_a8;
        uStack_88 = 1;
        uVar4 = sigaction(0xd,(sigaction *)&local_90,(sigaction *)0x0);
        uVar5 = (ulong)uVar4;
      }
      bVar2 = false;
      uVar7 = 0;
      uVar4 = 0;
      *(long *)(param_1 + 0x60) = lVar9;
      do {
        local_90.sa_handler = local_90.sa_handler & 0xffffffff00000000;
        auVar10 = FUN_00a2e828(uVar5);
        uVar5 = FUN_00a28410(lVar9,0,0,1000,&local_64);
        if ((int)uVar5 == 0) {
          if (local_64 == 0) {
            auVar11 = FUN_00a2e828();
            lVar6 = FUN_00a2e888(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,auVar10._8_8_);
            if (10 < lVar6) goto LAB_00a24c20;
            uVar3 = uVar4 + 1;
            if (1 < (int)uVar4) {
              iVar1 = 1 << (ulong)(uVar4 & 0x1f);
              if (8 < (int)uVar4) {
                iVar1 = 1000;
              }
              FUN_00a2b320(iVar1);
            }
          }
          else {
LAB_00a24c20:
            uVar3 = 0;
          }
          uVar4 = uVar3;
          uVar5 = FUN_00a28850(lVar9,&local_90);
        }
        iVar1 = (int)uVar5;
        if ((local_90._0_4_ == 0 && iVar1 == 0) &&
           (uVar5 = FUN_00a2a06c(lVar9,&local_64), uVar5 != 0)) {
          uVar7 = *(undefined4 *)(uVar5 + 0x10);
          bVar2 = true;
        }
      } while ((iVar1 == 0) && (!bVar2));
      uVar8 = 0x1b;
      if (iVar1 != 3) {
        uVar8 = 0x2b;
      }
      if (iVar1 != 0) {
        uVar7 = uVar8;
      }
      FUN_00a273bc(lVar9,param_1);
      if (local_98 == '\0') {
        sigaction(0xd,(sigaction *)&local_b8,(sigaction *)0x0);
      }
    }
    else {
      FUN_00a29e30(lVar9);
      uVar7 = 0x1b;
      if ((int)uVar5 != 3) {
        uVar7 = 2;
      }
    }
  }
  else {
    FUN_00a38a08(param_1,"easy handle already used in multi handle");
    uVar7 = 2;
  }
  return uVar7;
}

