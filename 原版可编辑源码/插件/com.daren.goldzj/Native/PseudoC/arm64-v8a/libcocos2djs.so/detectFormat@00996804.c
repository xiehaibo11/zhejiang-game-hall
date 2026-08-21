
/* cocos2d::Image::detectFormat(unsigned char const*, long) */

undefined4 __thiscall cocos2d::Image::detectFormat(Image *this,uchar *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
                    /* try { // try from 00996804 to 00a9681b has its CatchHandler @ 00996b20 */
  if (param_2 < 9) {
    if (4 < param_2) goto LAB_00996844;
  }
  else {
                    /* try { // try from 00996838 to 00a9683f has its CatchHandler @ 00996af0 */
    if (*(long *)param_1 == 0xa1a0a0d474e5089) {
      return 1;
    }
LAB_00996844:
                    /* try { // try from 0099684c to 00a9685b has its CatchHandler @ 00996a98 */
    if (*(short *)param_1 == -0x2701) {
      return 0;
    }
                    /* try { // try from 0099685c to 00a9686f has its CatchHandler @ 00996a9c */
    if ((((*(short *)param_1 == 0x4949) && (param_1[2] == '*')) && (param_1[3] == '\0')) ||
       (((*(short *)param_1 == 0x4d4d && (param_1[2] == '\0')) && (param_1[3] == '*')))) {
      return 2;
    }
    if (param_2 < 0xd) goto LAB_0099690c;
                    /* try { // try from 009968c8 to 00a9692f has its CatchHandler @ 00996b20 */
    if ((*(int *)param_1 == 0x46464952) && (*(int *)(param_1 + 8) == 0x50424557)) {
      return 3;
    }
  }
  if ((0x33 < (ulong)param_2) &&
     ((*(int *)(param_1 + 0x2c) == 0x21525650 || (*(int *)param_1 == 0x3525650)))) {
    return 4;
  }
LAB_0099690c:
  iVar1 = etc1_pkm_is_valid(param_1);
  if (iVar1 == 0) {
                    /* try { // try from 00996934 to 00a96977 has its CatchHandler @ 00996af0 */
    iVar1 = etc2_pkm_is_valid(param_1);
    if (iVar1 == 0) {
      iVar1 = strncmp((char *)param_1,"DDS",3);
      if (iVar1 == 0) {
        uVar3 = 8;
      }
      else {
        uVar2 = astcIsValid(param_1);
        uVar3 = 7;
        if ((uVar2 & 1) == 0) {
          uVar3 = 0xc;
        }
      }
    }
    else {
      uVar3 = 6;
    }
  }
  else {
    uVar3 = 5;
  }
  return uVar3;
}

