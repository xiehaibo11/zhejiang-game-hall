
/* cocos2d::renderer::NodeProxy::getWorldRT(cocos2d::Mat4*) const */

void __thiscall cocos2d::renderer::NodeProxy::getWorldRT(NodeProxy *this,Mat4 *param_1)

{
  long lVar1;
  float *pfVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  float local_a0;
  Quaternion aQStack_98 [16];
  undefined8 local_88;
  float local_80;
  Mat4 aMStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pfVar2 = *(float **)(this + 0x88);
  Vec3::Vec3((Vec3 *)&local_88,*pfVar2,pfVar2[1],pfVar2[2]);
  lVar3 = *(long *)(this + 0x88);
  Quaternion::Quaternion
            (aQStack_98,*(float *)(lVar3 + 0xc),*(float *)(lVar3 + 0x10),*(float *)(lVar3 + 0x14),
             *(float *)(lVar3 + 0x18));
  Vec3::Vec3((Vec3 *)&local_a8);
  Quaternion::Quaternion((Quaternion *)&local_c0);
  Vec3::Vec3((Vec3 *)&local_d0);
  while (this = *(NodeProxy **)(this + 0xe8), this != (NodeProxy *)0x0) {
    puVar4 = *(undefined8 **)(this + 0x88);
    local_a8 = *puVar4;
    local_a0 = *(float *)(puVar4 + 1);
    uStack_b8 = *(undefined8 *)((long)puVar4 + 0x14);
    local_c0 = *(undefined8 *)((long)puVar4 + 0xc);
    local_d0 = *(undefined8 *)((long)puVar4 + 0x1c);
    local_c8 = *(undefined4 *)((long)puVar4 + 0x24);
    Vec3::multiply((Vec3 *)&local_88,(Vec3 *)&local_d0);
    Vec3::transformQuat((Vec3 *)&local_88,(Quaternion *)&local_c0);
    local_88 = CONCAT44((float)((ulong)local_a8 >> 0x20) + (float)((ulong)local_88 >> 0x20),
                        (float)local_a8 + (float)local_88);
    local_80 = local_a0 + local_80;
    Quaternion::multiply((Quaternion *)&local_c0,aQStack_98,aQStack_98);
  }
  Mat4::setIdentity(param_1);
  Mat4::translate(param_1,(Vec3 *)&local_88);
  Mat4::Mat4(aMStack_78);
  Mat4::createRotation(aQStack_98,aMStack_78);
  Mat4::multiply(param_1,aMStack_78);
  Mat4::~Mat4(aMStack_78);
  Vec3::~Vec3((Vec3 *)&local_d0);
  Quaternion::~Quaternion((Quaternion *)&local_c0);
  Vec3::~Vec3((Vec3 *)&local_a8);
  Quaternion::~Quaternion(aQStack_98);
  Vec3::~Vec3((Vec3 *)&local_88);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

