
undefined8 FUN_01079ae8(long param_1,long param_2,int param_3,long *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_1 + 0x310);
                    /* try { // try from 01079b04 to 01179b2f has its CatchHandler @ 01079b04
                       catch() { ... } // from try @ 01079b04 with catch @ 01079b04
                       catch() { ... } // from try @ 01079b34 with catch @ 01079b04 */
  if (lVar6 == 0) {
    uVar1 = 6;
  }
  else {
    iVar2 = *(int *)(lVar6 + 0x40);
    if (0 < iVar2) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        lVar3 = *(long *)(lVar6 + 0x38);
                    /* try { // try from 01079b30 to 01179b33 has its CatchHandler @ 01079b44 */
                    /* try { // try from 01079b34 to 01179b57 has its CatchHandler @ 01079b04 */
        if (*(int *)(lVar3 + lVar7) == param_3) {
          lVar4 = lVar3 + lVar7;
          lVar5 = *(long *)(lVar4 + 8);
                    /* catch() { ... } // from try @ 01079b30 with catch @ 01079b44 */
          if (param_2 < lVar5) {
            lVar4 = *(long *)(lVar4 + 0x10);
          }
          else if (*(long *)(lVar4 + 0x18) < param_2) {
            lVar4 = *(long *)(lVar3 + lVar7 + 0x20);
          }
          else {
            lVar3 = lVar3 + lVar7;
            lVar4 = FT_MulDiv(param_2 - lVar5,*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x10),
                              *(long *)(lVar4 + 0x18) - lVar5);
            iVar2 = *(int *)(lVar6 + 0x40);
            lVar4 = *(long *)(lVar3 + 0x10) + lVar4;
          }
          *param_4 = lVar4;
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x28;
      } while (lVar8 < iVar2);
    }
    uVar1 = 0;
  }
  return uVar1;
}

