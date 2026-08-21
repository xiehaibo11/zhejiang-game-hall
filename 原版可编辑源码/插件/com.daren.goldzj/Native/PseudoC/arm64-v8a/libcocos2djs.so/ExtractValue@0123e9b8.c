
/* v8::internal::wasm::ThreadImpl::StackValue::ExtractValue(v8::internal::wasm::ThreadImpl*,
   unsigned long) */

void v8::internal::wasm::ThreadImpl::StackValue::ExtractValue(ThreadImpl *param_1,ulong param_2)

{
  Isolate *pIVar1;
  ulong *puVar2;
  int in_w2;
  undefined8 *in_x8;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*param_1 == (ThreadImpl)0x6) {
    pIVar1 = *(Isolate **)(param_2 + 8);
    uVar3 = **(ulong **)(param_2 + 0x30) & 0xffffffff00000000;
    uVar3 = uVar3 | *(uint *)((uVar3 | *(uint *)(**(ulong **)(param_2 + 0x30) + 3)) +
                              (long)(in_w2 << 2) + 7);
    if (*(CanonicalHandleScope **)(pIVar1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)(pIVar1 + 0x95a0);
      if (puVar2 == *(ulong **)(pIVar1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(pIVar1);
      }
      *(ulong **)(pIVar1 + 0x95a0) = puVar2 + 1;
      *puVar2 = uVar3;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar1 + 0x95b8),uVar3);
    }
    *(undefined8 *)((long)in_x8 + 9) = 0;
    *(undefined1 *)in_x8 = 6;
    *(ulong **)((long)in_x8 + 1) = puVar2;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar4 = *(undefined8 *)param_1;
    *(ThreadImpl *)(in_x8 + 2) = param_1[0x10];
    in_x8[1] = uVar5;
    *in_x8 = uVar4;
  }
  return;
}

