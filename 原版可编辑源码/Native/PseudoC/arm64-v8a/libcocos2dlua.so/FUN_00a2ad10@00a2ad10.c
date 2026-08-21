
undefined8 FUN_00a2ad10(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
                    /* catch() { ... } // from try @ 00a2acec with catch @ 00a2ad24 */
                    /* try { // try from 00a2ad38 to 00b2af6f has its CatchHandler @ 00a2ad38
                       catch() { ... } // from try @ 00a2ad38 with catch @ 00a2ad38
                       catch() { ... } // from try @ 00a2aff0 with catch @ 00a2ad38 */
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar4 = 1;
  }
  else {
    if (param_1[0x10] == 0) {
      lVar5 = -1;
    }
    else {
      auVar6 = FUN_00a2e828();
      lVar1 = auVar6._0_8_;
      lVar2 = FUN_00a2b908(0,0,param_1[0x10]);
      param_1[0x10] = lVar2;
      lVar3 = *(long *)(lVar2 + 0x18);
      lVar5 = 0;
      if (lVar1 <= lVar3) {
        if ((lVar1 < lVar3) || (auVar6._8_8_ < *(long *)(lVar2 + 0x20))) {
          lVar5 = FUN_00a2e888(lVar3,*(long *)(lVar2 + 0x20),lVar1,auVar6._8_8_);
          if (lVar5 == 0) {
            lVar5 = 1;
          }
          *param_2 = lVar5;
          return 0;
        }
        lVar5 = 0;
      }
    }
    uVar4 = 0;
    *param_2 = lVar5;
  }
  return uVar4;
}

