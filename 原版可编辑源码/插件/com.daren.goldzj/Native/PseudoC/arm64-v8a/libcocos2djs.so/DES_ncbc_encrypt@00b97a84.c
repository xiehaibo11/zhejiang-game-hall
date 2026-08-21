
void DES_ncbc_encrypt(uchar *input,uchar *output,long length,DES_key_schedule *schedule,
                     DES_cblock *ivec,int enc)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  byte *pbVar4;
  uchar *puVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uchar *puVar12;
  uint local_68;
  uint local_64;
  
  local_68 = *(uint *)*ivec;
  local_64 = *(uint *)(*ivec + 4);
  if (enc == 0) {
    uVar3 = local_68;
    uVar7 = local_64;
    if (7 < length) {
      uVar11 = 0xfffffffffffffff0;
      if (-0x10 < ~length) {
        uVar11 = ~length;
      }
      uVar11 = uVar11 + length + 8 & 0xfffffffffffffff8;
      lVar1 = uVar11 + 8;
      puVar2 = (uint *)(input + lVar1);
      lVar8 = length + 8;
      puVar5 = output;
      uVar9 = local_68;
      uVar10 = local_64;
      do {
        uVar3 = *(uint *)input;
        uVar7 = *(uint *)((long)input + 4);
        local_68 = uVar3;
        local_64 = uVar7;
        DES_encrypt1(&local_68,schedule,0);
        lVar8 = lVar8 + -8;
        input = (uchar *)((long)input + 8);
        local_68 = local_68 ^ uVar9;
        local_64 = local_64 ^ uVar10;
        *puVar5 = (uchar)local_68;
        puVar5[1] = (uchar)(local_68 >> 8);
        puVar5[4] = (uchar)local_64;
        puVar5[2] = (uchar)(local_68 >> 0x10);
        puVar5[3] = (uchar)(local_68 >> 0x18);
        puVar5[5] = (uchar)(local_64 >> 8);
        puVar5[6] = (uchar)(local_64 >> 0x10);
        puVar5[7] = (uchar)(local_64 >> 0x18);
        puVar5 = puVar5 + 8;
        uVar9 = uVar3;
        uVar10 = uVar7;
      } while (0xf < lVar8);
      length = (length + -8) - uVar11;
      output = output + lVar1;
      input = (uchar *)puVar2;
    }
    uVar9 = uVar3;
    uVar10 = uVar7;
    if (length != 0) {
      uVar9 = *(uint *)input;
      uVar10 = *(uint *)((long)input + 4);
      local_68 = uVar9;
      local_64 = uVar10;
      DES_encrypt1(&local_68,schedule,0);
      if (length - 1U < 7) {
        local_68 = local_68 ^ uVar3;
        local_64 = local_64 ^ uVar7;
        puVar5 = output + length;
        switch(length) {
        case 7:
          puVar5 = puVar5 + -1;
          *puVar5 = (uchar)(local_64 >> 0x10);
        case 6:
          puVar5 = puVar5 + -1;
          *puVar5 = (uchar)(local_64 >> 8);
        case 5:
          puVar5 = puVar5 + -1;
          *puVar5 = (uchar)local_64;
        case 4:
          puVar5 = puVar5 + -1;
          *puVar5 = (uchar)(local_68 >> 0x18);
        case 3:
          puVar5 = puVar5 + -1;
          *puVar5 = (uchar)(local_68 >> 0x10);
        case 2:
          puVar5 = puVar5 + -1;
          *puVar5 = (uchar)(local_68 >> 8);
        case 1:
          puVar5[-1] = (uchar)local_68;
        }
      }
    }
  }
  else {
    puVar5 = input;
    if (7 < length) {
      uVar11 = 0xfffffffffffffff0;
      if (-0x10 < ~length) {
        uVar11 = ~length;
      }
      uVar11 = uVar11 + length + 8 & 0xfffffffffffffff8;
      lVar1 = uVar11 + 8;
      puVar5 = input + lVar1;
      lVar8 = length + 8;
      puVar12 = output;
      do {
        local_68 = *(uint *)input ^ local_68;
        local_64 = *(uint *)((long)input + 4) ^ local_64;
        DES_encrypt1(&local_68,schedule,1);
        lVar8 = lVar8 + -8;
        puVar12[1] = (uchar)(local_68 >> 8);
        *puVar12 = (uchar)local_68;
        puVar12[2] = (uchar)(local_68 >> 0x10);
        puVar12[3] = (uchar)(local_68 >> 0x18);
        puVar12[5] = (uchar)(local_64 >> 8);
        puVar12[6] = (uchar)(local_64 >> 0x10);
        puVar12[4] = (uchar)local_64;
        puVar12[7] = (uchar)(local_64 >> 0x18);
        puVar12 = puVar12 + 8;
        input = (uchar *)((long)input + 8);
      } while (0xf < lVar8);
      output = output + lVar1;
      length = (length + -8) - uVar11;
    }
    uVar9 = local_68;
    uVar10 = local_64;
    if (length != 0) {
      uVar3 = 0;
      if (length - 1U < 7) {
        pbVar4 = puVar5 + length;
        uVar7 = 0;
        uVar9 = uVar3;
        uVar10 = 0;
        uVar6 = 0;
        switch(length) {
        case 7:
          pbVar4 = pbVar4 + -1;
          uVar3 = (uint)*pbVar4 << 0x10;
        case 6:
          pbVar4 = pbVar4 + -1;
          uVar3 = uVar3 | (uint)*pbVar4 << 8;
        case 5:
          pbVar4 = pbVar4 + -1;
          uVar9 = uVar3 | *pbVar4;
        case 4:
          pbVar4 = pbVar4 + -1;
          uVar3 = (uint)*pbVar4 << 0x18;
          uVar6 = uVar9;
        case 3:
          pbVar4 = pbVar4 + -1;
          uVar3 = uVar3 | (uint)*pbVar4 << 0x10;
          uVar10 = uVar6;
        case 2:
          uVar7 = uVar10;
          pbVar4 = pbVar4 + -1;
          uVar3 = uVar3 | (uint)*pbVar4 << 8;
        case 1:
          uVar3 = uVar3 | pbVar4[-1];
        }
      }
      else {
        uVar7 = 0;
      }
      local_68 = uVar3 ^ local_68;
      local_64 = uVar7 ^ local_64;
      DES_encrypt1(&local_68,schedule,1);
      output[1] = (uchar)(local_68 >> 8);
      output[3] = (uchar)(local_68 >> 0x18);
      output[5] = (uchar)(local_64 >> 8);
      output[6] = (uchar)(local_64 >> 0x10);
      *output = (uchar)local_68;
      output[2] = (uchar)(local_68 >> 0x10);
      output[4] = (uchar)local_64;
      output[7] = (uchar)(local_64 >> 0x18);
      uVar9 = local_68;
      uVar10 = local_64;
    }
  }
  (*ivec)[0] = (uchar)uVar9;
  (*ivec)[4] = (uchar)uVar10;
  (*ivec)[1] = (uchar)(uVar9 >> 8);
  (*ivec)[2] = (uchar)(uVar9 >> 0x10);
  (*ivec)[3] = (uchar)(uVar9 >> 0x18);
  (*ivec)[5] = (uchar)(uVar10 >> 8);
  (*ivec)[6] = (uchar)(uVar10 >> 0x10);
  (*ivec)[7] = (uchar)(uVar10 >> 0x18);
  return;
}

