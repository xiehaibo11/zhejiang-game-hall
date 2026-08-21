
void DES_ede3_cbc_encrypt
               (uchar *input,uchar *output,long length,DES_key_schedule *ks1,DES_key_schedule *ks2,
               DES_key_schedule *ks3,DES_cblock *ivec,int enc)

{
  long lVar1;
  byte *pbVar2;
  uchar *puVar3;
  uint uVar4;
  uchar *puVar5;
  uint *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint local_68;
  uint uStack_64;
  
  uVar9 = *(uint *)*ivec;
  uVar11 = *(uint *)(*ivec + 4);
  if (enc == 0) {
    puVar6 = (uint *)input;
    if (7 < length) {
      uVar12 = 0xfffffffffffffff0;
      if (-0x10 < ~length) {
        uVar12 = ~length;
      }
      uVar12 = uVar12 + length + 8 & 0xfffffffffffffff8;
      lVar1 = uVar12 + 8;
      puVar6 = (uint *)(input + lVar1);
      lVar7 = length + 8;
      puVar3 = output;
      uVar8 = uVar9;
      uVar10 = uVar11;
      do {
        uVar9 = *(uint *)input;
        uVar11 = *(uint *)((long)input + 4);
        local_68 = uVar9;
        uStack_64 = uVar11;
        DES_decrypt3(&local_68,ks1,ks2,ks3);
        lVar7 = lVar7 + -8;
        local_68 = local_68 ^ uVar8;
        uStack_64 = uStack_64 ^ uVar10;
        *puVar3 = (uchar)local_68;
        puVar3[4] = (uchar)uStack_64;
        puVar3[1] = (uchar)(local_68 >> 8);
        puVar3[2] = (uchar)(local_68 >> 0x10);
        puVar3[3] = (uchar)(local_68 >> 0x18);
        puVar3[5] = (uchar)(uStack_64 >> 8);
        puVar3[6] = (uchar)(uStack_64 >> 0x10);
        puVar3[7] = (uchar)(uStack_64 >> 0x18);
        puVar3 = puVar3 + 8;
        input = (uchar *)((long)input + 8);
        uVar8 = uVar9;
        uVar10 = uVar11;
      } while (0xf < lVar7);
      length = (length + -8) - uVar12;
      output = output + lVar1;
    }
    uVar8 = uVar9;
    uVar10 = uVar11;
    if (length != 0) {
      uVar8 = *puVar6;
      uVar10 = puVar6[1];
      local_68 = uVar8;
      uStack_64 = uVar10;
      DES_decrypt3(&local_68,ks1,ks2,ks3);
      if (length - 1U < 7) {
        local_68 = local_68 ^ uVar9;
        uStack_64 = uStack_64 ^ uVar11;
        puVar3 = output + length;
        switch(length) {
        case 7:
          puVar3 = puVar3 + -1;
          *puVar3 = (uchar)(uStack_64 >> 0x10);
        case 6:
          puVar3 = puVar3 + -1;
          *puVar3 = (uchar)(uStack_64 >> 8);
        case 5:
          puVar3 = puVar3 + -1;
          *puVar3 = (uchar)uStack_64;
        case 4:
          puVar3 = puVar3 + -1;
          *puVar3 = (uchar)(local_68 >> 0x18);
        case 3:
          puVar3 = puVar3 + -1;
          *puVar3 = (uchar)(local_68 >> 0x10);
        case 2:
          puVar3 = puVar3 + -1;
          *puVar3 = (uchar)(local_68 >> 8);
        case 1:
          puVar3[-1] = (uchar)local_68;
        }
      }
    }
  }
  else {
    puVar3 = input;
    local_68 = uVar9;
    uStack_64 = uVar11;
    if (7 < length) {
      uVar12 = 0xfffffffffffffff0;
      if (-0x10 < ~length) {
        uVar12 = ~length;
      }
      uVar12 = uVar12 + length + 8 & 0xfffffffffffffff8;
      lVar1 = uVar12 + 8;
      puVar3 = input + lVar1;
      lVar7 = length + 8;
      puVar5 = output;
      do {
        local_68 = *(uint *)input ^ local_68;
        uStack_64 = *(uint *)((long)input + 4) ^ uStack_64;
        DES_encrypt3(&local_68,ks1,ks2,ks3);
        lVar7 = lVar7 + -8;
        puVar5[1] = (uchar)(local_68 >> 8);
        puVar5[2] = (uchar)(local_68 >> 0x10);
        puVar5[3] = (uchar)(local_68 >> 0x18);
        puVar5[5] = (uchar)(uStack_64 >> 8);
        puVar5[6] = (uchar)(uStack_64 >> 0x10);
        *puVar5 = (uchar)local_68;
        puVar5[4] = (uchar)uStack_64;
        puVar5[7] = (uchar)(uStack_64 >> 0x18);
        puVar5 = puVar5 + 8;
        input = (uchar *)((long)input + 8);
      } while (0xf < lVar7);
      length = (length + -8) - uVar12;
      output = output + lVar1;
    }
    uVar8 = local_68;
    uVar10 = uStack_64;
    if (length != 0) {
      uVar9 = 0;
      if (length - 1U < 7) {
        pbVar2 = puVar3 + length;
        uVar11 = 0;
        uVar8 = uVar9;
        uVar10 = 0;
        uVar4 = 0;
        switch(length) {
        case 7:
          pbVar2 = pbVar2 + -1;
          uVar9 = (uint)*pbVar2 << 0x10;
        case 6:
          pbVar2 = pbVar2 + -1;
          uVar9 = uVar9 | (uint)*pbVar2 << 8;
        case 5:
          pbVar2 = pbVar2 + -1;
          uVar8 = uVar9 | *pbVar2;
        case 4:
          pbVar2 = pbVar2 + -1;
          uVar9 = (uint)*pbVar2 << 0x18;
          uVar4 = uVar8;
        case 3:
          pbVar2 = pbVar2 + -1;
          uVar9 = uVar9 | (uint)*pbVar2 << 0x10;
          uVar10 = uVar4;
        case 2:
          uVar11 = uVar10;
          pbVar2 = pbVar2 + -1;
          uVar9 = uVar9 | (uint)*pbVar2 << 8;
        case 1:
          uVar9 = uVar9 | pbVar2[-1];
        }
      }
      else {
        uVar11 = 0;
      }
      local_68 = uVar9 ^ local_68;
      uStack_64 = uVar11 ^ uStack_64;
      DES_encrypt3(&local_68,ks1,ks2,ks3);
      output[1] = (uchar)(local_68 >> 8);
      output[2] = (uchar)(local_68 >> 0x10);
      output[3] = (uchar)(local_68 >> 0x18);
      output[5] = (uchar)(uStack_64 >> 8);
      output[6] = (uchar)(uStack_64 >> 0x10);
      *output = (uchar)local_68;
      output[4] = (uchar)uStack_64;
      output[7] = (uchar)(uStack_64 >> 0x18);
      uVar8 = local_68;
      uVar10 = uStack_64;
    }
  }
  (*ivec)[0] = (uchar)uVar8;
  (*ivec)[4] = (uchar)uVar10;
  (*ivec)[1] = (uchar)(uVar8 >> 8);
  (*ivec)[2] = (uchar)(uVar8 >> 0x10);
  (*ivec)[3] = (uchar)(uVar8 >> 0x18);
  (*ivec)[5] = (uchar)(uVar10 >> 8);
  (*ivec)[6] = (uchar)(uVar10 >> 0x10);
  (*ivec)[7] = (uchar)(uVar10 >> 0x18);
  return;
}

