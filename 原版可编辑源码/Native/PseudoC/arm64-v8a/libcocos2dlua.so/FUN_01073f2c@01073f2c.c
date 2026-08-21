
long FUN_01073f2c(long param_1,uint *param_2)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  ushort *puVar12;
  short *psVar13;
  int local_54;
  
  uVar9 = *(undefined8 *)(param_1 + 0x38);
  local_54 = 0;
  uVar5 = FT_Stream_GetChar();
  uVar6 = uVar5 & 0xff;
                    /* try { // try from 01073f60 to 01173f67 has its CatchHandler @ 01074028 */
  *param_2 = uVar6;
  if (uVar6 == 0) {
    lVar10 = -1;
  }
  else {
    if (uVar6 >> 7 != 0) {
                    /* try { // try from 01073f70 to 01173f7b has its CatchHandler @ 01074018 */
      uVar6 = FT_Stream_GetChar(param_1);
      uVar6 = uVar6 & 0xff | (uVar5 & 0x7f) << 8;
    }
                    /* try { // try from 01073f90 to 01173f9b has its CatchHandler @ 0107402c */
    lVar8 = ft_mem_realloc(uVar9,2,0,uVar6,0,&local_54);
                    /* try { // try from 01073f9c to 01174073 has its CatchHandler @ 01073e60 */
    lVar10 = 0;
    if ((local_54 == 0) && (lVar10 = lVar8, uVar6 != 0)) {
      iVar11 = 0;
      do {
        uVar7 = FT_Stream_GetChar(param_1);
        uVar5 = uVar7 & 0xff;
        if ((uVar7 >> 7 & 1) == 0) {
          uVar1 = FT_Stream_GetChar(param_1);
          *(ushort *)(lVar8 + (long)iVar11 * 2) = uVar1 & 0xff;
          if (uVar5 == 0) {
            return lVar8;
          }
          if ((int)uVar6 <= (int)(iVar11 + 1 + uVar5)) {
            return lVar8;
          }
          uVar1 = uVar1 & 0xff;
          puVar12 = (ushort *)(lVar8 + (long)(iVar11 + 1) * 2);
          uVar7 = uVar5;
          do {
            uVar2 = FT_Stream_GetChar(param_1);
            uVar1 = uVar1 + (uVar2 & 0xff);
            uVar7 = uVar7 - 1;
            *puVar12 = uVar1;
            puVar12 = puVar12 + 1;
          } while (uVar7 != 0);
        }
        else {
                    /* catch() { ... } // from try @ 01073f70 with catch @ 01074018 */
          uVar5 = uVar7 & 0x7f;
          sVar3 = FT_Stream_GetUShort(param_1);
          *(short *)(lVar8 + (long)iVar11 * 2) = sVar3;
                    /* catch() { ... } // from try @ 01073f60 with catch @ 01074028 */
          if (uVar5 == 0) {
            return lVar8;
          }
                    /* catch() { ... } // from try @ 01073f90 with catch @ 0107402c */
          if ((int)uVar6 <= (int)(uVar5 + iVar11 + 1)) {
            return lVar8;
          }
          psVar13 = (short *)(lVar8 + (long)(iVar11 + 1) * 2);
          uVar7 = uVar5;
          do {
            sVar4 = FT_Stream_GetUShort(param_1);
            sVar3 = sVar3 + sVar4;
            uVar7 = uVar7 - 1;
            *psVar13 = sVar3;
            psVar13 = psVar13 + 1;
          } while (uVar7 != 0);
        }
        iVar11 = iVar11 + 1 + uVar5;
      } while (iVar11 < (int)uVar6);
    }
  }
  return lVar10;
}

