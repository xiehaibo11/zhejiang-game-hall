
/* v8::internal::wasm::InterpretedFrameImpl::GetLocalValue(int) const */

void __thiscall
v8::internal::wasm::InterpretedFrameImpl::GetLocalValue(InterpretedFrameImpl *this,int param_1)

{
  int iVar1;
  bool bVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)this;
  if (*(long *)(uVar6 + 0x30) == 0) {
    pIVar4 = *(Isolate **)(uVar6 + 8);
    uVar5 = **(ulong **)(uVar6 + 0x10) & 0xffffffff00000000;
    uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(**(ulong **)(uVar6 + 0x10) + 0x8b)) + 0xb);
    if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar4 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar4);
      }
      *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar5;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar5);
    }
    *(ulong **)(uVar6 + 0x30) = puVar3;
    uVar5 = *(ulong *)this;
    bVar2 = false;
  }
  else {
    bVar2 = true;
    uVar5 = uVar6;
  }
  iVar1 = *(int *)(*(long *)(uVar5 + 0x38) + (long)*(int *)(this + 8) * 0x18 + 0x10) + param_1;
  ThreadImpl::StackValue::ExtractValue
            ((ThreadImpl *)(*(long *)(uVar5 + 0x18) + (long)iVar1 + (long)iVar1 * 0x10),uVar5);
  if (!bVar2) {
    *(undefined8 *)(uVar6 + 0x30) = 0;
  }
  return;
}

