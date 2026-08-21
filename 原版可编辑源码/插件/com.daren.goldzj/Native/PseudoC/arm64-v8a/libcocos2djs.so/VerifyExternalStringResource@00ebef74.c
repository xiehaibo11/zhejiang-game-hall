
/* v8::String::VerifyExternalStringResource(v8::String::ExternalStringResource*) const */

void __thiscall
v8::String::VerifyExternalStringResource(String *this,ExternalStringResource *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  
  uVar1 = *(ulong *)this;
  uVar2 = uVar1 & 0xffffffff00000000;
  puVar3 = (uint *)(uVar1 - 1);
  if ((*(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar1 - 1)) < 0x40) &&
     ((*(ushort *)((uVar2 | 7) + (ulong)*puVar3) & 7) == 5)) {
    uVar1 = uVar2 | *(uint *)(uVar1 + 0xb);
    puVar3 = (uint *)(uVar1 - 1);
  }
  if ((*(ushort *)((uVar2 | *puVar3) + 7) & 0xf) == 2) {
    if (*(ExternalStringResource **)(uVar1 + 0xb) == param_1) {
      return;
    }
  }
  else if (param_1 == (ExternalStringResource *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","expected == value");
}

