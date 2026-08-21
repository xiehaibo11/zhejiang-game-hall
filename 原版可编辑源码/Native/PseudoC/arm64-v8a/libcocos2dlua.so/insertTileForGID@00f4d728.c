
/* cocos2d::TMXLayer::insertTileForGID(unsigned int, cocos2d::Vec2 const&) */

Sprite * __thiscall cocos2d::TMXLayer::insertTileForGID(TMXLayer *this,uint param_1,Vec2 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  Sprite *pSVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Rect aRStack_88 [16];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 00f4d754 to 0104d757 has its CatchHandler @ 00f4d8ac */
                    /* try { // try from 00f4d770 to 0104d7af has its CatchHandler @ 00f4d8b0 */
  if ((param_1 == 0) || ((int)(param_1 & 0x1fffffff) < *(int *)(*(long *)(this + 0x3f8) + 0x40))) {
    pSVar5 = (Sprite *)0x0;
  }
  else {
    TMXTilesetInfo::getRectForGID((uint)*(long *)(this + 0x3f8));
    lVar4 = Director::getInstance();
    fVar9 = *(float *)(lVar4 + 0x1a0);
    lVar4 = Director::getInstance();
    fVar10 = *(float *)(lVar4 + 0x1a0);
    lVar4 = Director::getInstance();
    fVar11 = *(float *)(lVar4 + 0x1a0);
    lVar4 = Director::getInstance();
    Rect::Rect(aRStack_88,local_78 / fVar9,local_74 / fVar10,local_70 / fVar11,
               local_6c / *(float *)(lVar4 + 0x1a0));
    Rect::operator=((Rect *)&local_78,aRStack_88);
                    /* try { // try from 00f4d814 to 0104d823 has its CatchHandler @ 00f4d8cc */
    pvVar6 = (void *)(long)(*(float *)(this + 0x3dc) * (float)(int)*(float *)(param_2 + 4) +
                           (float)(int)*(float *)param_2);
    pSVar5 = (Sprite *)reusedTileWithRect(this,(Rect *)&local_78);
    setupTileSprite((Sprite *)this,pSVar5,(uint)param_2);
    lVar4 = **(long **)(this + 0x3d0);
    if (lVar4 < 1) {
      lVar8 = 0;
    }
    else {
      lVar7 = 0;
      do {
                    /* try { // try from 00f4d850 to 0104d873 has its CatchHandler @ 00f4d8c8 */
        lVar8 = lVar7;
        if ((long)(int)pvVar6 < *(long *)((*(long **)(this + 0x3d0))[2] + lVar7 * 8)) break;
        lVar7 = lVar7 + 1;
        lVar8 = lVar4;
      } while (lVar4 != lVar7);
    }
                    /* try { // try from 00f4d880 to 0104d8a3 has its CatchHandler @ 00f4d8cc */
    SpriteBatchNode::insertQuadFromSprite((SpriteBatchNode *)this,pSVar5,lVar8);
    ccCArrayInsertValueAtIndex(*(_ccCArray **)(this + 0x3d0),pvVar6,lVar8);
    plVar2 = *(long **)(this + 0x180);
    for (plVar1 = *(long **)(this + 0x178); plVar1 != plVar2; plVar1 = plVar1 + 1) {
                    /* catch() { ... } // from try @ 00f4d770 with catch @ 00f4d8b0 */
                    /* catch() { ... } // from try @ 00f4d6e4 with catch @ 00f4d8b4 */
      lVar4 = *(long *)(*plVar1 + 0x308);
                    /* catch() { ... } // from try @ 00f4d6ec with catch @ 00f4d8b8 */
      if (lVar8 <= lVar4) {
        *(long *)(*plVar1 + 0x308) = lVar4 + 1;
                    /* catch() { ... } // from try @ 00f4d850 with catch @ 00f4d8c8 */
      }
                    /* try { // try from 00f4d8a4 to 0104d907 has its CatchHandler @ 00f4d664 */
                    /* catch() { ... } // from try @ 00f4d754 with catch @ 00f4d8ac */
    }
                    /* catch() { ... } // from try @ 00f4d814 with catch @ 00f4d8cc
                       catch() { ... } // from try @ 00f4d880 with catch @ 00f4d8cc */
    *(uint *)(*(long *)(this + 0x3f0) + (long)pvVar6 * 4) = param_1;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return pSVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

