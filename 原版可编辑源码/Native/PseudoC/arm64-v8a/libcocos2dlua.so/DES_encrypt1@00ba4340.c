
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba4b24 with catch @ 00ba4ad0
                        */
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[0xe].deslong[0];
                    /* try { // try from 00ba4b1c to 00ca4b23 has its CatchHandler @ 00ba4c98 */
                    /* try { // try from 00ba4b24 to 00ca4c9b has its CatchHandler @ 00ba4ad0 */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba4b1c with catch @ 00ba4c98
                        */
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
                    /* try { // try from 00ba4d30 to 00ca4d63 has its CatchHandler @ 00ba4db8 */
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
                    /* try { // try from 00ba4d7c to 00ca4d7f has its CatchHandler @ 00ba4dd4 */
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar5 ^ ks->ks[8].deslong[0];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba4d30 with catch @ 00ba4db8
                        */
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x44);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba4d7c with catch @ 00ba4dd4
                        */
                    /* try { // try from 00ba4e0c to 00ca4e0f has its CatchHandler @ 00ba4e50 */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba4e0c with catch @ 00ba4e50
                        */
                    /* try { // try from 00ba4e88 to 00ca4edb has its CatchHandler @ 00ba4e88
                       catch() { ... } // from try @ 00ba4e88 with catch @ 00ba4e88
                       catch() { ... } // from try @ 00ba4ef4 with catch @ 00ba4e88 */
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
                    /* try { // try from 00ba4edc to 00ca4ef3 has its CatchHandler @ 00ba4f44 */
                    /* try { // try from 00ba4ef4 to 00ca4f7b has its CatchHandler @ 00ba4e88 */
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
                    /* catch() { ... } // from try @ 00ba4edc with catch @ 00ba4f44 */
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
                    /* try { // try from 00ba4fa4 to 00ca5053 has its CatchHandler @ 00ba4fa4
                       catch() { ... } // from try @ 00ba4fa4 with catch @ 00ba4fa4
                       catch() { ... } // from try @ 00ba5060 with catch @ 00ba4fa4
                       catch() { ... } // from try @ 00ba50c8 with catch @ 00ba4fa4
                       catch() { ... } // from try @ 00ba5104 with catch @ 00ba4fa4
                       catch() { ... } // from try @ 00ba5134 with catch @ 00ba4fa4 */
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
                    /* try { // try from 00ba5054 to 00ca505f has its CatchHandler @ 00ba517c */
    uVar1 = uVar5 ^ ks->ks[2].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0x14);
                    /* try { // try from 00ba5060 to 00ca50af has its CatchHandler @ 00ba4fa4 */
                    /* try { // try from 00ba50b0 to 00ca50c7 has its CatchHandler @ 00ba5184 */
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    uVar1 = uVar3 ^ ks->ks[1].deslong[0];
                    /* try { // try from 00ba50c8 to 00ca50eb has its CatchHandler @ 00ba4fa4 */
    uVar2 = uVar3 ^ *(uint *)((long)ks->ks + 0xc);
                    /* try { // try from 00ba50ec to 00ca5103 has its CatchHandler @ 00ba5180 */
                    /* try { // try from 00ba5104 to 00ca5127 has its CatchHandler @ 00ba4fa4 */
                    /* try { // try from 00ba5128 to 00ca5133 has its CatchHandler @ 00ba5178 */
    uVar5 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar5 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
    lVar6 = 1;
                    /* try { // try from 00ba5134 to 00ca519f has its CatchHandler @ 00ba4fa4 */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba44ac with catch @ 00ba4454
                       catch(type#1 @ 00000000) { ... } // from try @ 00ba466c with catch @ 00ba4454
                        */
    uVar1 = uVar5 ^ ks->ks[1].deslong[0];
    uVar2 = uVar5 ^ *(uint *)((long)ks->ks + 0xc);
                    /* try { // try from 00ba44a4 to 00ca44ab has its CatchHandler @ 00ba4778 */
                    /* try { // try from 00ba44ac to 00ca4603 has its CatchHandler @ 00ba4454 */
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
                    /* try { // try from 00ba4604 to 00ca460b has its CatchHandler @ 00ba4764 */
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
                    /* try { // try from 00ba4664 to 00ca466b has its CatchHandler @ 00ba474c */
                    /* try { // try from 00ba466c to 00ca477b has its CatchHandler @ 00ba4454 */
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba4664 with catch @ 00ba474c
                        */
    uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 6 & 0x3f) * 4 + 0x100) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0xe & 0x3f) * 4 + 0x300) ^
            *(uint *)(DES_SPtrans + (ulong)(uVar2 >> 0x16 & 0x3f) * 4 + 0x500) ^
            *(uint *)(DES_SPtrans + (ulong)((uVar2 >> 4 | uVar2 << 0x1c) >> 0x1a) * 4 + 0x700);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba4604 with catch @ 00ba4764
                        */
    uVar1 = uVar3 ^ ks->ks[8].deslong[0];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ba44a4 with catch @ 00ba4778
                        */
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
                    /* catch() { ... } // from try @ 00ba5128 with catch @ 00ba5178 */
                    /* catch() { ... } // from try @ 00ba5054 with catch @ 00ba517c */
                    /* catch() { ... } // from try @ 00ba50ec with catch @ 00ba5180 */
                    /* catch() { ... } // from try @ 00ba50b0 with catch @ 00ba5184 */
                    /* try { // try from 00ba51a0 to 00ca51db has its CatchHandler @ 00ba51a0
                       catch() { ... } // from try @ 00ba51a0 with catch @ 00ba51a0
                       catch() { ... } // from try @ 00ba51ec with catch @ 00ba51a0
                       catch() { ... } // from try @ 00ba5260 with catch @ 00ba51a0 */
  uVar3 = *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 2 & 0x3f) * 4) ^ uVar3 ^
          *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 10 & 0x3f) * 4 + 0x200) ^
          *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x12 & 0x3f) * 4 + 0x400) ^
          *(uint *)(DES_SPtrans + (ulong)(uVar1 >> 0x1a) * 4 + 0x600) ^
          *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 6 & 0x3f) * 4 + 0x100) ^
          *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0xe & 0x3f) * 4 + 0x300) ^
          *(uint *)(DES_SPtrans + (ulong)(uVar5 >> 0x16 & 0x3f) * 4 + 0x500) ^
          *(uint *)(DES_SPtrans + (ulong)((uVar5 >> 4 | uVar5 << 0x1c) >> 0x1a) * 4 + 0x700);
  uVar1 = uVar3 >> 3 | uVar3 << 0x1d;
                    /* try { // try from 00ba51dc to 00ca51eb has its CatchHandler @ 00ba5300 */
  uVar3 = (uVar2 ^ uVar1 >> 1) & 0x55555555;
  uVar2 = uVar3 ^ uVar2;
  uVar1 = uVar1 ^ uVar3 << 1;
                    /* try { // try from 00ba51ec to 00ca523b has its CatchHandler @ 00ba51a0 */
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

