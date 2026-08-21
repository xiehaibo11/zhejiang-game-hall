
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
                    /* try { // try from 00b04a20 to 00c04b4b has its CatchHandler @ 00b04a20
                       catch() { ... } // from try @ 00b04a20 with catch @ 00b04a20
                       catch() { ... } // from try @ 00b04b54 with catch @ 00b04a20 */
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
                    /* try { // try from 00b04b4c to 00c04b53 has its CatchHandler @ 00b04c14 */
                    /* try { // try from 00b04b54 to 00c04c57 has its CatchHandler @ 00b04a20 */
    uVar1 = *(uint *)(&DAT_018ab598 + (ulong)(uVar1 >> 8 & 0x3c | uVar1 >> 7 & 3) * 4) |
            *(uint *)(&DAT_018ab498 + (ulong)(uVar1 & 0x3f) * 4) |
            *(uint *)(&DAT_018ab698 + (ulong)(uVar1 >> 0xf & 0x3f) * 4) |
            *(uint *)(&DAT_018ab798 + (ulong)(uVar6 >> 0x16 & 0x30 | uVar1 >> 0x15 & 0xf) * 4);
    uVar2 = *(uint *)(&DAT_018ab198 + (ulong)(uVar3 >> 7 & 0x3c | uVar3 >> 6 & 3) * 4) |
            *(uint *)(&DAT_018ab098 + (ulong)(uVar3 & 0x3f) * 4) |
            *(uint *)(&DAT_018ab298 + (ulong)(uVar3 >> 0xe & 0x30 | uVar3 >> 0xd & 0xf) * 4) |
            *(uint *)(&DAT_018ab398 +
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

