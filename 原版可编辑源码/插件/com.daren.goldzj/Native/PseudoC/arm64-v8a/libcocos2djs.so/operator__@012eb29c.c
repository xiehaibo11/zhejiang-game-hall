
/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&
   v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::ZoneHandleSet<v8::internal::Map>) */

basic_ostream * v8::internal::operator<<(basic_ostream *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 local_38;
  
  lVar2 = 0;
  uVar3 = 0;
  uVar4 = (ulong)param_2 & 3;
  do {
    if (uVar4 == 1) {
      return param_1;
    }
    if (uVar4 == 0) {
      if (uVar3 != 0) {
        return param_1;
      }
    }
    else if ((ulong)(*(long *)((long)param_2 + 6) - *(long *)((long)param_2 - 2) >> 3) <= uVar3) {
      return param_1;
    }
    if (uVar3 != 0) {
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,", ",2);
    }
    puVar1 = param_2;
    if (uVar4 != 0) {
      if ((ulong)(*(long *)((long)param_2 + 6) - *(long *)((long)param_2 - 2) >> 3) <=
          (ulong)(lVar2 >> 0x20)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar1 = *(undefined8 **)(*(long *)((long)param_2 - 2) + (lVar2 >> 0x20) * 8);
    }
    local_38 = *puVar1;
    operator<<(param_1,(Brief *)&local_38);
    uVar3 = uVar3 + 1;
    lVar2 = lVar2 + 0x100000000;
  } while( true );
}

