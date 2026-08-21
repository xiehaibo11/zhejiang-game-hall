
/* cocos2d::PhysicsWorld::removeBody(cocos2d::PhysicsBody*) */

void __thiscall cocos2d::PhysicsWorld::removeBody(PhysicsWorld *this,PhysicsBody *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *local_60;
  undefined8 *local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(PhysicsWorld **)(param_1 + 0x80) == this) {
    std::__ndk1::vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>::
    vector((vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>> *)
           &local_60,(vector *)(param_1 + 0x50));
    puVar2 = local_58;
    for (puVar4 = local_60; puVar4 != puVar2; puVar4 = puVar4 + 1) {
      (**(code **)(*(long *)this + 8))(this,*puVar4,1);
    }
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
    (**(code **)(*(long *)this + 0x98))(this,param_1);
    puVar4 = *(undefined8 **)(this + 0x38);
    puVar2 = *(undefined8 **)(this + 0x40);
    if (puVar4 != puVar2) {
      if ((PhysicsBody *)*puVar4 != param_1) {
        do {
          if (puVar2 + -1 == puVar4) goto LAB_0100d7a8;
          puVar1 = puVar4 + 1;
          puVar4 = puVar4 + 1;
        } while ((PhysicsBody *)*puVar1 != param_1);
      }
      if (puVar4 != puVar2) {
        __n = (long)puVar2 - (long)(puVar4 + 1);
        if (__n != 0) {
          memmove(puVar4,puVar4 + 1,__n);
        }
        *(undefined8 **)(this + 0x40) = puVar4 + ((long)__n >> 3);
        Ref::release((Ref *)param_1);
      }
    }
LAB_0100d7a8:
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (local_60 != (undefined8 *)0x0) {
      local_58 = local_60;
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

