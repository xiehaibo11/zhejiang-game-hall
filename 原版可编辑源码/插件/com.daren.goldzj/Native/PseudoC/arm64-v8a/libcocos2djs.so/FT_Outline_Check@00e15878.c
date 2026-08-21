
undefined8 FT_Outline_Check(short *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 != (short *)0x0) {
    sVar1 = param_1[1];
    sVar2 = *param_1;
    if (sVar2 == 0 && sVar1 == 0) {
      return 0;
    }
    if ((0 < sVar1) && (0 < sVar2)) {
      lVar4 = 0;
      iVar5 = -1;
      do {
        sVar3 = *(short *)(*(long *)(param_1 + 0xc) + lVar4 * 2);
        if ((int)sVar1 <= (int)sVar3) {
          return 6;
        }
        iVar6 = (int)sVar3;
        if (iVar6 <= iVar5) {
          return 6;
        }
        lVar4 = lVar4 + 1;
        iVar5 = iVar6;
      } while (lVar4 < sVar2);
      if (sVar1 + -1 == iVar6) {
        return 0;
      }
    }
  }
  return 6;
}

