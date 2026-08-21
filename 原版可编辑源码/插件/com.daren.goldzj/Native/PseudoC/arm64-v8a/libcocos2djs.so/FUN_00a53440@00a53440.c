
undefined8 FUN_00a53440(undefined8 param_1,char *param_2,uchar *param_3)

{
  char cVar1;
  size_t sVar2;
  char *data;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  MD4_CTX MStack_a0;
  
  sVar2 = strlen(param_2);
  data = (char *)(*(code *)PTR_malloc_01d1b740)(sVar2 << 1);
  if (data == (char *)0x0) {
    return 0x1b;
  }
  if (sVar2 == 0) goto LAB_00a53564;
                    /* try { // try from 00a53490 to 00b53507 has its CatchHandler @ 00a53208 */
  if (sVar2 < 0x20) {
LAB_00a53498:
                    /* catch() { ... } // from try @ 00a5328c with catch @ 00a53498 */
    uVar5 = 0;
                    /* catch() { ... } // from try @ 00a53280 with catch @ 00a5349c */
  }
  else {
    uVar5 = 0;
    uVar3 = sVar2 & 0xffffffffffffffe0;
                    /* catch() { ... } // from try @ 00a53298 with catch @ 00a534b0 */
    if (uVar3 != 0) {
      uVar8 = sVar2 - 1;
      if (((!CARRY8(uVar8 * 2,(ulong)data)) && (!CARRY8(uVar8,uVar8))) &&
         (!CARRY8(uVar8 * 2,(ulong)(data + 1)))) {
        if ((data < param_2 + sVar2) && (param_2 < data + sVar2 * 2)) goto LAB_00a53498;
        pcVar6 = data + 0x20;
        pcVar7 = param_2 + 0x10;
                    /* try { // try from 00a53508 to 00b5355f has its CatchHandler @ 00a53508
                       catch() { ... } // from try @ 00a53508 with catch @ 00a53508
                       catch() { ... } // from try @ 00a5375c with catch @ 00a53508 */
        uVar5 = uVar3;
        do {
          uVar10 = *(undefined8 *)(pcVar7 + -8);
          uVar9 = *(undefined8 *)(pcVar7 + -0x10);
          uVar12 = *(undefined8 *)(pcVar7 + 8);
          uVar11 = *(undefined8 *)pcVar7;
          uVar5 = uVar5 - 0x20;
          pcVar7 = pcVar7 + 0x20;
          pcVar6[-0x20] = (char)uVar9;
          pcVar6[-0x1f] = '\0';
          pcVar6[-0x1e] = (char)((ulong)uVar9 >> 8);
          pcVar6[-0x1d] = '\0';
          pcVar6[-0x1c] = (char)((ulong)uVar9 >> 0x10);
          pcVar6[-0x1b] = '\0';
          pcVar6[-0x1a] = (char)((ulong)uVar9 >> 0x18);
          pcVar6[-0x19] = '\0';
          pcVar6[-0x18] = (char)((ulong)uVar9 >> 0x20);
          pcVar6[-0x17] = '\0';
          pcVar6[-0x16] = (char)((ulong)uVar9 >> 0x28);
          pcVar6[-0x15] = '\0';
          pcVar6[-0x14] = (char)((ulong)uVar9 >> 0x30);
          pcVar6[-0x13] = '\0';
          pcVar6[-0x12] = (char)((ulong)uVar9 >> 0x38);
          pcVar6[-0x11] = '\0';
          pcVar6[-0x10] = (char)uVar10;
          pcVar6[-0xf] = '\0';
          pcVar6[-0xe] = (char)((ulong)uVar10 >> 8);
          pcVar6[-0xd] = '\0';
          pcVar6[-0xc] = (char)((ulong)uVar10 >> 0x10);
          pcVar6[-0xb] = '\0';
          pcVar6[-10] = (char)((ulong)uVar10 >> 0x18);
          pcVar6[-9] = '\0';
          pcVar6[-8] = (char)((ulong)uVar10 >> 0x20);
          pcVar6[-7] = '\0';
          pcVar6[-6] = (char)((ulong)uVar10 >> 0x28);
          pcVar6[-5] = '\0';
          pcVar6[-4] = (char)((ulong)uVar10 >> 0x30);
          pcVar6[-3] = '\0';
          pcVar6[-2] = (char)((ulong)uVar10 >> 0x38);
          pcVar6[-1] = '\0';
          *pcVar6 = (char)uVar11;
          pcVar6[1] = '\0';
          pcVar6[2] = (char)((ulong)uVar11 >> 8);
          pcVar6[3] = '\0';
          pcVar6[4] = (char)((ulong)uVar11 >> 0x10);
          pcVar6[5] = '\0';
          pcVar6[6] = (char)((ulong)uVar11 >> 0x18);
          pcVar6[7] = '\0';
          pcVar6[8] = (char)((ulong)uVar11 >> 0x20);
          pcVar6[9] = '\0';
          pcVar6[10] = (char)((ulong)uVar11 >> 0x28);
          pcVar6[0xb] = '\0';
          pcVar6[0xc] = (char)((ulong)uVar11 >> 0x30);
          pcVar6[0xd] = '\0';
          pcVar6[0xe] = (char)((ulong)uVar11 >> 0x38);
          pcVar6[0xf] = '\0';
          pcVar6[0x10] = (char)uVar12;
          pcVar6[0x11] = '\0';
          pcVar6[0x12] = (char)((ulong)uVar12 >> 8);
          pcVar6[0x13] = '\0';
          pcVar6[0x14] = (char)((ulong)uVar12 >> 0x10);
          pcVar6[0x15] = '\0';
          pcVar6[0x16] = (char)((ulong)uVar12 >> 0x18);
          pcVar6[0x17] = '\0';
          pcVar6[0x18] = (char)((ulong)uVar12 >> 0x20);
          pcVar6[0x19] = '\0';
          pcVar6[0x1a] = (char)((ulong)uVar12 >> 0x28);
          pcVar6[0x1b] = '\0';
          pcVar6[0x1c] = (char)((ulong)uVar12 >> 0x30);
          pcVar6[0x1d] = '\0';
          pcVar6[0x1e] = (char)((ulong)uVar12 >> 0x38);
          pcVar6[0x1f] = '\0';
          pcVar6 = pcVar6 + 0x40;
        } while (uVar5 != 0);
        uVar5 = uVar3;
        if (sVar2 == uVar3) goto LAB_00a53564;
      }
    }
  }
  lVar4 = sVar2 - uVar5;
  pcVar6 = data + uVar5 * 2 + 1;
  pcVar7 = param_2 + uVar5;
  do {
    cVar1 = *pcVar7;
    *pcVar6 = '\0';
    lVar4 = lVar4 + -1;
    pcVar6[-1] = cVar1;
    pcVar6 = pcVar6 + 2;
                    /* try { // try from 00a53560 to 00b53577 has its CatchHandler @ 00a537dc */
    pcVar7 = pcVar7 + 1;
  } while (lVar4 != 0);
LAB_00a53564:
  MD4_Init(&MStack_a0);
  MD4_Update(&MStack_a0,data,sVar2 << 1);
                    /* try { // try from 00a53580 to 00b5358b has its CatchHandler @ 00a537d8 */
  MD4_Final(param_3,&MStack_a0);
  param_3[0x14] = '\0';
                    /* try { // try from 00a5358c to 00b53597 has its CatchHandler @ 00a537d4 */
  param_3[0x10] = '\0';
  param_3[0x11] = '\0';
  param_3[0x12] = '\0';
  param_3[0x13] = '\0';
                    /* try { // try from 00a53598 to 00b5375b has its CatchHandler @ 00a537ec */
  (*(code *)PTR_free_01d1b748)(data);
  return 0;
}

