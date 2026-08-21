
/* dragonBones::WorldClock::setClock(dragonBones::WorldClock*) */

void __thiscall dragonBones::WorldClock::setClock(WorldClock *this,WorldClock *param_1)

{
  long lVar1;
  WorldClock *pWVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  WorldClock *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pWVar2 = *(WorldClock **)(this + 0x30);
  if (pWVar2 != param_1) {
    if (pWVar2 != (WorldClock *)0x0) {
      puVar4 = *(undefined8 **)(pWVar2 + 0x18);
      puVar3 = *(undefined8 **)(pWVar2 + 0x20);
      if (puVar4 != puVar3) {
        pWVar2 = (WorldClock *)*puVar4;
        while (pWVar2 != this) {
          puVar4 = puVar4 + 1;
          if (puVar3 == puVar4) goto LAB_00d27168;
          pWVar2 = (WorldClock *)*puVar4;
        }
      }
      if (puVar4 != puVar3) {
        *puVar4 = 0;
        (**(code **)(*(long *)this + 0x28))(this,0);
      }
    }
LAB_00d27168:
    *(WorldClock **)(this + 0x30) = param_1;
    if (param_1 != (WorldClock *)0x0) {
      puVar4 = *(undefined8 **)(param_1 + 0x18);
      puVar3 = *(undefined8 **)(param_1 + 0x20);
      local_40 = this;
      if (puVar4 != puVar3) {
        pWVar2 = (WorldClock *)*puVar4;
        while (pWVar2 != this) {
          puVar4 = puVar4 + 1;
          if (puVar3 == puVar4) goto LAB_00d271b8;
          pWVar2 = (WorldClock *)*puVar4;
        }
      }
      if (puVar4 == puVar3) {
LAB_00d271b8:
        if (puVar3 == *(undefined8 **)(param_1 + 0x28)) {
          std::__ndk1::
          vector<dragonBones::IAnimatable*,std::__ndk1::allocator<dragonBones::IAnimatable*>>::
          __push_back_slow_path<dragonBones::IAnimatable*const&>
                    ((vector<dragonBones::IAnimatable*,std::__ndk1::allocator<dragonBones::IAnimatable*>>
                      *)(param_1 + 0x18),(IAnimatable **)&local_40);
        }
        else {
          *puVar3 = this;
          *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
        }
        (**(code **)(*(long *)local_40 + 0x28))(local_40,param_1);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

