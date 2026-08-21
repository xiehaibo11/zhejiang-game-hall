
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::ObjectAccess const&) */

basic_ostream * v8::internal::compiler::operator<<(basic_ostream *param_1,ObjectAccess *param_2)

{
  basic_ostream *pbVar1;
  char *pcVar2;
  ulong uVar3;
  
  pbVar1 = (basic_ostream *)internal::operator<<(param_1,*(undefined2 *)param_2);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,", ",2)
  ;
  switch(param_2[2]) {
  case (ObjectAccess)0x0:
    pcVar2 = "NoWriteBarrier";
    uVar3 = 0xe;
    break;
  case (ObjectAccess)0x1:
    pcVar2 = "AssertNoWriteBarrier";
    uVar3 = 0x14;
    break;
  case (ObjectAccess)0x2:
    pcVar2 = "MapWriteBarrier";
    uVar3 = 0xf;
    break;
  case (ObjectAccess)0x3:
    pcVar2 = "PointerWriteBarrier";
    uVar3 = 0x13;
    break;
  case (ObjectAccess)0x4:
    pcVar2 = "EphemeronKeyWriteBarrier";
    uVar3 = 0x18;
    break;
  case (ObjectAccess)0x5:
    pcVar2 = "FullWriteBarrier";
    uVar3 = 0x10;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,pcVar2,uVar3);
  return param_1;
}

