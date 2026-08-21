
/* char const* std::__ndk1::basic_regex<char, std::__ndk1::regex_traits<char>
   >::__parse_character_escape<char const*>(char const*, char const*,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*)
    */

char * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_character_escape<char_const*>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,char *param_1,char *param_2,
          basic_string *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  basic_string bVar4;
  basic_string *pbVar5;
  int iVar6;
  
  if (param_1 == param_2) {
    return param_1;
  }
  bVar4 = (basic_string)*param_1;
  switch((int)(char)bVar4) {
  case 0x30:
    if (param_3 != (basic_string *)0x0) {
      if (((byte)*param_3 & 1) == 0) {
        *param_3 = (basic_string)0x2;
        *(undefined2 *)(param_3 + 1) = 0;
      }
      else {
        *(undefined8 *)(param_3 + 8) = 1;
        **(undefined2 **)(param_3 + 0x10) = 0;
      }
      goto LAB_00eab8e0;
    }
    bVar4 = (basic_string)0x0;
    break;
  default:
    if (((char)bVar4 == 0x5f) ||
       ((-1 < (char)bVar4 &&
        ((*(ulong *)(*(long *)(*(long *)(this + 8) + 0x10) + (long)(char)bVar4 * 8) & 0x60) != 0))))
    goto LAB_00eab9b4;
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
      goto LAB_00eab8e0;
    }
    break;
  case 99:
    if ((param_1 + 1 != param_2) && (bVar1 = param_1[1], (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a)) {
      bVar4 = (basic_string)((char)bVar1 % ' ');
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
        return param_1 + 2;
      }
      __push_char(this,(char)bVar4);
      return param_1 + 2;
    }
    goto LAB_00eab9b4;
  case 0x66:
    if (param_3 != (basic_string *)0x0) {
      if (((byte)*param_3 & 1) == 0) {
        pbVar5 = param_3 + 1;
        *param_3 = (basic_string)0x2;
      }
      else {
        pbVar5 = *(basic_string **)(param_3 + 0x10);
        *(undefined8 *)(param_3 + 8) = 1;
      }
      *(undefined2 *)pbVar5 = 0xc;
      goto LAB_00eab8e0;
    }
    bVar4 = (basic_string)0xc;
    break;
  case 0x6e:
    if (param_3 != (basic_string *)0x0) {
      if (((byte)*param_3 & 1) == 0) {
        pbVar5 = param_3 + 1;
        *param_3 = (basic_string)0x2;
      }
      else {
        pbVar5 = *(basic_string **)(param_3 + 0x10);
        *(undefined8 *)(param_3 + 8) = 1;
      }
      *(undefined2 *)pbVar5 = 10;
      goto LAB_00eab8e0;
    }
    bVar4 = (basic_string)0xa;
    break;
  case 0x72:
    if (param_3 != (basic_string *)0x0) {
      if (((byte)*param_3 & 1) == 0) {
        pbVar5 = param_3 + 1;
        *param_3 = (basic_string)0x2;
      }
      else {
        pbVar5 = *(basic_string **)(param_3 + 0x10);
        *(undefined8 *)(param_3 + 8) = 1;
      }
      *(undefined2 *)pbVar5 = 0xd;
      goto LAB_00eab8e0;
    }
    bVar4 = (basic_string)0xd;
    break;
  case 0x74:
    if (param_3 != (basic_string *)0x0) {
      if (((byte)*param_3 & 1) == 0) {
        pbVar5 = param_3 + 1;
        *param_3 = (basic_string)0x2;
      }
      else {
        pbVar5 = *(basic_string **)(param_3 + 0x10);
        *(undefined8 *)(param_3 + 8) = 1;
      }
      *(undefined2 *)pbVar5 = 9;
      goto LAB_00eab8e0;
    }
    bVar4 = (basic_string)0x9;
    break;
  case 0x75:
    if (param_1 + 1 == param_2) goto LAB_00eab9b4;
    bVar1 = param_1[1];
    if (((bVar1 & 0xf8) == 0x30) || ((bVar1 & 0xfe) == 0x38)) {
      if (bVar1 == 0x2f) goto LAB_00eab9b4;
    }
    else if (5 < (byte)((bVar1 | 0x20) + 0x9f)) goto LAB_00eab9b4;
    param_1 = param_1 + 2;
    if (param_1 == param_2) goto LAB_00eab9b4;
    bVar1 = *param_1;
    if (((bVar1 & 0xf8) == 0x30) || ((bVar1 & 0xfe) == 0x38)) {
      if (bVar1 == 0x2f) goto LAB_00eab9b4;
    }
    else if (5 < (byte)((bVar1 | 0x20) + 0x9f)) goto LAB_00eab9b4;
  case 0x78:
    if (param_1 + 1 != param_2) {
      bVar1 = param_1[1];
      if (((bVar1 & 0xf8) == 0x30) || ((bVar1 & 0xfe) == 0x38)) {
        iVar6 = bVar1 - 0x30;
        if (iVar6 == -1) goto LAB_00eab9b4;
      }
      else {
        uVar2 = bVar1 | 0x20;
        if (5 < (uVar2 - 0x61 & 0xff)) goto LAB_00eab9b4;
        iVar6 = uVar2 - 0x57;
      }
      if (param_1 + 2 != param_2) {
        bVar1 = param_1[2];
        if (((bVar1 & 0xf8) == 0x30) || ((bVar1 & 0xfe) == 0x38)) {
          iVar3 = bVar1 - 0x30;
          if (iVar3 != -1) {
            bVar4 = (basic_string)((char)iVar3 + (char)iVar6 * '\x10');
            goto joined_r0x00eab85c;
          }
        }
        else {
          uVar2 = bVar1 | 0x20;
          if ((uVar2 - 0x61 & 0xff) < 6) {
            bVar4 = (basic_string)((char)uVar2 + -0x57 + (char)iVar6 * '\x10');
joined_r0x00eab85c:
            if (param_3 == (basic_string *)0x0) {
              __push_char(this,(char)bVar4);
              return (char *)(byte *)(param_1 + 3);
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
            return (char *)(byte *)(param_1 + 3);
          }
        }
      }
    }
LAB_00eab9b4:
                    /* WARNING: Subroutine does not return */
    FUN_00eab2a8();
  case 0x76:
    if (param_3 != (basic_string *)0x0) {
      if (((byte)*param_3 & 1) == 0) {
        pbVar5 = param_3 + 1;
        *param_3 = (basic_string)0x2;
      }
      else {
                    /* try { // try from 00eab984 to 00fab9f3 has its CatchHandler @ 00eab984
                       catch() { ... } // from try @ 00eab984 with catch @ 00eab984
                       catch() { ... } // from try @ 00eaba0c with catch @ 00eab984 */
        pbVar5 = *(basic_string **)(param_3 + 0x10);
        *(undefined8 *)(param_3 + 8) = 1;
      }
      *(undefined2 *)pbVar5 = 0xb;
      goto LAB_00eab8e0;
    }
    bVar4 = (basic_string)0xb;
  }
  __push_char(this,(char)bVar4);
LAB_00eab8e0:
  return param_1 + 1;
}

