
/* cocos2d::PUParticleSystem3D::addEmitter(cocos2d::PUEmitter*) */

void __thiscall cocos2d::PUParticleSystem3D::addEmitter(PUParticleSystem3D *this,PUEmitter *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  PUEmitter *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_1;
  if (param_1 != (PUEmitter *)0x0) {
    puVar4 = *(undefined8 **)(this + 0x380);
    puVar3 = *(undefined8 **)(this + 0x388);
    if ((puVar4 != puVar3) && ((PUEmitter *)*puVar4 != param_1)) {
      do {
        if (puVar3 + -1 == puVar4) goto LAB_00e1e828;
        puVar1 = puVar4 + 1;
        puVar4 = puVar4 + 1;
      } while ((PUEmitter *)*puVar1 != param_1);
    }
    if (puVar4 == puVar3) {
LAB_00e1e828:
                    /* try { // try from 00e1e82c to 00f1e833 has its CatchHandler @ 00e1f62c */
      *(PUParticleSystem3D **)(param_1 + 0x28) = this;
      Ref::retain((Ref *)param_1);
      puVar4 = *(undefined8 **)(this + 0x388);
      if (puVar4 == *(undefined8 **)(this + 0x390)) {
        std::__ndk1::vector<cocos2d::PUEmitter*,std::__ndk1::allocator<cocos2d::PUEmitter*>>::
        __push_back_slow_path<cocos2d::PUEmitter*const&>
                  ((vector<cocos2d::PUEmitter*,std::__ndk1::allocator<cocos2d::PUEmitter*>> *)
                   (this + 0x380),&local_40);
      }
      else {
        *puVar4 = param_1;
        *(undefined8 **)(this + 0x388) = puVar4 + 1;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

