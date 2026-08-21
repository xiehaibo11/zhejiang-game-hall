
void FUN_010a6a24(ulong param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010a6a88 with catch @ 010a6a34
                        */
  if (param_1 <= param_2) {
    lVar1 = *(long *)(param_3 + 0x38);
    lVar2 = *(long *)(param_4 + 0x38);
    lVar5 = *(long *)(param_3 + 0x30) - lVar1;
    lVar3 = lVar2 - lVar1;
    lVar6 = *(long *)(param_4 + 0x30) - lVar2;
    if (lVar3 == 0) {
      do {
        lVar2 = lVar6;
        if (*(long *)(param_1 + 0x38) <= lVar1) {
          lVar2 = lVar5;
        }
                    /* try { // try from 010a6a80 to 011a6a87 has its CatchHandler @ 010a6bfc */
        *(long *)(param_1 + 0x30) = lVar2 + *(long *)(param_1 + 0x38);
        param_1 = param_1 + 0x50;
                    /* try { // try from 010a6a88 to 011a6bff has its CatchHandler @ 010a6a34 */
      } while (param_1 <= param_2);
    }
    else if (lVar3 == 0 || lVar2 < lVar1) {
      do {
        lVar4 = *(long *)(param_1 + 0x38);
        if (lVar2 < lVar4) {
          if (lVar4 < lVar1) {
            lVar7 = *(long *)(param_3 + 0x30);
            lVar4 = FT_MulDiv(lVar4 - lVar1,*(long *)(param_4 + 0x30) - lVar7,lVar3);
            lVar4 = lVar4 + lVar7;
          }
          else {
            lVar4 = lVar4 + lVar5;
          }
        }
        else {
          lVar4 = lVar4 + lVar6;
        }
        *(long *)(param_1 + 0x30) = lVar4;
        param_1 = param_1 + 0x50;
      } while (param_1 <= param_2);
    }
    else {
      do {
        lVar4 = *(long *)(param_1 + 0x38);
        if (lVar4 - lVar1 == 0 || lVar4 < lVar1) {
          lVar4 = lVar4 + lVar5;
        }
        else if (lVar4 < lVar2) {
          lVar7 = *(long *)(param_3 + 0x30);
          lVar4 = FT_MulDiv(lVar4 - lVar1,*(long *)(param_4 + 0x30) - lVar7,lVar3);
          lVar4 = lVar4 + lVar7;
        }
        else {
          lVar4 = lVar4 + lVar6;
        }
        *(long *)(param_1 + 0x30) = lVar4;
        param_1 = param_1 + 0x50;
      } while (param_1 <= param_2);
    }
  }
  return;
}

