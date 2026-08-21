
/* cocos2d::PhysicsWorld::removeJoint(cocos2d::PhysicsJoint*, bool) */

void __thiscall
cocos2d::PhysicsWorld::removeJoint(PhysicsWorld *this,PhysicsJoint *param_1,bool param_2)

{
  undefined8 *puVar1;
  size_t __n;
  long lVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  PhysicsJoint *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_50 = param_1;
                    /* try { // try from 0100da48 to 0110dbdf has its CatchHandler @ 0100da48
                       catch() { ... } // from try @ 0100da48 with catch @ 0100da48
                       catch() { ... } // from try @ 0100dbe8 with catch @ 0100da48 */
  if ((param_1 != (PhysicsJoint *)0x0) &&
     ((*(PhysicsWorld **)(param_1 + 0x48) == this || (!param_2)))) {
    param_1[0x5a] = (PhysicsJoint)param_2;
    puVar7 = *(undefined8 **)(this + 0xc0);
    puVar5 = *(undefined8 **)(this + 200);
    if ((puVar7 != puVar5) && ((PhysicsJoint *)*puVar7 != param_1)) {
      do {
        if (puVar5 + -1 == puVar7) goto LAB_0100dad4;
        puVar6 = puVar7 + 1;
        puVar7 = puVar7 + 1;
      } while ((PhysicsJoint *)*puVar6 != param_1);
    }
    if (puVar7 == puVar5) {
LAB_0100dad4:
      bVar3 = false;
    }
    else {
      __n = (long)puVar5 - (long)(puVar7 + 1);
      if (__n != 0) {
        memmove(puVar7,puVar7 + 1,__n);
      }
      bVar3 = true;
      *(undefined8 **)(this + 200) = puVar7 + ((long)__n >> 3);
    }
    cVar4 = cpSpaceIsLocked(*(undefined8 *)(this + 0x28));
    if (cVar4 == '\0') {
      (**(code **)(*(long *)this + 0x88))(this,param_1);
    }
    else if (!bVar3) {
      puVar6 = *(undefined8 **)(this + 0xd8);
      puVar5 = *(undefined8 **)(this + 0xe0);
      puVar7 = puVar5;
      if ((puVar5 != puVar6) && ((PhysicsJoint *)puVar5[-1] != param_1)) {
        do {
          if (puVar6 + 1 == puVar7) goto LAB_0100db3c;
          puVar1 = puVar7 + -2;
          puVar7 = puVar7 + -1;
        } while ((PhysicsJoint *)*puVar1 != param_1);
      }
      if (puVar7 == puVar6) {
LAB_0100db3c:
        if (puVar5 == *(undefined8 **)(this + 0xe8)) {
          std::__ndk1::vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>
          ::__push_back_slow_path<cocos2d::PhysicsJoint*const&>
                    ((vector<cocos2d::PhysicsJoint*,std::__ndk1::allocator<cocos2d::PhysicsJoint*>>
                      *)(this + 0xd8),&local_50);
        }
        else {
          *puVar5 = param_1;
          *(undefined8 **)(this + 0xe0) = puVar5 + 1;
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

