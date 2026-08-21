
/* spine::SkeletonRenderer::drawDebug(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
spine::SkeletonRenderer::drawDebug
          (SkeletonRenderer *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  Director *pDVar3;
  DrawNode *this_00;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  Vec2 aVStack_108 [8];
  float local_100;
  float fStack_fc;
  undefined8 uStack_f8;
  Color4B aCStack_f4 [4];
  undefined8 local_f0;
  Vec3 aVStack_e8 [12];
  Color4B aCStack_dc [4];
  undefined8 local_d8;
  Vec3 aVStack_d0 [12];
  Color4B aCStack_c4 [4];
  undefined8 local_c0;
  Vec3 aVStack_b8 [12];
  Color4B aCStack_ac [4];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  pDVar3 = (Director *)cocos2d::Director::getInstance();
  cocos2d::Director::pushMatrix(pDVar3,0);
  cocos2d::Director::loadMatrix(pDVar3,0,param_2);
  this_00 = (DrawNode *)cocos2d::DrawNode::create(2.0);
  if (this[0x394] != (SkeletonRenderer)0x0) {
    glLineWidth(0x3f800000);
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    cocos2d::Vec3::Vec3((Vec3 *)&local_100);
    cocos2d::Color4B::Color4B(aCStack_f4);
    local_f0 = 0;
    cocos2d::Vec3::Vec3(aVStack_e8);
    cocos2d::Color4B::Color4B(aCStack_dc);
    local_d8 = 0;
    cocos2d::Vec3::Vec3(aVStack_d0);
    cocos2d::Color4B::Color4B(aCStack_c4);
    local_c0 = 0;
    cocos2d::Vec3::Vec3(aVStack_b8);
    cocos2d::Color4B::Color4B(aCStack_ac);
    local_a8 = 0;
    lVar4 = *(long *)(this + 0x388);
    uVar1 = *(uint *)(lVar4 + 0x20);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      while( true ) {
        lVar5 = *(long *)(*(long *)(lVar4 + 0x30) + lVar8 * 8);
        lVar4 = *(long *)(lVar5 + 0x28);
        if ((lVar4 != 0) && (*(int *)(lVar4 + 8) == 0)) {
          spRegionAttachment_computeWorldVertices
                    (lVar4,*(undefined8 *)(lVar5 + 8),*(undefined8 *)(this + 0x378),0,2);
          puVar6 = *(undefined8 **)(this + 0x378);
          uStack_98 = puVar6[1];
          local_a0 = *puVar6;
          uStack_88 = puVar6[3];
          local_90 = puVar6[2];
          cocos2d::DrawNode::drawPoly
                    (this_00,(Vec2 *)&local_a0,4,true,(Color4F *)cocos2d::Color4F::BLUE);
        }
        if ((ulong)uVar1 - 1 == lVar8) break;
        lVar4 = *(long *)(this + 0x388);
        lVar8 = lVar8 + 1;
      }
    }
  }
  if (this[0x395] != (SkeletonRenderer)0x0) {
    glLineWidth(0x40000000);
    lVar4 = *(long *)(this + 0x388);
    uVar1 = *(uint *)(lVar4 + 8);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        plVar7 = *(long **)(*(long *)(lVar4 + 0x10) + uVar9 * 8);
        _local_100 = CONCAT44(*(float *)(plVar7 + 0xf),*(float *)((long)plVar7 + 0x6c));
        local_a0 = CONCAT44(*(float *)(*plVar7 + 0x18) * *(float *)(plVar7 + 0xe) +
                            *(float *)(plVar7 + 0xf),
                            *(float *)(*plVar7 + 0x18) * *(float *)((long)plVar7 + 100) +
                            *(float *)((long)plVar7 + 0x6c));
        cocos2d::DrawNode::drawLine
                  (this_00,(Vec2 *)&local_100,(Vec2 *)&local_a0,(Color4F *)cocos2d::Color4F::RED);
        lVar4 = *(long *)(this + 0x388);
        uVar9 = uVar9 + 1;
      } while (uVar1 != uVar9);
    }
    uStack_f8 = cocos2d::Color4F::BLUE._8_8_;
    _local_100 = cocos2d::Color4F::BLUE._0_8_;
    uVar1 = *(uint *)(lVar4 + 8);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      while( true ) {
        lVar4 = *(long *)(*(long *)(lVar4 + 0x10) + lVar8 * 8);
        local_a0 = CONCAT44(*(undefined4 *)(lVar4 + 0x78),*(undefined4 *)(lVar4 + 0x6c));
        cocos2d::DrawNode::drawPoint(this_00,(Vec2 *)&local_a0,4.0,(Color4F *)&local_100);
        if (lVar8 == 0) {
          uStack_f8 = cocos2d::Color4F::GREEN._8_8_;
          _local_100 = cocos2d::Color4F::GREEN._0_8_;
        }
        if ((ulong)uVar1 - 1 == lVar8) break;
        lVar4 = *(long *)(this + 0x388);
        lVar8 = lVar8 + 1;
      }
    }
  }
  if (this[0x396] != (SkeletonRenderer)0x0) {
    glLineWidth(0x3f800000);
    lVar4 = *(long *)(this + 0x388);
    uVar1 = *(uint *)(lVar4 + 0x20);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      while( true ) {
        lVar4 = *(long *)(*(long *)(lVar4 + 0x30) + uVar9 * 8);
        lVar8 = *(long *)(lVar4 + 0x28);
        if (((lVar8 != 0) && (*(int *)(lVar8 + 8) == 2)) &&
           (spVertexAttachment_computeWorldVertices
                      (lVar8,lVar4,0,*(undefined4 *)(lVar8 + 0x40),*(undefined8 *)(this + 0x378),0,2
                      ), 0 < *(int *)(lVar8 + 0x98))) {
          lVar4 = 0;
          do {
            lVar5 = lVar4 * 2;
            cocos2d::Vec2::set((Vec2 *)&local_100,
                               (float *)(*(long *)(this + 0x378) +
                                        (ulong)*(ushort *)(*(long *)(lVar8 + 0xa0) + lVar5) * 8));
            cocos2d::Vec2::set((Vec2 *)&local_a0,
                               (float *)(*(long *)(this + 0x378) +
                                        (ulong)*(ushort *)(*(long *)(lVar8 + 0xa0) + lVar5 + 2) * 8)
                              );
            lVar4 = lVar4 + 3;
            cocos2d::Vec2::set(aVStack_108,
                               (float *)(*(long *)(this + 0x378) +
                                        (ulong)*(ushort *)(*(long *)(lVar8 + 0xa0) + lVar5 + 4) * 8)
                              );
            cocos2d::DrawNode::drawLine
                      (this_00,(Vec2 *)&local_100,(Vec2 *)&local_a0,
                       (Color4F *)cocos2d::Color4F::YELLOW);
            cocos2d::DrawNode::drawLine
                      (this_00,(Vec2 *)&local_a0,aVStack_108,(Color4F *)cocos2d::Color4F::YELLOW);
            cocos2d::DrawNode::drawLine
                      (this_00,aVStack_108,(Vec2 *)&local_100,(Color4F *)cocos2d::Color4F::YELLOW);
          } while ((int)lVar4 < *(int *)(lVar8 + 0x98));
        }
        uVar9 = uVar9 + 1;
        if (uVar9 == uVar1) break;
        lVar4 = *(long *)(this + 0x388);
      }
    }
  }
  (**(code **)(*(long *)this_00 + 0x348))(this_00,param_1,param_2,param_3);
  cocos2d::Director::popMatrix(pDVar3,0);
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00d52c78 to 00e52c7f has its CatchHandler @ 00d52d44 */
  __stack_chk_fail();
}

