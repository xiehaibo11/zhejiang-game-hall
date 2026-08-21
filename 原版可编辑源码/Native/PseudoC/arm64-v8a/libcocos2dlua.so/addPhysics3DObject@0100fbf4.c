
/* cocos2d::Physics3DWorld::addPhysics3DObject(cocos2d::Physics3DObject*) */

void __thiscall
cocos2d::Physics3DWorld::addPhysics3DObject(Physics3DWorld *this,Physics3DObject *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  Physics3DObject *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar5 = *(undefined8 **)(this + 0x28);
  puVar4 = *(undefined8 **)(this + 0x30);
  local_30 = param_1;
  if ((puVar5 != puVar4) && ((Physics3DObject *)*puVar5 != param_1)) {
    do {
      if (puVar4 + -1 == puVar5) goto LAB_0100fc64;
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 1;
    } while ((Physics3DObject *)*puVar1 != param_1);
  }
  if (puVar5 == puVar4) {
LAB_0100fc64:
    if (puVar4 == *(undefined8 **)(this + 0x38)) {
      std::__ndk1::
      vector<cocos2d::Physics3DObject*,std::__ndk1::allocator<cocos2d::Physics3DObject*>>::
      __push_back_slow_path<cocos2d::Physics3DObject*const&>
                ((vector<cocos2d::Physics3DObject*,std::__ndk1::allocator<cocos2d::Physics3DObject*>>
                  *)(this + 0x28),&local_30);
    }
    else {
      *puVar4 = param_1;
      *(undefined8 **)(this + 0x30) = puVar4 + 1;
    }
    Ref::retain((Ref *)local_30);
    iVar3 = (**(code **)(*(long *)local_30 + 0x10))();
    if (iVar3 == 1) {
      (**(code **)(**(long **)(this + 0x60) + 0xa8))
                (*(long **)(this + 0x60),*(undefined8 *)(local_30 + 0x78));
    }
    else {
      iVar3 = (**(code **)(*(long *)local_30 + 0x10))();
      if (iVar3 == 2) {
        (**(code **)(**(long **)(this + 0x60) + 0x48))
                  (*(long **)(this + 0x60),*(undefined8 *)(local_30 + 0xe0),1,0xffff);
      }
    }
    *(undefined2 *)(this + 0x59) = 0x101;
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

