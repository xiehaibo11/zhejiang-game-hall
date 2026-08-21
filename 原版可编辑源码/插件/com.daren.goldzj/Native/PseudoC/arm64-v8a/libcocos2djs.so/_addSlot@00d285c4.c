
/* dragonBones::Armature::_addSlot(dragonBones::Slot*) */

void __thiscall dragonBones::Armature::_addSlot(Armature *this,Slot *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Slot *pSVar4;
  Slot *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar3 = *(undefined8 **)(this + 0x78);
  puVar2 = *(undefined8 **)(this + 0x80);
  local_30 = param_1;
  if (puVar3 != puVar2) {
    pSVar4 = (Slot *)*puVar3;
    while (pSVar4 != param_1) {
      puVar3 = puVar3 + 1;
      if (puVar2 == puVar3) goto LAB_00d28628;
      pSVar4 = (Slot *)*puVar3;
    }
  }
  if (puVar3 == puVar2) {
LAB_00d28628:
    if (puVar2 == *(undefined8 **)(this + 0x88)) {
      std::__ndk1::vector<dragonBones::Slot*,std::__ndk1::allocator<dragonBones::Slot*>>::
      __push_back_slow_path<dragonBones::Slot*const&>
                ((vector<dragonBones::Slot*,std::__ndk1::allocator<dragonBones::Slot*>> *)
                 (this + 0x78),&local_30);
    }
    else {
      *puVar2 = param_1;
      *(long *)(this + 0x80) = *(long *)(this + 0x80) + 8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

