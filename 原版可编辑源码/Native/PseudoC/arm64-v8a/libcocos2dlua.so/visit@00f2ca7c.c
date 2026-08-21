
/* cocos2d::ParallaxNode::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::ParallaxNode::visit(ParallaxNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  ParallaxNode *pPVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar8 = *(undefined8 *)(this + 0x50);
  lVar2 = (**(code **)(*(long *)this + 0x260))();
  pPVar3 = this;
  while (lVar2 != 0) {
    pPVar3 = (ParallaxNode *)(**(code **)(*(long *)pPVar3 + 0x260))(pPVar3);
    puVar4 = (undefined8 *)(**(code **)(*(long *)pPVar3 + 0xb0))();
    uVar8 = CONCAT44((float)((ulong)uVar8 >> 0x20) + (float)((ulong)*puVar4 >> 0x20),
                     (float)uVar8 + (float)*puVar4);
    lVar2 = (**(code **)(*(long *)pPVar3 + 0x260))(pPVar3);
  }
  local_60 = uVar8;
                    /* try { // try from 00f2cb14 to 0102cb1b has its CatchHandler @ 00f2ccc8 */
                    /* try { // try from 00f2cb1c to 0102cc0f has its CatchHandler @ 00f2c744 */
  uVar5 = Vec2::equals((Vec2 *)&local_60,this + 0x2f8);
  if ((uVar5 & 1) == 0) {
    plVar6 = *(long **)(this + 0x300);
    if (0 < *plVar6) {
      lVar2 = 0;
      do {
        lVar7 = *(long *)(plVar6[2] + lVar2 * 8);
        (**(code **)(**(long **)(lVar7 + 0x38) + 200))
                  (*(float *)(lVar7 + 0x2c) +
                   ((float)local_60 * *(float *)(lVar7 + 0x24) - (float)local_60),
                   *(float *)(lVar7 + 0x30) +
                   (local_60._4_4_ * *(float *)(lVar7 + 0x28) - local_60._4_4_));
        plVar6 = *(long **)(this + 0x300);
        lVar2 = lVar2 + 1;
      } while (lVar2 < *plVar6);
    }
    *(undefined8 *)(this + 0x2f8) = local_60;
  }
  Node::visit((Node *)this,param_1,param_2,param_3);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

