
void FUN_009ffa44(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  char *pcVar5;
  size_t __n;
  byte *pbVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  double dVar20;
  
  uVar14 = *param_1;
  plVar13 = (long *)param_1[2];
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  bVar9 = *(byte *)((long)param_2 + 0x1f) & 0x1f;
  if (bVar9 == 0xb) {
    iVar1 = lua_type(uVar14,0xffffffff);
    uVar8 = *param_2;
    uVar3 = lua_type(uVar14,0xffffffff);
    uVar7 = lua_typename(uVar14,uVar3);
    FUN_009fa638(uVar14,iVar1 == 5,2,"table expected at field \'%s\', got %s",uVar8,uVar7);
    lVar4 = *plVar13;
    FUN_009fef1c(param_1,param_2[1]);
    FUN_009fa700(uVar14,plVar13,lVar4);
    return;
  }
  if (bVar9 != 0xe) {
    iVar1 = FUN_009fa99c(uVar14,plVar13,0xffffffff);
    uVar7 = lua_typename(uVar14,iVar1);
    uVar15 = *param_2;
                    /* try { // try from 009ffbc0 to 00affbf3 has its CatchHandler @ 009ffcc0 */
    uVar3 = lua_type(uVar14,0xffffffff);
    uVar8 = lua_typename(uVar14,uVar3);
                    /* try { // try from 009ffbf4 to 00affc07 has its CatchHandler @ 009ffc8c */
                    /* try { // try from 009ffc0c to 00affc3f has its CatchHandler @ 009ffc90 */
    FUN_009fa638(uVar14,iVar1 == 0,2,"%s expected for field \'%s\', got %s",uVar7,uVar15,uVar8);
    return;
  }
                    /* try { // try from 009ffa98 to 00affbbf has its CatchHandler @ 009ffa98
                       catch() { ... } // from try @ 009ffa98 with catch @ 009ffa98
                       catch() { ... } // from try @ 009ffc40 with catch @ 009ffa98 */
  iVar1 = lua_type(uVar14,0xffffffff);
  if (iVar1 == 3) {
    dVar20 = (double)lua_tonumber(uVar14,0xffffffff);
    lVar4 = FUN_009f9d60(plVar13,10);
    if (lVar4 == 0) {
      return;
    }
    iVar1 = FUN_009fb0c8(lVar4,(long)dVar20);
    lVar4 = *plVar13 + (long)iVar1;
    goto LAB_009ffadc;
  }
  lVar4 = param_2[1];
  lVar18 = param_1[1];
  pcVar5 = (char *)lua_tolstring(uVar14,0xffffffff,0);
  if (pcVar5 == (char *)0x0) goto LAB_009ffdb8;
  __n = strlen(pcVar5);
  uVar10 = __n >> 5;
                    /* try { // try from 009ffc40 to 00affcdb has its CatchHandler @ 009ffa98 */
  if (uVar10 < __n) {
    uVar17 = __n & 0xffffffff;
    uVar12 = __n;
    do {
      lVar11 = uVar12 - 1;
      uVar16 = (uint)uVar17;
      uVar12 = uVar12 + ~uVar10;
      uVar17 = (ulong)(uVar16 * 0x20 + (uVar16 >> 2) + (uint)(byte)pcVar5[lVar11] ^ uVar16);
    } while (uVar10 < uVar12);
    lVar11 = *(long *)(lVar18 + 0x30);
    if (lVar11 == 0) goto LAB_009ffce0;
LAB_009ffc80:
                    /* catch() { ... } // from try @ 009ffbf4 with catch @ 009ffc8c */
                    /* catch() { ... } // from try @ 009ffc0c with catch @ 009ffc90 */
    plVar19 = *(long **)(lVar11 + (*(int *)(lVar18 + 0x20) - 1 & uVar17) * 8);
                    /* catch() { ... } // from try @ 009ffbc0 with catch @ 009ffcc0 */
    while ((plVar19 != (long *)0x0 &&
           ((((int)uVar17 != (int)plVar19[1] || (__n != ((ulong)plVar19[1] >> 0x20 & 0xffff))) ||
            (iVar2 = memcmp(pcVar5,plVar19 + 2,__n), iVar2 != 0))))) {
      plVar19 = (long *)*plVar19;
    }
  }
  else {
    uVar17 = __n & 0xffffffff;
    lVar11 = *(long *)(lVar18 + 0x30);
    if (lVar11 != 0) goto LAB_009ffc80;
LAB_009ffce0:
    plVar19 = (long *)0x0;
  }
  lVar18 = 0;
  if (plVar19 != (long *)0x0) {
    lVar18 = (long)plVar19 + 0x10;
  }
  if (((lVar4 != 0) && (lVar18 != 0)) && (*(long *)(lVar4 + 0x30) != 0)) {
    uVar17 = *(long *)(lVar4 + 0x30) - 1;
    uVar10 = uVar17 & lVar18 * 0x9e3779b1;
    if ((uVar17 & lVar18 * 0x9e3779b1) == 0) {
      uVar10 = 1;
    }
    for (plVar19 = (long *)(*(long *)(lVar4 + 0x48) +
                           uVar10 * ((ulong)*(uint *)(lVar4 + 0x40) & 0x7fffffff));
        plVar19[1] != lVar18; plVar19 = (long *)((long)plVar19 + *plVar19)) {
      if (*plVar19 == 0) goto LAB_009ffdb8;
    }
    if ((plVar19 != (long *)0x0) && (plVar19[2] != 0)) {
      uVar16 = *(uint *)(plVar19[2] + 0x18);
      pbVar6 = (byte *)FUN_009f9d60(plVar13,5);
      if (pbVar6 == (byte *)0x0) {
        return;
      }
      if (uVar16 >> 7 == 0) {
        bVar9 = (byte)uVar16 & 0x7f;
        lVar4 = 1;
      }
      else {
        *pbVar6 = (byte)uVar16 | 0x80;
        if (uVar16 >> 0xe == 0) {
          bVar9 = (byte)(uVar16 >> 7) & 0x7f;
          lVar4 = 2;
          pbVar6 = pbVar6 + 1;
        }
        else {
          pbVar6[1] = (byte)(uVar16 >> 7) | 0x80;
          if (uVar16 >> 0x15 == 0) {
            bVar9 = (byte)(uVar16 >> 0xe) & 0x7f;
            lVar4 = 3;
            pbVar6 = pbVar6 + 2;
          }
          else {
            bVar9 = (byte)(uVar16 >> 0x1c);
            pbVar6[2] = (byte)(uVar16 >> 0xe) | 0x80;
            if (uVar16 >> 0x1c == 0) {
              bVar9 = (byte)(uVar16 >> 0x15) & 0x7f;
              lVar4 = 4;
              pbVar6 = pbVar6 + 3;
            }
            else {
              pbVar6[3] = (byte)(uVar16 >> 0x15) | 0x80;
              lVar4 = 5;
              pbVar6 = pbVar6 + 4;
            }
          }
        }
      }
      *pbVar6 = bVar9;
      lVar4 = *plVar13 + lVar4;
LAB_009ffadc:
      *plVar13 = lVar4;
      return;
    }
  }
LAB_009ffdb8:
  if (iVar1 == 4) {
    uVar7 = lua_tolstring(uVar14,0xffffffff,0);
    uVar8 = *param_2;
    pcVar5 = "can not encode unknown enum \'%s\' at field \'%s\'";
  }
  else {
    uVar7 = *param_2;
    uVar3 = lua_type(uVar14,0xffffffff);
    uVar8 = lua_typename(uVar14,uVar3);
    pcVar5 = "number/string expected at field \'%s\', got %s";
  }
  FUN_009fa638(uVar14,0,2,pcVar5,uVar7,uVar8);
  return;
}

