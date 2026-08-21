
/* v8::Value::IsExternal() const */

uint __thiscall v8::Value::IsExternal(Value *this)

{
  uint uVar1;
  ulong local_18;
  
  local_18 = *(ulong *)this;
  if (((local_18 & 1) == 0) ||
     (*(short *)((local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 - 1)) + 7) != 0x421)) {
    uVar1 = 0;
  }
  else {
    uVar1 = internal::HeapObject::IsExternal
                      ((HeapObject *)&local_18,(Isolate *)(local_18 & 0xffffffff00000000));
  }
  return uVar1 & 1;
}

