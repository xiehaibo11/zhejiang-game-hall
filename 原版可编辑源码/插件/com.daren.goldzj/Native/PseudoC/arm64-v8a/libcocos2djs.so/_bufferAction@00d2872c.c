
/* dragonBones::Armature::_bufferAction(dragonBones::EventObject*, bool) */

void __thiscall
dragonBones::Armature::_bufferAction(Armature *this,EventObject *param_1,bool param_2)

{
  long lVar1;
  vector<dragonBones::EventObject*,std::__ndk1::allocator<dragonBones::EventObject*>> *this_00;
  long *plVar2;
  long *plVar3;
  EventObject *pEVar4;
  long *plVar5;
  EventObject *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this_00 = (vector<dragonBones::EventObject*,std::__ndk1::allocator<dragonBones::EventObject*>> *)
            (this + 0x90);
  plVar2 = *(long **)this_00;
  plVar3 = *(long **)(this + 0x98);
  plVar5 = plVar2;
  local_30 = param_1;
  if (plVar3 != plVar2) {
    pEVar4 = (EventObject *)*plVar2;
    while (pEVar4 != param_1) {
      plVar5 = plVar5 + 1;
      if (plVar3 == plVar5) goto LAB_00d28790;
      pEVar4 = (EventObject *)*plVar5;
    }
  }
  if (plVar5 == plVar3) {
LAB_00d28790:
    if (param_2) {
      if (plVar3 == *(long **)(this + 0xa0)) {
        std::__ndk1::
        vector<dragonBones::EventObject*,std::__ndk1::allocator<dragonBones::EventObject*>>::
        __push_back_slow_path<dragonBones::EventObject*const&>(this_00,&local_30);
      }
      else {
        *plVar3 = (long)param_1;
        *(long *)(this + 0x98) = *(long *)(this + 0x98) + 8;
      }
    }
    else {
      std::__ndk1::
      vector<dragonBones::EventObject*,std::__ndk1::allocator<dragonBones::EventObject*>>::insert
                (this_00,plVar2,&local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

