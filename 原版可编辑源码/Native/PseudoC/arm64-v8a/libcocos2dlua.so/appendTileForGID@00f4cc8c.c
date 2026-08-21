
/* cocos2d::TMXLayer::appendTileForGID(unsigned int, cocos2d::Vec2 const&) */

Sprite * __thiscall cocos2d::TMXLayer::appendTileForGID(TMXLayer *this,uint param_1,Vec2 *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  Sprite *pSVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  Rect aRStack_88 [16];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
                    /* try { // try from 00f4ccb0 to 0104ccb7 has its CatchHandler @ 00f4d42c */
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00f4ccd4 to 0104ccdb has its CatchHandler @ 00f4d428 */
  if ((param_1 == 0) || ((int)(param_1 & 0x1fffffff) < *(int *)(*(long *)(this + 0x3f8) + 0x40))) {
    pSVar5 = (Sprite *)0x0;
    goto LAB_00f4ce08;
  }
                    /* try { // try from 00f4cce8 to 0104ccff has its CatchHandler @ 00f4d464 */
  TMXTilesetInfo::getRectForGID((uint)*(long *)(this + 0x3f8));
  lVar3 = Director::getInstance();
  fVar6 = *(float *)(lVar3 + 0x1a0);
  lVar3 = Director::getInstance();
  fVar7 = *(float *)(lVar3 + 0x1a0);
  lVar3 = Director::getInstance();
  fVar8 = *(float *)(lVar3 + 0x1a0);
  lVar3 = Director::getInstance();
  Rect::Rect(aRStack_88,local_78 / fVar6,local_74 / fVar7,local_70 / fVar8,
             local_6c / *(float *)(lVar3 + 0x1a0));
  Rect::operator=((Rect *)&local_78,aRStack_88);
  if ((*(int *)(this + 0x404) == 0) && (*(int *)(this + 0x400) == 1)) {
    fVar7 = *(float *)param_2;
    uVar4 = (uint)fVar7;
    uVar1 = uVar4;
    if ((int)uVar4 < 0) {
      uVar1 = uVar4 + 1;
    }
                    /* try { // try from 00f4cd80 to 0104cd97 has its CatchHandler @ 00f4d5b4 */
    if (*(int *)(this + 0x408) == 0) {
      if (uVar4 == (uVar1 & 0xfffffffe)) goto LAB_00f4ce60;
      fVar6 = *(float *)(this + 0x3dc);
      fVar8 = *(float *)(param_2 + 4);
    }
    else {
      if ((int)uVar4 % 2 == 1) {
LAB_00f4ce60:
        fVar6 = fVar7 * 0.5;
        fVar7 = *(float *)(param_2 + 4);
        goto LAB_00f4cdac;
      }
      fVar6 = *(float *)(this + 0x3dc);
      fVar8 = *(float *)(param_2 + 4);
    }
    fVar7 = fVar7 * 0.5 + (float)(int)(fVar6 * 0.5);
    fVar6 = fVar6 * fVar8;
  }
  else {
                    /* try { // try from 00f4cda8 to 0104cdaf has its CatchHandler @ 00f4d424 */
    fVar6 = *(float *)param_2;
    fVar7 = *(float *)(param_2 + 4);
LAB_00f4cdac:
    fVar7 = fVar7 * *(float *)(this + 0x3dc);
  }
  pSVar5 = (Sprite *)reusedTileWithRect(this,(Rect *)&local_78);
                    /* try { // try from 00f4cdcc to 0104cdd3 has its CatchHandler @ 00f4d420 */
  setupTileSprite((Sprite *)this,pSVar5,(uint)param_2);
                    /* try { // try from 00f4cde0 to 0104cdf7 has its CatchHandler @ 00f4d41c */
  lVar3 = **(long **)(this + 0x3d0);
  SpriteBatchNode::insertQuadFromSprite((SpriteBatchNode *)this,pSVar5,lVar3);
  ccCArrayInsertValueAtIndex(*(_ccCArray **)(this + 0x3d0),(void *)(long)(fVar6 + fVar7),lVar3);
LAB_00f4ce08:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return pSVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

