
/* cocos2d::PhysicsWorld::removeAllJoints(bool) */

void __thiscall cocos2d::PhysicsWorld::removeAllJoints(PhysicsWorld *this,bool param_1)

{
  long lVar1;
  undefined8 **ppuVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  PhysicsWorld *pPVar7;
  undefined8 *local_70;
  long *local_68;
  long local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = (long *)&local_70;
  local_60 = 0;
  plVar6 = local_68;
  lVar5 = local_60;
  ppuVar2 = &local_70;
  for (pPVar7 = *(PhysicsWorld **)(this + 0x58); local_70 = ppuVar2, local_68 = plVar6,
      local_60 = lVar5, this + 0x50 != pPVar7; pPVar7 = *(PhysicsWorld **)(pPVar7 + 8)) {
    plVar3 = operator_new(0x18);
    lVar4 = *(long *)(pPVar7 + 0x10);
    *plVar3 = (long)ppuVar2;
    plVar3[1] = (long)&local_70;
    plVar3[2] = lVar4;
    ppuVar2[1] = plVar3;
    local_60 = lVar5 + 1;
    plVar6 = local_68;
    lVar5 = local_60;
    ppuVar2 = (undefined8 **)plVar3;
  }
  if (&local_70 != (undefined8 **)plVar6) {
    do {
      (**(code **)(*(long *)this + 8))(this,plVar6[2],param_1);
      plVar6 = (long *)plVar6[1];
    } while (&local_70 != (undefined8 **)plVar6);
  }
  if (local_60 != 0) {
    lVar5 = *local_68;
    *(undefined8 *)(lVar5 + 8) = local_70[1];
    *(long *)local_70[1] = lVar5;
    local_60 = 0;
    plVar6 = local_68;
    if ((undefined8 **)local_68 != &local_70) {
      do {
        plVar3 = (long *)plVar6[1];
        operator_delete(plVar6);
        plVar6 = plVar3;
      } while ((undefined8 **)plVar3 != &local_70);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

