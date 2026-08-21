
/* v8::internal::JSBoundFunction::JSBoundFunctionPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::JSBoundFunction::JSBoundFunctionPrint(JSBoundFunction *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  ulong local_28;
  
  FUN_00f3d5b0(param_1,*(undefined8 *)this,"JSBoundFunction");
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - bound_target_function: ",0x1b);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - bound_this: ",0x10);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - bound_arguments: ",0x15);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x13);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  FUN_00f3d880(param_1,*(undefined8 *)this,1);
  return;
}

