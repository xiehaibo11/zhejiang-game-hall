
/* cocos2d::renderer::NodeProxy::getWorldPosition(cocos2d::Vec3*) const */

void __thiscall cocos2d::renderer::NodeProxy::getWorldPosition(NodeProxy *this,Vec3 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar2 = *(undefined8 **)(this + 0x88);
  *(undefined8 *)param_1 = *puVar2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar2 + 1);
  Vec3::Vec3((Vec3 *)&local_48);
  Quaternion::Quaternion((Quaternion *)&local_60);
  Vec3::Vec3((Vec3 *)&local_70);
  while (this = *(NodeProxy **)(this + 0xe8), this != (NodeProxy *)0x0) {
    puVar2 = *(undefined8 **)(this + 0x88);
    local_48 = *puVar2;
    local_40 = *(float *)(puVar2 + 1);
    uStack_58 = *(undefined8 *)((long)puVar2 + 0x14);
    local_60 = *(undefined8 *)((long)puVar2 + 0xc);
    local_70 = *(undefined8 *)((long)puVar2 + 0x1c);
    local_68 = *(undefined4 *)((long)puVar2 + 0x24);
    Vec3::multiply(param_1,(Vec3 *)&local_70);
    Vec3::transformQuat(param_1,(Quaternion *)&local_60);
    *(ulong *)param_1 =
         CONCAT44((float)((ulong)local_48 >> 0x20) + (float)((ulong)*(undefined8 *)param_1 >> 0x20),
                  (float)local_48 + (float)*(undefined8 *)param_1);
    *(float *)(param_1 + 8) = local_40 + *(float *)(param_1 + 8);
  }
  Vec3::~Vec3((Vec3 *)&local_70);
  Quaternion::~Quaternion((Quaternion *)&local_60);
  Vec3::~Vec3((Vec3 *)&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

