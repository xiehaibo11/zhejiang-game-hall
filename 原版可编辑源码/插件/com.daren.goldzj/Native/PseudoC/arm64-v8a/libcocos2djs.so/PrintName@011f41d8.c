
/* v8::internal::StringStream::PrintName(v8::internal::Object) */

void __thiscall v8::internal::StringStream::PrintName(StringStream *this,ulong param_2)

{
  undefined8 uVar1;
  ulong local_18;
  
  if (((param_2 & 1) != 0) &&
     (*(ushort *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) < 0x40)) {
    if (0 < *(int *)(param_2 + 7)) {
      Put(this,param_2,0);
      return;
    }
    uVar1 = __strlen_chk("/* anonymous */",0x10);
    Add(this,"/* anonymous */",uVar1,0,0);
    return;
  }
  uVar1 = __strlen_chk(&DAT_019b0231,3);
  local_18 = param_2;
  Add(this,&DAT_019b0231,uVar1,&local_18,1);
  return;
}

