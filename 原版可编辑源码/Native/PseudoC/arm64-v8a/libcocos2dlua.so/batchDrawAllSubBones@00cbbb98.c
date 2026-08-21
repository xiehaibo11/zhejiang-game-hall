
/* cocostudio::timeline::SkeletonNode::batchDrawAllSubBones(cocos2d::Mat4 const&) */

void __thiscall
cocostudio::timeline::SkeletonNode::batchDrawAllSubBones(SkeletonNode *this,Mat4 *param_1)

{
  long *plVar1;
  long lVar2;
  GLProgram *pGVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  _lambda_cocostudio__timeline__BoneNode__cocostudio__timeline__BoneNode___1_ a_Stack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (this[0x5b8] != (SkeletonNode)0x0) {
    updateOrderedAllbones(this);
    this[0x5b8] = (SkeletonNode)0x0;
  }
  if (this[0x5b9] != (SkeletonNode)0x0) {
    std::__ndk1::
    __sort<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
              (*(BoneNode ***)(this + 0x5a0),*(BoneNode ***)(this + 0x5a8),a_Stack_50);
    this[0x5b9] = (SkeletonNode)0x0;
  }
  puVar7 = *(undefined8 **)(this + 0x5a0);
  puVar9 = *(undefined8 **)(this + 0x5a8);
  *(undefined4 *)(this + 0x5f0) = 0;
  for (; puVar7 != puVar9; puVar7 = puVar7 + 1) {
    (**(code **)(*(long *)this + 0x618))(this,*puVar7);
  }
  uVar8 = *(undefined8 *)(this + 0x5c0);
  uVar10 = *(undefined8 *)(this + 0x5d8);
  pGVar3 = (GLProgram *)cocos2d::Node::getGLProgram((Node *)this);
  cocos2d::GLProgram::use(pGVar3);
  pGVar3 = (GLProgram *)cocos2d::Node::getGLProgram((Node *)this);
  cocos2d::GLProgram::setUniformsForBuiltins(pGVar3,param_1);
  cocos2d::GL::enableVertexAttribs(3);
  glBindBuffer(0x8892,0);
  glVertexAttribPointer(0,3,0x1406,0,0,uVar8);
  glVertexAttribPointer(1,4,0x1406,0,0,uVar10);
  cocos2d::GL::blendFunc(*(uint *)(this + 0x350),*(uint *)(this + 0x354));
  if (0 < *(int *)(this + 0x5f0)) {
    iVar6 = 0;
    do {
      glDrawArrays(6,iVar6,4);
      iVar6 = iVar6 + 4;
    } while (iVar6 < *(int *)(this + 0x5f0));
  }
  lVar4 = cocos2d::Director::getInstance();
  lVar5 = *(long *)(lVar4 + 0x1b0);
  plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar5);
  lVar4 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar5);
  *plVar1 = *plVar1 + 1;
  *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar5) = lVar4 + *(int *)(this + 0x5f0);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

