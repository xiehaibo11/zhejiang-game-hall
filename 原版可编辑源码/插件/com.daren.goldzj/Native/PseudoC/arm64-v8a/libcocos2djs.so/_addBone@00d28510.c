
/* dragonBones::Armature::_addBone(dragonBones::Bone*) */

void __thiscall dragonBones::Armature::_addBone(Armature *this,Bone *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Bone *pBVar4;
  Bone *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  puVar3 = *(undefined8 **)(this + 0x60);
  puVar2 = *(undefined8 **)(this + 0x68);
  local_30 = param_1;
  if (puVar3 != puVar2) {
    pBVar4 = (Bone *)*puVar3;
    while (pBVar4 != param_1) {
      puVar3 = puVar3 + 1;
      if (puVar2 == puVar3) goto LAB_00d28574;
      pBVar4 = (Bone *)*puVar3;
    }
  }
  if (puVar3 == puVar2) {
LAB_00d28574:
    if (puVar2 == *(undefined8 **)(this + 0x70)) {
      std::__ndk1::vector<dragonBones::Bone*,std::__ndk1::allocator<dragonBones::Bone*>>::
      __push_back_slow_path<dragonBones::Bone*const&>
                ((vector<dragonBones::Bone*,std::__ndk1::allocator<dragonBones::Bone*>> *)
                 (this + 0x60),&local_30);
    }
    else {
      *puVar2 = param_1;
      *(long *)(this + 0x68) = *(long *)(this + 0x68) + 8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

