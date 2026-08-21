
/* cocos2d::PhysicsWorld::addJoint(cocos2d::PhysicsJoint*) */

void __thiscall cocos2d::PhysicsWorld::addJoint(PhysicsWorld *this,PhysicsJoint *param_1)

{
  undefined8 *puVar1;
  size_t __n;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  PhysicsJoint *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = param_1;
  if (param_1 != (PhysicsJoint *)0x0) {
    *(PhysicsWorld **)(param_1 + 0x48) = this;
    puVar4 = *(undefined8 **)(this + 0xd8);
    puVar3 = *(undefined8 **)(this + 0xe0);
    if ((puVar4 != puVar3) && ((PhysicsJoint *)*puVar4 != param_1)) {
                    /* catch() { ... } // from try @ 0100dce0 with catch @ 0100dd60 */
      do {
        if (puVar3 + -1 == puVar4) goto LAB_0100ddb0;
        puVar1 = puVar4 + 1;
                    /* catch() { ... } // from try @ 0100dcb0 with catch @ 0100dd70 */
        puVar4 = puVar4 + 1;
      } while ((PhysicsJoint *)*puVar1 != param_1);
    }
    if (puVar4 == puVar3) {
LAB_0100ddb0:
      puVar4 = *(undefined8 **)(this + 0xc0);
      puVar3 = *(undefined8 **)(this + 200);
      if ((puVar4 != puVar3) && ((PhysicsJoint *)*puVar4 != param_1)) {
        do {
          if (puVar3 + -1 == puVar4) goto LAB_0100de00;
          puVar1 = puVar4 + 1;
          puVar4 = puVar4 + 1;
        } while ((PhysicsJoint *)*puVar1 != param_1);
      }
      if (puVar4 == puVar3) {
LAB_0100de00:
        if (puVar3 == *(undefined8 **)(this + 0xd0)) {
          std::__ndk1::vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>
          ::__push_back_slow_path<cocos2d::PhysicsJoint*const&>
                    ((vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>
                      *)(this + 0xc0),&local_40);
        }
        else {
          *puVar3 = param_1;
          *(undefined8 **)(this + 200) = puVar3 + 1;
        }
      }
    }
    else {
      __n = (long)puVar3 - (long)(puVar4 + 1);
      if (__n != 0) {
        memmove(puVar4,puVar4 + 1,__n);
      }
      *(undefined8 **)(this + 0xe0) = puVar4 + ((long)__n >> 3);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

