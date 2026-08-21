
/* v8::internal::wasm::WasmInterpreter::Thread::GetReturnValue(int) */

void v8::internal::wasm::WasmInterpreter::Thread::GetReturnValue(int param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong *puVar3;
  uint in_w1;
  undefined1 *in_x8;
  Isolate *pIVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = (ulong)(uint)param_1;
  if (*(long *)(uVar2 + 0x30) == 0) {
    pIVar4 = *(Isolate **)(uVar2 + 8);
    uVar6 = **(ulong **)(uVar2 + 0x10) & 0xffffffff00000000;
    uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)(**(ulong **)(uVar2 + 0x10) + 0x8b)) + 0xb);
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
    bVar1 = true;
    *(ulong **)(uVar2 + 0x30) = puVar3;
  }
  else {
    bVar1 = false;
  }
  if (*(int *)(uVar2 + 0x58) == 4) {
    *(undefined8 *)(in_x8 + 9) = 0;
    *in_x8 = 1;
    *(undefined8 *)(in_x8 + 1) = 0xdeadbeef;
  }
  else {
    if (*(long *)(uVar2 + 0x78) == *(long *)(uVar2 + 0x80)) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(uVar2 + 0x80) + -8);
    }
    ThreadImpl::StackValue::ExtractValue
              ((ThreadImpl *)(*(long *)(uVar2 + 0x18) + (lVar5 + (ulong)in_w1) * 0x11),uVar2);
  }
  if (bVar1) {
    *(undefined8 *)(uVar2 + 0x30) = 0;
  }
  return;
}

