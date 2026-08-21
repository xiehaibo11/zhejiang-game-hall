
/* v8::internal::compiler::WasmGraphBuilder::SimdScalarLoweringForTesting() */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::SimdScalarLoweringForTesting(WasmGraphBuilder *this)

{
  long lVar1;
  Signature *pSVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  MachineGraph *pMVar7;
  SimdScalarLowering aSStack_b8 [16];
  long *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  long local_90;
  long *local_80;
  long local_60;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pMVar7 = *(MachineGraph **)(this + 8);
  pSVar2 = (Signature *)FUN_0131eb2c(**(undefined8 **)pMVar7,*(undefined8 *)(this + 0x68),0);
  SimdScalarLowering::SimdScalarLowering(aSStack_b8,pMVar7,pSVar2);
  SimdScalarLowering::LowerGraph(aSStack_b8);
  std::__ndk1::
  __deque_base<v8::internal::compiler::SimdScalarLowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState>>
  ::clear((__deque_base<v8::internal::compiler::SimdScalarLowering::NodeState,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::SimdScalarLowering::NodeState>>
           *)&local_a8);
  if (local_a0 == local_98) {
LAB_0131eddc:
    if (((local_a8 != (long *)0x0) && (0xf < (ulong)(local_90 - (long)local_a8))) &&
       ((uVar4 = local_90 - (long)local_a8 >> 3, local_80 == (long *)0x0 ||
        ((ulong)local_80[1] <= uVar4)))) {
      local_a8[1] = uVar4;
      *local_a8 = (long)local_80;
      local_80 = local_a8;
    }
    if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  plVar6 = (long *)*local_a0;
  puVar3 = local_a0;
  plVar5 = (long *)local_60;
  if (local_60 != 0) goto LAB_0131edac;
  do {
    plVar5 = plVar6;
    plVar5[1] = 0x100;
    *plVar5 = local_60;
    local_60 = (long)plVar5;
    do {
      puVar3 = puVar3 + 1;
      if (local_98 == puVar3) {
        if ((long)local_98 - (long)local_a0 != 0) {
          local_98 = local_98 + (((long)local_98 - (long)local_a0) - 8U >> 3 ^ 0xffffffffffffffff);
        }
        goto LAB_0131eddc;
      }
      plVar6 = (long *)*puVar3;
      if (plVar5 == (long *)0x0) break;
LAB_0131edac:
    } while (0x100 < *(ulong *)((long)plVar5 + 8));
  } while( true );
}

