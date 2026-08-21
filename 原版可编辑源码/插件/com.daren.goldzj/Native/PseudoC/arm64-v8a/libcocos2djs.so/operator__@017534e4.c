
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::CreateCollectionIteratorParameters
   const&) */

void v8::internal::compiler::operator<<
               (basic_ostream *param_1,CreateCollectionIteratorParameters *param_2)

{
  int iVar1;
  basic_ostream *pbVar2;
  char *pcVar3;
  ulong uVar4;
  
  if (*(int *)param_2 == 0) {
    pcVar3 = "CollectionKind::kMap";
  }
  else {
    if (*(int *)param_2 != 1) goto LAB_01753580;
    pcVar3 = "CollectionKind::kSet";
  }
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar3,0x14);
  pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,", ",2)
  ;
  iVar1 = *(int *)(param_2 + 4);
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
LAB_01753580:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pcVar3 = "IterationKind::kKeys";
    uVar4 = 0x14;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,pcVar3,uVar4);
  return;
}

