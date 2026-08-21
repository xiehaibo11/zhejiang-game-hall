
/* v8::internal::SharedFunctionInfo::PrintSourceCode(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::SharedFunctionInfo::PrintSourceCode(SharedFunctionInfo *this,basic_ostream *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  ulong uVar6;
  char *local_38;
  ulong local_18;
  
  uVar4 = HasSourceCode(this);
  if ((uVar4 & 1) != 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - source code: ",0x11);
    uVar6 = *(ulong *)this & 0xffffffff00000000;
    uVar4 = uVar6 | *(uint *)(*(ulong *)this + 0xf);
    if (*(short *)((uVar6 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x5b) {
      uVar4 = uVar6 | *(uint *)(uVar4 + 0xb);
    }
    local_18 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 3);
    iVar2 = StartPosition(this);
    iVar3 = EndPosition(this);
    String::ToCString(&local_38,&local_18,1,1,iVar2,iVar3 - iVar2,0);
    pcVar1 = local_38;
    sVar5 = strlen(local_38);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar1,sVar5)
    ;
    pcVar1 = local_38;
    local_38 = (char *)0x0;
    if (pcVar1 != (char *)0x0) {
      operator_delete__(pcVar1);
    }
  }
  return;
}

