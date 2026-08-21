
/* cocos2d::PhysicsWorld::addBodyOrDelay(cocos2d::PhysicsBody*) */

void __thiscall cocos2d::PhysicsWorld::addBodyOrDelay(PhysicsWorld *this,PhysicsBody *param_1)

{
  undefined8 *puVar1;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  PhysicsBody *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar4 = *(undefined8 **)(this + 0xa8);
  puVar3 = *(undefined8 **)(this + 0xb0);
  if ((puVar3 != puVar4) && ((PhysicsBody *)*puVar4 != param_1)) {
    do {
      if (puVar3 + -1 == puVar4) goto LAB_0100d264;
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 1;
    } while ((PhysicsBody *)*puVar1 != param_1);
  }
  if (puVar4 == puVar3) {
LAB_0100d264:
    puVar4 = *(undefined8 **)(this + 0x90);
    puVar3 = *(undefined8 **)(this + 0x98);
    if ((puVar4 != puVar3) && ((PhysicsBody *)*puVar4 != param_1)) {
      do {
        if (puVar3 + -1 == puVar4) goto LAB_0100d2b4;
        puVar1 = puVar4 + 1;
        puVar4 = puVar4 + 1;
      } while ((PhysicsBody *)*puVar1 != param_1);
    }
    if (puVar4 == puVar3) {
LAB_0100d2b4:
      local_50 = param_1;
      if (puVar3 == *(undefined8 **)(this + 0xa0)) {
        std::__ndk1::vector<cocos2d::PhysicsBody*,std::__ndk1::allocator<cocos2d::PhysicsBody*>>::
        __push_back_slow_path<cocos2d::PhysicsBody*const&>
                  ((vector<cocos2d::PhysicsBody*,std::__ndk1::allocator<cocos2d::PhysicsBody*>> *)
                   (this + 0x90),&local_50);
      }
      else {
        *puVar3 = param_1;
        *(undefined8 **)(this + 0x98) = puVar3 + 1;
      }
      Ref::retain((Ref *)local_50);
    }
  }
  else {
    Ref::release((Ref *)*puVar4);
    __n = *(long *)(this + 0xb0) - (long)(puVar4 + 1);
    if (__n != 0) {
      memmove(puVar4,puVar4 + 1,__n);
    }
    *(undefined8 **)(this + 0xb0) = puVar4 + ((long)__n >> 3);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

