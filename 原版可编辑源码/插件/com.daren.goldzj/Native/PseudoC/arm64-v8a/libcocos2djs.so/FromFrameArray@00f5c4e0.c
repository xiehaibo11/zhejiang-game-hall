
/* v8::internal::WasmStackFrame::FromFrameArray(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::FrameArray>, int) */

void __thiscall
v8::internal::WasmStackFrame::FromFrameArray
          (WasmStackFrame *this,Isolate *param_1,ulong *param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  
  *(Isolate **)(this + 8) = param_1;
  uVar2 = param_4 * 0x18 | 4;
  uVar4 = *param_3 & 0xffffffff00000000 | (ulong)*(uint *)(*param_3 + (long)(int)uVar2 + 7);
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(param_1 + 0x95a0);
    if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar4;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
  }
  *(ulong **)(this + 0x10) = puVar3;
  *(int *)(this + 0x18) = *(int *)(*param_3 + ((long)(int)(uVar2 + 4) | 7U)) >> 1;
  lVar1 = *param_3 + 7;
  if ((*(uint *)(lVar1 + (int)(uVar2 + 0x10)) >> 2 & 1) == 0) {
    *(undefined8 *)(this + 0x20) =
         *(undefined8 *)
          **(undefined8 **)
            (*(long *)((*param_3 & 0xffffffff00000000 | (ulong)*(uint *)(lVar1 + (int)(uVar2 + 8)))
                      + 3) + 0x18);
  }
  else {
    *(undefined8 *)(this + 0x20) = 0;
  }
  *(int *)(this + 0x28) = *(int *)(*param_3 + ((long)(int)(uVar2 + 0xc) | 7U)) >> 1;
  return;
}

