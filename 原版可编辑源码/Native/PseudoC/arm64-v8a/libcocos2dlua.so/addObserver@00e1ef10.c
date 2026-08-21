
/* cocos2d::PUParticleSystem3D::addObserver(cocos2d::PUObserver*) */

void __thiscall
cocos2d::PUParticleSystem3D::addObserver(PUParticleSystem3D *this,PUObserver *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  PUObserver *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  puVar4 = *(undefined8 **)(this + 0x398);
  puVar3 = *(undefined8 **)(this + 0x3a0);
  local_40 = param_1;
  if ((puVar4 != puVar3) && ((PUObserver *)*puVar4 != param_1)) {
    do {
      if (puVar3 + -1 == puVar4) goto LAB_00e1ef88;
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 1;
    } while ((PUObserver *)*puVar1 != param_1);
  }
  if (puVar4 == puVar3) {
LAB_00e1ef88:
    Ref::retain((Ref *)param_1);
    *(PUParticleSystem3D **)(param_1 + 0x28) = this;
    puVar4 = *(undefined8 **)(this + 0x3a0);
    if (puVar4 == *(undefined8 **)(this + 0x3a8)) {
      std::__ndk1::vector<cocos2d::PUObserver*,std::__ndk1::allocator<cocos2d::PUObserver*>>::
      __push_back_slow_path<cocos2d::PUObserver*const&>
                ((vector<cocos2d::PUObserver*,std::__ndk1::allocator<cocos2d::PUObserver*>> *)
                 (this + 0x398),&local_40);
    }
    else {
      *puVar4 = param_1;
      *(undefined8 **)(this + 0x3a0) = puVar4 + 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

