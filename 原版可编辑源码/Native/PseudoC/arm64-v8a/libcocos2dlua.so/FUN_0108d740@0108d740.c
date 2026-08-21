
int FUN_0108d740(byte *param_1,byte *param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int local_44;
  
  local_44 = 0;
  iVar10 = 0;
  if (param_3[0xd] == 0) {
    pbVar11 = param_1 + 1;
    if (pbVar11 <= param_2) {
      bVar6 = *param_1;
      uVar4 = bVar6 & 0xf;
      bVar7 = bVar6 >> 4;
      iVar10 = uVar4 + bVar7;
      if (pbVar11 + (uint)(iVar10 * 2) <= param_2) {
        pbVar8 = (byte *)ft_mem_realloc(*param_3,4,0,iVar10,0,&local_44);
        if (local_44 != 0) {
          return local_44;
        }
        param_3[0xd] = pbVar8;
        param_3[0xb] = pbVar8 + (ulong)uVar4 * 4;
        if (iVar10 != 0) {
                    /* try { // try from 0108d7f8 to 0118d82b has its CatchHandler @ 0108d7f8
                       catch() { ... } // from try @ 0108d7f8 with catch @ 0108d7f8
                       catch() { ... } // from try @ 0108d888 with catch @ 0108d7f8 */
          uVar3 = (ulong)((bVar7 + uVar4) - 1) + 1;
          if (3 < uVar3) {
            uVar5 = (uint)bVar7 + (uint)bVar6 & 3;
            lVar12 = uVar3 - uVar5;
                    /* try { // try from 0108d82c to 0118d83b has its CatchHandler @ 0108d978 */
            if ((lVar12 != 0) &&
               ((uVar4 = (bVar7 + uVar4) - 1, param_1 + (ulong)uVar4 * 2 + 3 <= pbVar8 ||
                (pbVar8 + (ulong)uVar4 * 4 + 4 <= pbVar11)))) {
              lVar1 = lVar12 * 2;
                    /* try { // try from 0108d87c to 0118d887 has its CatchHandler @ 0108d904 */
              lVar2 = lVar12 * 4;
              iVar10 = iVar10 - (int)lVar12;
              pbVar9 = pbVar8;
              pbVar13 = pbVar11;
              do {
                    /* try { // try from 0108d888 to 0118d993 has its CatchHandler @ 0108d7f8 */
                uVar14 = *(undefined8 *)pbVar13;
                lVar12 = lVar12 + -4;
                uVar15 = NEON_rev16(uVar14,1);
                *(ulong *)(pbVar9 + 8) =
                     CONCAT44((int)CONCAT11((char)((ulong)uVar14 >> 0x30),
                                            (char)((ulong)uVar15 >> 0x30)),
                              (int)CONCAT11((char)((ulong)uVar14 >> 0x20),
                                            (char)((ulong)uVar15 >> 0x20)));
                *(ulong *)pbVar9 =
                     CONCAT44((int)CONCAT11((char)((ulong)uVar14 >> 0x10),
                                            (char)((ulong)uVar15 >> 0x10)),
                              (int)CONCAT11((char)uVar14,(char)uVar15));
                pbVar9 = pbVar9 + 0x10;
                pbVar13 = pbVar13 + 8;
              } while (lVar12 != 0);
              pbVar11 = pbVar11 + lVar1;
              pbVar8 = pbVar8 + lVar2;
              if (uVar5 == 0) {
                return 0;
              }
            }
          }
          do {
            iVar10 = iVar10 + -1;
            *(int *)pbVar8 = (int)CONCAT11(*pbVar11,pbVar11[1]);
            pbVar11 = pbVar11 + 2;
            pbVar8 = pbVar8 + 4;
          } while (iVar10 != 0);
          return 0;
        }
        return 0;
      }
    }
    iVar10 = 8;
  }
  return iVar10;
}

