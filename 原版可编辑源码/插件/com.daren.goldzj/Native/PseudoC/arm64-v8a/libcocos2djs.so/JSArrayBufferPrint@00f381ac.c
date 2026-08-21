
/* v8::internal::JSArrayBuffer::JSArrayBufferPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::JSArrayBuffer::JSArrayBufferPrint(JSArrayBuffer *this,basic_ostream *param_1)

{
  uint uVar1;
  basic_ostream *pbVar2;
  long lVar3;
  uint *puVar4;
  
  FUN_00f3d5b0(param_1,*(undefined8 *)this,"JSArrayBuffer");
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - backing_store: ",0x13);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(void **)(*(long *)this + 0x13));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - byte_length: ",0x11);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             *(ulong *)(*(long *)this + 0xb));
  lVar3 = *(long *)this;
  if ((*(uint *)(lVar3 + 0x1b) & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - external",0xc);
    lVar3 = *(long *)this;
  }
  puVar4 = (uint *)(lVar3 + 0x1b);
  if ((*(uint *)(lVar3 + 0x1b) >> 1 & 1) == 0) {
    uVar1 = *puVar4;
  }
  else {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - detachable",0xe);
    lVar3 = *(long *)this;
    puVar4 = (uint *)(lVar3 + 0x1b);
    uVar1 = *puVar4;
  }
  if ((uVar1 >> 2 & 1) == 0) {
    uVar1 = *puVar4;
  }
  else {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - detached",0xc);
    lVar3 = *(long *)this;
    puVar4 = (uint *)(lVar3 + 0x1b);
    uVar1 = *puVar4;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - shared",10);
    lVar3 = *(long *)this;
    puVar4 = (uint *)(lVar3 + 0x1b);
  }
  FUN_00f3d880(param_1,lVar3,(*puVar4 & 4) == 0);
  return;
}

