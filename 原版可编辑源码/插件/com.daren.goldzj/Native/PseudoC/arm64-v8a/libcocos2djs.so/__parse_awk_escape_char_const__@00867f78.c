
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_awk_escape<char const*>(char const*, char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*) */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::__parse_awk_escape<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2,
          basic_string *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  basic_string bVar4;
  basic_string *pbVar5;
  undefined2 uVar6;
  
  if (param_1 != param_2) {
    bVar4 = (basic_string)*param_1;
    switch(bVar4) {
    case (basic_string)0x22:
    case (basic_string)0x2f:
    case (basic_string)0x5c:
      if (param_3 != (basic_string *)0x0) {
        if (((byte)*param_3 & 1) == 0) {
          pbVar5 = param_3 + 1;
          *param_3 = (basic_string)0x2;
        }
        else {
          pbVar5 = *(basic_string **)(param_3 + 0x10);
          *(undefined8 *)(param_3 + 8) = 1;
        }
        *pbVar5 = bVar4;
        pbVar5[1] = (basic_string)0x0;
        return param_1 + 1;
      }
      break;
    default:
      if (((byte)bVar4 & 0xf8) == 0x30) {
        pbVar1 = (byte *)(param_1 + 1);
        bVar4 = (basic_string)((char)bVar4 - 0x30);
        pbVar3 = (byte *)param_2;
        if ((pbVar1 != (byte *)param_2) && (pbVar3 = pbVar1, (*pbVar1 & 0xf8) == 0x30)) {
          pbVar2 = (byte *)(param_1 + 2);
          bVar4 = (basic_string)(*pbVar1 + (char)bVar4 * '\b' + -0x30);
          pbVar3 = (byte *)param_2;
          if ((pbVar2 != (byte *)param_2) && (pbVar3 = pbVar2, (*pbVar2 & 0xf8) == 0x30)) {
            bVar4 = (basic_string)(*pbVar2 + (char)bVar4 * '\b' + -0x30);
            pbVar3 = (byte *)(param_1 + 3);
          }
        }
        if (param_3 == (basic_string *)0x0) {
          __push_char(this,(char)bVar4);
          return (char *)pbVar3;
        }
        if (((byte)*param_3 & 1) == 0) {
          pbVar5 = param_3 + 1;
          *param_3 = (basic_string)0x2;
        }
        else {
          pbVar5 = *(basic_string **)(param_3 + 0x10);
          *(undefined8 *)(param_3 + 8) = 1;
        }
        *pbVar5 = bVar4;
        pbVar5[1] = (basic_string)0x0;
        return (char *)pbVar3;
      }
      goto LAB_00868244;
    case (basic_string)0x61:
      if (param_3 != (basic_string *)0x0) {
        if (((byte)*param_3 & 1) == 0) {
          pbVar5 = param_3 + 1;
          *param_3 = (basic_string)0x2;
        }
        else {
          pbVar5 = *(basic_string **)(param_3 + 0x10);
          *(undefined8 *)(param_3 + 8) = 1;
        }
        uVar6 = 7;
LAB_0086821c:
        *(undefined2 *)pbVar5 = uVar6;
        return param_1 + 1;
      }
      bVar4 = (basic_string)0x7;
      break;
    case (basic_string)0x62:
      if (param_3 != (basic_string *)0x0) {
        if (((byte)*param_3 & 1) == 0) {
          pbVar5 = param_3 + 1;
          *param_3 = (basic_string)0x2;
        }
        else {
          pbVar5 = *(basic_string **)(param_3 + 0x10);
          *(undefined8 *)(param_3 + 8) = 1;
        }
        uVar6 = 8;
        goto LAB_0086821c;
      }
      bVar4 = (basic_string)0x8;
      break;
    case (basic_string)0x66:
      if (param_3 != (basic_string *)0x0) {
        if (((byte)*param_3 & 1) == 0) {
          pbVar5 = param_3 + 1;
          *param_3 = (basic_string)0x2;
        }
        else {
          pbVar5 = *(basic_string **)(param_3 + 0x10);
          *(undefined8 *)(param_3 + 8) = 1;
        }
        uVar6 = 0xc;
        goto LAB_0086821c;
      }
      bVar4 = (basic_string)0xc;
      break;
    case (basic_string)0x6e:
      if (param_3 != (basic_string *)0x0) {
        if (((byte)*param_3 & 1) == 0) {
          pbVar5 = param_3 + 1;
          *param_3 = (basic_string)0x2;
        }
        else {
          pbVar5 = *(basic_string **)(param_3 + 0x10);
          *(undefined8 *)(param_3 + 8) = 1;
        }
        uVar6 = 10;
        goto LAB_0086821c;
      }
      bVar4 = (basic_string)0xa;
      break;
    case (basic_string)0x72:
      if (param_3 != (basic_string *)0x0) {
        if (((byte)*param_3 & 1) == 0) {
          pbVar5 = param_3 + 1;
          *param_3 = (basic_string)0x2;
        }
        else {
          pbVar5 = *(basic_string **)(param_3 + 0x10);
          *(undefined8 *)(param_3 + 8) = 1;
        }
        uVar6 = 0xd;
        goto LAB_0086821c;
      }
      bVar4 = (basic_string)0xd;
      break;
    case (basic_string)0x74:
      if (param_3 != (basic_string *)0x0) {
        if (((byte)*param_3 & 1) == 0) {
          pbVar5 = param_3 + 1;
          *param_3 = (basic_string)0x2;
        }
        else {
          pbVar5 = *(basic_string **)(param_3 + 0x10);
          *(undefined8 *)(param_3 + 8) = 1;
        }
        uVar6 = 9;
        goto LAB_0086821c;
      }
      bVar4 = (basic_string)0x9;
      break;
    case (basic_string)0x76:
      if (param_3 != (basic_string *)0x0) {
        if (((byte)*param_3 & 1) == 0) {
          pbVar5 = param_3 + 1;
          *param_3 = (basic_string)0x2;
        }
        else {
          pbVar5 = *(basic_string **)(param_3 + 0x10);
          *(undefined8 *)(param_3 + 8) = 1;
        }
        uVar6 = 0xb;
        goto LAB_0086821c;
      }
      bVar4 = (basic_string)0xb;
    }
    __push_char(this,(char)bVar4);
    return param_1 + 1;
  }
LAB_00868244:
                    /* WARNING: Subroutine does not return */
  FUN_008653b8();
}

