
/* v8::String::MakeExternal(v8::String::ExternalOneByteStringResource*) */

uint __thiscall v8::String::MakeExternal(String *this,ExternalOneByteStringResource *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_18;
  
  local_18 = *(ulong *)this;
  uVar4 = local_18 & 0xffffffff00000000 | 7;
  if ((*(ushort *)(uVar4 + *(uint *)(local_18 - 1)) < 0x40) &&
     ((*(ushort *)(uVar4 + *(uint *)(local_18 - 1)) & 7) == 5)) {
    local_18 = local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 + 0xb);
  }
  uVar4 = internal::String::SupportsExternalization((String *)&local_18);
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar4 = local_18 & 0xffffffff00000000;
    uVar1 = *(undefined4 *)(uVar4 + 0x2c60);
    *(undefined4 *)(uVar4 + 0x2c60) = 5;
    if ((param_1 == (ExternalOneByteStringResource *)0x0) ||
       (lVar3 = (**(code **)(*(long *)param_1 + 0x30))(param_1), lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","resource && resource->data()");
    }
    uVar2 = internal::String::MakeExternal((String *)&local_18,param_1);
    *(undefined4 *)(uVar4 + 0x2c60) = uVar1;
  }
  return uVar2 & 1;
}

