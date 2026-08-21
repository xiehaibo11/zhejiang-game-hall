
undefined4 FUN_00a0f0b4(long param_1)

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
  
                    /* catch() { ... } // from try @ 00a0f004 with catch @ 00a0f0c8 */
                    /* catch() { ... } // from try @ 00a0efdc with catch @ 00a0f0cc */
                    /* catch() { ... } // from try @ 00a0efd4 with catch @ 00a0f0d0 */
                    /* catch() { ... } // from try @ 00a0efb0 with catch @ 00a0f0d4 */
                    /* catch() { ... } // from try @ 00a0efa8 with catch @ 00a0f0d8 */
  if (param_1 == 0) {
    uVar7 = 0x2b;
  }
  else {
                    /* catch() { ... } // from try @ 00a0ef7c with catch @ 00a0f0dc */
                    /* catch() { ... } // from try @ 00a0ef74 with catch @ 00a0f0e0 */
    if (*(long *)(param_1 + 0x60) == 0) {
                    /* catch() { ... } // from try @ 00a0eef0 with catch @ 00a0f104 */
      lVar9 = *(long *)(param_1 + 0x68);
                    /* catch() { ... } // from try @ 00a0f024 with catch @ 00a0f108 */
      if (lVar9 == 0) {
        lVar9 = FUN_00a113b4(1,3);
        if (lVar9 == 0) {
          return 0x1b;
        }
        *(long *)(param_1 + 0x68) = lVar9;
      }
      FUN_00a1479c(lVar9,6,*(undefined8 *)(param_1 + 0x8d8));
      uVar5 = FUN_00a11518(lVar9,param_1);
      if ((int)uVar5 == 0) {
        local_98 = *(char *)(param_1 + 0x63c);
        if (local_98 == '\0') {
                    /* catch() { ... } // from try @ 00a0eeb8 with catch @ 00a0f170 */
                    /* try { // try from 00a0f178 to 00b0f1bf has its CatchHandler @ 00a0f178
                       catch() { ... } // from try @ 00a0f178 with catch @ 00a0f178
                       catch() { ... } // from try @ 00a0f274 with catch @ 00a0f178 */
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
                    /* try { // try from 00a0f1c0 to 00b0f1db has its CatchHandler @ 00a0f328 */
        *(long *)(param_1 + 0x60) = lVar9;
        do {
          local_90.sa_handler = local_90.sa_handler & 0xffffffff00000000;
          auVar10 = FUN_00a18e40(uVar5);
          uVar5 = FUN_00a12a28(lVar9,0,0,1000,&local_64);
          if ((int)uVar5 == 0) {
            if (local_64 == 0) {
                    /* try { // try from 00a0f200 to 00b0f203 has its CatchHandler @ 00a0f324 */
              auVar11 = FUN_00a18e40();
              lVar6 = FUN_00a18ea0(auVar11._0_8_,auVar11._8_8_,auVar10._0_8_,auVar10._8_8_);
              if (10 < lVar6) goto LAB_00a0f238;
              uVar3 = uVar4 + 1;
              if (1 < (int)uVar4) {
                iVar1 = 1 << (ulong)(uVar4 & 0x1f);
                if (8 < (int)uVar4) {
                  iVar1 = 1000;
                }
                FUN_00a15938(iVar1);
              }
            }
            else {
LAB_00a0f238:
              uVar3 = 0;
            }
                    /* try { // try from 00a0f23c to 00b0f243 has its CatchHandler @ 00a0f320 */
            uVar4 = uVar3;
                    /* try { // try from 00a0f244 to 00b0f24f has its CatchHandler @ 00a0f308 */
            uVar5 = FUN_00a12e68(lVar9,&local_90);
          }
          iVar1 = (int)uVar5;
                    /* try { // try from 00a0f258 to 00b0f273 has its CatchHandler @ 00a0f330 */
          if ((local_90._0_4_ == 0 && iVar1 == 0) &&
             (uVar5 = FUN_00a14684(lVar9,&local_64), uVar5 != 0)) {
            uVar7 = *(undefined4 *)(uVar5 + 0x10);
            bVar2 = true;
          }
                    /* try { // try from 00a0f274 to 00b0f37f has its CatchHandler @ 00a0f178 */
        } while ((iVar1 == 0) && (!bVar2));
        uVar8 = 0x1b;
        if (iVar1 != 3) {
          uVar8 = 0x2b;
        }
        if (iVar1 != 0) {
          uVar7 = uVar8;
        }
        FUN_00a119d4(lVar9,param_1);
        if (local_98 == '\0') {
          sigaction(0xd,(sigaction *)&local_b8,(sigaction *)0x0);
        }
      }
      else {
                    /* catch() { ... } // from try @ 00a0ee8c with catch @ 00a0f14c */
        FUN_00a14448(lVar9);
        uVar7 = 0x1b;
                    /* catch() { ... } // from try @ 00a0eecc with catch @ 00a0f154 */
        if ((int)uVar5 != 3) {
          uVar7 = 2;
        }
      }
    }
    else {
                    /* catch() { ... } // from try @ 00a0ef50 with catch @ 00a0f0e4 */
                    /* catch() { ... } // from try @ 00a0ef48 with catch @ 00a0f0e8 */
                    /* catch() { ... } // from try @ 00a0ef24 with catch @ 00a0f0ec */
                    /* catch() { ... } // from try @ 00a0ef1c with catch @ 00a0f0f0 */
      FUN_00a23020(param_1,"easy handle already used in multi handle");
                    /* catch() { ... } // from try @ 00a0eef8 with catch @ 00a0f0f4 */
      uVar7 = 2;
    }
  }
  return uVar7;
}

