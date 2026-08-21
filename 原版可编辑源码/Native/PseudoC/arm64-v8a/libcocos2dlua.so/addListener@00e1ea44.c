
/* cocos2d::PUParticleSystem3D::addListener(cocos2d::PUListener*) */

void __thiscall
cocos2d::PUParticleSystem3D::addListener(PUParticleSystem3D *this,PUListener *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  PUListener *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar4 = *(undefined8 **)(this + 0x420);
  puVar3 = *(undefined8 **)(this + 0x428);
  local_30 = param_1;
  if ((puVar4 != puVar3) && ((PUListener *)*puVar4 != param_1)) {
    do {
      if (puVar3 + -1 == puVar4) goto LAB_00e1eab0;
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 1;
    } while ((PUListener *)*puVar1 != param_1);
  }
  if (puVar4 == puVar3) {
LAB_00e1eab0:
    if (puVar3 == *(undefined8 **)(this + 0x430)) {
      std::__ndk1::vector<cocos2d::PUListener*,std::__ndk1::allocator<cocos2d::PUListener*>>::
      __push_back_slow_path<cocos2d::PUListener*const&>
                ((vector<cocos2d::PUListener*,std::__ndk1::allocator<cocos2d::PUListener*>> *)
                 (this + 0x420),&local_30);
    }
    else {
      *puVar3 = param_1;
      *(undefined8 **)(this + 0x428) = puVar3 + 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

