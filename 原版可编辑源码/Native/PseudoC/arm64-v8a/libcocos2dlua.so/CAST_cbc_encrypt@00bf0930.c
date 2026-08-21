
void CAST_cbc_encrypt(uchar *in,uchar *out,long length,CAST_KEY *ks,uchar *iv,int enc)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  uchar *puVar4;
  uint uVar5;
  uint uVar6;
  uchar *puVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint local_68;
  uint uStack_64;
  
  uVar2 = (*(uint *)iv & 0xff00ff00) >> 8 | (*(uint *)iv & 0xff00ff) << 8;
  local_68 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (*(uint *)(iv + 4) & 0xff00ff00) >> 8 | (*(uint *)(iv + 4) & 0xff00ff) << 8;
  uStack_64 = uVar2 >> 0x10 | uVar2 << 0x10;
  if (enc == 0) {
    uVar2 = local_68;
    uVar6 = uStack_64;
    if (7 < length) {
      uVar11 = 0xfffffffffffffff0;
      if (-0x10 < ~length) {
        uVar11 = ~length;
      }
      uVar11 = uVar11 + length + 8 & 0xfffffffffffffff8;
      lVar1 = uVar11 + 8;
      lVar9 = length + 8;
      puVar8 = (uint *)in;
      puVar4 = out;
      uVar12 = local_68;
      uVar10 = uStack_64;
      do {
        uVar2 = (*puVar8 & 0xff00ff00) >> 8 | (*puVar8 & 0xff00ff) << 8;
        uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
        uVar6 = (puVar8[1] & 0xff00ff00) >> 8 | (puVar8[1] & 0xff00ff) << 8;
        uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
        local_68 = uVar2;
        uStack_64 = uVar6;
        CAST_decrypt(&local_68,ks);
        lVar9 = lVar9 + -8;
        local_68 = local_68 ^ uVar12;
        uStack_64 = uStack_64 ^ uVar10;
        *puVar4 = (uchar)(local_68 >> 0x18);
        puVar4[3] = (uchar)local_68;
        puVar4[1] = (uchar)(local_68 >> 0x10);
        puVar4[2] = (uchar)(local_68 >> 8);
        puVar4[7] = (uchar)uStack_64;
        puVar4[4] = (uchar)(uStack_64 >> 0x18);
        puVar4[5] = (uchar)(uStack_64 >> 0x10);
        puVar4[6] = (uchar)(uStack_64 >> 8);
        puVar4 = puVar4 + 8;
        puVar8 = puVar8 + 2;
        uVar12 = uVar2;
        uVar10 = uVar6;
      } while (0xf < lVar9);
      length = (length + -8) - uVar11;
      out = out + lVar1;
      in = in + lVar1;
    }
    uVar12 = uVar2;
    uVar10 = uVar6;
    if (length != 0) {
      uVar12 = (*(uint *)in & 0xff00ff00) >> 8 | (*(uint *)in & 0xff00ff) << 8;
      uVar12 = uVar12 >> 0x10 | uVar12 << 0x10;
      uVar10 = (*(uint *)((long)in + 4) & 0xff00ff00) >> 8 |
               (*(uint *)((long)in + 4) & 0xff00ff) << 8;
      uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
      local_68 = uVar12;
      uStack_64 = uVar10;
      CAST_decrypt(&local_68,ks);
      if (length - 1U < 7) {
        local_68 = local_68 ^ uVar2;
        uStack_64 = uStack_64 ^ uVar6;
        puVar4 = out + length;
        switch(length) {
        case 7:
          puVar4 = puVar4 + -1;
          *puVar4 = (uchar)(uStack_64 >> 8);
        case 6:
          puVar4 = puVar4 + -1;
          *puVar4 = (uchar)(uStack_64 >> 0x10);
        case 5:
          puVar4 = puVar4 + -1;
          *puVar4 = (uchar)(uStack_64 >> 0x18);
        case 4:
          puVar4 = puVar4 + -1;
          *puVar4 = (uchar)local_68;
        case 3:
          puVar4 = puVar4 + -1;
          *puVar4 = (uchar)(local_68 >> 8);
        case 2:
          puVar4 = puVar4 + -1;
          *puVar4 = (uchar)(local_68 >> 0x10);
        case 1:
          puVar4[-1] = (uchar)(local_68 >> 0x18);
        }
      }
    }
  }
  else {
    puVar4 = in;
    if (7 < length) {
      uVar11 = 0xfffffffffffffff0;
      if (-0x10 < ~length) {
        uVar11 = ~length;
      }
      uVar11 = uVar11 + length + 8 & 0xfffffffffffffff8;
      lVar1 = uVar11 + 8;
      puVar4 = in + lVar1;
      lVar9 = length + 8;
      puVar7 = out;
      do {
        uVar2 = (*(uint *)in & 0xff00ff00) >> 8 | (*(uint *)in & 0xff00ff) << 8;
        uVar6 = (*(uint *)((long)in + 4) & 0xff00ff00) >> 8 |
                (*(uint *)((long)in + 4) & 0xff00ff) << 8;
        local_68 = (uVar2 >> 0x10 | uVar2 << 0x10) ^ local_68;
        uStack_64 = (uVar6 >> 0x10 | uVar6 << 0x10) ^ uStack_64;
        CAST_encrypt(&local_68,ks);
        lVar9 = lVar9 + -8;
        *puVar7 = (uchar)(local_68 >> 0x18);
        puVar7[1] = (uchar)(local_68 >> 0x10);
        puVar7[2] = (uchar)(local_68 >> 8);
        puVar7[4] = (uchar)(uStack_64 >> 0x18);
        puVar7[5] = (uchar)(uStack_64 >> 0x10);
        puVar7[3] = (uchar)local_68;
        puVar7[7] = (uchar)uStack_64;
        puVar7[6] = (uchar)(uStack_64 >> 8);
        puVar7 = puVar7 + 8;
        in = (uchar *)((long)in + 8);
      } while (0xf < lVar9);
      out = out + lVar1;
      length = (length + -8) - uVar11;
    }
    uVar12 = local_68;
    uVar10 = uStack_64;
    if (length != 0) {
      uVar2 = 0;
      if (length - 1U < 7) {
        pbVar3 = puVar4 + length;
        uVar6 = 0;
        uVar12 = uVar2;
        uVar10 = 0;
        uVar5 = 0;
        switch(length) {
        case 7:
          pbVar3 = pbVar3 + -1;
          uVar2 = (uint)*pbVar3 << 8;
        case 6:
          pbVar3 = pbVar3 + -1;
          uVar2 = uVar2 | (uint)*pbVar3 << 0x10;
        case 5:
          pbVar3 = pbVar3 + -1;
          uVar12 = uVar2 | (uint)*pbVar3 << 0x18;
        case 4:
          pbVar3 = pbVar3 + -1;
          uVar2 = (uint)*pbVar3;
          uVar5 = uVar12;
        case 3:
          pbVar3 = pbVar3 + -1;
          uVar2 = uVar2 | (uint)*pbVar3 << 8;
          uVar10 = uVar5;
        case 2:
          uVar6 = uVar10;
          pbVar3 = pbVar3 + -1;
          uVar2 = uVar2 | (uint)*pbVar3 << 0x10;
        case 1:
          uVar2 = uVar2 | (uint)pbVar3[-1] << 0x18;
        }
      }
      else {
        uVar6 = 0;
      }
      local_68 = uVar2 ^ local_68;
      uStack_64 = uVar6 ^ uStack_64;
      CAST_encrypt(&local_68,ks);
      *out = (uchar)(local_68 >> 0x18);
      out[1] = (uchar)(local_68 >> 0x10);
      out[2] = (uchar)(local_68 >> 8);
      out[4] = (uchar)(uStack_64 >> 0x18);
      out[5] = (uchar)(uStack_64 >> 0x10);
      out[3] = (uchar)local_68;
      out[6] = (uchar)(uStack_64 >> 8);
      out[7] = (uchar)uStack_64;
      uVar12 = local_68;
      uVar10 = uStack_64;
    }
  }
  iv[3] = (uchar)uVar12;
  *iv = (uchar)(uVar12 >> 0x18);
  iv[1] = (uchar)(uVar12 >> 0x10);
  iv[2] = (uchar)(uVar12 >> 8);
  iv[4] = (uchar)(uVar10 >> 0x18);
  iv[5] = (uchar)(uVar10 >> 0x10);
  iv[6] = (uchar)(uVar10 >> 8);
  iv[7] = (uchar)uVar10;
  return;
}

