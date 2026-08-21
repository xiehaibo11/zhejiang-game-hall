
void FUN_00df99f8(undefined8 *param_1,basic_string *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  pbVar13 = (byte *)param_1[2];
  if (pbVar13 == (byte *)param_1[3]) {
    pbVar11 = (byte *)*param_1;
    pbVar12 = (byte *)param_1[1];
    if (pbVar12 < pbVar11 || (long)pbVar12 - (long)pbVar11 == 0) {
      lVar6 = (long)param_1[3] - (long)pbVar11;
      uVar7 = (lVar6 >> 3) * 0x5555555555555556;
      if (lVar6 == 0) {
        uVar7 = 1;
      }
      if (0xaaaaaaaaaaaaaaa < uVar7) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00df97f4 with catch @ 00df9c24 */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar4 = operator_new(uVar7 * 0x18);
      lVar6 = (long)pbVar13 - (long)pbVar12;
      puVar8 = (undefined8 *)((long)pvVar4 + (uVar7 >> 2) * 0x18);
      puVar9 = puVar8;
                    /* try { // try from 00df9b10 to 00ef9b1f has its CatchHandler @ 00df9c28 */
      if (lVar6 != 0) {
                    /* try { // try from 00df9b24 to 00ef9b2b has its CatchHandler @ 00df9be0 */
        puVar10 = (undefined8 *)((long)pvVar4 + (uVar7 >> 2) * 0x18);
                    /* try { // try from 00df9b30 to 00ef9b53 has its CatchHandler @ 00df9bf0 */
        lVar5 = (lVar6 >> 3) * 8;
        do {
          puVar10 = puVar10 + 3;
          uVar15 = *(undefined8 *)(pbVar12 + 8);
          uVar14 = *(undefined8 *)pbVar12;
          lVar5 = lVar5 + -0x18;
          puVar9[2] = *(undefined8 *)(pbVar12 + 0x10);
          puVar9[1] = uVar15;
          *puVar9 = uVar14;
                    /* try { // try from 00df9b54 to 00ef9b63 has its CatchHandler @ 00df9bdc */
          pbVar12[8] = 0;
          pbVar12[9] = 0;
          pbVar12[10] = 0;
          pbVar12[0xb] = 0;
          pbVar12[0xc] = 0;
          pbVar12[0xd] = 0;
          pbVar12[0xe] = 0;
          pbVar12[0xf] = 0;
          pbVar12[0x10] = 0;
          pbVar12[0x11] = 0;
          pbVar12[0x12] = 0;
          pbVar12[0x13] = 0;
          pbVar12[0x14] = 0;
          pbVar12[0x15] = 0;
          pbVar12[0x16] = 0;
          pbVar12[0x17] = 0;
          pbVar12[0] = 0;
          pbVar12[1] = 0;
          pbVar12[2] = 0;
          pbVar12[3] = 0;
          pbVar12[4] = 0;
          pbVar12[5] = 0;
          pbVar12[6] = 0;
          pbVar12[7] = 0;
          puVar9 = puVar10;
          pbVar12 = pbVar12 + 0x18;
                    /* try { // try from 00df9b64 to 00ef9b6b has its CatchHandler @ 00df9bf8 */
        } while (lVar5 != 0);
        pbVar11 = (byte *)*param_1;
        pbVar12 = (byte *)param_1[1];
        pbVar13 = (byte *)param_1[2];
        puVar9 = (undefined8 *)((long)puVar8 + lVar6);
      }
      *param_1 = pvVar4;
      param_1[1] = puVar8;
      param_1[2] = puVar9;
      param_1[3] = (void *)((long)pvVar4 + uVar7 * 0x18);
      if (pbVar13 != pbVar12) {
        bVar2 = pbVar13[-0x18];
        pbVar1 = pbVar13 + -0x18;
        while( true ) {
          pbVar3 = pbVar1;
          if ((bVar2 & 1) != 0) {
            operator_delete(*(void **)(pbVar13 + -8));
                    /* catch() { ... } // from try @ 00df9b54 with catch @ 00df9bdc */
          }
          if (pbVar12 == pbVar3) break;
          bVar2 = pbVar3[-0x18];
          pbVar1 = pbVar3 + -0x18;
          pbVar13 = pbVar3;
        }
      }
                    /* catch() { ... } // from try @ 00df9b24 with catch @ 00df9be0 */
      if (pbVar11 != (byte *)0x0) {
                    /* catch() { ... } // from try @ 00df9a40 with catch @ 00df9be4 */
                    /* catch() { ... } // from try @ 00df9a98 with catch @ 00df9be8 */
        operator_delete(pbVar11);
      }
    }
    else {
      lVar5 = ((long)pbVar12 - (long)pbVar11 >> 3) * -0x5555555555555555;
                    /* try { // try from 00df9a40 to 00ef9a4b has its CatchHandler @ 00df9be4 */
      lVar6 = lVar5 + 2;
      if (-1 < lVar5 + 1) {
        lVar6 = lVar5 + 1;
      }
      lVar6 = lVar6 >> 1;
      if (pbVar12 == pbVar13) {
        pbVar11 = pbVar12 + lVar6 * -0x18;
      }
      else {
        lVar5 = lVar6 * -0x18;
        do {
          pbVar11 = pbVar12 + lVar5;
                    /* try { // try from 00df9a98 to 00ef9aa3 has its CatchHandler @ 00df9be8 */
          if ((*pbVar11 & 1) == 0) {
            (pbVar12 + lVar5)[0] = 0;
            (pbVar12 + lVar5)[1] = 0;
          }
          else {
            **(undefined1 **)(pbVar11 + 0x10) = 0;
            pbVar11[8] = 0;
            pbVar11[9] = 0;
            pbVar11[10] = 0;
            pbVar11[0xb] = 0;
            pbVar11[0xc] = 0;
            pbVar11[0xd] = 0;
            pbVar11[0xe] = 0;
            pbVar11[0xf] = 0;
            if ((*pbVar11 & 1) != 0) {
                    /* try { // try from 00df9ab0 to 00ef9adb has its CatchHandler @ 00df9c58 */
              operator_delete(*(void **)(pbVar11 + 0x10));
              pbVar1 = pbVar12 + lVar5;
              pbVar1[0] = 0;
              pbVar1[1] = 0;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              pbVar1[4] = 0;
              pbVar1[5] = 0;
              pbVar1[6] = 0;
              pbVar1[7] = 0;
            }
          }
          uVar15 = *(undefined8 *)(pbVar12 + 8);
          uVar14 = *(undefined8 *)pbVar12;
          *(undefined8 *)(pbVar11 + 0x10) = *(undefined8 *)(pbVar12 + 0x10);
          *(undefined8 *)(pbVar11 + 8) = uVar15;
          *(undefined8 *)pbVar11 = uVar14;
          pbVar12[8] = 0;
          pbVar12[9] = 0;
          pbVar12[10] = 0;
          pbVar12[0xb] = 0;
          pbVar12[0xc] = 0;
          pbVar12[0xd] = 0;
          pbVar12[0xe] = 0;
          pbVar12[0xf] = 0;
          pbVar12[0x10] = 0;
          pbVar12[0x11] = 0;
          pbVar12[0x12] = 0;
          pbVar12[0x13] = 0;
          pbVar12[0x14] = 0;
          pbVar12[0x15] = 0;
          pbVar12[0x16] = 0;
          pbVar12[0x17] = 0;
          pbVar11 = pbVar12 + 0x18;
          pbVar12[0] = 0;
          pbVar12[1] = 0;
          pbVar12[2] = 0;
          pbVar12[3] = 0;
          pbVar12[4] = 0;
          pbVar12[5] = 0;
          pbVar12[6] = 0;
          pbVar12[7] = 0;
          pbVar12 = pbVar11;
                    /* try { // try from 00df9a8c to 00ef9a8f has its CatchHandler @ 00df9c58 */
        } while (pbVar13 != pbVar11);
        pbVar13 = (byte *)param_1[1];
        pbVar11 = pbVar11 + lVar6 * -0x18;
      }
                    /* try { // try from 00df9b94 to 00ef9b9f has its CatchHandler @ 00df9d54 */
      param_1[1] = pbVar13 + lVar6 * -0x18;
      param_1[2] = pbVar11;
    }
  }
                    /* catch() { ... } // from try @ 00df9828 with catch @ 00df9bec */
                    /* catch() { ... } // from try @ 00df9b30 with catch @ 00df9bf0 */
                    /* catch() { ... } // from try @ 00df9990 with catch @ 00df9bf4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               param_1[2],param_2);
                    /* catch() { ... } // from try @ 00df9b64 with catch @ 00df9bf8 */
                    /* catch() { ... } // from try @ 00df9940 with catch @ 00df9bfc */
                    /* catch() { ... } // from try @ 00df98f0 with catch @ 00df9c00 */
  param_1[2] = param_1[2] + 0x18;
                    /* catch() { ... } // from try @ 00df9800 with catch @ 00df9c04 */
                    /* catch() { ... } // from try @ 00df98a0 with catch @ 00df9c14 */
  return;
}

