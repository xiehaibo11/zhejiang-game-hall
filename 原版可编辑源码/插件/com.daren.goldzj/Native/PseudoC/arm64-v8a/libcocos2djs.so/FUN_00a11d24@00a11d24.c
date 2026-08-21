
void FUN_00a11d24(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  
  plVar4 = (long *)**(long **)(param_1 + 0x28);
joined_r0x00a11d4c:
  do {
    plVar1 = plVar4;
    if (plVar1 == (long *)0x0) {
      return;
    }
    lVar3 = *plVar1;
    plVar4 = (long *)plVar1[2];
  } while (*(int *)(lVar3 + 0x18) != 1);
  *(undefined4 *)(lVar3 + 0x18) = 2;
  FUN_00a32c00(lVar3);
  FUN_00a34074(*(undefined8 *)(param_1 + 0x28),plVar1,0);
  auVar5 = FUN_00a18e40();
  lVar2 = auVar5._0_8_;
  if (*(long *)(lVar3 + 0x8c58) != 0 || *(long *)(lVar3 + 0x8c50) != 0) goto code_r0x00a11db4;
  goto LAB_00a11dd8;
code_r0x00a11db4:
  if (999999 < auVar5._8_8_) {
    auVar5._8_8_ = auVar5._8_8_ + -1000000;
    auVar5._0_8_ = lVar2 + 1;
  }
  lVar2 = FUN_00a18ea0(auVar5._0_8_,auVar5._8_8_);
  if (lVar2 < 1) {
LAB_00a11dd8:
    FUN_00a11760(lVar3,0);
  }
  goto joined_r0x00a11d4c;
}

