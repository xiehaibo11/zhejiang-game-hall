
/* cocos2d::TMXTilesetInfo::getRectForGID(unsigned int) */

void cocos2d::TMXTilesetInfo::getRectForGID(uint param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint in_w1;
  Rect *in_x8;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = (ulong)param_1;
  Rect::Rect(in_x8);
                    /* try { // try from 00f4f704 to 0104f70b has its CatchHandler @ 00f508d8 */
                    /* try { // try from 00f4f70c to 0104f7cb has its CatchHandler @ 00f4f410 */
  Size::operator=((Size *)(in_x8 + 8),(Size *)(uVar3 + 0x44));
  fVar6 = (float)*(int *)(uVar3 + 0x50);
  fVar5 = (float)*(int *)(uVar3 + 0x4c);
  fVar7 = *(float *)(uVar3 + 0x44) + fVar5;
  uVar1 = (in_w1 & 0x1fffffff) - *(int *)(uVar3 + 0x40);
  uVar4 = (uint)(((*(float *)(uVar3 + 0x78) - fVar6) + fVar5) / fVar7);
  uVar2 = 0;
  if (uVar4 != 0) {
    uVar2 = uVar1 / uVar4;
  }
  *(float *)in_x8 = fVar7 * (float)(uVar1 - uVar2 * uVar4) + fVar6;
  *(float *)(in_x8 + 4) = (*(float *)(uVar3 + 0x48) + fVar5) * (float)uVar2 + fVar6;
  return;
}

