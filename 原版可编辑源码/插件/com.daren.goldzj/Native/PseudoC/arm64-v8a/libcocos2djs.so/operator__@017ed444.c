
/* v8::internal::wasm::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::wasm::LiftoffAssembler::VarState) */

void v8::internal::wasm::operator<<(basic_ostream *param_1,ulong param_2)

{
  uint uVar1;
  size_t sVar2;
  basic_ostream *pbVar3;
  ulong uVar4;
  char *pcVar5;
  
  if (((uint)(param_2 >> 8) & 0xff) < 0xb) {
    pcVar5 = *(char **)((long)&PTR_s_<stmt>_01cdb230 +
                       (-(param_2 >> 0xf & 1) & 0xfffffffffffff800 | (param_2 >> 8 & 0xff) << 3));
  }
  else {
    pcVar5 = "<unknown>";
  }
  sVar2 = strlen(pcVar5);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar5,sVar2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,":",1);
  uVar1 = (uint)param_2 & 0xff;
  if (uVar1 != 2) {
    if (uVar1 == 1) {
      uVar4 = param_2 >> 0x20 & 0xff;
      if ((uint)uVar4 < 0x1d) {
        pcVar5 = (char *)(&RegisterName(v8::internal::Register)::Names)[uVar4];
      }
      else {
        uVar4 = uVar4 + 0xffffffe3;
        if ((int)uVar4 == -1) {
          pcVar5 = "invalid";
        }
        else {
          pcVar5 = *(char **)((long)&RegisterName(v8::internal::VRegister)::Names +
                             (-(uVar4 >> 0x1f & 1) & 0xfffffff800000000 | (uVar4 & 0xffffffff) << 3)
                             );
        }
      }
      sVar2 = strlen(pcVar5);
    }
    else {
      if ((param_2 & 0xff) != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      pcVar5 = "s";
      sVar2 = 1;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar5,sVar2)
    ;
    return;
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"c",1)
  ;
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,(int)(param_2 >> 0x20));
  return;
}

