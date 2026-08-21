
/* dtMergeCorridorEndMoved(unsigned int*, int, int, unsigned int const*, int) */

int dtMergeCorridorEndMoved(uint *param_1,int param_2,int param_3,uint *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  
  if (0 < param_2) {
    lVar9 = 0;
    iVar8 = -1;
    iVar10 = -1;
    do {
      if (param_5 < 1) {
        bVar3 = false;
      }
      else {
        bVar3 = false;
        lVar6 = (long)param_5;
        iVar7 = iVar8;
        iVar2 = param_5;
        do {
          iVar2 = iVar2 + -1;
          lVar4 = lVar6 + -1;
          lVar6 = lVar6 + -1;
          iVar8 = (int)lVar9;
          iVar5 = iVar2;
          if (param_1[lVar9] != param_4[lVar4]) {
            iVar8 = iVar7;
            iVar5 = iVar10;
          }
          iVar10 = iVar5;
          bVar3 = (bool)(bVar3 | param_1[lVar9] == param_4[lVar4]);
          iVar7 = iVar8;
        } while (0 < lVar6);
      }
      lVar9 = lVar9 + 1;
    } while ((lVar9 < param_2) && (!bVar3));
    if ((iVar10 != -1) && (iVar8 != -1)) {
      iVar8 = iVar8 + 1;
      uVar1 = param_5 - (iVar10 + 1);
      if (param_3 - iVar8 <= (int)uVar1) {
        uVar1 = param_3 - iVar8;
      }
      if (uVar1 != 0) {
        memcpy(param_1 + iVar8,param_4 + (iVar10 + 1),
               -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
      }
      param_2 = uVar1 + iVar8;
    }
  }
  return param_2;
}

