
undefined8 FUN_00a52554(long *param_1,long param_2,ulong param_3)

{
  char cVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar8 = *param_1;
  uVar4 = param_1[0xd2];
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar9 = 0;
    uVar3 = 0;
    lVar10 = 0;
    do {
      cVar1 = *(char *)(param_2 + uVar9);
      if (cVar1 == '\n') {
        uVar6 = uVar4;
        if ((uVar4 != 1) && (uVar4 != 4)) goto LAB_00a52604;
LAB_00a52654:
        uVar6 = uVar6 + 1;
LAB_00a52658:
        param_1[0xd2] = uVar6;
        if (uVar4 < uVar6) goto LAB_00a526b0;
LAB_00a52664:
        lVar7 = param_1[0xd3];
        lVar5 = -uVar4;
        do {
          lVar7 = lVar7 + -1;
          if (lVar7 == -1) {
            uVar2 = FUN_00a391f0(param_1,1,&DAT_013c894b,-lVar5 - lVar10);
                    /* catch() { ... } // from try @ 00a5261c with catch @ 00a526a4 */
            if ((int)uVar2 != 0) {
              return uVar2;
            }
            lVar10 = 0;
            uVar3 = uVar9;
            break;
          }
          param_1[0xd3] = lVar7;
          lVar5 = lVar5 + 1;
        } while (lVar5 != 0);
      }
      else if (cVar1 == '.') {
        if (uVar4 == 2) {
          uVar6 = 2;
          goto LAB_00a52654;
        }
                    /* try { // try from 00a5261c to 00b5262f has its CatchHandler @ 00a526a4 */
        uVar6 = 0;
        if (uVar4 == 3) {
          lVar10 = 1;
          goto LAB_00a52658;
        }
LAB_00a5263c:
        param_1[0xd2] = uVar6;
        if (uVar4 == 0) goto LAB_00a526b0;
LAB_00a52644:
        if (uVar6 <= uVar4) goto LAB_00a52664;
      }
      else {
        if (cVar1 == '\r') {
          if (uVar4 == 3) {
                    /* try { // try from 00a52630 to 00b526df has its CatchHandler @ 00a525d8 */
            uVar6 = 4;
            goto LAB_00a52658;
          }
          if (uVar4 != 0) {
            uVar6 = 1;
            goto LAB_00a5263c;
          }
          param_1[0xd2] = 1;
                    /* try { // try from 00a525d8 to 00b5261b has its CatchHandler @ 00a525d8
                       catch() { ... } // from try @ 00a525d8 with catch @ 00a525d8
                       catch() { ... } // from try @ 00a52630 with catch @ 00a525d8 */
          if ((uVar9 != 0) &&
             (uVar2 = FUN_00a391f0(param_1,1,param_2 + uVar3,uVar9 - uVar3), uVar3 = uVar9,
             (int)uVar2 != 0)) {
            return uVar2;
          }
          goto LAB_00a526b0;
        }
LAB_00a52604:
        uVar6 = 0;
        param_1[0xd2] = 0;
        if (uVar4 != 0) goto LAB_00a52644;
      }
LAB_00a526b0:
      uVar4 = param_1[0xd2];
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
  }
  if (uVar4 == 0) {
    if (param_3 != uVar3) {
      uVar2 = FUN_00a391f0(param_1,1,param_2 + uVar3);
      return uVar2;
    }
  }
  else if (uVar4 == 5) {
    uVar2 = FUN_00a391f0(param_1,1,&DAT_013c894b,2);
    *(uint *)(lVar8 + 0x1e4) = *(uint *)(lVar8 + 0x1e4) & 0xfffffffe;
    param_1[0xd2] = 0;
    return uVar2;
  }
  return 0;
}

