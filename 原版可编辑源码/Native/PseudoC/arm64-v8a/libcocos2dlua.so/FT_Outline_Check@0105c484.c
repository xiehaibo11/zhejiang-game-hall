
undefined8 FT_Outline_Check(short *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  
  if (param_1 != (short *)0x0) {
    sVar1 = param_1[1];
    sVar2 = *param_1;
    if (sVar2 == 0 && sVar1 == 0) {
      return 0;
    }
    iVar4 = sVar1 + -1;
    if ((0 < sVar1) && (0 < sVar2)) {
      if (sVar2 < 1) {
        if (iVar4 != -1) {
          return 6;
        }
      }
      else {
        lVar5 = 0;
        iVar7 = -1;
        do {
                    /* try { // try from 0105c4bc to 0115c4d7 has its CatchHandler @ 0105c5f4 */
          sVar3 = *(short *)(*(long *)(param_1 + 0xc) + lVar5 * 2);
          if ((int)sVar1 <= (int)sVar3) {
            return 6;
          }
          iVar6 = (int)sVar3;
          if (iVar6 <= iVar7) {
            return 6;
          }
          lVar5 = lVar5 + 1;
                    /* try { // try from 0105c4d8 to 0115c62b has its CatchHandler @ 0105c364 */
          iVar7 = iVar6;
        } while (lVar5 < sVar2);
        if (iVar6 != iVar4) {
          return 6;
        }
      }
      return 0;
    }
  }
  return 6;
}

