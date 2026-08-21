
/* v8::internal::compiler::GraphReducer::ReduceNode(v8::internal::compiler::Node*) */

void __thiscall v8::internal::compiler::GraphReducer::ReduceNode(GraphReducer *this,Node *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  *(int *)(param_1 + 0x10) = *(int *)(this + 0x18) + 2;
  lVar3 = *(long *)(this + 0x98);
  lVar5 = *(long *)(this + 0xa0);
  uVar8 = 0;
  if (lVar5 - lVar3 != 0) {
    uVar8 = (lVar5 - lVar3) * 0x20 - 1;
  }
  uVar10 = *(long *)(this + 200) + *(long *)(this + 0xc0);
  if (uVar8 == uVar10) {
    std::__ndk1::
    deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
    ::__add_back_capacity
              ((deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
                *)(this + 0x90));
    lVar3 = *(long *)(this + 0x98);
    lVar5 = *(long *)(this + 0xa0);
    uVar10 = *(long *)(this + 0xc0) + *(long *)(this + 200);
  }
  if (lVar5 == lVar3) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             (*(long *)(lVar3 + (uVar10 >> 5 & 0x7fffffffffffff8)) + (uVar10 & 0xff) * 0x10);
  }
  *puVar4 = param_1;
  *(undefined4 *)(puVar4 + 1) = 0;
  lVar3 = *(long *)(this + 200) + 1;
  *(long *)(this + 200) = lVar3;
joined_r0x016c81b8:
  do {
    while (lVar3 != 0) {
      ReduceTop(this);
      lVar3 = *(long *)(this + 200);
    }
    if (*(long *)(this + 0x78) == 0) {
      puVar4 = *(undefined8 **)(this + 0x28);
      puVar9 = *(undefined8 **)(this + 0x20);
      if (*(undefined8 **)(this + 0x20) == puVar4) {
        return;
      }
      do {
        puVar11 = puVar9 + 1;
        (**(code **)(*(long *)*puVar9 + 0x20))();
        puVar9 = puVar11;
      } while (puVar4 != puVar11);
      if (*(long *)(this + 0x78) == 0) {
        return;
      }
    }
    else {
      uVar8 = *(ulong *)(this + 0x70);
      puVar4 = *(undefined8 **)(this + 0x48);
      lVar3 = *(long *)(*(long *)((long)puVar4 + (uVar8 >> 6 & 0x3fffffffffffff8)) +
                       (uVar8 & 0x1ff) * 8);
      uVar8 = uVar8 + 1;
      *(ulong *)(this + 0x70) = uVar8;
      *(long *)(this + 0x78) = *(long *)(this + 0x78) + -1;
      if (0x3ff < uVar8) {
        puVar9 = (undefined8 *)*puVar4;
        if ((*(long *)(this + 0x88) == 0) || (*(ulong *)(*(long *)(this + 0x88) + 8) < 0x201)) {
          puVar9[1] = 0x200;
          *puVar9 = *(undefined8 *)(this + 0x88);
          puVar4 = *(undefined8 **)(this + 0x48);
          uVar8 = *(ulong *)(this + 0x70);
          *(undefined8 **)(this + 0x88) = puVar9;
        }
        *(undefined8 **)(this + 0x48) = puVar4 + 1;
        *(ulong *)(this + 0x70) = uVar8 - 0x200;
      }
      uVar2 = *(uint *)(this + 0x18);
      uVar1 = 0;
      if (uVar2 <= *(uint *)(lVar3 + 0x10)) {
        uVar1 = *(uint *)(lVar3 + 0x10) - uVar2;
      }
      if ((uVar1 & 0xff) == 1) {
        *(uint *)(lVar3 + 0x10) = uVar2 + 2;
        lVar5 = *(long *)(this + 0x98);
        lVar7 = *(long *)(this + 0xa0);
        uVar8 = 0;
        if (lVar7 - lVar5 != 0) {
          uVar8 = (lVar7 - lVar5) * 0x20 - 1;
        }
        uVar10 = *(long *)(this + 200) + *(long *)(this + 0xc0);
        if (uVar8 == uVar10) {
          std::__ndk1::
          deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
          ::__add_back_capacity
                    ((deque<v8::internal::compiler::GraphReducer::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::GraphReducer::NodeState>>
                      *)(this + 0x90));
          lVar5 = *(long *)(this + 0x98);
          lVar7 = *(long *)(this + 0xa0);
          uVar10 = *(long *)(this + 0xc0) + *(long *)(this + 200);
        }
        if (lVar7 == lVar5) {
          plVar6 = (long *)0x0;
        }
        else {
          plVar6 = (long *)(*(long *)(lVar5 + (uVar10 >> 5 & 0x7fffffffffffff8)) +
                           (uVar10 & 0xff) * 0x10);
        }
        *plVar6 = lVar3;
        *(undefined4 *)(plVar6 + 1) = 0;
        lVar3 = *(long *)(this + 200) + 1;
        *(long *)(this + 200) = lVar3;
        goto joined_r0x016c81b8;
      }
    }
    lVar3 = *(long *)(this + 200);
  } while( true );
}

