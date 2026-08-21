
/* cocos2d::ShuffleTiles::getDelta(cocos2d::Size const&) const */

void cocos2d::ShuffleTiles::getDelta(Size *param_1)

{
  uint uVar1;
  uint uVar2;
  float *in_x1;
  Size *in_x8;
  uint uVar3;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 0x70) +
                   (ulong)(uint)(int)(*in_x1 * *(float *)(param_1 + 0x5c) + in_x1[1]) * 4);
                    /* try { // try from 00ee92a8 to 00fe92af has its CatchHandler @ 00ee9310 */
  uVar3 = (uint)*(float *)(param_1 + 0x5c);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar1 / uVar3;
  }
                    /* try { // try from 00ee92b0 to 00fe935b has its CatchHandler @ 00ee9244 */
  Size::Size(in_x8,(float)(int)((float)uVar2 - *in_x1),
             (float)(int)((float)(uVar1 - uVar2 * uVar3) - in_x1[1]));
  return;
}

