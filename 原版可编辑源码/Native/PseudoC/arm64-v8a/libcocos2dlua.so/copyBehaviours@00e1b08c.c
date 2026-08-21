
/* cocos2d::PUParticle3D::copyBehaviours(std::__ndk1::vector<cocos2d::PUBehaviour*,
   std::__ndk1::allocator<cocos2d::PUBehaviour*> > const&) */

void __thiscall cocos2d::PUParticle3D::copyBehaviours(PUParticle3D *this,vector *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  Ref *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  puVar4 = *(undefined8 **)param_1;
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar4 != puVar2) {
    do {
      local_50 = (Ref *)(**(code **)(*(long *)*puVar4 + 0x40))();
      Ref::retain(local_50);
      puVar1 = *(undefined8 **)(this + 0x110);
      if (puVar1 == *(undefined8 **)(this + 0x118)) {
        std::__ndk1::vector<cocos2d::PUBehaviour*,std::__ndk1::allocator<cocos2d::PUBehaviour*>>::
        __push_back_slow_path<cocos2d::PUBehaviour*const&>
                  ((vector<cocos2d::PUBehaviour*,std::__ndk1::allocator<cocos2d::PUBehaviour*>> *)
                   (this + 0x108),(PUBehaviour **)&local_50);
      }
      else {
        *puVar1 = local_50;
        *(undefined8 **)(this + 0x110) = puVar1 + 1;
      }
      puVar4 = puVar4 + 1;
                    /* try { // try from 00e1b0dc to 00f1b12b has its CatchHandler @ 00e1bf64 */
    } while (puVar2 != puVar4);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

