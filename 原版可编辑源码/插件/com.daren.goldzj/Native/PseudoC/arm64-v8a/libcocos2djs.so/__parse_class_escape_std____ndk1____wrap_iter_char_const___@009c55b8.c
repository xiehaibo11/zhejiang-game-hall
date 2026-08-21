
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_class_escape<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   std::__ndk1::__bracket_expression<char, std::__ndk1::regex_traits<char> >*) */

byte * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_class_escape<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,byte *param_2,byte *param_3,
          byte *param_4,long param_5)

{
  byte bVar1;
  byte *pbVar2;
  ushort uVar3;
  
  if (param_2 == param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_008653b8();
  }
  bVar1 = *param_2;
                    /* try { // try from 009c55ec to 00ac5603 has its CatchHandler @ 009c57dc */
  switch((int)(char)bVar1) {
  case 0x44:
    uVar3 = *(ushort *)(param_5 + 0xa2) | 0x40;
    goto LAB_009c5688;
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
switchD_009c55f4_caseD_45:
                    /* try { // try from 009c5624 to 00ac575b has its CatchHandler @ 009c57ec */
    pbVar2 = (byte *)__parse_character_escape<std::__ndk1::__wrap_iter<char_const*>>(this,param_2);
    return pbVar2;
  case 0x53:
    uVar3 = *(ushort *)(param_5 + 0xa2) | 1;
LAB_009c5688:
    *(ushort *)(param_5 + 0xa2) = uVar3;
    break;
  case 0x57:
    *(ushort *)(param_5 + 0xa2) = *(ushort *)(param_5 + 0xa2) | 0x60;
    FUN_00868e64(param_5,0x5f);
    break;
  case 0x62:
    if ((*param_4 & 1) == 0) {
      pbVar2 = param_4 + 1;
      *param_4 = 2;
    }
    else {
      pbVar2 = *(byte **)(param_4 + 0x10);
      param_4[8] = 1;
      param_4[9] = 0;
      param_4[10] = 0;
      param_4[0xb] = 0;
      param_4[0xc] = 0;
      param_4[0xd] = 0;
      param_4[0xe] = 0;
      param_4[0xf] = 0;
    }
    pbVar2[0] = 8;
    pbVar2[1] = 0;
    break;
  case 100:
    uVar3 = *(ushort *)(param_5 + 0xa0) | 0x40;
    goto LAB_009c56a4;
  case 0x73:
    uVar3 = *(ushort *)(param_5 + 0xa0) | 1;
LAB_009c56a4:
    *(ushort *)(param_5 + 0xa0) = uVar3;
    break;
  case 0x77:
    *(ushort *)(param_5 + 0xa0) = *(ushort *)(param_5 + 0xa0) | 0x60;
    FUN_008662f0(param_5,0x5f);
    break;
  default:
    if ((char)bVar1 != 0) goto switchD_009c55f4_caseD_45;
                    /* try { // try from 009c560c to 00ac5617 has its CatchHandler @ 009c57d8 */
    if ((*param_4 & 1) == 0) {
                    /* try { // try from 009c5618 to 00ac5623 has its CatchHandler @ 009c57d4 */
      pbVar2 = param_4 + 1;
      *param_4 = 2;
    }
    else {
      pbVar2 = *(byte **)(param_4 + 0x10);
      param_4[8] = 1;
      param_4[9] = 0;
      param_4[10] = 0;
      param_4[0xb] = 0;
      param_4[0xc] = 0;
      param_4[0xd] = 0;
      param_4[0xe] = 0;
      param_4[0xf] = 0;
    }
    *pbVar2 = bVar1;
    pbVar2[1] = 0;
  }
  return param_2 + 1;
}

