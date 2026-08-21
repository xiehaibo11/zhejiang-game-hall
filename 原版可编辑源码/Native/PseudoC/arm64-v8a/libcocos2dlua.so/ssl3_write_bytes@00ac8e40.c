
uint ssl3_write_bytes(long param_1,int param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  EVP_CIPHER *cipher;
  ulong uVar7;
  int line;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  uint local_e0 [2];
  undefined8 auStack_d8 [15];
  
  if ((int)param_4 < 0) {
    iVar4 = 0x174;
    line = 0x162;
    goto LAB_00ac8ebc;
  }
  uVar12 = *(uint *)(param_1 + 0x10e4);
  *(undefined4 *)(param_1 + 0x28) = 1;
  if (param_4 < uVar12) {
    iVar4 = 0x10f;
    line = 0x172;
    goto LAB_00ac8ebc;
  }
  *(undefined4 *)(param_1 + 0x10e4) = 0;
  iVar4 = SSL_in_init(param_1);
  if ((iVar4 != 0) && (iVar4 = ossl_statem_get_in_handshake(param_1), iVar4 == 0)) {
    uVar5 = (**(code **)(param_1 + 0x30))(param_1);
    if ((int)uVar5 < 0) {
      return uVar5;
    }
    if (uVar5 == 0) {
      iVar4 = 0xe5;
      line = 0x17d;
      goto LAB_00ac8ebc;
    }
  }
  if (*(int *)(param_1 + 0x3f4) != 0) {
    uVar5 = ssl3_write_pending(param_1,param_2,param_3 + (int)uVar12,
                               *(undefined4 *)(param_1 + 0x10fc));
    if ((int)uVar5 < 1) {
      *(uint *)(param_1 + 0x10e4) = uVar12;
      return uVar5;
    }
    uVar12 = uVar5 + uVar12;
  }
  if (uVar12 == param_4) {
    if ((*(byte *)(param_1 + 0x1e8) >> 4 & 1) == 0) {
      return param_4;
    }
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) != 0) {
      return param_4;
    }
    ssl3_release_write_buffer(param_1);
    return param_4;
  }
  uVar5 = *(uint *)(param_1 + 0x210);
  if (0x20 < uVar5) {
    iVar4 = 0x44;
    line = 0x223;
    goto LAB_00ac8ebc;
  }
  uVar2 = *(uint *)(param_1 + 0x208);
  if ((uVar5 == 0) || (*(EVP_CIPHER_CTX **)(param_1 + 0x138) == (EVP_CIPHER_CTX *)0x0)) {
LAB_00ac8fec:
    uVar5 = 1;
  }
  else {
    cipher = EVP_CIPHER_CTX_cipher(*(EVP_CIPHER_CTX **)(param_1 + 0x138));
    uVar7 = EVP_CIPHER_flags(cipher);
    if ((((uint)uVar7 >> 0x17 & 1) == 0) ||
       ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) & 1) == 0)) goto LAB_00ac8fec;
  }
  if (uVar2 - 1 < *(uint *)(param_1 + 0x20c)) {
    param_4 = param_4 - uVar12;
    if (param_2 != 0x17) {
                    /* try { // try from 00ac91e0 to 00bc91f3 has its CatchHandler @ 00ac9278 */
      uStack_108 = 3;
      local_110 = 2;
                    /* try { // try from 00ac91f8 to 00bc922b has its CatchHandler @ 00ac927c */
      uStack_118 = 1;
      local_120 = 0;
      if (param_4 != 0) goto LAB_00ac9228;
LAB_00ac9238:
      uVar6 = 1;
      uVar13 = param_4;
      do {
        uVar3 = *(uint *)(param_1 + 0x20c);
        uVar1 = uVar5;
        if (uVar6 <= uVar5) {
          uVar1 = uVar6;
        }
        uVar7 = (ulong)uVar1;
        uVar6 = 0;
        if (uVar1 != 0) {
          uVar6 = uVar13 / uVar1;
        }
        if (uVar6 < uVar3) {
          if (uVar1 != 0) {
            uVar8 = (ulong)(uVar13 - uVar6 * uVar1);
            if (uVar1 < 8) {
              uVar9 = 0;
            }
            else {
              uVar9 = (ulong)uVar1 - (ulong)(uVar1 & 7);
              uVar10 = uVar9;
              puVar11 = auStack_d8 + 1;
              uVar14 = local_120;
              uVar15 = uStack_118;
              uVar16 = local_110;
              uVar17 = uStack_108;
              if (uVar9 != 0) {
                do {
                    /* catch() { ... } // from try @ 00ac91ac with catch @ 00ac92ac */
                  uVar10 = uVar10 - 8;
                  puVar11[-1] = CONCAT44(uVar6 + (uVar17 < uVar8),uVar6 + (uVar16 < uVar8));
                  puVar11[-2] = CONCAT44(uVar6 + (uVar15 < uVar8),uVar6 + (uVar14 < uVar8));
                  puVar11[1] = CONCAT44(uVar6 + (uVar17 + 4 < uVar8),uVar6 + (uVar16 + 4 < uVar8));
                  *puVar11 = CONCAT44(uVar6 + (uVar15 + 4 < uVar8),uVar6 + (uVar14 + 4 < uVar8));
                  puVar11 = puVar11 + 4;
                  uVar14 = uVar14 + 8;
                  uVar15 = uVar15 + 8;
                  uVar16 = uVar16 + 8;
                  uVar17 = uVar17 + 8;
                } while (uVar10 != 0);
                if ((uVar1 & 7) == 0) goto LAB_00ac934c;
              }
            }
            do {
              uVar3 = uVar6;
              if (uVar9 < uVar8) {
                uVar3 = uVar6 + 1;
              }
              local_e0[uVar9] = uVar3;
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar1);
          }
        }
        else if (uVar1 != 0) {
                    /* catch() { ... } // from try @ 00ac91e0 with catch @ 00ac9278 */
                    /* catch() { ... } // from try @ 00ac91f8 with catch @ 00ac927c */
          if (uVar1 < 8) {
            uVar8 = 0;
          }
          else {
            uVar8 = uVar7 - (uVar1 & 7);
            if (uVar8 != 0) {
              uVar9 = uVar8;
              puVar11 = auStack_d8 + 1;
              do {
                puVar11[-1] = CONCAT44(uVar3,uVar3);
                puVar11[-2] = CONCAT44(uVar3,uVar3);
                puVar11[1] = CONCAT44(uVar3,uVar3);
                *puVar11 = CONCAT44(uVar3,uVar3);
                uVar9 = uVar9 - 8;
                puVar11 = puVar11 + 4;
              } while (uVar9 != 0);
              if ((uVar1 & 7) == 0) goto LAB_00ac934c;
            }
          }
          do {
            local_e0[uVar8] = uVar3;
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar7);
        }
LAB_00ac934c:
        uVar6 = do_ssl3_write(param_1,param_2,param_3 + (int)uVar12,local_e0,uVar7,0);
        if ((int)uVar6 < 1) goto LAB_00ac93b0;
        param_4 = uVar13 - uVar6;
        if (param_4 == 0) goto LAB_00ac937c;
        uVar12 = uVar6 + uVar12;
        if (param_4 == 0) goto LAB_00ac9238;
LAB_00ac9228:
                    /* try { // try from 00ac922c to 00bc92c7 has its CatchHandler @ 00ac8e24 */
        uVar6 = 0;
        if (uVar2 != 0) {
          uVar6 = (param_4 - 1) / uVar2;
        }
        uVar6 = uVar6 + 1;
        uVar13 = param_4;
      } while( true );
    }
    uStack_108 = 3;
    local_110 = 2;
    uStack_118 = 1;
    local_120 = 0;
    if (param_4 != 0) goto LAB_00ac9058;
LAB_00ac9068:
    uVar6 = 1;
    uVar13 = param_4;
    do {
      uVar3 = *(uint *)(param_1 + 0x20c);
      uVar1 = uVar5;
      if (uVar6 <= uVar5) {
        uVar1 = uVar6;
      }
      uVar7 = (ulong)uVar1;
      uVar6 = 0;
      if (uVar1 != 0) {
        uVar6 = uVar13 / uVar1;
      }
      if (uVar6 < uVar3) {
        if (uVar1 != 0) {
          uVar8 = (ulong)(uVar13 - uVar6 * uVar1);
          if (uVar1 < 8) {
            uVar9 = 0;
          }
          else {
            uVar9 = uVar7 - (uVar1 & 7);
            uVar10 = uVar9;
            puVar11 = auStack_d8 + 1;
            uVar14 = local_120;
            uVar15 = uStack_118;
            uVar16 = local_110;
            uVar17 = uStack_108;
            if (uVar9 != 0) {
              do {
                uVar10 = uVar10 - 8;
                puVar11[-1] = CONCAT44(uVar6 + (uVar17 < uVar8),uVar6 + (uVar16 < uVar8));
                puVar11[-2] = CONCAT44(uVar6 + (uVar15 < uVar8),uVar6 + (uVar14 < uVar8));
                puVar11[1] = CONCAT44(uVar6 + (uVar17 + 4 < uVar8),uVar6 + (uVar16 + 4 < uVar8));
                *puVar11 = CONCAT44(uVar6 + (uVar15 + 4 < uVar8),uVar6 + (uVar14 + 4 < uVar8));
                puVar11 = puVar11 + 4;
                uVar14 = uVar14 + 8;
                uVar15 = uVar15 + 8;
                uVar16 = uVar16 + 8;
                uVar17 = uVar17 + 8;
              } while (uVar10 != 0);
              if ((uVar1 & 7) == 0) goto LAB_00ac917c;
            }
          }
          do {
            uVar1 = uVar6;
            if (uVar9 < uVar8) {
              uVar1 = uVar6 + 1;
            }
            local_e0[uVar9] = uVar1;
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
        }
      }
      else if (uVar1 != 0) {
        if (uVar1 < 8) {
          uVar8 = 0;
        }
        else {
          uVar8 = uVar7 - (uVar1 & 7);
          if (uVar8 != 0) {
            uVar9 = uVar8;
            puVar11 = auStack_d8 + 1;
            do {
              puVar11[-1] = CONCAT44(uVar3,uVar3);
              puVar11[-2] = CONCAT44(uVar3,uVar3);
              puVar11[1] = CONCAT44(uVar3,uVar3);
              *puVar11 = CONCAT44(uVar3,uVar3);
              uVar9 = uVar9 - 8;
              puVar11 = puVar11 + 4;
            } while (uVar9 != 0);
            if ((uVar1 & 7) == 0) goto LAB_00ac917c;
          }
        }
        do {
          local_e0[uVar8] = uVar3;
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
LAB_00ac917c:
      uVar6 = do_ssl3_write(param_1,0x17,param_3 + (int)uVar12,local_e0,uVar7,0);
      if ((int)uVar6 < 1) {
LAB_00ac93b0:
        *(uint *)(param_1 + 0x10e4) = uVar12;
        return uVar6;
      }
      param_4 = uVar13 - uVar6;
      if (param_4 == 0) goto LAB_00ac937c;
                    /* try { // try from 00ac91ac to 00bc91df has its CatchHandler @ 00ac92ac */
      if ((*(byte *)(param_1 + 0x1e8) & 1) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x90) + 0xd4) = 0;
        uVar13 = uVar6;
        goto LAB_00ac93a8;
      }
      uVar12 = uVar6 + uVar12;
      if (param_4 == 0) goto LAB_00ac9068;
LAB_00ac9058:
      uVar6 = 0;
      if (uVar2 != 0) {
        uVar6 = (param_4 - 1) / uVar2;
      }
      uVar6 = uVar6 + 1;
      uVar13 = param_4;
    } while( true );
  }
  iVar4 = 0x44;
  line = 0x232;
LAB_00ac8ebc:
  ERR_put_error(0x14,0x9e,iVar4,"ssl/record/rec_layer_s3.c",line);
  return 0xffffffff;
LAB_00ac937c:
  *(undefined4 *)(*(long *)(param_1 + 0x90) + 0xd4) = 0;
  if (((*(byte *)(param_1 + 0x1e8) >> 4 & 1) != 0) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 3 & 1) == 0)) {
    ssl3_release_write_buffer(param_1);
  }
LAB_00ac93a8:
  return uVar13 + uVar12;
}

