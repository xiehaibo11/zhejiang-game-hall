
/* dragonBones::BaseObject::~BaseObject() */

void __thiscall dragonBones::BaseObject::~BaseObject(BaseObject *this)

{
  size_t __n;
  long lVar1;
  BaseObject *pBVar2;
  long *__dest;
  undefined4 local_44;
  BaseObject *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__BaseObject_01c90988;
  if (_recycleOrDestroyCallback._32_8_ != 0) {
    local_44 = 1;
    local_40 = this;
    (**(code **)(*(long *)_recycleOrDestroyCallback._32_8_ + 0x30))
              (_recycleOrDestroyCallback._32_8_,&local_40,&local_44);
  }
  __dest = __allDragonBonesObjects;
  if (__allDragonBonesObjects != DAT_01d3dfa0) {
    pBVar2 = (BaseObject *)*__allDragonBonesObjects;
    while (pBVar2 != this) {
      __dest = __dest + 1;
      if (DAT_01d3dfa0 == __dest) goto LAB_00d2e8b4;
      pBVar2 = (BaseObject *)*__dest;
    }
  }
  if (__dest != DAT_01d3dfa0) {
    __n = (long)DAT_01d3dfa0 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    DAT_01d3dfa0 = __dest + ((long)__n >> 3);
  }
LAB_00d2e8b4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

