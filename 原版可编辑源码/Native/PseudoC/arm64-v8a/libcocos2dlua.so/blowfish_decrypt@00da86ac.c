
void blowfish_decrypt(uint *param_1,undefined1 *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (*param_1 & 0xff00ff00) >> 8 | (*param_1 & 0xff00ff) << 8;
                    /* catch() { ... } // from try @ 00da8630 with catch @ 00da86c0 */
  uVar2 = param_3[0x11] ^ (uVar2 >> 0x10 | uVar2 << 0x10);
                    /* try { // try from 00da86dc to 00ea871f has its CatchHandler @ 00da86dc
                       catch() { ... } // from try @ 00da86dc with catch @ 00da86dc
                       catch() { ... } // from try @ 00da872c with catch @ 00da86dc */
  uVar3 = (param_1[1] & 0xff00ff00) >> 8 | (param_1[1] & 0xff00ff) << 8;
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          (uVar3 >> 0x10 | uVar3 << 0x10) ^ param_3[0x10];
                    /* try { // try from 00da8720 to 00ea872b has its CatchHandler @ 00da8738 */
                    /* try { // try from 00da872c to 00ea876f has its CatchHandler @ 00da86dc */
                    /* catch() { ... } // from try @ 00da8720 with catch @ 00da8738 */
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[0xf];
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          uVar3 ^ param_3[0xe];
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[0xd];
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          uVar3 ^ param_3[0xc];
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[0xb];
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          uVar3 ^ param_3[10];
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[9];
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          uVar3 ^ param_3[8];
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[7];
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          uVar3 ^ param_3[6];
                    /* try { // try from 00da893c to 00ea89af has its CatchHandler @ 00da893c
                       catch() { ... } // from try @ 00da893c with catch @ 00da893c
                       catch() { ... } // from try @ 00da89b8 with catch @ 00da893c */
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[5];
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          uVar3 ^ param_3[4];
                    /* try { // try from 00da89b0 to 00ea89b7 has its CatchHandler @ 00da89f4 */
                    /* try { // try from 00da89b8 to 00ea8a0f has its CatchHandler @ 00da893c */
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[3];
                    /* catch() { ... } // from try @ 00da89b0 with catch @ 00da89f4 */
  uVar3 = (param_3[(ulong)(uVar2 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar2 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar2 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar2 & 0xff) + 0x312] ^
          uVar3 ^ param_3[2];
  uVar1 = *param_3 ^ uVar3;
  uVar2 = (param_3[(ulong)(uVar3 >> 0x10 & 0xff) + 0x112] + param_3[(ulong)(uVar3 >> 0x18) + 0x12] ^
          param_3[(ulong)(uVar3 >> 8 & 0xff) + 0x212]) + param_3[(ulong)(uVar3 & 0xff) + 0x312] ^
          uVar2 ^ param_3[1];
  param_2[3] = (char)uVar1;
  *param_2 = (char)(uVar1 >> 0x18);
  param_2[1] = (char)(uVar1 >> 0x10);
  param_2[2] = (char)(uVar1 >> 8);
  param_2[4] = (char)(uVar2 >> 0x18);
  param_2[5] = (char)(uVar2 >> 0x10);
  param_2[6] = (char)(uVar2 >> 8);
  param_2[7] = (char)uVar2;
  return;
}

