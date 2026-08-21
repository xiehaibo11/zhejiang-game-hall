
/* cocostudio::timeline::SkeletonNode::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int)
    */

void __thiscall
cocostudio::timeline::SkeletonNode::visit
          (SkeletonNode *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  Mat4 *pMVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  code *local_b0;
  undefined8 uStack_a8;
  SkeletonNode *local_a0;
  Mat4 aMStack_98 [64];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (this[0x1f9] != (SkeletonNode)0x0) {
    uVar3 = cocos2d::Node::processParentFlags((Node *)this,param_2,param_3);
    cocos2d::Director::pushMatrix(*(Director **)(this + 0x198),0);
    pMVar1 = (Mat4 *)(this + 0x8c);
    cocos2d::Director::loadMatrix(*(Director **)(this + 0x198),0,pMVar1);
    if (*(long *)(this + 0x178) != *(long *)(this + 0x180)) {
      (**(code **)(*(long *)this + 0x2b0))(this);
      puVar7 = *(undefined8 **)(this + 0x178);
      puVar9 = *(undefined8 **)(this + 0x180);
      if (((long)puVar9 - (long)puVar7 < 1) || (plVar5 = (long *)*puVar7, plVar5 == (long *)0x0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = 1;
        do {
          iVar4 = (**(code **)(*plVar5 + 0x30))(plVar5);
          if (-1 < iVar4) {
            puVar7 = *(undefined8 **)(this + 0x178);
            puVar9 = *(undefined8 **)(this + 0x180);
            break;
          }
          (**(code **)(*plVar5 + 0x358))(plVar5,param_1,pMVar1,uVar3);
          puVar7 = *(undefined8 **)(this + 0x178);
          puVar9 = *(undefined8 **)(this + 0x180);
          if ((long)puVar9 - (long)puVar7 >> 3 <= (long)uVar8) {
            uVar8 = uVar8 & 0xffffffff;
            goto LAB_00cbb9b8;
          }
          plVar5 = (long *)puVar7[uVar8];
          uVar8 = uVar8 + 1;
        } while (plVar5 != (long *)0x0);
        uVar8 = uVar8 - 1;
      }
LAB_00cbb9b8:
      puVar6 = puVar7 + uVar8;
      if (puVar7 + uVar8 != puVar9) {
        do {
          puVar7 = puVar6 + 1;
          (**(code **)(*(long *)*puVar6 + 0x358))((long *)*puVar6,param_1,pMVar1,uVar3);
          puVar6 = puVar7;
        } while (puVar7 != *(undefined8 **)(this + 0x180));
      }
    }
    if (this[0x5b8] != (SkeletonNode)0x0) {
      updateOrderedAllbones(this);
      this[0x5b8] = (SkeletonNode)0x0;
    }
    if (this[0x5b9] != (SkeletonNode)0x0) {
      std::__ndk1::
      __sort<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
                (*(BoneNode ***)(this + 0x5a0),*(BoneNode ***)(this + 0x5a8),
                 (_lambda_cocostudio__timeline__BoneNode__cocostudio__timeline__BoneNode___1_ *)
                 &local_b0);
      this[0x5b9] = (SkeletonNode)0x0;
    }
    puVar9 = *(undefined8 **)(this + 0x5a8);
    for (puVar7 = *(undefined8 **)(this + 0x5a0); puVar7 != puVar9; puVar7 = puVar7 + 1) {
      (**(code **)(*(long *)this + 0x620))(this,param_1,*puVar7);
    }
    if (this[0x358] != (SkeletonNode)0x0) {
      (**(code **)(*(long *)this + 0x348))(this,param_1,pMVar1,uVar3);
      cocos2d::CustomCommand::init(*(float *)(this + 0x170),(Mat4 *)(this + 0x600),(uint)pMVar1);
      uStack_a8 = 0;
      local_b0 = batchDrawAllSubBones;
      local_a0 = this;
      cocos2d::Mat4::Mat4(aMStack_98,pMVar1);
      std::__ndk1::function<void()>::operator=
                ((function<void()> *)(this + 0x620),(__bind *)&local_b0);
      cocos2d::Mat4::~Mat4(aMStack_98);
      cocos2d::Renderer::addCommand(param_1,(RenderCommand *)(this + 0x600));
    }
    cocos2d::Director::popMatrix(*(Director **)(this + 0x198),0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

