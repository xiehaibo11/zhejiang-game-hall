
/* v8::Context::SetDetachedWindowReason(v8::Context::DetachedWindowReason) */

void __thiscall v8::Context::SetDetachedWindowReason(Context *this,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong local_38;
  
  lVar3 = (ulong)*(uint *)(this + 4) << 0x20;
  uVar1 = *(undefined4 *)(lVar3 + 0x2c60);
  *(undefined4 *)(lVar3 + 0x2c60) = 5;
  local_38 = *(ulong *)this;
  if (*(short *)((local_38 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_38 - 1)) == 0x8f) {
    iVar2 = internal::NativeContext::GetDetachedWindowReason((NativeContext *)&local_38);
    if (iVar2 != 1) {
      local_38 = *(ulong *)this;
      internal::NativeContext::SetDetachedWindowReason((NativeContext *)&local_38,param_2);
    }
    *(undefined4 *)(lVar3 + 0x2c60) = uVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","context->IsNativeContext()");
}

