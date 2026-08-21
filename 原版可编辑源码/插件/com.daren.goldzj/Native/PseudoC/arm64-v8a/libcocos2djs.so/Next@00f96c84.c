
/* v8::internal::HeapObjectIterator::Next() */

undefined8 __thiscall v8::internal::HeapObjectIterator::Next(HeapObjectIterator *this)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = *(long *)(this + 0x10);
  uVar1 = NextObject(this);
  if (lVar4 != 0) {
    iVar3 = (int)uVar1;
    while ((iVar3 != 0 &&
           (uVar2 = (**(code **)(**(long **)(this + 0x10) + 0x10))(*(long **)(this + 0x10),uVar1),
           (uVar2 & 1) != 0))) {
      uVar1 = NextObject(this);
      iVar3 = (int)uVar1;
    }
  }
  return uVar1;
}

