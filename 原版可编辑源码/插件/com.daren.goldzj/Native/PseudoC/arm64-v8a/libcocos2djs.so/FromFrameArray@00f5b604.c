
/* v8::internal::JSStackFrame::FromFrameArray(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::FrameArray>, int) */

void __thiscall
v8::internal::JSStackFrame::FromFrameArray
          (JSStackFrame *this,Isolate *param_1,ulong *param_3,int param_4)

{
  Isolate *pIVar1;
  uint uVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  
  *(Isolate **)(this + 8) = param_1;
  uVar2 = param_4 * 0x18 | 4;
  pIVar1 = param_1 + 0x95a0;
  uVar5 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + (long)(int)uVar2 + 7);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar5;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  *(ulong **)(this + 0x10) = puVar4;
  uVar5 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + ((long)(int)(uVar2 + 4) | 7U))
  ;
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar5;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  *(ulong **)(this + 0x18) = puVar4;
  uVar5 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + (long)(int)(uVar2 + 8) + 7);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)pIVar1;
    if (puVar4 == *(ulong **)(param_1 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)pIVar1 = puVar4 + 1;
    *puVar4 = uVar5;
  }
  else {
    puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
  }
  *(ulong **)(this + 0x20) = puVar4;
  *(int *)(this + 0x28) = *(int *)(*param_3 + ((long)(int)(uVar2 + 0xc) | 7U)) >> 1;
  if (this[0x2c] != (JSStackFrame)0x0) {
    this[0x2c] = (JSStackFrame)0x0;
  }
  uVar2 = *(uint *)(*param_3 + (long)(int)(uVar2 + 0x10) + 7);
  uVar3 = uVar2 >> 1 & 0xff;
  this[0x34] = (JSStackFrame)
               ((byte)(uVar2 >> 1) & 8 | (byte)this[0x34] & 0xf0 | (byte)(uVar3 >> 3) & 2 |
                (byte)(uVar3 >> 6) & 1 | (byte)(uVar2 >> 6) & 4);
  return;
}

