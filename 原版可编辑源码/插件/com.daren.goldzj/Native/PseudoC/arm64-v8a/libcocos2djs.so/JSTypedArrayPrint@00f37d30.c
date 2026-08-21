
/* v8::internal::JSTypedArray::JSTypedArrayPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::JSTypedArray::JSTypedArrayPrint(JSTypedArray *this,basic_ostream *param_1)

{
  uint uVar1;
  basic_ostream *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_18;
  
  FUN_00f3d5b0(param_1,*(undefined8 *)this,"JSTypedArray");
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - buffer: ",0xc);
  local_18 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar2,(Brief *)&local_18);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - byte_offset: ",0x11);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(ulong *)(*(long *)this + 0xf));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - byte_length: ",0x11);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(ulong *)(*(long *)this + 0x17));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - length: ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(ulong *)(*(long *)this + 0x1f));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - data_ptr: ",0xe);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             (void *)(*(long *)(*(long *)this + 0x27) + (ulong)*(uint *)(*(long *)this + 0x2f)));
  uVar1 = *(uint *)(*(long *)this + 0x2f);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n   - base_pointer: ",0x14);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,(void *)(ulong)uVar1);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n   - external_pointer: ",0x18);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(void **)(*(long *)this + 0x27));
  uVar3 = *(ulong *)this;
  if ((*(uint *)(uVar3 + 0xb) & 1) != 0) {
    uVar4 = uVar3 & 0xffffffff00000000;
    uVar5 = uVar4 | *(uint *)(uVar3 + 0xb);
    if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x424) {
      if ((*(uint *)(uVar5 + 0x1b) >> 2 & 1) != 0) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"\n - detached",0xc);
        uVar3 = *(ulong *)this;
        uVar4 = uVar3 & 0xffffffff00000000;
      }
      FUN_00f3d880(param_1,uVar3,(*(uint *)((uVar4 | *(uint *)(uVar3 + 0xb)) + 0x1b) & 4) == 0);
      return;
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n <invalid buffer>\n",0x13);
  return;
}

