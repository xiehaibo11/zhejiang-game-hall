
/* cocos2d::Image::premultipliedAlpha() */

void __thiscall cocos2d::Image::premultipliedAlpha(Image *this)

{
  int iVar1;
  byte *pbVar2;
  Image IVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
                    /* try { // try from 00997de0 to 00a97df7 has its CatchHandler @ 0099808c */
  IVar3 = (Image)0x0;
  if (PNG_PREMULTIPLIED_ALPHA_ENABLED != '\0') {
    if (*(int *)(this + 0x2c) != 2) {
                    /* try { // try from 00997e80 to 00a97ee7 has its CatchHandler @ 0099809c */
      this[0x134] = (Image)0x0;
      return;
    }
                    /* try { // try from 00997e00 to 00a97e0b has its CatchHandler @ 00998088 */
    if (0 < *(int *)(this + 0x24) * *(int *)(this + 0x20)) {
                    /* try { // try from 00997e0c to 00a97e17 has its CatchHandler @ 00998084 */
      lVar5 = *(long *)(this + 0x10);
      uVar4 = 0;
      lVar6 = 0;
      do {
                    /* try { // try from 00997e18 to 00a97e2f has its CatchHandler @ 0099809c */
        pbVar2 = (byte *)(lVar5 + (uVar4 & 0xfffffffc));
        iVar1 = pbVar2[3] + 1;
                    /* try { // try from 00997e4c to 00a97e6b has its CatchHandler @ 00998034 */
        *(uint *)(lVar5 + uVar4) =
             iVar1 * (uint)pbVar2[1] & 0x1ff00 | (uint)pbVar2[3] << 0x18 |
             iVar1 * (uint)*pbVar2 >> 8 | iVar1 * (uint)pbVar2[2] * 0x100 & 0x1ff0000;
        lVar6 = lVar6 + 1;
        uVar4 = uVar4 + 4;
      } while (lVar6 < (long)*(int *)(this + 0x24) * (long)*(int *)(this + 0x20));
    }
    IVar3 = (Image)0x1;
  }
  this[0x134] = IVar3;
  return;
}

