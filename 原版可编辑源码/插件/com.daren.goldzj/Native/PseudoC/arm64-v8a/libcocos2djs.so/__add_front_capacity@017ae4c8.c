
/* std::__ndk1::deque<v8::internal::compiler::SimdScalarLowering::NodeState,
   v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState>
   >::__add_front_capacity() */

void __thiscall
std::__ndk1::
deque<v8::internal::compiler::SimdScalarLowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState>>
::__add_front_capacity
          (deque<v8::internal::compiler::SimdScalarLowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState>>
           *this)

{
  Zone *pZVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  NodeState *local_50;
  NodeState *local_48;
  NodeState *pNStack_40;
  NodeState *local_38;
  NodeState *pNStack_30;
  deque<v8::internal::compiler::SimdScalarLowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState>>
  *local_28;
  
  uVar5 = *(long *)(this + 0x10) - *(long *)(this + 8);
  lVar2 = 0;
  if (uVar5 != 0) {
    lVar2 = uVar5 * 0x20 + -1;
  }
  if ((ulong)(lVar2 - (*(long *)(this + 0x38) + *(long *)(this + 0x30))) < 0x100) {
    uVar4 = *(long *)(this + 0x18) - *(long *)this;
    if (uVar5 < uVar4) {
      if (*(long *)(this + 8) == *(long *)this) {
        local_48 = *(NodeState **)(this + 0x48);
        if ((local_48 == (NodeState *)0x0) || (*(ulong *)(local_48 + 8) < 0x100)) {
          pZVar1 = *(Zone **)(this + 0x40);
          local_48 = *(NodeState **)(pZVar1 + 0x10);
          if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)local_48) < 0x1000) {
            local_48 = (NodeState *)v8::internal::Zone::NewExpand(pZVar1,0x1000);
          }
          else {
            *(NodeState **)(pZVar1 + 0x10) = local_48 + 0x1000;
          }
        }
        else {
          *(undefined8 *)(this + 0x48) = *(undefined8 *)local_48;
        }
        __split_buffer<v8::internal::compiler::SimdScalarLowering::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState*>>
        ::push_back((__split_buffer<v8::internal::compiler::SimdScalarLowering::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState*>>
                     *)this,&local_48);
        local_48 = *(NodeState **)(*(long *)(this + 0x10) + -8);
        *(undefined8 **)(this + 0x10) = (undefined8 *)(*(long *)(this + 0x10) + -8);
        __split_buffer<v8::internal::compiler::SimdScalarLowering::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState*>>
        ::push_front((__split_buffer<v8::internal::compiler::SimdScalarLowering::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState*>>
                      *)this,&local_48);
      }
      else {
        local_48 = *(NodeState **)(this + 0x48);
        if ((local_48 == (NodeState *)0x0) || (*(ulong *)(local_48 + 8) < 0x100)) {
          pZVar1 = *(Zone **)(this + 0x40);
          local_48 = *(NodeState **)(pZVar1 + 0x10);
          if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)local_48) < 0x1000) {
            local_48 = (NodeState *)v8::internal::Zone::NewExpand(pZVar1,0x1000);
          }
          else {
            *(NodeState **)(pZVar1 + 0x10) = local_48 + 0x1000;
          }
        }
        else {
          *(undefined8 *)(this + 0x48) = *(undefined8 *)local_48;
        }
        __split_buffer<v8::internal::compiler::SimdScalarLowering::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState*>>
        ::push_front((__split_buffer<v8::internal::compiler::SimdScalarLowering::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState*>>
                      *)this,&local_48);
      }
      if (*(long *)(this + 0x10) - *(long *)(this + 8) == 8) {
        lVar2 = 0x80;
      }
      else {
        lVar2 = *(long *)(this + 0x30) + 0x100;
      }
      *(long *)(this + 0x30) = lVar2;
    }
    else {
      local_28 = this + 0x20;
      pNStack_30 = (NodeState *)0x0;
      local_48 = *(NodeState **)(this + 0x28);
      uVar5 = (long)uVar4 >> 2;
      if (uVar4 == 0) {
        uVar5 = 1;
      }
      if ((local_48 == (NodeState *)0x0) || (*(ulong *)(local_48 + 8) < uVar5)) {
        pZVar1 = *(Zone **)local_28;
        uVar4 = uVar5 * 8;
        local_48 = *(NodeState **)(pZVar1 + 0x10);
        if (uVar4 < (ulong)(*(long *)(pZVar1 + 0x18) - (long)local_48) ||
            uVar4 - (*(long *)(pZVar1 + 0x18) - (long)local_48) == 0) {
          *(NodeState **)(pZVar1 + 0x10) = local_48 + uVar4;
        }
        else {
          local_48 = (NodeState *)v8::internal::Zone::NewExpand(pZVar1,uVar4);
        }
      }
      else {
        *(undefined8 *)(this + 0x28) = *(undefined8 *)local_48;
      }
      pNStack_30 = local_48 + uVar5 * 8;
      local_50 = *(NodeState **)(this + 0x48);
      pNStack_40 = local_48;
      local_38 = local_48;
      if ((local_50 == (NodeState *)0x0) || (*(ulong *)(local_50 + 8) < 0x100)) {
        pZVar1 = *(Zone **)(this + 0x40);
        local_50 = *(NodeState **)(pZVar1 + 0x10);
        if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)local_50) < 0x1000) {
          local_50 = (NodeState *)v8::internal::Zone::NewExpand(pZVar1,0x1000);
        }
        else {
          *(NodeState **)(pZVar1 + 0x10) = local_50 + 0x1000;
        }
      }
      else {
        *(undefined8 *)(this + 0x48) = *(undefined8 *)local_50;
      }
      __split_buffer<v8::internal::compiler::SimdScalarLowering::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState*>&>
      ::push_back((__split_buffer<v8::internal::compiler::SimdScalarLowering::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState*>&>
                   *)&local_48,&local_50);
      lVar2 = *(long *)(this + 8);
      if (lVar2 != *(long *)(this + 0x10)) {
        do {
          FUN_017ae9fc(&local_48,lVar2);
          lVar2 = lVar2 + 8;
        } while (lVar2 != *(long *)(this + 0x10));
      }
      puVar3 = *(undefined8 **)this;
      *(NodeState **)this = local_48;
      *(NodeState **)(this + 8) = pNStack_40;
      lVar2 = *(long *)(this + 0x18);
      *(NodeState **)(this + 0x18) = pNStack_30;
      *(NodeState **)(this + 0x10) = local_38;
      if ((long)local_38 - (long)pNStack_40 == 8) {
        lVar6 = 0x80;
      }
      else {
        lVar6 = *(long *)(this + 0x30) + 0x100;
      }
      *(long *)(this + 0x30) = lVar6;
      if ((puVar3 != (undefined8 *)0x0) && (0xf < (ulong)(lVar2 - (long)puVar3))) {
        uVar5 = lVar2 - (long)puVar3 >> 3;
        if ((*(long *)(local_28 + 8) == 0) || (*(ulong *)(*(long *)(local_28 + 8) + 8) <= uVar5)) {
          puVar3[1] = uVar5;
          *puVar3 = *(undefined8 *)(local_28 + 8);
          *(undefined8 **)(local_28 + 8) = puVar3;
        }
      }
    }
  }
  else {
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 0x100;
    puVar3 = (undefined8 *)(*(long *)(this + 0x10) + -8);
    local_48 = (NodeState *)*puVar3;
    *(undefined8 **)(this + 0x10) = puVar3;
    __split_buffer<v8::internal::compiler::SimdScalarLowering::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState*>>
    ::push_front((__split_buffer<v8::internal::compiler::SimdScalarLowering::NodeState*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState*>>
                  *)this,&local_48);
  }
  return;
}

