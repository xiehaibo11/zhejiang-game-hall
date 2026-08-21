
int FUN_0109fcf4(long param_1,ushort param_2,undefined8 *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  int local_34;
  
  uVar12 = *(undefined8 *)(param_1 + 0xb8);
                    /* try { // try from 0109fd0c to 0119fd0f has its CatchHandler @ 0109fd5c */
  local_34 = 0;
                    /* try { // try from 0109fd10 to 0119fd53 has its CatchHandler @ 0109fcd4 */
  if (*(ushort *)(param_1 + 0x230) != 0) {
    uVar5 = 0;
    bVar2 = false;
    uVar4 = 0xffffffff;
    uVar6 = 0xffffffff;
    puVar11 = (ushort *)(*(long *)(param_1 + 0x248) + 4);
    uVar7 = 0xffffffff;
    uVar9 = 0xffffffff;
    do {
      uVar8 = uVar7;
      uVar10 = uVar9;
                    /* try { // try from 0109fd54 to 0119fd5b has its CatchHandler @ 0109fd5c */
                    /* catch() { ... } // from try @ 0109fd0c with catch @ 0109fd5c
                       catch() { ... } // from try @ 0109fd54 with catch @ 0109fd5c
                       try { // try from 0109fd5c to 0119fd7b has its CatchHandler @ 0109fcd4 */
      if ((puVar11[1] == param_2) && (puVar11[2] != 0)) {
        switch(puVar11[-2]) {
        case 0:
        case 2:
          uVar4 = uVar5;
                    /* try { // try from 0109fd7c to 0119fdc7 has its CatchHandler @ 0109fd7c
                       catch() { ... } // from try @ 0109fd7c with catch @ 0109fd7c
                       catch() { ... } // from try @ 0109fe94 with catch @ 0109fd7c
                       catch() { ... } // from try @ 0109fecc with catch @ 0109fd7c */
          break;
        case 1:
          uVar10 = uVar5;
          if ((*puVar11 != 0) && (uVar8 = uVar5, uVar10 = uVar9, puVar11[-1] != 0)) {
            uVar8 = uVar7;
          }
          break;
        case 3:
          if ((((uVar6 == 0xffffffff) || ((*puVar11 & 0x3ff) == 9)) && (puVar11[-1] < 0xb)) &&
             ((1 << (ulong)(puVar11[-1] & 0x1f) & 0x403U) != 0)) {
                    /* try { // try from 0109fdc8 to 0119fdd3 has its CatchHandler @ 0109ff54 */
            bVar2 = (*puVar11 & 0x3ff) == 9;
            uVar6 = uVar5;
                    /* try { // try from 0109fdd8 to 0119fe1f has its CatchHandler @ 0109ff5c */
          }
        }
      }
      uVar5 = uVar5 + 1;
      puVar11 = puVar11 + 0x10;
      uVar7 = uVar8;
      uVar9 = uVar10;
    } while (uVar5 < *(ushort *)(param_1 + 0x230));
    if ((int)uVar10 < 0) {
      uVar10 = uVar8;
    }
    if (((int)uVar6 < 0) || ((-1 < (int)uVar10 && (!bVar2)))) {
      if ((int)uVar10 < 0) {
        if ((int)uVar4 < 0) goto LAB_0109fe94;
        lVar13 = *(long *)(param_1 + 0x248) + (long)(int)uVar4 * 0x20;
        goto LAB_0109fe88;
      }
      pcVar1 = FUN_010a0228;
      lVar13 = *(long *)(param_1 + 0x248) + (long)(int)uVar10 * 0x20;
                    /* try { // try from 0109fe24 to 0119fe2f has its CatchHandler @ 0109ff10 */
    }
    else {
                    /* try { // try from 0109fe48 to 0119fe4f has its CatchHandler @ 0109ff60 */
      lVar13 = *(long *)(param_1 + 0x248) + (long)(int)uVar6 * 0x20;
      uVar3 = 0;
      if ((10 < *(ushort *)(lVar13 + 2)) ||
         ((1 << (ulong)(*(ushort *)(lVar13 + 2) & 0x1f) & 0x403U) == 0)) goto LAB_0109fe98;
LAB_0109fe88:
                    /* try { // try from 0109fe88 to 0119fe93 has its CatchHandler @ 0109ff18 */
      pcVar1 = FUN_010a0178;
    }
    if (lVar13 != 0) {
      if (*(long *)(lVar13 + 0x18) == 0) {
        uVar14 = *(undefined8 *)(param_1 + 0x250);
                    /* try { // try from 0109fec0 to 0119fecb has its CatchHandler @ 0109ff60 */
                    /* try { // try from 0109fecc to 0119ff87 has its CatchHandler @ 0109fd7c */
        uVar3 = ft_mem_realloc(uVar12,1,0,*(undefined2 *)(lVar13 + 8),0,&local_34);
        *(undefined8 *)(lVar13 + 0x18) = uVar3;
        if (((local_34 != 0) ||
            (local_34 = FT_Stream_Seek(uVar14,*(undefined8 *)(lVar13 + 0x10)), local_34 != 0)) ||
           (local_34 = FT_Stream_Read(uVar14,*(undefined8 *)(lVar13 + 0x18),
                                      *(undefined2 *)(lVar13 + 8)), local_34 != 0)) {
                    /* catch() { ... } // from try @ 0109fe24 with catch @ 0109ff10 */
          ft_mem_free(uVar12,*(undefined8 *)(lVar13 + 0x18));
                    /* catch() { ... } // from try @ 0109fe88 with catch @ 0109ff18 */
          uVar3 = 0;
          *(undefined8 *)(lVar13 + 0x18) = 0;
          *(undefined2 *)(lVar13 + 8) = 0;
          goto LAB_0109fe98;
        }
      }
      uVar3 = (*pcVar1)(lVar13,uVar12);
      goto LAB_0109fe98;
    }
  }
LAB_0109fe94:
                    /* try { // try from 0109fe94 to 0119febf has its CatchHandler @ 0109fd7c */
  uVar3 = 0;
LAB_0109fe98:
  *param_3 = uVar3;
  return local_34;
}

