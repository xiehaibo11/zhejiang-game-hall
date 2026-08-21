
/* v8::Value::IsInt16Array() const */

bool __thiscall v8::Value::IsInt16Array(Value *this)

{
  bool bVar1;
  int iVar2;
  ulong local_18;
  
  local_18 = *(ulong *)this;
  if (((local_18 & 1) == 0) ||
     (*(short *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) != 0x41b)) {
    bVar1 = false;
  }
  else {
    iVar2 = internal::JSTypedArray::type((JSTypedArray *)&local_18);
    bVar1 = iVar2 == 3;
  }
  return bVar1;
}

