
void DES_set_key_unchecked(const_DES_cblock *key,DES_key_schedule *schedule)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  uVar6 = (*(uint *)*key ^ *(uint *)(*key + 4) >> 4) & 0xf0f0f0f;
  uVar5 = uVar6 ^ *(uint *)*key;
  uVar2 = *(uint *)(*key + 4) ^ uVar6 << 4;
  uVar6 = (uVar5 ^ uVar5 << 0x12) & 0xcccc0000;
  uVar1 = (uVar2 ^ uVar2 << 0x12) & 0xcccc0000;
  uVar5 = uVar6 ^ uVar5 ^ uVar6 >> 0x12;
  uVar1 = uVar1 ^ uVar2 ^ uVar1 >> 0x12;
  uVar6 = (uVar5 ^ uVar1 >> 1) & 0x55555555;
  uVar5 = uVar6 ^ uVar5;
  uVar1 = uVar1 ^ uVar6 << 1;
  uVar6 = (uVar1 ^ uVar5 >> 8) & 0xff00ff;
  uVar1 = uVar6 ^ uVar1;
  uVar5 = uVar5 ^ uVar6 << 8;
  uVar6 = (uVar5 ^ uVar1 >> 1) & 0x55555555;
  uVar5 = uVar6 ^ uVar5;
  uVar1 = uVar1 ^ uVar6 << 1;
  uVar6 = uVar5 >> 4 & 0xf000000 | uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10 | uVar1 >> 0x10 & 0xff;
  do {
    uVar2 = (uint)(0x7efcL >> (uVar4 & 0x3f)) & 1;
    uVar1 = uVar2 + 1;
    uVar3 = (uVar5 & 0xfffffff) >> (ulong)uVar1;
    uVar1 = uVar6 >> (ulong)uVar1;
    uVar2 = 0x1b - uVar2;
    uVar6 = uVar1 | uVar6 << (ulong)(uVar2 & 0x1f);
    uVar5 = uVar3 | uVar5 << (ulong)(uVar2 & 0x1f);
    uVar1 = *(uint *)(&DAT_013dbb84 + (ulong)(uVar1 >> 8 & 0x3c | uVar1 >> 7 & 3) * 4) |
            *(uint *)(&DAT_013dba84 + (ulong)(uVar1 & 0x3f) * 4) |
            *(uint *)(&DAT_013dbc84 + (ulong)(uVar1 >> 0xf & 0x3f) * 4) |
            *(uint *)(&DAT_013dbd84 + (ulong)(uVar6 >> 0x16 & 0x30 | uVar1 >> 0x15 & 0xf) * 4);
    uVar2 = *(uint *)(&DAT_013db784 + (ulong)(uVar3 >> 7 & 0x3c | uVar3 >> 6 & 3) * 4) |
            *(uint *)(&DAT_013db684 + (ulong)(uVar3 & 0x3f) * 4) |
            *(uint *)(&DAT_013db884 + (ulong)(uVar3 >> 0xe & 0x30 | uVar3 >> 0xd & 0xf) * 4) |
            *(uint *)(&DAT_013db984 +
                     (ulong)(uVar3 >> 0x15 & 6 | uVar3 >> 0x14 & 1 | uVar5 >> 0x16 & 0x38) * 4);
    uVar4 = uVar4 + 1;
    uVar6 = uVar6 & 0xfffffff;
    *(uint *)schedule = uVar1 >> 0xe & 3 | (uVar2 & 0xffff | uVar1 << 0x10) << 2;
    *(uint *)((long)schedule + 4) =
         (uint)(CONCAT44(uVar1 & 0x3ff0000 | uVar2 >> 0x10,uVar1) >> 0x1a);
    schedule = (DES_key_schedule *)((long)schedule + 8);
  } while (uVar4 != 0x10);
  return;
}

