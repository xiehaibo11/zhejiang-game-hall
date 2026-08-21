
/* v8::tracing::TracedValue::AppendAsTraceFormat(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*) const */

void __thiscall
v8::tracing::TracedValue::AppendAsTraceFormat(TracedValue *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  basic_string *pbVar3;
  ulong uVar4;
  
  bVar2 = *param_1;
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar2 >> 1);
    uVar1 = 0x16;
    if (uVar4 == 0x16) goto LAB_011fa538;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
    uVar1 = (*(ulong *)param_1 & 0xfffffffffffffffe) - 1;
    if (uVar4 == uVar1) {
LAB_011fa538:
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      __grow_by((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                param_1,uVar1,1,uVar1,uVar1,0,0);
      bVar2 = *param_1;
    }
  }
  if (((byte)bVar2 & 1) == 0) {
    pbVar3 = param_1 + 1;
    *param_1 = (basic_string)((char)uVar4 * '\x02' + '\x02');
  }
  else {
    pbVar3 = *(basic_string **)(param_1 + 0x10);
    *(ulong *)(param_1 + 8) = uVar4 + 1;
  }
  *(undefined2 *)(pbVar3 + uVar4) = 0x7b;
  FUN_011f9614(param_1,this + 8);
  bVar2 = *param_1;
  if (((byte)bVar2 & 1) == 0) {
    uVar4 = (ulong)((byte)bVar2 >> 1);
    uVar1 = 0x16;
    if (uVar4 != 0x16) goto LAB_011fa5e0;
  }
  else {
    uVar4 = *(ulong *)(param_1 + 8);
    uVar1 = (*(ulong *)param_1 & 0xfffffffffffffffe) - 1;
    if (uVar4 != uVar1) goto LAB_011fa5e0;
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  __grow_by((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            param_1,uVar1,1,uVar1,uVar1,0,0);
  bVar2 = *param_1;
LAB_011fa5e0:
  if (((byte)bVar2 & 1) == 0) {
    pbVar3 = param_1 + 1;
    *param_1 = (basic_string)((char)uVar4 * '\x02' + '\x02');
  }
  else {
    pbVar3 = *(basic_string **)(param_1 + 0x10);
    *(ulong *)(param_1 + 8) = uVar4 + 1;
  }
  *(undefined2 *)(pbVar3 + uVar4) = 0x7d;
  return;
}

