
void DES_encrypt1(uint *data,DES_key_schedule *ks,int enc)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  _union_772 *p_Var4;
  uint uVar5;
  long lVar6;
  
  uVar3 = (*data ^ data[1] >> 4) & 0xf0f0f0f;
  uVar1 = data[1] ^ uVar3 << 4;
  uVar3 = uVar3 ^ *data;
  uVar5 = uVar1 & 0xffff ^ uVar3 >> 0x10;
  uVar1 = uVar5 ^ uVar1;
  uVar3 = uVar3 ^ uVar5 << 0x10;
  uVar5 = (uVar3 ^ uVar1 >> 2) & 0x33333333;
  uVar3 = uVar5 ^ uVar3;
  uVar1 = uVar1 ^ uVar5 << 2;
  uVar5 = (uVar1 ^ uVar3 >> 8) & 0xff00ff;
  uVar1 = uVar5 ^ uVar1;
  uVar3 = uVar3 ^ uVar5 << 8;
  uVar5 = (uVar3 ^ uVar1 >> 1) & 0x55555555;
  uVar3 = uVar5 ^ uVar3;
  uVar1 = uVar1 ^ uVar5 << 1;
  uVar3 = uVar3 >> 0x1d | uVar3 << 3;
  uVar5 = uVar1 >> 0x1d | uVar1 << 3;
  if (enc == 0) {
    uVar1 = ks->ks[0xf].deslong[0] ^ uVar3;
    uVar2 = *(uint *)((long)ks->ks + 0x7c) ^ uVar3;
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[0xe].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x74);
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar3 ^ ks->ks[0xd].deslong[0];
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 0x6c);
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[0xc].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 100);
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar3 ^ ks->ks[0xb].deslong[0];
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 0x5c);
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[10].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x54);
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar3 ^ ks->ks[9].deslong[0];
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 0x4c);
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[8].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x44);
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar3 ^ ks->ks[7].deslong[0];
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 0x3c);
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[6].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x34);
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar3 ^ ks->ks[5].deslong[0];
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 0x2c);
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[4].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x24);
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar3 ^ ks->ks[3].deslong[0];
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 0x1c);
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[2].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x14);
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar3 ^ ks->ks[1].deslong[0];
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 0xc);
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    lVar6 = 1;
    p_Var4 = ks->ks;
  }
  else {
    uVar1 = ks->ks[0].deslong[0] ^ uVar3;
    uVar2 = ks->ks[0].deslong[1] ^ uVar3;
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[1].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0xc);
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar3 ^ ks->ks[2].deslong[0];
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 0x14);
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[3].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x1c);
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar3 ^ ks->ks[4].deslong[0];
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 0x24);
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[5].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x2c);
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar3 ^ ks->ks[6].deslong[0];
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 0x34);
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[7].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x3c);
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar3 ^ ks->ks[8].deslong[0];
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 0x44);
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[9].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x4c);
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar3 ^ ks->ks[10].deslong[0];
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 0x54);
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[0xb].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x5c);
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar3 ^ ks->ks[0xc].deslong[0];
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 100);
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[0xd].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x6c);
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar3 ^ ks->ks[0xe].deslong[0];
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 0x74);
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    lVar6 = 0x1f;
    p_Var4 = ks->ks + 0xf;
  }
  uVar1 = p_Var4->deslong[0] ^ uVar5;
  uVar2 = uVar5 >> 3 | uVar5 << 0x1d;
  uVar5 = ks->ks[0].deslong[lVar6] ^ uVar5;
  uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
          *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
          *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
          *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 6 & 0x3f) * 4 + 0x100) ^
          *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0xe & 0x3f) * 4 + 0x300) ^
          *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x16 & 0x3f) * 4 + 0x500) ^
          *(uint *)(DES_SPtrans + (ulong)((uVar5 >> 4 | uVar5 << 0x1c) >> 0x1a) * 4 + 0x700);
  uVar1 = uVar3 >> 3 | uVar3 << 0x1d;
  uVar3 = (uVar2 ^ uVar1 >> 1) & 0x55555555;
  uVar2 = uVar3 ^ uVar2;
  uVar1 = uVar1 ^ uVar3 << 1;
  uVar3 = (uVar1 ^ uVar2 >> 8) & 0xff00ff;
  uVar1 = uVar3 ^ uVar1;
  uVar2 = uVar2 ^ uVar3 << 8;
  uVar3 = (uVar2 ^ uVar1 >> 2) & 0x33333333;
  uVar1 = uVar1 ^ uVar3 << 2;
  uVar3 = uVar3 ^ uVar2;
  uVar5 = uVar1 & 0xffff ^ uVar3 >> 0x10;
  uVar1 = uVar5 ^ uVar1;
  uVar3 = uVar3 ^ uVar5 << 0x10;
  uVar5 = (uVar3 ^ uVar1 >> 4) & 0xf0f0f0f;
  *data = uVar5 ^ uVar3;
  data[1] = uVar1 ^ uVar5 << 4;
  return;
}

