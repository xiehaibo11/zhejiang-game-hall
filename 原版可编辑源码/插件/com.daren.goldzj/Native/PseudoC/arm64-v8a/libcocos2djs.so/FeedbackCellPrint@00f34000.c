
/* v8::internal::FeedbackCell::FeedbackCellPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::FeedbackCell::FeedbackCellPrint(FeedbackCell *this,basic_ostream *param_1)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_28;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"FeedbackCell");
  uVar3 = *(ulong *)this;
  uVar4 = uVar3 & 0xffffffff00000000;
  if (*(int *)(uVar3 - 1) == *(int *)(uVar4 + 0x210)) {
    pcVar2 = "\n - no closures";
    uVar3 = 0xf;
  }
  else if (*(int *)(uVar3 - 1) == *(int *)(uVar4 + 0x220)) {
    pcVar2 = "\n - one closure";
    uVar3 = 0xf;
  }
  else if (*(int *)(uVar3 - 1) == *(int *)(uVar4 + 0x1f8)) {
    pcVar2 = "\n - many closures";
    uVar3 = 0x11;
  }
  else {
    pcVar2 = "\n - Invalid FeedbackCell map";
    uVar3 = 0x1c;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar2,uVar3);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1," - value: ",10);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
  internal::operator<<(pbVar1,(Brief *)&local_28);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

