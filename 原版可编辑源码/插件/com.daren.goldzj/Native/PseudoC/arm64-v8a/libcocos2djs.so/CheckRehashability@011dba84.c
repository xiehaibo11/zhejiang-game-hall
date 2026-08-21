
/* v8::internal::RootsSerializer::CheckRehashability(v8::internal::HeapObject) */

void __thiscall
v8::internal::RootsSerializer::CheckRehashability(RootsSerializer *this,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_8;
  
  if (((this[0x238] != (RootsSerializer)0x0) &&
      (local_8 = param_2, uVar1 = HeapObject::NeedsRehashing((HeapObject *)&local_8),
      (uVar1 & 1) != 0)) &&
     (uVar1 = HeapObject::CanBeRehashed((HeapObject *)&local_8), (uVar1 & 1) == 0)) {
    this[0x238] = (RootsSerializer)0x0;
  }
  return;
}

