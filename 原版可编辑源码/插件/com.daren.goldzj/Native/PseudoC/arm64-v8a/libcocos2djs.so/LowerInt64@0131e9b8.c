
/* v8::internal::compiler::WasmGraphBuilder::LowerInt64(v8::internal::compiler::WasmGraphBuilder::CallOrigin)
    */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::LowerInt64(WasmGraphBuilder *this,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  Int64Lowering aIStack_d8 [40];
  long *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  long local_98;
  long local_88;
  long local_68;
  void *local_48;
  void *local_28;
  
  puVar5 = *(undefined8 **)(this + 8);
  lVar9 = puVar5[2];
  if (*(char *)(lVar9 + 0x10) != '\x05') {
    puVar1 = (undefined8 *)*puVar5;
    uVar2 = puVar5[1];
    uVar10 = *puVar1;
    uVar4 = FUN_0131eb2c(uVar10,*(undefined8 *)(this + 0x68),param_2);
    local_28 = *(void **)(this + 0x80);
    *(undefined8 *)(this + 0x80) = 0;
    Int64Lowering::Int64Lowering(aIStack_d8,puVar1,lVar9,uVar2,uVar10,uVar4,&local_28);
    pvVar3 = local_28;
    local_28 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    Int64Lowering::LowerGraph(aIStack_d8);
    pvVar3 = local_48;
    local_48 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    std::__ndk1::
    __deque_base<v8::internal::compiler::Int64Lowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Int64Lowering::NodeState>>
    ::clear((__deque_base<v8::internal::compiler::Int64Lowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Int64Lowering::NodeState>>
             *)&local_b0);
    if (local_a8 != local_a0) {
      plVar8 = (long *)*local_a8;
      plVar7 = (long *)local_68;
      if (local_68 != 0) goto LAB_0131eaa4;
      do {
        plVar7 = plVar8;
        plVar7[1] = 0x100;
        *plVar7 = local_68;
        local_68 = (long)plVar7;
        do {
          local_a8 = local_a8 + 1;
          if (local_a0 == local_a8) goto LAB_0131ead4;
          plVar8 = (long *)*local_a8;
          if (plVar7 == (long *)0x0) break;
LAB_0131eaa4:
        } while (0x100 < *(ulong *)((long)plVar7 + 8));
      } while( true );
    }
LAB_0131ead4:
    if (((local_b0 != (long *)0x0) && (0xf < (ulong)(local_98 - (long)local_b0))) &&
       ((uVar6 = local_98 - (long)local_b0 >> 3, local_88 == 0 ||
        (*(ulong *)(local_88 + 8) <= uVar6)))) {
      local_b0[1] = uVar6;
      *local_b0 = local_88;
    }
  }
  return;
}

