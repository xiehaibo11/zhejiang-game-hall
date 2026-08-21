
void DES_xcbc_encrypt(uchar *input,uchar *output,long length,DES_key_schedule *schedule,
                     DES_cblock *ivec,const_DES_cblock *inw,const_DES_cblock *outw,int enc)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  uchar *puVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uchar *puVar14;
  uint uVar15;
  uint uVar16;
  uint local_68;
  uint local_64;
  
  uVar3 = *(uint *)*inw;
  uVar5 = *(uint *)(*inw + 4);
  uVar4 = *(uint *)*outw;
  uVar6 = *(uint *)(*outw + 4);
  uVar15 = *(uint *)*ivec;
  uVar12 = *(uint *)(*ivec + 4);
  if (enc == 0) {
    if (8 < length) {
      uVar7 = 0xffffffffffffffef;
      if (-0x11 < ~length) {
        uVar7 = ~length;
      }
      uVar7 = uVar7 + length + 8 & 0xfffffffffffffff8;
      lVar1 = uVar7 + 8;
      puVar2 = (uint *)(input + lVar1);
      lVar11 = length + 8;
      puVar9 = output;
      uVar16 = uVar15;
      uVar13 = uVar12;
      do {
        uVar15 = *(uint *)input;
        local_68 = uVar15 ^ uVar4;
        uVar12 = *(uint *)((long)input + 4);
        local_64 = uVar12 ^ uVar6;
        DES_encrypt1(&local_68,schedule,0);
        local_68 = uVar16 ^ uVar3 ^ local_68;
        *puVar9 = (uchar)local_68;
        local_64 = uVar13 ^ uVar5 ^ local_64;
        puVar9[1] = (uchar)(local_68 >> 8);
        puVar9[2] = (uchar)(local_68 >> 0x10);
        puVar9[4] = (uchar)local_64;
        puVar9[3] = (uchar)(local_68 >> 0x18);
        puVar9[5] = (uchar)(local_64 >> 8);
        lVar11 = lVar11 + -8;
        input = (uchar *)((long)input + 8);
        puVar9[6] = (uchar)(local_64 >> 0x10);
        puVar9[7] = (uchar)(local_64 >> 0x18);
        puVar9 = puVar9 + 8;
        uVar16 = uVar15;
        uVar13 = uVar12;
      } while (0x10 < lVar11);
      length = (length + -8) - uVar7;
      output = output + lVar1;
      input = (uchar *)puVar2;
    }
    uVar16 = uVar15;
    uVar13 = uVar12;
    if (length != 0) {
      uVar16 = *(uint *)input;
      uVar13 = *(uint *)((long)input + 4);
      local_68 = uVar16 ^ uVar4;
      local_64 = uVar13 ^ uVar6;
      DES_encrypt1(&local_68,schedule,0);
      if (length - 1U < 8) {
        local_68 = uVar15 ^ uVar3 ^ local_68;
        local_64 = uVar12 ^ uVar5 ^ local_64;
        puVar9 = output + length;
        switch(length) {
        case 8:
          puVar9 = puVar9 + -1;
          *puVar9 = (uchar)(local_64 >> 0x18);
        case 7:
          puVar9 = puVar9 + -1;
          *puVar9 = (uchar)(local_64 >> 0x10);
        case 6:
          puVar9 = puVar9 + -1;
          *puVar9 = (uchar)(local_64 >> 8);
        case 5:
          puVar9 = puVar9 + -1;
          *puVar9 = (uchar)local_64;
        case 4:
          puVar9 = puVar9 + -1;
          *puVar9 = (uchar)(local_68 >> 0x18);
        case 3:
          puVar9 = puVar9 + -1;
          *puVar9 = (uchar)(local_68 >> 0x10);
        case 2:
          puVar9 = puVar9 + -1;
          *puVar9 = (uchar)(local_68 >> 8);
        case 1:
          puVar9[-1] = (uchar)local_68;
        }
      }
    }
  }
  else {
    puVar9 = input;
    if (7 < length) {
      uVar7 = 0xfffffffffffffff0;
      if (-0x10 < ~length) {
        uVar7 = ~length;
      }
      uVar7 = uVar7 + length + 8 & 0xfffffffffffffff8;
      lVar1 = uVar7 + 8;
      puVar9 = input + lVar1;
      lVar11 = length + 8;
      puVar14 = output;
      do {
        local_68 = uVar15 ^ uVar3 ^ *(uint *)input;
        local_64 = uVar12 ^ uVar5 ^ *(uint *)((long)input + 4);
        DES_encrypt1(&local_68,schedule,1);
        lVar11 = lVar11 + -8;
        uVar15 = local_68 ^ uVar4;
        puVar14[1] = (uchar)(uVar15 >> 8);
        *puVar14 = (uchar)uVar15;
        puVar14[2] = (uchar)(uVar15 >> 0x10);
        puVar14[3] = (uchar)(uVar15 >> 0x18);
        uVar12 = local_64 ^ uVar6;
        puVar14[5] = (uchar)(uVar12 >> 8);
        puVar14[6] = (uchar)(uVar12 >> 0x10);
        puVar14[4] = (uchar)uVar12;
        puVar14[7] = (uchar)(uVar12 >> 0x18);
        puVar14 = puVar14 + 8;
        input = (uchar *)((long)input + 8);
      } while (0xf < lVar11);
      length = (length + -8) - uVar7;
      output = output + lVar1;
    }
    uVar16 = uVar15;
    uVar13 = uVar12;
    if (length != 0) {
      local_68 = 0;
      if (length - 1U < 7) {
        pbVar8 = puVar9 + length;
        local_64 = 0;
        uVar16 = local_68;
        uVar13 = 0;
        uVar10 = 0;
        switch(length) {
        case 7:
          pbVar8 = pbVar8 + -1;
          local_68 = (uint)*pbVar8 << 0x10;
        case 6:
          pbVar8 = pbVar8 + -1;
          local_68 = local_68 | (uint)*pbVar8 << 8;
        case 5:
          pbVar8 = pbVar8 + -1;
          uVar16 = local_68 | *pbVar8;
        case 4:
          pbVar8 = pbVar8 + -1;
          local_68 = (uint)*pbVar8 << 0x18;
          uVar10 = uVar16;
        case 3:
          pbVar8 = pbVar8 + -1;
          local_68 = local_68 | (uint)*pbVar8 << 0x10;
          uVar13 = uVar10;
        case 2:
          local_64 = uVar13;
          pbVar8 = pbVar8 + -1;
          local_68 = local_68 | (uint)*pbVar8 << 8;
        case 1:
          local_68 = local_68 | pbVar8[-1];
        }
      }
      else {
        local_64 = 0;
      }
      local_68 = uVar15 ^ uVar3 ^ local_68;
      local_64 = uVar12 ^ uVar5 ^ local_64;
      DES_encrypt1(&local_68,schedule,1);
      uVar16 = local_68 ^ uVar4;
      output[1] = (uchar)(uVar16 >> 8);
      output[2] = (uchar)(uVar16 >> 0x10);
      *output = (uchar)uVar16;
      output[3] = (uchar)(uVar16 >> 0x18);
      uVar13 = local_64 ^ uVar6;
      output[5] = (uchar)(uVar13 >> 8);
      output[6] = (uchar)(uVar13 >> 0x10);
      output[4] = (uchar)uVar13;
      output[7] = (uchar)(uVar13 >> 0x18);
    }
  }
  (*ivec)[0] = (uchar)uVar16;
  (*ivec)[4] = (uchar)uVar13;
  (*ivec)[1] = (uchar)(uVar16 >> 8);
  (*ivec)[2] = (uchar)(uVar16 >> 0x10);
  (*ivec)[3] = (uchar)(uVar16 >> 0x18);
  (*ivec)[5] = (uchar)(uVar13 >> 8);
  (*ivec)[6] = (uchar)(uVar13 >> 0x10);
  (*ivec)[7] = (uchar)(uVar13 >> 0x18);
  return;
}

