
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::MachineType) */

basic_ostream * v8::internal::operator<<(basic_ostream *param_1,uint param_2)

{
  uint uVar1;
  size_t sVar2;
  basic_ostream *pbVar3;
  char *__s;
  
  __s = "kRepBit";
  switch(param_2 & 0xff) {
  case 0:
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 0) {
      return param_1;
    }
    goto LAB_014e3658;
  case 1:
    break;
  case 2:
    __s = "kRepWord8";
    break;
  case 3:
    __s = "kRepWord16";
    break;
  case 4:
    __s = "kRepWord32";
    break;
  case 5:
    __s = "kRepWord64";
    break;
  case 6:
    __s = "kRepTaggedSigned";
    break;
  case 7:
    __s = "kRepTaggedPointer";
    break;
  case 8:
    __s = "kRepTagged";
    break;
  case 9:
    __s = "kRepCompressedPointer";
    break;
  case 10:
    __s = "kRepCompressed";
    break;
  case 0xb:
    __s = "kRepFloat32";
    break;
  case 0xc:
    __s = "kRepFloat64";
    break;
  case 0xd:
    __s = "kRepSimd128";
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  uVar1 = param_2 >> 8 & 0xff;
  sVar2 = strlen(__s);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,__s,sVar2);
  if (uVar1 == 0) {
    return pbVar3;
  }
  param_1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"|",1)
  ;
LAB_014e3658:
  pbVar3 = (basic_ostream *)operator<<(param_1,uVar1);
  return pbVar3;
}

