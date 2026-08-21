
/* dragonBones::Armature::_addConstraint(dragonBones::Constraint*) */

void __thiscall dragonBones::Armature::_addConstraint(Armature *this,Constraint *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Constraint *pCVar4;
  Constraint *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar3 = *(undefined8 **)(this + 0x40);
  puVar2 = *(undefined8 **)(this + 0x48);
  local_30 = param_1;
  if (puVar3 != puVar2) {
    pCVar4 = (Constraint *)*puVar3;
    while (pCVar4 != param_1) {
      puVar3 = puVar3 + 1;
      if (puVar2 == puVar3) goto LAB_00d286dc;
      pCVar4 = (Constraint *)*puVar3;
    }
  }
  if (puVar3 == puVar2) {
LAB_00d286dc:
    if (puVar2 == *(undefined8 **)(this + 0x50)) {
      std::__ndk1::vector<dragonBones::Constraint*,std::__ndk1::allocator<dragonBones::Constraint*>>
      ::__push_back_slow_path<dragonBones::Constraint*const&>
                ((vector<dragonBones::Constraint*,std::__ndk1::allocator<dragonBones::Constraint*>>
                  *)(this + 0x40),&local_30);
    }
    else {
      *puVar2 = param_1;
      *(long *)(this + 0x48) = *(long *)(this + 0x48) + 8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

