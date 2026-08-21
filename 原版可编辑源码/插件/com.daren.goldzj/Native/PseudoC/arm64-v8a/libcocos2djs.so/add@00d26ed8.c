
/* dragonBones::WorldClock::add(dragonBones::IAnimatable*) */

void __thiscall dragonBones::WorldClock::add(WorldClock *this,IAnimatable *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  IAnimatable *pIVar4;
  IAnimatable *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar3 = *(undefined8 **)(this + 0x18);
  puVar2 = *(undefined8 **)(this + 0x20);
  local_30 = param_1;
  if (puVar3 != puVar2) {
    pIVar4 = (IAnimatable *)*puVar3;
    while (pIVar4 != param_1) {
      puVar3 = puVar3 + 1;
      if (puVar2 == puVar3) goto LAB_00d26f3c;
      pIVar4 = (IAnimatable *)*puVar3;
    }
  }
  if (puVar3 == puVar2) {
LAB_00d26f3c:
    if (puVar2 == *(undefined8 **)(this + 0x28)) {
      std::__ndk1::
      vector<dragonBones::IAnimatable*,std::__ndk1::allocator<dragonBones::IAnimatable*>>::
      __push_back_slow_path<dragonBones::IAnimatable*const&>
                ((vector<dragonBones::IAnimatable*,std::__ndk1::allocator<dragonBones::IAnimatable*>>
                  *)(this + 0x18),&local_30);
    }
    else {
      *puVar2 = param_1;
      *(long *)(this + 0x20) = *(long *)(this + 0x20) + 8;
    }
    (**(code **)(*(long *)local_30 + 0x28))(local_30,this);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

