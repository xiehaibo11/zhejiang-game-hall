
/* v8::internal::compiler::GraphReducer::Revisit(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::GraphReducer::Revisit(GraphReducer *this,Node *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = *(uint *)(this + 0x18);
  uVar1 = 0;
  if (uVar3 <= *(uint *)(param_1 + 0x10)) {
    uVar1 = *(uint *)(param_1 + 0x10) - uVar3;
  }
  if ((uVar1 & 0xff) == 3) {
    *(uint *)(param_1 + 0x10) = uVar3 + 1;
    lVar4 = *(long *)(this + 0x48);
    uVar2 = 0;
    if (*(long *)(this + 0x50) - lVar4 != 0) {
      uVar2 = (*(long *)(this + 0x50) - lVar4) * 0x40 - 1;
    }
    uVar5 = *(long *)(this + 0x78) + *(long *)(this + 0x70);
    if (uVar2 == uVar5) {
      std::__ndk1::
      deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
      ::__add_back_capacity
                ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                  *)(this + 0x40));
      lVar4 = *(long *)(this + 0x48);
      uVar5 = *(long *)(this + 0x70) + *(long *)(this + 0x78);
    }
    *(Node **)(*(long *)(lVar4 + (uVar5 >> 6 & 0x3fffffffffffff8)) + (uVar5 & 0x1ff) * 8) = param_1;
    *(long *)(this + 0x78) = *(long *)(this + 0x78) + 1;
  }
  return;
}

