
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
  uint uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  
  iVar2 = *param_5 * 3 + param_5[4];
  if ((param_2[4] == 0) || (param_2[5] != 2)) {
    uVar8 = (uint)*(short *)(mp3_sfBandIndex + (long)(param_2[0xd] + 1) * 2 + (long)iVar2 * 0x4a);
    uVar16 = (uint)*(short *)(mp3_sfBandIndex +
                             (ulong)(param_2[0xd] + param_2[0xe] + 2) * 2 + (long)iVar2 * 0x4a);
  }
  else if (*param_5 == 0) {
    uVar8 = 0x24;
    uVar16 = 0x240;
  }
  else {
    uVar16 = 0x240;
    uVar8 = *(short *)(mp3_sfBandIndex +
                      (long)iVar2 * 0x4a + (long)((param_2[0xd] + 1) / 3) * 2 + 0x2e) * 3;
  }
  uVar11 = param_2[1];
  lVar3 = param_3 + 0x4b68;
  if (0x120 < uVar11) {
    uVar11 = 0x120;
    param_2[1] = 0x120;
  }
  uVar10 = uVar11 << 1;
  if (uVar16 < uVar10) {
    piVar4 = (int *)(param_3 + (ulong)(uint)param_2[7] * 0x10 + 0x6b98);
    pcVar6 = pvmp3_huffman_pair_decoding;
    if (*piVar4 != 0) {
      pcVar6 = pvmp3_huffman_pair_decoding_linbits;
    }
    if ((int)uVar8 < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      lVar14 = param_1;
      do {
        (*pcVar6)(piVar4,lVar14,lVar3);
        uVar12 = uVar12 + 2;
        lVar14 = lVar14 + 8;
      } while ((long)uVar12 < (long)(int)uVar8);
    }
    piVar4 = (int *)(param_3 + (ulong)(uint)param_2[8] * 0x10 + 0x6b98);
    pcVar6 = pvmp3_huffman_pair_decoding;
    if (*piVar4 != 0) {
      pcVar6 = pvmp3_huffman_pair_decoding_linbits;
    }
    if ((int)uVar12 < (int)uVar16) {
      uVar15 = uVar12 & 0xffffffff;
      lVar14 = param_1 + (uVar12 & 0xffffffff) * 4;
      do {
        (*pcVar6)(piVar4,lVar14,lVar3);
        uVar15 = uVar15 + 2;
        lVar14 = lVar14 + 8;
      } while ((long)uVar15 < (long)(int)uVar16);
      uVar12 = uVar15 & 0xffffffff;
    }
    piVar4 = (int *)(param_3 + (ulong)(uint)param_2[9] * 0x10 + 0x6b98);
    pcVar6 = pvmp3_huffman_pair_decoding;
    if (*piVar4 != 0) {
      pcVar6 = pvmp3_huffman_pair_decoding_linbits;
    }
    if ((uint)(param_2[1] << 1) <= (uint)uVar12) goto LAB_00ec34d4;
    uVar15 = uVar12 & 0xffffffff;
    lVar14 = param_1 + (uVar12 & 0xffffffff) * 4;
    do {
      (*pcVar6)(piVar4,lVar14,lVar3);
      uVar15 = uVar15 + 2;
      lVar14 = lVar14 + 8;
    } while (uVar15 < (uint)(param_2[1] << 1));
  }
  else {
    piVar4 = (int *)(param_3 + (ulong)(uint)param_2[7] * 0x10 + 0x6b98);
    pcVar6 = pvmp3_huffman_pair_decoding;
    if (*piVar4 != 0) {
      pcVar6 = pvmp3_huffman_pair_decoding_linbits;
    }
    if (uVar10 <= uVar8) {
      if ((uVar11 & 0x7fffffff) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        lVar14 = param_1;
        do {
          (*pcVar6)(piVar4,lVar14,lVar3);
          uVar12 = uVar12 + 2;
          lVar14 = lVar14 + 8;
        } while (uVar12 < (uint)(param_2[1] << 1));
      }
      goto LAB_00ec34d4;
    }
    if ((int)uVar8 < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      lVar14 = param_1;
      do {
        (*pcVar6)(piVar4,lVar14,lVar3);
        uVar12 = uVar12 + 2;
        lVar14 = lVar14 + 8;
      } while ((long)uVar12 < (long)(int)uVar8);
      uVar10 = param_2[1] << 1;
    }
    piVar4 = (int *)(param_3 + (ulong)(uint)param_2[8] * 0x10 + 0x6b98);
    pcVar6 = pvmp3_huffman_pair_decoding;
    if (*piVar4 != 0) {
      pcVar6 = pvmp3_huffman_pair_decoding_linbits;
    }
    if (uVar10 <= (uint)uVar12) goto LAB_00ec34d4;
    uVar15 = uVar12 & 0xffffffff;
    lVar14 = param_1 + (uVar12 & 0xffffffff) * 4;
    do {
      (*pcVar6)(piVar4,lVar14,lVar3);
      uVar15 = uVar15 + 2;
      lVar14 = lVar14 + 8;
    } while (uVar15 < (uint)(param_2[1] << 1));
  }
  uVar12 = uVar15 & 0xffffffff;
LAB_00ec34d4:
  puVar5 = (uint *)(param_3 + 0x4b70);
  uVar16 = *param_2 + param_4;
  bVar7 = *puVar5 < uVar16;
  uVar8 = (uint)uVar12;
  lVar14 = param_3 + (ulong)(param_2[0x11] + 0x20) * 0x10 + 0x6b98;
  if (((int)uVar8 < 0x23c) && (*puVar5 < uVar16)) {
    lVar9 = (long)(int)uVar8;
    lVar13 = param_1 + (long)(int)uVar8 * 4;
    do {
      lVar9 = lVar9 + 4;
      pvmp3_huffman_quad_decoding(lVar14,lVar13,lVar3);
      uVar8 = (int)uVar12 + 4;
      uVar12 = (ulong)uVar8;
      bVar7 = *puVar5 < uVar16;
      if (0x23b < lVar9) break;
      lVar13 = lVar13 + 0x10;
    } while (*puVar5 < uVar16);
  }
  if (((int)uVar8 < 0x240) && (bVar7)) {
    pvmp3_huffman_quad_decoding(lVar14,param_1 + (long)(int)uVar8 * 4,lVar3);
    uVar12 = (long)(int)uVar8 + 2;
    if ((int)uVar12 < 0x240) {
      uVar12 = (ulong)(uVar8 + 4);
    }
    else {
      *(undefined4 *)(param_1 + uVar12 * 4) = 0;
      *(undefined4 *)(param_1 + (long)(int)uVar8 * 4 + 0xc) = 0;
    }
  }
  else {
    uVar12 = (ulong)uVar8;
  }
  if (uVar16 < *puVar5) {
    uVar11 = (int)uVar12 - 4;
    uVar8 = 0;
    if (uVar11 < 0x23d) {
      uVar8 = uVar11;
    }
    puVar1 = (undefined8 *)(param_1 + (long)(int)uVar8 * 4);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *puVar5 = uVar16;
  return;
}

