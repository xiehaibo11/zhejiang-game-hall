
/* v8::internal::compiler::ControlFlowOptimizer::Enqueue(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::ControlFlowOptimizer::Enqueue(ControlFlowOptimizer *this,Node *param_1)

{
  ulong uVar1;
  Node *pNVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar4 = (byte)param_1[0x17] & 0xf;
  pNVar2 = param_1 + 0x20;
  if (uVar4 == 0xf) {
    uVar4 = *(uint *)(*(long *)pNVar2 + 8);
    pNVar2 = (Node *)(*(long *)pNVar2 + 0x10);
  }
  if ((((int)uVar4 < 1) || (*(long *)pNVar2 != 0)) &&
     (*(uint *)(param_1 + 0x10) <= *(uint *)(this + 0x68))) {
    *(uint *)(param_1 + 0x10) = *(uint *)(this + 0x68) + 1;
    lVar3 = *(long *)(this + 0x20);
    uVar1 = 0;
    if (*(long *)(this + 0x28) - lVar3 != 0) {
      uVar1 = (*(long *)(this + 0x28) - lVar3) * 0x40 - 1;
    }
    uVar5 = *(long *)(this + 0x50) + *(long *)(this + 0x48);
    if (uVar1 == uVar5) {
      std::__ndk1::
      deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
      ::__add_back_capacity
                ((deque<v8::internal::compiler::Node*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Node*>>
                  *)(this + 0x18));
      lVar3 = *(long *)(this + 0x20);
      uVar5 = *(long *)(this + 0x48) + *(long *)(this + 0x50);
    }
    *(Node **)(*(long *)(lVar3 + (uVar5 >> 6 & 0x3fffffffffffff8)) + (uVar5 & 0x1ff) * 8) = param_1;
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + 1;
  }
  return;
}

