
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_class_escape<char const*>(char const*, char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> >*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_class_escape<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2,
          basic_string *param_3,__bracket_expression *param_4)

{
  basic_string bVar1;
  char *pcVar2;
  basic_string *pbVar3;
  
  if (param_1 == param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_008653b8();
  }
  bVar1 = (basic_string)*param_1;
  switch((int)(char)bVar1) {
  case 0x44:
    *(ushort *)(param_4 + 0xa2) = *(ushort *)(param_4 + 0xa2) | 0x40;
    break;
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 99:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x74:
  case 0x75:
  case 0x76:
switchD_00867e74_caseD_45:
    pcVar2 = __parse_character_escape<char_const*>(this,param_1,param_2,param_3);
    return pcVar2;
  case 0x53:
    *(ushort *)(param_4 + 0xa2) = *(ushort *)(param_4 + 0xa2) | 1;
    break;
  case 0x57:
    *(ushort *)(param_4 + 0xa2) = *(ushort *)(param_4 + 0xa2) | 0x60;
    FUN_00868e64(param_4,0x5f);
    break;
  case 0x62:
    if (((byte)*param_3 & 1) == 0) {
      pbVar3 = param_3 + 1;
      *param_3 = (basic_string)0x2;
    }
    else {
      pbVar3 = *(basic_string **)(param_3 + 0x10);
      *(undefined8 *)(param_3 + 8) = 1;
    }
    *(undefined2 *)pbVar3 = 8;
    break;
  case 100:
    *(ushort *)(param_4 + 0xa0) = *(ushort *)(param_4 + 0xa0) | 0x40;
    break;
  case 0x73:
    *(ushort *)(param_4 + 0xa0) = *(ushort *)(param_4 + 0xa0) | 1;
    break;
  case 0x77:
    *(ushort *)(param_4 + 0xa0) = *(ushort *)(param_4 + 0xa0) | 0x60;
    FUN_008662f0(param_4,0x5f);
    break;
  default:
    if ((char)bVar1 != 0) goto switchD_00867e74_caseD_45;
    if (((byte)*param_3 & 1) == 0) {
      pbVar3 = param_3 + 1;
      *param_3 = (basic_string)0x2;
    }
    else {
      pbVar3 = *(basic_string **)(param_3 + 0x10);
      *(undefined8 *)(param_3 + 8) = 1;
    }
    *pbVar3 = bVar1;
    pbVar3[1] = (basic_string)0x0;
  }
  return param_1 + 1;
}

