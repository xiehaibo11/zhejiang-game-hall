
/* v8::internal::StringStream::PrintSecurityTokenIfChanged(v8::internal::JSFunction) */

void __thiscall
v8::internal::StringStream::PrintSecurityTokenIfChanged(StringStream *this,ulong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_38;
  
  uVar3 = param_2 & 0xffffffff00000000;
  uVar1 = *(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)((uVar3 | *(uint *)(param_2 + 0xf)) - 1)) +
                                      0x13)) + 0x27b);
  if (uVar1 != (uint)*(ulong *)(uVar3 | 0xb7a0)) {
    uVar4 = uVar3 | uVar1;
    uVar2 = __strlen_chk("Security context: %o\n",0x16);
    local_38 = uVar4;
    Add(this,"Security context: %o\n",uVar2,&local_38,1);
    *(ulong *)(uVar3 | 0xb7a0) = uVar4;
  }
  return;
}

