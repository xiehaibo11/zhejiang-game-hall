
/* cocos2d::_base64Decode(unsigned char const*, unsigned int, unsigned char*, unsigned int*) */

undefined4 cocos2d::_base64Decode(uchar *param_1,uint param_2,uchar *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar5 = 0x40;
                    /* try { // try from 009a0cd8 to 00aa0d1b has its CatchHandler @ 009a0d78 */
  do {
    bVar3 = s__ABCDEFGHIJKLMNOPQRSTUVWXYZabcde_01d1b507[lVar5 + 1];
    (&DAT_01d37db8)[bVar3] = (char)lVar5;
    lVar5 = lVar5 + -1;
    (&DAT_01d37cb8)[bVar3] = 1;
  } while (lVar5 != -1);
  if (param_2 == 0) {
    uVar8 = 0;
                    /* catch() { ... } // from try @ 009a0ad0 with catch @ 009a0d78
                       catch() { ... } // from try @ 009a0cd8 with catch @ 009a0d78 */
    uVar10 = 0;
                    /* catch() { ... } // from try @ 009a0a7c with catch @ 009a0d7c */
  }
  else {
    uVar9 = 0;
    uVar10 = 0;
    iVar4 = 0;
    uVar6 = 0;
    do {
      uVar7 = (ulong)param_1[uVar10];
      if (uVar7 == 0x3d) {
                    /* catch() { ... } // from try @ 009a0a70 with catch @ 009a0d80 */
                    /* catch() { ... } // from try @ 009a0b80 with catch @ 009a0d84
                       catch() { ... } // from try @ 009a0d20 with catch @ 009a0d84 */
        if (iVar4 == 3) {
          uVar8 = 0;
          param_3[uVar9] = (uchar)(uVar6 >> 0x10);
          uVar10 = uVar9 + 2;
          param_3[uVar9 + 1] = (uchar)(uVar6 >> 8);
          goto LAB_009a0dc4;
        }
        if (iVar4 == 2) {
          uVar10 = uVar9 + 1;
                    /* try { // try from 009a0e04 to 00aa0e5f has its CatchHandler @ 009a0e04
                       catch() { ... } // from try @ 009a0e04 with catch @ 009a0e04
                       catch() { ... } // from try @ 009a1174 with catch @ 009a0e04 */
          uVar8 = 0;
          param_3[uVar9] = (uchar)(uVar6 >> 10);
          goto LAB_009a0dc4;
        }
        if (iVar4 == 1) {
                    /* catch() { ... } // from try @ 009a0a50 with catch @ 009a0d9c */
                    /* catch() { ... } // from try @ 009a0a88 with catch @ 009a0dac
                       catch() { ... } // from try @ 009a0b24 with catch @ 009a0dac
                       catch() { ... } // from try @ 009a0c08 with catch @ 009a0dac */
          uVar8 = 1;
          fwrite("base64Decode: encoding incomplete: at least 2 bits missing",0x3a,1,
                 (FILE *)__cxa_thread_atexit_impl);
          uVar10 = uVar9;
          goto LAB_009a0dc4;
        }
        break;
      }
      if ((&DAT_01d37cb8)[uVar7] != '\0') {
                    /* try { // try from 009a0d20 to 00aa0d63 has its CatchHandler @ 009a0d84 */
        iVar4 = iVar4 + 1;
        iVar2 = uVar6 + (int)(char)(&DAT_01d37db8)[uVar7];
        if (iVar4 == 4) {
          uVar1 = uVar9 + 2;
          uVar6 = 0;
          iVar4 = 0;
          param_3[uVar9] = (uchar)((uint)iVar2 >> 0x10);
          param_3[uVar9 + 1] = (uchar)((uint)iVar2 >> 8);
          uVar9 = uVar9 + 3;
          param_3[uVar1] = (uchar)iVar2;
        }
        else {
          uVar6 = iVar2 * 0x40;
        }
      }
                    /* try { // try from 009a0d64 to 00aa0e03 has its CatchHandler @ 009a09f4 */
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_2);
    uVar8 = 0;
    uVar10 = uVar9;
  }
LAB_009a0dc4:
  *param_4 = uVar10;
  return uVar8;
}

