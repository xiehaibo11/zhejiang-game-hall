
/* dragonBones::BaseObject::BaseObject() */

void __thiscall dragonBones::BaseObject::BaseObject(BaseObject *this)

{
  long lVar1;
  int iVar2;
  BaseObject *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__BaseObject_01c90988;
  iVar2 = _hashCode + 1;
  *(int *)(this + 8) = _hashCode;
  _hashCode = iVar2;
  this[0xc] = (BaseObject)0x0;
  local_30 = this;
  if (DAT_01d3dfa0 < DAT_01d3dfa8) {
    *DAT_01d3dfa0 = this;
    DAT_01d3dfa0 = DAT_01d3dfa0 + 1;
  }
  else {
    std::__ndk1::vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>>::
    __push_back_slow_path<dragonBones::BaseObject*>
              ((vector<dragonBones::BaseObject*,std::__ndk1::allocator<dragonBones::BaseObject*>> *)
               &__allDragonBonesObjects,&local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

