
void pvmp3_huffman_parsing(long param_1,int *param_2,long param_3,int param_4,int *param_5)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  uint *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  
  iVar2 = *param_5 * 3 + param_5[4];
  if ((param_2[4] == 0) || (param_2[5] != 2)) {
    uVar13 = (uint)*(short *)(mp3_sfBandIndex + (long)(param_2[0xd] + 1) * 2 + (long)iVar2 * 0x4a);
    uVar15 = (uint)*(short *)(mp3_sfBandIndex +
                             (ulong)(param_2[0xd] + param_2[0xe] + 2) * 2 + (long)iVar2 * 0x4a);
  }
  else if (*param_5 == 0) {
    uVar13 = 0x24;
    uVar15 = 0x240;
  }
  else {
    uVar15 = 0x240;
    uVar13 = *(short *)(mp3_sfBandIndex +
                       (long)iVar2 * 0x4a + (long)((param_2[0xd] + 1) / 3) * 2 + 0x2e) * 3;
  }
  uVar10 = param_2[1];
  lVar3 = param_3 + 0x4b68;
  if (0x120 < uVar10) {
    uVar10 = 0x120;
    param_2[1] = 0x120;
  }
  uVar8 = uVar10 << 1;
  if (uVar15 < uVar8) {
    piVar4 = (int *)(param_3 + (ulong)(uint)param_2[7] * 0x10 + 0x6b98);
    pcVar6 = pvmp3_huffman_pair_decoding;
    if (*piVar4 != 0) {
      pcVar6 = pvmp3_huffman_pair_decoding_linbits;
    }
    if ((int)uVar13 < 1) {
      uVar14 = 0;
    }
    else {
      lVar11 = 0;
      lVar12 = param_1;
      do {
        (*pcVar6)(piVar4,lVar12,lVar3);
        lVar11 = lVar11 + 2;
        lVar12 = lVar12 + 8;
      } while (lVar11 < (int)uVar13);
      uVar14 = (ulong)(uVar13 + 1 & 0xfffffffe);
    }
    piVar4 = (int *)(param_3 + (ulong)(uint)param_2[8] * 0x10 + 0x6b98);
    pcVar6 = pvmp3_huffman_pair_decoding;
    if (*piVar4 != 0) {
      pcVar6 = pvmp3_huffman_pair_decoding_linbits;
    }
    uVar13 = (uint)uVar14;
    if ((int)uVar13 < (int)uVar15) {
      lVar11 = param_1 + uVar14 * 4;
      do {
        (*pcVar6)(piVar4,lVar11,lVar3);
        uVar14 = uVar14 + 2;
        lVar11 = lVar11 + 8;
      } while ((long)uVar14 < (long)(int)uVar15);
      uVar14 = (ulong)((uVar15 + ~uVar13 & 0xfffffffe) + uVar13 + 2);
    }
    piVar4 = (int *)(param_3 + (ulong)(uint)param_2[9] * 0x10 + 0x6b98);
    pcVar6 = pvmp3_huffman_pair_decoding;
    if (*piVar4 != 0) {
      pcVar6 = pvmp3_huffman_pair_decoding_linbits;
    }
    if ((uint)uVar14 < (uint)(param_2[1] << 1)) {
      lVar11 = param_1 + uVar14 * 4;
      do {
        (*pcVar6)(piVar4,lVar11,lVar3);
        uVar14 = uVar14 + 2;
        lVar11 = lVar11 + 8;
      } while (uVar14 < (uint)(param_2[1] << 1));
    }
  }
  else {
    piVar4 = (int *)(param_3 + (ulong)(uint)param_2[7] * 0x10 + 0x6b98);
    pcVar6 = pvmp3_huffman_pair_decoding;
    if (*piVar4 != 0) {
      pcVar6 = pvmp3_huffman_pair_decoding_linbits;
    }
    if (uVar13 < uVar8) {
      if ((int)uVar13 < 1) {
        uVar14 = 0;
      }
      else {
        lVar11 = 0;
        lVar12 = param_1;
        do {
          (*pcVar6)(piVar4,lVar12,lVar3);
          lVar11 = lVar11 + 2;
          lVar12 = lVar12 + 8;
        } while (lVar11 < (int)uVar13);
        uVar14 = (ulong)(uVar13 + 1 & 0xfffffffe);
        uVar8 = param_2[1] << 1;
      }
      piVar4 = (int *)(param_3 + (ulong)(uint)param_2[8] * 0x10 + 0x6b98);
      pcVar6 = pvmp3_huffman_pair_decoding;
      if (*piVar4 != 0) {
        pcVar6 = pvmp3_huffman_pair_decoding_linbits;
      }
      if ((uint)uVar14 < uVar8) {
        lVar11 = param_1 + uVar14 * 4;
        do {
          (*pcVar6)(piVar4,lVar11,lVar3);
          uVar14 = uVar14 + 2;
          lVar11 = lVar11 + 8;
        } while (uVar14 < (uint)(param_2[1] << 1));
      }
    }
    else if ((uVar10 & 0x7fffffff) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      lVar11 = param_1;
      do {
        (*pcVar6)(piVar4,lVar11,lVar3);
        uVar14 = uVar14 + 2;
        lVar11 = lVar11 + 8;
      } while (uVar14 < (uint)(param_2[1] << 1));
    }
  }
  puVar5 = (uint *)(param_3 + 0x4b70);
  uVar15 = *param_2 + param_4;
  bVar7 = *puVar5 < uVar15;
  uVar13 = (uint)uVar14;
  lVar11 = param_3 + (ulong)(param_2[0x11] + 0x20) * 0x10 + 0x6b98;
  if (((int)uVar13 < 0x23c) && (*puVar5 < uVar15)) {
    lVar9 = (long)(int)uVar13;
    lVar12 = param_1 + (long)(int)uVar13 * 4;
    do {
      lVar9 = lVar9 + 4;
      pvmp3_huffman_quad_decoding(lVar11,lVar12,lVar3);
      uVar13 = (int)uVar14 + 4;
      uVar14 = (ulong)uVar13;
      bVar7 = *puVar5 < uVar15;
      if (0x23b < lVar9) break;
      lVar12 = lVar12 + 0x10;
    } while (*puVar5 < uVar15);
  }
  if (((int)uVar13 < 0x240) && (bVar7)) {
    pvmp3_huffman_quad_decoding(lVar11,param_1 + (long)(int)uVar13 * 4,lVar3);
    uVar14 = (long)(int)uVar13 + 2;
    if ((int)uVar14 < 0x240) {
      uVar14 = (ulong)(uVar13 + 4);
    }
    else {
      *(undefined4 *)(param_1 + uVar14 * 4) = 0;
      *(undefined4 *)(param_1 + (long)(int)uVar13 * 4 + 0xc) = 0;
    }
  }
  else {
    uVar14 = (ulong)uVar13;
  }
  if (uVar15 < *puVar5) {
    uVar10 = (int)uVar14 - 4;
    uVar13 = 0;
    if (uVar10 < 0x23d) {
      uVar13 = uVar10;
    }
    puVar1 = (undefined8 *)(param_1 + (long)(int)uVar13 * 4);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *puVar5 = uVar15;
  return;
}

