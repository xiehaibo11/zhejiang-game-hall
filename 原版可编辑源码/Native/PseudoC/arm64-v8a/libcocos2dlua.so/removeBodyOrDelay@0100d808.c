
/* cocos2d::PhysicsWorld::removeBodyOrDelay(cocos2d::PhysicsBody*) */

void __thiscall cocos2d::PhysicsWorld::removeBodyOrDelay(PhysicsWorld *this,PhysicsBody *param_1)

{
  size_t __n;
  long lVar1;
  char cVar2;
  long *plVar3;
  PhysicsBody *pPVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  PhysicsBody *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar8 = *(long **)(this + 0x90);
  plVar9 = *(long **)(this + 0x98);
  plVar3 = plVar9;
  plVar6 = plVar8;
  if (plVar8 != plVar9) {
    pPVar4 = (PhysicsBody *)*plVar8;
    plVar5 = plVar8;
    while ((plVar3 = plVar5, plVar6 = plVar5, pPVar4 != param_1 &&
           (plVar5 = plVar5 + 1, plVar3 = plVar9, plVar6 = plVar9, plVar9 != plVar5))) {
      pPVar4 = (PhysicsBody *)*plVar5;
    }
  }
  lVar7 = (long)plVar6 - (long)plVar8 >> 3;
  if (plVar3 == plVar9) {
    lVar7 = -1;
  }
  if (lVar7 == -1) {
    cVar2 = cpSpaceIsLocked(*(undefined8 *)(this + 0x28));
    if (cVar2 == '\0') {
      (**(code **)(*(long *)this + 0x80))(this,param_1);
    }
    else {
      plVar6 = *(long **)(this + 0xa8);
      plVar3 = *(long **)(this + 0xb0);
      plVar8 = plVar3;
      plVar9 = plVar6;
      if (plVar6 != plVar3) {
        pPVar4 = (PhysicsBody *)*plVar6;
        plVar5 = plVar6;
        while ((plVar8 = plVar5, plVar9 = plVar5, pPVar4 != param_1 &&
               (plVar5 = plVar5 + 1, plVar8 = plVar3, plVar9 = plVar3, plVar3 != plVar5))) {
          pPVar4 = (PhysicsBody *)*plVar5;
        }
      }
      lVar7 = (long)plVar9 - (long)plVar6 >> 3;
      if (plVar8 == plVar3) {
        lVar7 = -1;
      }
      if (lVar7 == -1) {
        local_50 = param_1;
        if (*(long **)(this + 0xb8) == plVar3) {
          std::__ndk1::vector<cocos2d::PhysicsBody*,std::__ndk1::allocator<cocos2d::PhysicsBody*>>::
          __push_back_slow_path<cocos2d::PhysicsBody*const&>
                    ((vector<cocos2d::PhysicsBody*,std::__ndk1::allocator<cocos2d::PhysicsBody*>> *)
                     (this + 0xa8),&local_50);
        }
        else {
          *plVar3 = (long)param_1;
          *(long **)(this + 0xb0) = plVar3 + 1;
        }
        Ref::retain((Ref *)local_50);
      }
    }
  }
  else if (plVar8 != plVar9) {
    if ((PhysicsBody *)*plVar8 != param_1) {
      do {
        if (plVar9 + -1 == plVar8) goto LAB_0100d9f0;
        plVar3 = plVar8 + 1;
        plVar8 = plVar8 + 1;
      } while ((PhysicsBody *)*plVar3 != param_1);
    }
    if (plVar8 != plVar9) {
      __n = (long)plVar9 - (long)(plVar8 + 1);
      if (__n != 0) {
        memmove(plVar8,plVar8 + 1,__n);
      }
      *(long **)(this + 0x98) = plVar8 + ((long)__n >> 3);
      Ref::release((Ref *)param_1);
    }
  }
LAB_0100d9f0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

