
/* cocos2d::PUCircleEmitter::setNormal(cocos2d::Vec3 const&) */

void __thiscall cocos2d::PUCircleEmitter::setNormal(PUCircleEmitter *this,Vec3 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e34588 with catch @ 00e3485c
                        */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  getRotationTo((Vec3 *)this,(Vec3 *)Vec3::UNIT_Y,param_1);
  *(undefined8 *)(this + 0x220) = uStack_40;
  *(undefined8 *)(this + 0x218) = local_48;
  Quaternion::~Quaternion((Quaternion *)&local_48);
  uVar2 = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x230) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)(this + 0x228) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

