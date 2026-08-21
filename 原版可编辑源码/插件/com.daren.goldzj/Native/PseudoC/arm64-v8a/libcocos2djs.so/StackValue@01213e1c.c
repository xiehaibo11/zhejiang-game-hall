
/* v8::internal::wasm::ThreadImpl::StackValue::StackValue(v8::internal::wasm::WasmValue,
   v8::internal::wasm::ThreadImpl*, unsigned long) */

void __thiscall
v8::internal::wasm::ThreadImpl::StackValue::StackValue
          (StackValue *this,undefined8 *param_2,long param_3,int param_4)

{
  long lVar1;
  StackValue SVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  lVar3 = tpidr_el0;
  lVar4 = *(long *)(lVar3 + 0x28);
  uVar10 = *param_2;
  SVar2 = *(StackValue *)(param_2 + 2);
  *(undefined8 *)(this + 8) = param_2[1];
  *(undefined8 *)this = uVar10;
  this[0x10] = SVar2;
  if (*this == (StackValue)0x6) {
    this[0x10] = (StackValue)0x0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 6;
    uVar8 = **(ulong **)((long)param_2 + 1);
    uVar7 = (ulong)*(uint *)(**(ulong **)(param_3 + 0x30) + 3);
    uVar5 = **(ulong **)(param_3 + 0x30) & 0xffffffff00000000;
    uVar9 = uVar5 | uVar7;
    lVar1 = uVar9 + (long)(param_4 << 2);
    *(int *)(lVar1 + 7) = (int)uVar8;
    if ((uVar8 & 1) != 0) {
      uVar6 = *(ulong *)((uVar8 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar9,lVar1,uVar8);
        uVar6 = *(ulong *)(uVar8 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) &&
         ((*(byte *)((uVar5 | uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar9,lVar1,uVar8);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

