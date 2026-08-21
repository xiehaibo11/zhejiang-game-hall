
/* v8::internal::compiler::GraphReducer::Recurse(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::GraphReducer::Recurse(GraphReducer *this,Node *param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  
  uVar3 = *(uint *)(this + 0x18);
  uVar4 = 0;
  uVar1 = 0;
  if (uVar3 <= *(uint *)(param_1 + 0x10)) {
    uVar1 = *(uint *)(param_1 + 0x10) - uVar3;
  }
  if ((uVar1 & 0xff) < 2) {
    *(uint *)(param_1 + 0x10) = uVar3 + 2;
    lVar5 = *(long *)(this + 0x98);
    lVar7 = *(long *)(this + 0xa0);
    uVar2 = 0;
    if (lVar7 - lVar5 != 0) {
      uVar2 = (lVar7 - lVar5) * 0x20 - 1;
    }
    uVar8 = *(long *)(this + 200) + *(long *)(this + 0xc0);
    if (uVar2 == uVar8) {
      std::__ndk1::
      deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
      ::__add_back_capacity
                ((deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
                  *)(this + 0x90));
      lVar5 = *(long *)(this + 0x98);
      lVar7 = *(long *)(this + 0xa0);
      uVar8 = *(long *)(this + 0xc0) + *(long *)(this + 200);
    }
    if (lVar7 == lVar5) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)
               (*(long *)(lVar5 + (uVar8 >> 5 & 0x7fffffffffffff8)) + (uVar8 & 0xff) * 0x10);
    }
    *puVar6 = param_1;
    *(undefined4 *)(puVar6 + 1) = 0;
    uVar4 = 1;
    *(long *)(this + 200) = *(long *)(this + 200) + 1;
  }
  return uVar4;
}

