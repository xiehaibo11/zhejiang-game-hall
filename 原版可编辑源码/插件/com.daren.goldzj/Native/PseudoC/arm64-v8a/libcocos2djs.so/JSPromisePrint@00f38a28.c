
/* v8::internal::JSPromise::JSPromisePrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::JSPromise::JSPromisePrint(JSPromise *this,basic_ostream *param_1)

{
  int iVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  size_t sVar4;
  ulong uVar5;
  ulong local_38;
  
  FUN_00f3d5b0(param_1,*(undefined8 *)this,"JSPromise");
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - status: ",0xc);
  status(this);
  pcVar3 = (char *)Status();
  sVar4 = strlen(pcVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar3,sVar4);
  iVar1 = status(this);
  if (iVar1 == 0) {
    pcVar3 = "\n - reactions: ";
    uVar5 = 0xf;
  }
  else {
    pcVar3 = "\n - result: ";
    uVar5 = 0xc;
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar3,uVar5);
  local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar2,(Brief *)&local_38);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - has_handler: ",0x11);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             (bool)((byte)(*(uint *)(*(long *)this + 0xf) >> 3) & 1));
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - handled_hint: ",0x12);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar2,
             (bool)((byte)(*(uint *)(*(long *)this + 0xf) >> 4) & 1));
  FUN_00f3d880(param_1,*(undefined8 *)this,1);
  return;
}

