
/* v8::String::StringEquals(v8::Local<v8::String>) */

uint __thiscall v8::String::StringEquals(String *this,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = *(ulong *)this;
  uVar2 = *param_2;
  if ((int)uVar2 == (int)local_18) {
    uVar1 = 1;
  }
  else if ((*(ushort *)((local_18 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_18 - 1)) < 0x20
           ) && (*(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) < 0x20)
          ) {
    uVar1 = 0;
  }
  else {
    uVar1 = internal::String::SlowEquals((String *)&local_18);
  }
  return uVar1 & 1;
}

