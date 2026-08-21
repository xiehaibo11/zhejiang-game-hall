
/* v8::internal::compiler::GlobalPropertyDependency::IsValid() const */

bool __thiscall
v8::internal::compiler::GlobalPropertyDependency::IsValid(GlobalPropertyDependency *this)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)PropertyCellRef::object((PropertyCellRef *)(this + 8));
  iVar1 = *(int *)(*plVar3 + 0xb);
  lVar4 = ObjectRef::isolate((ObjectRef *)(this + 8));
  if ((iVar1 == *(int *)(lVar4 + 0xa8)) ||
     (*(uint *)(this + 0x18) != (*(uint *)(*plVar3 + 7) >> 7 & 3))) {
    bVar2 = false;
  }
  else {
    bVar2 = (uint)(byte)this[0x1c] == (*(uint *)(*plVar3 + 7) >> 4 & 1);
  }
  return bVar2;
}

