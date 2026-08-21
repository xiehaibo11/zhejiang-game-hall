
void blowfish_encrypt(uint *param_1,undefined1 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
  uVar2 = *param_3 ^ (uVar2 >> 0x10 | uVar2 << 0x10);
  uVar3 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          (uVar3 >> 0x10 | uVar3 << 0x10) ^ param_3[1];
                    /* catch() { ... } // from try @ 00da8388 with catch @ 00da8360 */
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[2];
                    /* try { // try from 00da8384 to 00ea8387 has its CatchHandler @ 00da83ec */
                    /* try { // try from 00da8388 to 00ea8407 has its CatchHandler @ 00da8360 */
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          uVar3 ^ param_3[3];
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[4];
                    /* catch() { ... } // from try @ 00da8384 with catch @ 00da83ec */
                    /* catch() { ... } // from try @ 00da8434 with catch @ 00da8408 */
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          uVar3 ^ param_3[5];
                    /* try { // try from 00da842c to 00ea8433 has its CatchHandler @ 00da8488 */
                    /* try { // try from 00da8434 to 00ea84a3 has its CatchHandler @ 00da8408 */
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[6];
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          uVar3 ^ param_3[7];
                    /* catch() { ... } // from try @ 00da842c with catch @ 00da8488 */
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[8];
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          uVar3 ^ param_3[9];
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[10];
                    /* catch() { ... } // from try @ 00da8580 with catch @ 00da8558 */
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          uVar3 ^ param_3[0xb];
                    /* try { // try from 00da857c to 00ea857f has its CatchHandler @ 00da85f0 */
                    /* try { // try from 00da8580 to 00ea860b has its CatchHandler @ 00da8558 */
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[0xc];
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          uVar3 ^ param_3[0xd];
                    /* catch() { ... } // from try @ 00da857c with catch @ 00da85f0 */
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[0xe];
                    /* catch() { ... } // from try @ 00da8674 with catch @ 00da860c */
                    /* try { // try from 00da8630 to 00ea8637 has its CatchHandler @ 00da86c0 */
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          uVar3 ^ param_3[0xf];
  uVar1 = param_3[0x11] ^ uVar3;
                    /* try { // try from 00da8668 to 00ea8673 has its CatchHandler @ 00da868c */
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[0x10];
                    /* try { // try from 00da8674 to 00ea86db has its CatchHandler @ 00da860c */
  param_2[3] = (char)uVar1;
                    /* catch() { ... } // from try @ 00da8668 with catch @ 00da868c */
  *param_2 = (char)(uVar1 >> 0x18);
  param_2[1] = (char)(uVar1 >> 0x10);
  param_2[2] = (char)(uVar1 >> 8);
  param_2[4] = (char)(uVar2 >> 0x18);
  param_2[5] = (char)(uVar2 >> 0x10);
  param_2[6] = (char)(uVar2 >> 8);
  param_2[7] = (char)uVar2;
  return;
}

