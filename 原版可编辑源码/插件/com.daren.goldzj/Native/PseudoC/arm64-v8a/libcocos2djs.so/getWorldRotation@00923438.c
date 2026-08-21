
/* cocos2d::renderer::NodeProxy::getWorldRotation(cocos2d::Quaternion*) const */

void __thiscall cocos2d::renderer::NodeProxy::getWorldRotation(NodeProxy *this,Quaternion *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(this + 0x88) + 0xc);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(long *)(this + 0x88) + 0x14);
  *(undefined8 *)param_1 = uVar2;
  Quaternion::Quaternion((Quaternion *)&local_50);
  while (this = *(NodeProxy **)(this + 0xe8), this != (NodeProxy *)0x0) {
    uStack_48 = *(undefined8 *)(*(long *)(this + 0x88) + 0x14);
    local_50 = *(undefined8 *)(*(long *)(this + 0x88) + 0xc);
    Quaternion::multiply((Quaternion *)&local_50,param_1,param_1);
  }
  Quaternion::~Quaternion((Quaternion *)&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

