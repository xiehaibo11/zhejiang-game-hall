
/* cocos2d::TMXLayer::getTileAt(cocos2d::Vec2 const&) */

Sprite * __thiscall cocos2d::TMXLayer::getTileAt(TMXLayer *this,Vec2 *param_1)

{
  long lVar1;
  Sprite *pSVar2;
  long lVar3;
  Texture2D *pTVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int local_88;
  float fStack_84;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  long local_68;
  
                    /* catch() { ... } // from try @ 00f4d1f0 with catch @ 00f4d40c */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00f4d0e0 with catch @ 00f4d410 */
  local_68 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00f4cf94 with catch @ 00f4d414 */
                    /* catch() { ... } // from try @ 00f4cea0 with catch @ 00f4d418 */
                    /* catch() { ... } // from try @ 00f4cde0 with catch @ 00f4d41c */
                    /* catch() { ... } // from try @ 00f4cdcc with catch @ 00f4d420 */
                    /* catch() { ... } // from try @ 00f4cda8 with catch @ 00f4d424 */
                    /* catch() { ... } // from try @ 00f4ccd4 with catch @ 00f4d428 */
                    /* catch() { ... } // from try @ 00f4ccb0 with catch @ 00f4d42c */
                    /* catch() { ... } // from try @ 00f4cbf0 with catch @ 00f4d430 */
                    /* catch() { ... } // from try @ 00f4cbb8 with catch @ 00f4d434 */
                    /* catch() { ... } // from try @ 00f4caf8 with catch @ 00f4d438 */
                    /* catch() { ... } // from try @ 00f4cae4 with catch @ 00f4d43c */
                    /* catch() { ... } // from try @ 00f4c8c8 with catch @ 00f4d440 */
                    /* catch() { ... } // from try @ 00f4c8b4 with catch @ 00f4d444 */
                    /* catch() { ... } // from try @ 00f4c7bc with catch @ 00f4d448 */
  if ((*(uint *)(*(long *)(this + 0x3f0) +
                (long)(int)(*(float *)(this + 0x3dc) * (float)(int)*(float *)(param_1 + 4) +
                           (float)(int)*(float *)param_1) * 4) & 0x1fffffff) == 0) {
    pSVar2 = (Sprite *)0x0;
    goto LAB_00f4d630;
  }
                    /* catch() { ... } // from try @ 00f4c798 with catch @ 00f4d44c */
                    /* catch() { ... } // from try @ 00f4c6d8 with catch @ 00f4d450 */
                    /* catch() { ... } // from try @ 00f4c6a0 with catch @ 00f4d454 */
                    /* catch() { ... } // from try @ 00f4c518 with catch @ 00f4d458 */
  iVar7 = (int)(*(float *)param_1 + *(float *)(param_1 + 4) * *(float *)(this + 0x3dc));
                    /* catch() { ... } // from try @ 00f4ced8 with catch @ 00f4d45c */
                    /* catch() { ... } // from try @ 00f4cec4 with catch @ 00f4d460 */
                    /* catch() { ... } // from try @ 00f4cce8 with catch @ 00f4d464 */
                    /* catch() { ... } // from try @ 00f4cbdc with catch @ 00f4d468 */
                    /* catch() { ... } // from try @ 00f4cac0 with catch @ 00f4d46c */
  pSVar2 = (Sprite *)(**(code **)(*(long *)this + 0x228))(this,iVar7);
                    /* catch() { ... } // from try @ 00f4c890 with catch @ 00f4d470 */
                    /* catch() { ... } // from try @ 00f4c7d0 with catch @ 00f4d474 */
  if (pSVar2 != (Sprite *)0x0) goto LAB_00f4d630;
                    /* catch() { ... } // from try @ 00f4c6c4 with catch @ 00f4d478 */
                    /* catch() { ... } // from try @ 00f4c5e8 with catch @ 00f4d47c */
                    /* catch() { ... } // from try @ 00f4c5cc with catch @ 00f4d480 */
                    /* catch() { ... } // from try @ 00f4c4fc with catch @ 00f4d484 */
  TMXTilesetInfo::getRectForGID((uint)*(undefined8 *)(this + 0x3f8));
                    /* catch() { ... } // from try @ 00f4c4ec with catch @ 00f4d488 */
                    /* catch() { ... } // from try @ 00f4c448 with catch @ 00f4d48c */
  lVar3 = Director::getInstance();
                    /* catch() { ... } // from try @ 00f4c5bc with catch @ 00f4d490 */
  fVar8 = *(float *)(lVar3 + 0x1a0);
                    /* catch() { ... } // from try @ 00f4c378 with catch @ 00f4d494 */
                    /* catch() { ... } // from try @ 00f4c42c with catch @ 00f4d498 */
  lVar3 = Director::getInstance();
  fVar10 = local_74 / *(float *)(lVar3 + 0x1a0);
  lVar3 = Director::getInstance();
                    /* catch() { ... } // from try @ 00f4c41c with catch @ 00f4d4b0 */
  fVar9 = *(float *)(lVar3 + 0x1a0);
                    /* catch() { ... } // from try @ 00f4c2ac with catch @ 00f4d4b4 */
                    /* catch() { ... } // from try @ 00f4c35c with catch @ 00f4d4b8 */
                    /* catch() { ... } // from try @ 00f4c1e0 with catch @ 00f4d4bc */
  lVar3 = Director::getInstance();
                    /* catch() { ... } // from try @ 00f4c290 with catch @ 00f4d4c0 */
                    /* catch() { ... } // from try @ 00f4c114 with catch @ 00f4d4c4 */
                    /* catch() { ... } // from try @ 00f4c1c4 with catch @ 00f4d4c8 */
                    /* catch() { ... } // from try @ 00f4be74 with catch @ 00f4d4cc */
                    /* catch() { ... } // from try @ 00f4c000 with catch @ 00f4d4d0 */
                    /* catch() { ... } // from try @ 00f4c0f8 with catch @ 00f4d4d4 */
                    /* catch() { ... } // from try @ 00f4bcdc with catch @ 00f4d4d8 */
  Rect::Rect((Rect *)&local_88,local_78 / fVar8,fVar10,local_70 / fVar9,
             local_6c / *(float *)(lVar3 + 0x1a0));
                    /* catch() { ... } // from try @ 00f4bfe4 with catch @ 00f4d4dc */
                    /* catch() { ... } // from try @ 00f4bb44 with catch @ 00f4d4e0 */
  Rect::operator=((Rect *)&local_78,(Rect *)&local_88);
  pTVar4 = (Texture2D *)(**(code **)(*(long *)this + 0x530))(this);
                    /* catch() { ... } // from try @ 00f4be88 with catch @ 00f4d500 */
  pSVar2 = (Sprite *)Sprite::createWithTexture(pTVar4,(Rect *)&local_78,false);
                    /* catch() { ... } // from try @ 00f4be50 with catch @ 00f4d504 */
                    /* catch() { ... } // from try @ 00f4bcf0 with catch @ 00f4d508 */
                    /* catch() { ... } // from try @ 00f4bcb8 with catch @ 00f4d50c */
                    /* catch() { ... } // from try @ 00f4b9c8 with catch @ 00f4d510 */
                    /* catch() { ... } // from try @ 00f4bf38 with catch @ 00f4d514 */
  (**(code **)(*(long *)pSVar2 + 0x538))(pSVar2,this);
                    /* catch() { ... } // from try @ 00f4bb20 with catch @ 00f4d518 */
                    /* catch() { ... } // from try @ 00f4bb58 with catch @ 00f4d51c */
                    /* catch() { ... } // from try @ 00f4b858 with catch @ 00f4d520 */
  local_88 = getPositionAt(this,param_1);
                    /* catch() { ... } // from try @ 00f4bda4 with catch @ 00f4d524 */
                    /* catch() { ... } // from try @ 00f4b9ac with catch @ 00f4d528 */
                    /* catch() { ... } // from try @ 00f4b99c with catch @ 00f4d52c */
                    /* catch() { ... } // from try @ 00f4b6e8 with catch @ 00f4d530 */
                    /* catch() { ... } // from try @ 00f4bc0c with catch @ 00f4d534 */
  fStack_84 = fVar10;
                    /* catch() { ... } // from try @ 00f4b83c with catch @ 00f4d538 */
  (**(code **)(*(long *)pSVar2 + 0x98))(pSVar2,&local_88);
                    /* catch() { ... } // from try @ 00f4b82c with catch @ 00f4d53c */
                    /* catch() { ... } // from try @ 00f4b578 with catch @ 00f4d540 */
  if (this[0x3c0] == (TMXLayer)0x0) {
                    /* catch() { ... } // from try @ 00f4b3dc with catch @ 00f4d57c */
    iVar6 = *(int *)(this + 0x3bc);
                    /* catch() { ... } // from try @ 00f4ad24 with catch @ 00f4d580 */
  }
  else {
                    /* catch() { ... } // from try @ 00f4ba74 with catch @ 00f4d544 */
                    /* catch() { ... } // from try @ 00f4b6cc with catch @ 00f4d548 */
                    /* catch() { ... } // from try @ 00f4b6bc with catch @ 00f4d54c */
                    /* catch() { ... } // from try @ 00f4b408 with catch @ 00f4d550 */
                    /* catch() { ... } // from try @ 00f4b8fc with catch @ 00f4d554 */
                    /* catch() { ... } // from try @ 00f4b55c with catch @ 00f4d558 */
                    /* catch() { ... } // from try @ 00f4b54c with catch @ 00f4d55c */
                    /* catch() { ... } // from try @ 00f4b78c with catch @ 00f4d560 */
                    /* catch() { ... } // from try @ 00f4b3ec with catch @ 00f4d564 */
    switch(*(undefined4 *)(this + 0x400)) {
    case 0:
    case 1:
    case 3:
      fVar8 = *(float *)(this + 0x3e0);
      fVar9 = *(float *)(param_1 + 4);
      break;
    case 2:
                    /* catch() { ... } // from try @ 00f4b61c with catch @ 00f4d584 */
                    /* catch() { ... } // from try @ 00f4b27c with catch @ 00f4d588 */
                    /* catch() { ... } // from try @ 00f4b4ac with catch @ 00f4d58c */
                    /* catch() { ... } // from try @ 00f4b108 with catch @ 00f4d590 */
                    /* catch() { ... } // from try @ 00f4b0f8 with catch @ 00f4d594 */
                    /* catch() { ... } // from try @ 00f4b26c with catch @ 00f4d598
                       catch() { ... } // from try @ 00f4b298 with catch @ 00f4d598 */
      fVar8 = (float)(int)(*(float *)(this + 0x3dc) + *(float *)(this + 0x3e0));
                    /* catch() { ... } // from try @ 00f4b33c with catch @ 00f4d59c */
      fVar9 = *(float *)param_1 + *(float *)(param_1 + 4);
      break;
    default:
                    /* catch() { ... } // from try @ 00f4d8a4 with catch @ 00f4d664 */
      iVar6 = 0;
      goto LAB_00f4d5ac;
    }
                    /* catch() { ... } // from try @ 00f4ad44 with catch @ 00f4d5a0 */
                    /* catch() { ... } // from try @ 00f4aca8 with catch @ 00f4d5a4 */
                    /* catch() { ... } // from try @ 00f4b1cc with catch @ 00f4d5a8 */
    iVar6 = (int)-(fVar8 - fVar9);
  }
LAB_00f4d5ac:
                    /* catch() { ... } // from try @ 00f4afa0 with catch @ 00f4d5ac */
                    /* catch() { ... } // from try @ 00f4b058 with catch @ 00f4d5b0 */
                    /* catch() { ... } // from try @ 00f4af7c with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4b0dc with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4b250 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4b3c0 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4b530 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4b6a0 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4b810 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4b980 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4baf8 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4bc90 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4be28 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4bfbc with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4c0d0 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4c19c with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4c268 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4c334 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4c400 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4c4d0 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4c5a0 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4c678 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4c770 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4c868 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4c960 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4ca98 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4cb90 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4cc88 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4cd80 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4ce78 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4cf70 with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4d0bc with catch @ 00f4d5b4
                       catch() { ... } // from try @ 00f4d1a8 with catch @ 00f4d5b4 */
                    /* catch() { ... } // from try @ 00f4adbc with catch @ 00f4d5b8 */
                    /* catch() { ... } // from try @ 00f4ae74 with catch @ 00f4d5bc */
  (**(code **)(*(long *)pSVar2 + 0x108))((float)iVar6,pSVar2);
  (**(code **)(*(long *)pSVar2 + 0x148))(pSVar2,&Vec2::ZERO);
                    /* catch() { ... } // from try @ 00f4b040 with catch @ 00f4d5e8
                       catch() { ... } // from try @ 00f4b1b4 with catch @ 00f4d5e8
                       catch() { ... } // from try @ 00f4b324 with catch @ 00f4d5e8
                       catch() { ... } // from try @ 00f4b494 with catch @ 00f4d5e8
                       catch() { ... } // from try @ 00f4b604 with catch @ 00f4d5e8
                       catch() { ... } // from try @ 00f4b774 with catch @ 00f4d5e8
                       catch() { ... } // from try @ 00f4b8e4 with catch @ 00f4d5e8
                       catch() { ... } // from try @ 00f4ba5c with catch @ 00f4d5e8
                       catch() { ... } // from try @ 00f4bbf4 with catch @ 00f4d5e8
                       catch() { ... } // from try @ 00f4bd8c with catch @ 00f4d5e8
                       catch() { ... } // from try @ 00f4bf20 with catch @ 00f4d5e8
                       catch() { ... } // from try @ 00f4c02c with catch @ 00f4d5e8 */
  (**(code **)(*(long *)pSVar2 + 0x490))(pSVar2,this[0x3b8]);
                    /* catch() { ... } // from try @ 00f4acb0 with catch @ 00f4d600 */
  local_88 = iVar7;
  pvVar5 = bsearch(&local_88,(void *)(*(size_t **)(this + 0x3d0))[2],**(size_t **)(this + 0x3d0),8,
                   FUN_00f4db28);
  SpriteBatchNode::addSpriteWithoutQuad
            ((SpriteBatchNode *)this,pSVar2,
             (int)((ulong)((long)pvVar5 - *(long *)(*(long *)(this + 0x3d0) + 0x10)) >> 3),iVar7);
LAB_00f4d630:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pSVar2;
}

