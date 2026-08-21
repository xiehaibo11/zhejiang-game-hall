
/* cocos2d::ParticleSystem3D::addAffector(cocos2d::Particle3DAffector*) */

void __thiscall
cocos2d::ParticleSystem3D::addAffector(ParticleSystem3D *this,Particle3DAffector *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  Particle3DAffector *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_1;
  if (param_1 != (Particle3DAffector *)0x0) {
    puVar4 = *(undefined8 **)(this + 0x310);
    puVar3 = *(undefined8 **)(this + 0x318);
    if ((puVar4 != puVar3) && ((Particle3DAffector *)*puVar4 != param_1)) {
      do {
        if (puVar3 + -1 == puVar4) goto LAB_00e1a954;
        puVar1 = puVar4 + 1;
        puVar4 = puVar4 + 1;
      } while ((Particle3DAffector *)*puVar1 != param_1);
    }
    if (puVar4 == puVar3) {
LAB_00e1a954:
      *(ParticleSystem3D **)(param_1 + 0x28) = this;
      Ref::retain((Ref *)param_1);
      puVar4 = *(undefined8 **)(this + 0x318);
      if (puVar4 == *(undefined8 **)(this + 800)) {
        std::__ndk1::
        vector<cocos2d::Particle3DAffector*,std::__ndk1::allocator<cocos2d::Particle3DAffector*>>::
        __push_back_slow_path<cocos2d::Particle3DAffector*const&>
                  ((vector<cocos2d::Particle3DAffector*,std::__ndk1::allocator<cocos2d::Particle3DAffector*>>
                    *)(this + 0x310),&local_40);
      }
      else {
        *puVar4 = param_1;
        *(undefined8 **)(this + 0x318) = puVar4 + 1;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

