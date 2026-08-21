
/* cocos2d::Image::getASTCFormat(unsigned char const*) const */

undefined4 __thiscall cocos2d::Image::getASTCFormat(Image *this,uchar *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  
  bVar2 = param_1[5];
  if (param_1[4] - 4 < 7) {
    uVar3 = (uint)bVar2;
    switch((uint)param_1[4]) {
    case 4:
      return 0x11;
    case 5:
      uVar4 = 0x12;
                    /* try { // try from 00997a30 to 00a97a47 has its CatchHandler @ 00997d20 */
      if (bVar2 != 4) {
        uVar4 = 0x13;
      }
      return uVar4;
    case 6:
      uVar4 = 0x14;
      if (uVar3 != 5) {
        uVar4 = 0x15;
      }
      return uVar4;
    case 8:
      uVar4 = 0x17;
                    /* try { // try from 00997a5c to 00a97a67 has its CatchHandler @ 00997d18 */
      if (uVar3 != 6) {
        uVar4 = 0x18;
      }
      uVar1 = 0x16;
                    /* try { // try from 00997a68 to 00a97a7f has its CatchHandler @ 00997d30 */
      if (uVar3 != 5) {
        uVar1 = uVar4;
      }
      return uVar1;
    case 10:
      if (uVar3 - 5 < 4) {
        return *(undefined4 *)(&DAT_01889930 + (long)(char)(uVar3 - 5) * 4);
      }
      return 0x1c;
    }
  }
  uVar4 = 0x1d;
                    /* try { // try from 00997a50 to 00a97a5b has its CatchHandler @ 00997d1c */
  if (bVar2 != 10) {
    uVar4 = 0x1e;
  }
  return uVar4;
}

