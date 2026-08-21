
void FUN_0124a8a8(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_60;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined2 local_4f;
  undefined1 local_4d;
  undefined4 uStack_4c;
  void *local_48;
  ulong local_40;
  ulong uStack_38;
  void *local_30;
  char *local_8;
  
  uStack_4c = 0;
  local_58 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x14;
  local_48 = (void *)0x0;
  local_4f = 0x2720;
  uStack_57 = 0x747265706f7250;
  uStack_50 = 0x79;
  local_4d = 0;
  local_60 = *param_2;
  v8::internal::String::ToCString(&local_8,&local_60,1,1,0);
  puVar2 = (ulong *)std::__ndk1::
                    basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                    append(&local_58,local_8);
  uStack_38 = puVar2[1];
  local_40 = *puVar2;
  local_30 = (void *)puVar2[2];
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar3 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_40,"\'");
  uVar5 = puVar3[1];
  uVar4 = *puVar3;
  param_1[2] = puVar3[2];
  param_1[1] = uVar5;
  *param_1 = uVar4;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = 0;
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  pcVar1 = local_8;
  local_8 = (char *)0x0;
  if (pcVar1 != (char *)0x0) {
    operator_delete__(pcVar1);
  }
  if (((byte)local_58 & 1) != 0) {
    operator_delete(local_48);
  }
  return;
}

