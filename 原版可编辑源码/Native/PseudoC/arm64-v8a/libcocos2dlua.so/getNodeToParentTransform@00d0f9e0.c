
/* cocos2d::AttachNode::getNodeToParentTransform() const */

AttachNode * __thiscall cocos2d::AttachNode::getNodeToParentTransform(AttachNode *this)

{
  long lVar1;
  Mat4 *pMVar2;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Node::getNodeToParentTransform((Node *)this);
  pMVar2 = (Mat4 *)Bone3D::getWorldMat(*(Bone3D **)(this + 0x2f8));
  Mat4::Mat4((Mat4 *)&local_78,pMVar2);
  Mat4::multiply((Mat4 *)&local_78,(Mat4 *)(this + 0xcc));
  *(undefined8 *)(this + 0x328) = uStack_50;
  *(undefined8 *)(this + 800) = local_58;
  *(undefined8 *)(this + 0x338) = uStack_40;
  *(undefined8 *)(this + 0x330) = local_48;
  *(undefined8 *)(this + 0x308) = uStack_70;
  *(undefined8 *)(this + 0x300) = local_78;
  *(undefined8 *)(this + 0x318) = uStack_60;
  *(undefined8 *)(this + 0x310) = local_68;
  Mat4::~Mat4((Mat4 *)&local_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this + 0x300;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

