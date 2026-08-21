
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::AttachNode::getWorldToNodeTransform() const */

void cocos2d::AttachNode::getWorldToNodeTransform(void)

{
  long lVar1;
  int iVar2;
  Node *in_x0;
  long *plVar3;
  Mat4 *pMVar4;
  Mat4 *pMVar5;
  Mat4 *in_x8;
  Mat4 aMStack_108 [64];
  Mat4 aMStack_c8 [64];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (((DAT_01787330 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01787330), iVar2 != 0)) {
    Mat4::Mat4((Mat4 *)&DAT_017872f0);
    __cxa_atexit(Mat4::~Mat4,&DAT_017872f0,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01787330);
  }
  Mat4::setIdentity((Mat4 *)&DAT_017872f0);
  plVar3 = (long *)(**(code **)(*(long *)in_x0 + 0x268))();
  if (plVar3 == (long *)0x0) {
    pMVar4 = (Mat4 *)Bone3D::getWorldMat(*(Bone3D **)(in_x0 + 0x2f8));
    pMVar5 = (Mat4 *)Node::getNodeToParentTransform(in_x0);
    Mat4::Mat4((Mat4 *)&local_88,pMVar4);
    Mat4::multiply((Mat4 *)&local_88,pMVar5);
    pMVar4 = (Mat4 *)&local_88;
    uRam00000000017872f8 = uStack_80;
    _DAT_017872f0 = local_88;
    uRam0000000001787308 = uStack_70;
    _DAT_01787300 = local_78;
    uRam0000000001787318 = uStack_60;
    _DAT_01787310 = local_68;
    uRam0000000001787328 = uStack_50;
    _DAT_01787320 = local_58;
  }
  else {
    (**(code **)(*plVar3 + 0x448))(aMStack_108);
    pMVar4 = (Mat4 *)Bone3D::getWorldMat(*(Bone3D **)(in_x0 + 0x2f8));
    Mat4::Mat4(aMStack_c8,aMStack_108);
    Mat4::multiply(aMStack_c8,pMVar4);
    pMVar4 = (Mat4 *)Node::getNodeToParentTransform(in_x0);
    Mat4::Mat4((Mat4 *)&local_88,aMStack_c8);
    Mat4::multiply((Mat4 *)&local_88,pMVar4);
    uRam00000000017872f8 = uStack_80;
    _DAT_017872f0 = local_88;
    uRam0000000001787308 = uStack_70;
    _DAT_01787300 = local_78;
    uRam0000000001787318 = uStack_60;
    _DAT_01787310 = local_68;
    uRam0000000001787328 = uStack_50;
    _DAT_01787320 = local_58;
    Mat4::~Mat4((Mat4 *)&local_88);
    Mat4::~Mat4(aMStack_c8);
    pMVar4 = aMStack_108;
  }
  Mat4::~Mat4(pMVar4);
  Mat4::Mat4(in_x8,(Mat4 *)&DAT_017872f0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

