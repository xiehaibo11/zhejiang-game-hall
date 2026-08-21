
/* v8::internal::JSArrayIterator::JSArrayIteratorPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::JSArrayIterator::JSArrayIteratorPrint(JSArrayIterator *this,basic_ostream *param_1)

{
  int iVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  ulong uVar4;
  ulong local_28;
  
  FUN_00f3d5b0(param_1,*(undefined8 *)this,"JSArrayIterator");
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - iterated_object: ",0x15);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
  internal::operator<<(pbVar2,(Brief *)&local_28);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - next_index: ",0x10);
  local_28 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf);
  internal::operator<<(pbVar2,(Brief *)&local_28);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - kind: ",10);
  iVar1 = *(int *)(*(long *)this + 0x13) >> 1;
  if (iVar1 == 2) {
    pcVar3 = "IterationKind::kEntries";
    uVar4 = 0x17;
  }
  else if (iVar1 == 1) {
    pcVar3 = "IterationKind::kValues";
    uVar4 = 0x16;
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar3 = "IterationKind::kKeys";
    uVar4 = 0x14;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar3,uVar4);
  FUN_00f3d880(param_1,*(undefined8 *)this,1);
  return;
}

