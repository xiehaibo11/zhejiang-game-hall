
/* cocos2d::PUParticleSystem3D::getAliveParticleCount() const */

int __thiscall cocos2d::PUParticleSystem3D::getAliveParticleCount(PUParticleSystem3D *this)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long *local_80;
  long local_78;
  long *local_70;
  long local_68;
  long local_60;
  long *plStack_58;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar6 = *(int *)(this + 0x348);
  if (*(long *)(this + 0x3c8) != 0) {
    for (plVar4 = *(long **)(this + 0x3c0); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      iVar6 = iVar6 + *(int *)(plVar4 + 8);
    }
  }
  if ((*(long *)(this + 0x3f0) != 0) && (plVar4 = *(long **)(this + 1000), plVar4 != (long *)0x0)) {
    do {
      DataPool<cocos2d::Particle3D>::DataPool
                ((DataPool<cocos2d::Particle3D> *)&local_80,(DataPool *)(plVar4 + 5));
      iVar6 = iVar6 + (int)local_68;
      for (local_80 = local_70; (&local_78 != local_80 && (local_80[2] != 0));
          local_80 = (long *)local_80[1]) {
        iVar3 = (**(code **)(**(long **)(local_80[2] + 0x78) + 0x560))();
        iVar6 = iVar3 + iVar6;
        if (local_80 == &local_78) break;
      }
      if (local_50 != 0) {
        lVar5 = *plStack_58;
        *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(local_60 + 8);
        **(long **)(local_60 + 8) = lVar5;
        local_50 = 0;
        plVar2 = plStack_58;
        while (plVar2 != &local_60) {
          plVar7 = (long *)plVar2[1];
          operator_delete(plVar2);
          plVar2 = plVar7;
        }
      }
      if (local_68 != 0) {
        lVar5 = *local_70;
        *(undefined8 *)(lVar5 + 8) = *(undefined8 *)(local_78 + 8);
        **(long **)(local_78 + 8) = lVar5;
        local_68 = 0;
        plVar2 = local_70;
        while (plVar2 != &local_78) {
          plVar7 = (long *)plVar2[1];
          operator_delete(plVar2);
          plVar2 = plVar7;
        }
      }
      plVar4 = (long *)*plVar4;
    } while (plVar4 != (long *)0x0);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
}

