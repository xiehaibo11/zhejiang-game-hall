
void DES_encrypt2(uint *data,DES_key_schedule *ks,int enc)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  _union_772 *p_Var6;
  
                    /* try { // try from 00ba523c to 00ca5247 has its CatchHandler @ 00ba52c8 */
  uVar5 = *data >> 0x1d | *data << 3;
                    /* try { // try from 00ba5248 to 00ca525f has its CatchHandler @ 00ba52b8 */
  uVar3 = data[1] >> 0x1d | data[1] << 3;
  if (enc == 0) {
    uVar1 = ks->ks[0xf].deslong[0] ^ uVar5;
    uVar2 = *(uint *)((long)ks->ks + 0x7c) ^ uVar5;
                    /* catch() { ... } // from try @ 00ba58cc with catch @ 00ba5988 */
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
    uVar1 = uVar3 ^ ks->ks[2].deslong[0];
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 0x14);
                    /* try { // try from 00ba5f38 to 00ca5f4f has its CatchHandler @ 00ba5f38
                       catch() { ... } // from try @ 00ba5f38 with catch @ 00ba5f38
                       catch() { ... } // from try @ 00ba5f54 with catch @ 00ba5f38 */
                    /* try { // try from 00ba5f50 to 00ca5f53 has its CatchHandler @ 00ba5f88 */
                    /* try { // try from 00ba5f54 to 00ca5f9b has its CatchHandler @ 00ba5f38 */
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
                    /* catch() { ... } // from try @ 00ba5f50 with catch @ 00ba5f88 */
                    /* try { // try from 00ba5fb4 to 00ca5ff3 has its CatchHandler @ 00ba5fb4
                       catch() { ... } // from try @ 00ba5fb4 with catch @ 00ba5fb4
                       catch() { ... } // from try @ 00ba5ff8 with catch @ 00ba5fb4 */
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    lVar4 = 1;
    p_Var6 = ks->ks;
  }
  else {
                    /* try { // try from 00ba5260 to 00ca5313 has its CatchHandler @ 00ba51a0 */
    uVar1 = ks->ks[0].deslong[0] ^ uVar5;
    uVar2 = ks->ks[0].deslong[1] ^ uVar5;
                    /* catch() { ... } // from try @ 00ba5248 with catch @ 00ba52b8 */
                    /* catch() { ... } // from try @ 00ba523c with catch @ 00ba52c8 */
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
                    /* catch() { ... } // from try @ 00ba51dc with catch @ 00ba5300 */
                    /* try { // try from 00ba5314 to 00ca5367 has its CatchHandler @ 00ba5314
                       catch() { ... } // from try @ 00ba5314 with catch @ 00ba5314
                       catch() { ... } // from try @ 00ba5378 with catch @ 00ba5314
                       catch() { ... } // from try @ 00ba547c with catch @ 00ba5314 */
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[2].deslong[0];
                    /* try { // try from 00ba5368 to 00ca5377 has its CatchHandler @ 00ba5520 */
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x14);
                    /* try { // try from 00ba5378 to 00ca5457 has its CatchHandler @ 00ba5314 */
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
    uVar1 = uVar5 ^ ks->ks[4].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x24);
                    /* try { // try from 00ba5458 to 00ca5463 has its CatchHandler @ 00ba54e8 */
                    /* try { // try from 00ba5464 to 00ca547b has its CatchHandler @ 00ba54d8 */
                    /* try { // try from 00ba547c to 00ca5533 has its CatchHandler @ 00ba5314 */
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
                    /* catch() { ... } // from try @ 00ba5464 with catch @ 00ba54d8 */
                    /* catch() { ... } // from try @ 00ba5458 with catch @ 00ba54e8 */
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[6].deslong[0];
                    /* catch() { ... } // from try @ 00ba5368 with catch @ 00ba5520 */
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x34);
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
    uVar1 = uVar5 ^ ks->ks[0xc].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 100);
                    /* try { // try from 00ba5808 to 00ca58cb has its CatchHandler @ 00ba5808
                       catch() { ... } // from try @ 00ba5808 with catch @ 00ba5808
                       catch() { ... } // from try @ 00ba58d8 with catch @ 00ba5808 */
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
    uVar1 = uVar5 ^ ks->ks[0xe].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x74);
                    /* try { // try from 00ba58cc to 00ca58d7 has its CatchHandler @ 00ba5988 */
                    /* try { // try from 00ba58d8 to 00ca59c3 has its CatchHandler @ 00ba5808 */
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    lVar4 = 0x1f;
    p_Var6 = ks->ks + 0xf;
  }
  uVar1 = p_Var6->deslong[0] ^ uVar3;
                    /* try { // try from 00ba5ff4 to 00ca5ff7 has its CatchHandler @ 00ba6004 */
                    /* try { // try from 00ba5ff8 to 00ca6017 has its CatchHandler @ 00ba5fb4 */
  uVar2 = ks->ks[0].deslong[lVar4] ^ uVar3;
                    /* catch() { ... } // from try @ 00ba5ff4 with catch @ 00ba6004 */
                    /* try { // try from 00ba6018 to 00ca603b has its CatchHandler @ 00ba6018
                       catch() { ... } // from try @ 00ba6018 with catch @ 00ba6018
                       catch() { ... } // from try @ 00ba6040 with catch @ 00ba6018
                       catch() { ... } // from try @ 00ba6074 with catch @ 00ba6018 */
                    /* try { // try from 00ba603c to 00ca603f has its CatchHandler @ 00ba60b8 */
                    /* try { // try from 00ba6040 to 00ca6057 has its CatchHandler @ 00ba6018 */
                    /* try { // try from 00ba6058 to 00ca605f has its CatchHandler @ 00ba60a4 */
                    /* try { // try from 00ba6064 to 00ca606b has its CatchHandler @ 00ba6094 */
  uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
          *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
          *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
          *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
          *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
          *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
          *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
  *data = uVar3 >> 3 | uVar3 << 0x1d;
  data[1] = uVar5 >> 3 | uVar5 << 0x1d;
                    /* try { // try from 00ba6070 to 00ca6073 has its CatchHandler @ 00ba6084 */
                    /* try { // try from 00ba6074 to 00ca60cb has its CatchHandler @ 00ba6018 */
  return;
}

