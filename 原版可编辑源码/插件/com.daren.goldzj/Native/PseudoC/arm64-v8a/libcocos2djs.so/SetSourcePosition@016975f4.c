
/* v8::internal::compiler::SourcePositionTable::SetSourcePosition(v8::internal::compiler::Node*,
   v8::internal::SourcePosition) */

void __thiscall
v8::internal::compiler::SourcePositionTable::SetSourcePosition
          (SourcePositionTable *this,long param_1,long param_3)

{
  long lVar1;
  ulong uVar2;
  vector<v8::internal::SourcePosition,v8::internal::ZoneAllocator<v8::internal::SourcePosition>>
  *this_00;
  ulong uVar3;
  undefined8 local_18;
  
  this_00 = (vector<v8::internal::SourcePosition,v8::internal::ZoneAllocator<v8::internal::SourcePosition>>
             *)(this + 0x18);
  lVar1 = *(long *)this_00;
  uVar3 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar2 = *(long *)(this + 0x20) - lVar1 >> 3;
  if (uVar2 <= uVar3) {
    local_18 = 0;
    std::__ndk1::
    vector<v8::internal::SourcePosition,v8::internal::ZoneAllocator<v8::internal::SourcePosition>>::
    __append(this_00,(uVar3 - uVar2) + 1,(SourcePosition *)&local_18);
    lVar1 = *(long *)this_00;
  }
  if (*(long *)(lVar1 + uVar3 * 8) != param_3) {
    *(long *)(lVar1 + uVar3 * 8) = param_3;
  }
  return;
}

