
/* v8::internal::compiler::GraphReducer::Push(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::GraphReducer::Push(GraphReducer *this,Node *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  *(int *)(param_1 + 0x10) = *(int *)(this + 0x18) + 2;
  lVar2 = *(long *)(this + 0x98);
  lVar4 = *(long *)(this + 0xa0);
  uVar1 = 0;
  if (lVar4 - lVar2 != 0) {
    uVar1 = (lVar4 - lVar2) * 0x20 - 1;
  }
  uVar5 = *(long *)(this + 200) + *(long *)(this + 0xc0);
  if (uVar1 == uVar5) {
    std::__ndk1::
    deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
    ::__add_back_capacity
              ((deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
                *)(this + 0x90));
    lVar2 = *(long *)(this + 0x98);
    lVar4 = *(long *)(this + 0xa0);
    uVar5 = *(long *)(this + 0xc0) + *(long *)(this + 200);
  }
  if (lVar4 == lVar2) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)
             (*(long *)(lVar2 + (uVar5 >> 5 & 0x7fffffffffffff8)) + (uVar5 & 0xff) * 0x10);
  }
  *puVar3 = param_1;
  *(undefined4 *)(puVar3 + 1) = 0;
  *(long *)(this + 200) = *(long *)(this + 200) + 1;
  return;
}

