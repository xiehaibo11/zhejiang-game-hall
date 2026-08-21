
/* v8::internal::HeapObjectIterator::NextObject() */

undefined8 __thiscall v8::internal::HeapObjectIterator::NextObject(HeapObjectIterator *this)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long *local_8;
  
  plVar2 = *(long **)(this + 0x20);
  if (plVar2 == (long *)0x0) {
    uVar3 = 0;
  }
  else {
    while (uVar3 = (**(code **)(*plVar2 + 0x10))(), (int)uVar3 == 0) {
      lVar5 = *(long *)(this + 0x18);
      if (*(int *)(lVar5 + 0x10) == 7) {
        plVar2 = *(long **)(this + 0x20);
        *(undefined8 *)(this + 0x20) = 0;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        (**(code **)(*plVar2 + 8))();
        return 0;
      }
      iVar1 = *(int *)(lVar5 + 0x10) + 1;
      *(int *)(lVar5 + 0x10) = iVar1;
      plVar2 = *(long **)(*(long *)(lVar5 + 8) + (long)iVar1 * 8 + 0x128);
      (**(code **)(*plVar2 + 0x70))(&local_8,plVar2,*(undefined8 *)this);
      plVar2 = local_8;
      local_8 = (long *)0x0;
      plVar4 = *(long **)(this + 0x20);
      *(long **)(this + 0x20) = plVar2;
      if (plVar4 == (long *)0x0) {
        local_8 = (long *)0x0;
        plVar2 = *(long **)(this + 0x20);
      }
      else {
        (**(code **)(*plVar4 + 8))();
        plVar2 = local_8;
        local_8 = (long *)0x0;
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        plVar2 = *(long **)(this + 0x20);
      }
    }
  }
  return uVar3;
}

