
undefined8
FT_Get_Kerning(long param_1,undefined8 param_2,undefined8 param_3,int param_4,ulong *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  
  if (param_1 == 0) {
    uVar5 = 0x23;
  }
  else if (param_5 == (ulong *)0x0) {
    uVar5 = 6;
  }
  else {
    lVar6 = *(long *)(param_1 + 0xb0);
    *param_5 = 0;
    param_5[1] = 0;
    pcVar7 = *(code **)(*(long *)(lVar6 + 0x18) + 0x98);
    if (pcVar7 != (code *)0x0) {
      uVar5 = (*pcVar7)(param_1,param_2,param_3,param_5);
      if (param_4 == 2) {
        return uVar5;
      }
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      lVar6 = *(long *)(param_1 + 0xa0);
      uVar8 = *param_5;
      uVar10 = param_5[1];
      lVar11 = *(long *)(lVar6 + 0x20);
      uVar9 = -uVar8;
      if (-1 < (long)uVar8) {
        uVar9 = uVar8;
      }
      iVar1 = 1;
      if (-1 >= (long)uVar8) {
        iVar1 = -1;
      }
      lVar3 = -lVar11;
      if (-1 < lVar11) {
        lVar3 = lVar11;
      }
      iVar2 = -iVar1;
      if (-1 < lVar11) {
        iVar2 = iVar1;
      }
      uVar8 = (long)(lVar3 * uVar9 + 0x8000) >> 0x10;
                    /* try { // try from 0105ebb0 to 0115ebe7 has its CatchHandler @ 0105ec40 */
      uVar9 = -uVar8;
      if (-1 < iVar2) {
        uVar9 = uVar8;
      }
      *param_5 = uVar9;
      lVar11 = *(long *)(lVar6 + 0x28);
      uVar8 = -uVar10;
      if (-1 < (long)uVar10) {
        uVar8 = uVar10;
      }
      iVar1 = 1;
      if (-1 >= (long)uVar10) {
        iVar1 = -1;
      }
      lVar3 = -lVar11;
      if (-1 < lVar11) {
        lVar3 = lVar11;
      }
      iVar2 = -iVar1;
      if (-1 < lVar11) {
        iVar2 = iVar1;
      }
      uVar10 = (long)(lVar3 * uVar8 + 0x8000) >> 0x10;
      uVar8 = -uVar10;
      if (-1 < iVar2) {
        uVar8 = uVar10;
      }
                    /* try { // try from 0105ebe8 to 0115ec77 has its CatchHandler @ 0105ea8c */
      param_5[1] = uVar8;
      if (param_4 != 1) {
        if ((ulong)*(ushort *)(lVar6 + 0x18) < 0x19) {
          bVar4 = -1 < (long)uVar9;
          uVar10 = -uVar9;
          if (bVar4) {
            uVar10 = uVar9;
          }
                    /* catch() { ... } // from try @ 0105ebb0 with catch @ 0105ec40 */
          uVar10 = (long)(uVar10 * *(ushort *)(lVar6 + 0x18) + 0xc) / 0x19;
          uVar9 = -uVar10;
          if (bVar4) {
            uVar9 = uVar10;
          }
          *param_5 = uVar9;
        }
        if ((ulong)*(ushort *)(lVar6 + 0x1a) < 0x19) {
          bVar4 = -1 < (long)uVar8;
          uVar10 = -uVar8;
          if (bVar4) {
            uVar10 = uVar8;
          }
          uVar10 = (long)(uVar10 * *(ushort *)(lVar6 + 0x1a) + 0xc) / 0x19;
          uVar8 = -uVar10;
          if (bVar4) {
            uVar8 = uVar10;
          }
          param_5[1] = uVar8;
        }
        *param_5 = uVar9 + 0x20 & 0xffffffffffffffc0;
        param_5[1] = uVar8 + 0x20 & 0xffffffffffffffc0;
        return 0;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}

