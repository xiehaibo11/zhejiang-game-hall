
/* v8::internal::wasm::InterpretedFrameImpl::GetStackValue(int) const */

void __thiscall
v8::internal::wasm::InterpretedFrameImpl::GetStackValue(InterpretedFrameImpl *this,int param_1)

{
  int iVar1;
  bool bVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  
  uVar8 = *(ulong *)this;
  if (*(long *)(uVar8 + 0x30) == 0) {
    pIVar4 = *(Isolate **)(uVar8 + 8);
    uVar6 = **(ulong **)(uVar8 + 0x10) & 0xffffffff00000000;
    uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(**(ulong **)(uVar8 + 0x10) + 0x8b)) + 0xb);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar6;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar6);
    }
    *(ulong **)(uVar8 + 0x30) = puVar3;
    uVar6 = *(ulong *)this;
    bVar2 = false;
  }
  else {
    bVar2 = true;
    uVar6 = uVar8;
  }
  plVar5 = (long *)(*(long *)(uVar6 + 0x38) + (long)*(int *)(this + 8) * 0x18);
  puVar7 = (undefined8 *)*plVar5;
  iVar1 = (int)plVar5[2] + param_1 +
          ((*(int *)(puVar7 + 3) + *(int *)(*(long *)*puVar7 + 8)) - *(int *)(puVar7 + 2));
  ThreadImpl::StackValue::ExtractValue
            ((ThreadImpl *)(*(long *)(uVar6 + 0x18) + (long)iVar1 + (long)iVar1 * 0x10),uVar6);
  if (!bVar2) {
    *(undefined8 *)(uVar8 + 0x30) = 0;
  }
  return;
}

