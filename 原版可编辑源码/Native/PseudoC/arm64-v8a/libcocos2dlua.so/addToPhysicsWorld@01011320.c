
/* cocos2d::Physics3DComponent::addToPhysicsWorld(cocos2d::Physics3DWorld*) */

void __thiscall
cocos2d::Physics3DComponent::addToPhysicsWorld(Physics3DComponent *this,Physics3DWorld *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  Physics3DObject *pPVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  vector<cocos2d::Physics3DComponent*,std::__ndk1::allocator<cocos2d::Physics3DComponent*>> *pvVar10
  ;
  Physics3DComponent *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  pPVar6 = *(Physics3DObject **)(this + 0xd0);
  if (pPVar6 != (Physics3DObject *)0x0) {
    *(Physics3DWorld **)(pPVar6 + 0x30) = param_1;
    Physics3DWorld::addPhysics3DObject(param_1,pPVar6);
    pvVar10 = (vector<cocos2d::Physics3DComponent*,std::__ndk1::allocator<cocos2d::Physics3DComponent*>>
               *)(param_1 + 0x40);
    puVar9 = *(undefined8 **)pvVar10;
    puVar7 = *(undefined8 **)(param_1 + 0x48);
    if ((puVar9 != puVar7) && ((Physics3DComponent *)*puVar9 != this)) {
      do {
        if (puVar7 + -1 == puVar9) goto LAB_010113b0;
        puVar1 = puVar9 + 1;
        puVar9 = puVar9 + 1;
      } while ((Physics3DComponent *)*puVar1 != this);
    }
    if (puVar9 == puVar7) {
LAB_010113b0:
      plVar4 = *(long **)(this + 0x28);
      while (plVar4 = (long *)(**(code **)(*plVar4 + 0x260))(), plVar4 != (long *)0x0) {
        plVar5 = *(long **)(param_1 + 0x40);
        lVar2 = *(long *)(param_1 + 0x48) - (long)plVar5;
        if (lVar2 != 0) {
          uVar8 = 0;
          do {
            if (plVar4 == *(long **)(*plVar5 + 0x28)) goto LAB_01011400;
            uVar8 = uVar8 + 1;
            plVar5 = plVar5 + 1;
          } while (uVar8 < (ulong)(lVar2 >> 3));
        }
      }
      plVar5 = *(long **)pvVar10;
LAB_01011400:
      local_40 = this;
      std::__ndk1::
      vector<cocos2d::Physics3DComponent*,std::__ndk1::allocator<cocos2d::Physics3DComponent*>>::
      insert(pvVar10,plVar5,&local_40);
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

