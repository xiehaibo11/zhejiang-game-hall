
/* cocos2d::Sprite3D::getAABB() const */

Sprite3D * __thiscall cocos2d::Sprite3D::getAABB(Sprite3D *this)

{
  AABB *this_00;
  long lVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
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
  (**(code **)(*(long *)this + 0x430))(&local_88);
  iVar2 = memcmp(this + 0x380,&local_88,0x40);
  if ((iVar2 != 0) || (this[0x3c0] != (Sprite3D)0x0)) {
    this_00 = (AABB *)(this + 0x368);
    AABB::reset(this_00);
    if (*(long *)(this + 0x358) != *(long *)(this + 0x350)) {
      Mat4::Mat4(aMStack_c8,(Mat4 *)&local_88);
      plVar5 = *(long **)(this + 0x358);
      for (plVar4 = *(long **)(this + 0x350); plVar4 != plVar5; plVar4 = plVar4 + 1) {
        uVar3 = Mesh::isVisible((Mesh *)*plVar4);
        if ((uVar3 & 1) != 0) {
          AABB::merge(this_00,(AABB *)(*plVar4 + 0x150));
        }
      }
      AABB::transform(this_00,aMStack_c8);
      *(undefined8 *)(this + 0x3a8) = uStack_60;
      *(undefined8 *)(this + 0x3a0) = local_68;
      *(undefined8 *)(this + 0x3b8) = uStack_50;
      *(undefined8 *)(this + 0x3b0) = local_58;
      *(undefined8 *)(this + 0x388) = uStack_80;
      *(undefined8 *)(this + 0x380) = local_88;
      *(undefined8 *)(this + 0x398) = uStack_70;
      *(undefined8 *)(this + 0x390) = local_78;
      this[0x3c0] = (Sprite3D)0x0;
      Mat4::~Mat4(aMStack_c8);
    }
  }
  Mat4::~Mat4((Mat4 *)&local_88);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this + 0x368;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

