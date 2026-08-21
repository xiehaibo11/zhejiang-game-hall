
/* v8::internal::compiler::SourcePositionTable::Decorator::Decorate(v8::internal::compiler::Node*)
    */

void __thiscall
v8::internal::compiler::SourcePositionTable::Decorator::Decorate(Decorator *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  vector<v8::internal::SourcePosition,v8::internal::ZoneAllocator<v8::internal::SourcePosition>>
  *this_00;
  long lVar4;
  ulong uVar5;
  undefined8 local_18;
  
  lVar3 = *(long *)(this + 8);
  this_00 = (vector<v8::internal::SourcePosition,v8::internal::ZoneAllocator<v8::internal::SourcePosition>>
             *)(lVar3 + 0x18);
  lVar1 = *(long *)this_00;
  lVar4 = *(long *)(lVar3 + 0x10);
  uVar5 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar2 = *(long *)(lVar3 + 0x20) - lVar1 >> 3;
  if (uVar2 <= uVar5) {
    local_18 = 0;
    std::__ndk1::
    vector<v8::internal::SourcePosition,v8::internal::ZoneAllocator<v8::internal::SourcePosition>>::
    __append(this_00,(uVar5 - uVar2) + 1,(SourcePosition *)&local_18);
    lVar1 = *(long *)this_00;
  }
  if (*(long *)(lVar1 + uVar5 * 8) != lVar4) {
    *(long *)(lVar1 + uVar5 * 8) = lVar4;
  }
  return;
}

