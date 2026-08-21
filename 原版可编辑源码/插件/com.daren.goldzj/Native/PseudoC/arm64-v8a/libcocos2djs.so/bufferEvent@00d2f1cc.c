
/* dragonBones::DragonBones::bufferEvent(dragonBones::EventObject*) */

void __thiscall dragonBones::DragonBones::bufferEvent(DragonBones *this,EventObject *param_1)

{
  long lVar1;
  EventObject *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  if (*(undefined8 **)(this + 0x28) == *(undefined8 **)(this + 0x30)) {
    std::__ndk1::vector<dragonBones::EventObject*,std::__ndk1::allocator<dragonBones::EventObject*>>
    ::__push_back_slow_path<dragonBones::EventObject*const&>
              ((vector<dragonBones::EventObject*,std::__ndk1::allocator<dragonBones::EventObject*>>
                *)(this + 0x20),&local_30);
  }
  else {
    **(undefined8 **)(this + 0x28) = param_1;
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 8;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

