
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_character_escape<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*)
    */

byte * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_character_escape<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,byte *param_2,byte *param_3,
          byte *param_4)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  
  if (param_2 == param_3) {
    return param_2;
  }
  bVar3 = *param_2;
  switch((int)(char)bVar3) {
  case 0x30:
    if (param_4 != (byte *)0x0) {
      if ((*param_4 & 1) == 0) {
        *param_4 = 2;
        param_4[1] = 0;
        param_4[2] = 0;
      }
      else {
        param_4[8] = 1;
        param_4[9] = 0;
        param_4[10] = 0;
        param_4[0xb] = 0;
        param_4[0xc] = 0;
        param_4[0xd] = 0;
        param_4[0xe] = 0;
        param_4[0xf] = 0;
        **(undefined2 **)(param_4 + 0x10) = 0;
      }
      goto LAB_00f29eb8;
    }
    bVar3 = 0;
    break;
  default:
    if (((char)bVar3 == 0x5f) ||
       ((-1 < (char)bVar3 &&
        ((*(ulong *)(*(long *)(*(long *)(this + 8) + 0x10) + (long)(char)bVar3 * 8) & 0x60) != 0))))
    goto LAB_00f29f8c;
    if (param_4 != (byte *)0x0) {
      if ((*param_4 & 1) == 0) {
        pbVar4 = param_4 + 1;
        *param_4 = 2;
      }
      else {
        pbVar4 = *(byte **)(param_4 + 0x10);
        param_4[8] = 1;
        param_4[9] = 0;
        param_4[10] = 0;
        param_4[0xb] = 0;
        param_4[0xc] = 0;
        param_4[0xd] = 0;
        param_4[0xe] = 0;
        param_4[0xf] = 0;
      }
      *pbVar4 = bVar3;
      pbVar4[1] = 0;
      goto LAB_00f29eb8;
    }
    break;
  case 99:
    if (((param_2 + 1 != param_3) && (bVar3 = param_2[1], '@' < (char)bVar3)) &&
       (((char)bVar3 < '[' || ((byte)(bVar3 + 0x9f) < 0x1a)))) {
      if (param_4 != (byte *)0x0) {
        if ((*param_4 & 1) == 0) {
          pbVar4 = param_4 + 1;
          *param_4 = 2;
        }
        else {
          pbVar4 = *(byte **)(param_4 + 0x10);
          param_4[8] = 1;
          param_4[9] = 0;
          param_4[10] = 0;
          param_4[0xb] = 0;
          param_4[0xc] = 0;
          param_4[0xd] = 0;
          param_4[0xe] = 0;
          param_4[0xf] = 0;
        }
                    /* catch() { ... } // from try @ 00f29eec with catch @ 00f29f1c */
        *pbVar4 = (char)bVar3 % ' ';
        pbVar4[1] = 0;
        return param_2 + 2;
      }
      __push_char(this,(char)bVar3 % ' ');
      return param_2 + 2;
    }
    goto LAB_00f29f8c;
  case 0x66:
    if (param_4 != (byte *)0x0) {
      if ((*param_4 & 1) == 0) {
        pbVar4 = param_4 + 1;
        *param_4 = 2;
      }
      else {
        pbVar4 = *(byte **)(param_4 + 0x10);
        param_4[8] = 1;
        param_4[9] = 0;
        param_4[10] = 0;
        param_4[0xb] = 0;
        param_4[0xc] = 0;
        param_4[0xd] = 0;
        param_4[0xe] = 0;
        param_4[0xf] = 0;
      }
                    /* try { // try from 00f29eec to 01029ef3 has its CatchHandler @ 00f29f1c */
      pbVar4[0] = 0xc;
      pbVar4[1] = 0;
                    /* try { // try from 00f29ef4 to 01029f37 has its CatchHandler @ 00f29ec8 */
      goto LAB_00f29eb8;
    }
    bVar3 = 0xc;
    break;
  case 0x6e:
    if (param_4 != (byte *)0x0) {
      if ((*param_4 & 1) == 0) {
        pbVar4 = param_4 + 1;
        *param_4 = 2;
      }
      else {
        pbVar4 = *(byte **)(param_4 + 0x10);
        param_4[8] = 1;
        param_4[9] = 0;
        param_4[10] = 0;
        param_4[0xb] = 0;
        param_4[0xc] = 0;
        param_4[0xd] = 0;
        param_4[0xe] = 0;
        param_4[0xf] = 0;
      }
      pbVar4[0] = 10;
      pbVar4[1] = 0;
      goto LAB_00f29eb8;
    }
    bVar3 = 10;
    break;
  case 0x72:
    if (param_4 != (byte *)0x0) {
      if ((*param_4 & 1) == 0) {
        pbVar4 = param_4 + 1;
        *param_4 = 2;
      }
      else {
        pbVar4 = *(byte **)(param_4 + 0x10);
        param_4[8] = 1;
        param_4[9] = 0;
        param_4[10] = 0;
        param_4[0xb] = 0;
        param_4[0xc] = 0;
        param_4[0xd] = 0;
        param_4[0xe] = 0;
        param_4[0xf] = 0;
      }
      pbVar4[0] = 0xd;
      pbVar4[1] = 0;
      goto LAB_00f29eb8;
    }
    bVar3 = 0xd;
    break;
  case 0x74:
    if (param_4 != (byte *)0x0) {
      if ((*param_4 & 1) == 0) {
        pbVar4 = param_4 + 1;
        *param_4 = 2;
      }
      else {
        pbVar4 = *(byte **)(param_4 + 0x10);
        param_4[8] = 1;
        param_4[9] = 0;
        param_4[10] = 0;
        param_4[0xb] = 0;
        param_4[0xc] = 0;
        param_4[0xd] = 0;
        param_4[0xe] = 0;
        param_4[0xf] = 0;
      }
      pbVar4[0] = 9;
      pbVar4[1] = 0;
      goto LAB_00f29eb8;
    }
    bVar3 = 9;
    break;
  case 0x75:
    if (param_2 + 1 == param_3) goto LAB_00f29f8c;
    bVar3 = param_2[1];
    if (((bVar3 & 0xf8) == 0x30) || ((bVar3 & 0xfe) == 0x38)) {
      if (bVar3 == 0x2f) goto LAB_00f29f8c;
    }
    else if (5 < (byte)((bVar3 | 0x20) + 0x9f)) goto LAB_00f29f8c;
    param_2 = param_2 + 2;
    if (param_2 == param_3) goto LAB_00f29f8c;
    bVar3 = *param_2;
    if (((bVar3 & 0xf8) == 0x30) || ((bVar3 & 0xfe) == 0x38)) {
      if (bVar3 == 0x2f) goto LAB_00f29f8c;
    }
    else if (5 < (byte)((bVar3 | 0x20) + 0x9f)) goto LAB_00f29f8c;
  case 0x78:
    if (param_2 + 1 != param_3) {
      bVar3 = param_2[1];
      if (((bVar3 & 0xf8) == 0x30) || ((bVar3 & 0xfe) == 0x38)) {
        iVar5 = bVar3 - 0x30;
        if (iVar5 == -1) goto LAB_00f29f8c;
      }
      else {
        uVar1 = bVar3 | 0x20;
        if (5 < (uVar1 - 0x61 & 0xff)) goto LAB_00f29f8c;
        iVar5 = uVar1 - 0x57;
      }
      if (param_2 + 2 != param_3) {
        bVar3 = param_2[2];
        if (((bVar3 & 0xf8) == 0x30) || ((bVar3 & 0xfe) == 0x38)) {
          iVar2 = bVar3 - 0x30;
          if (iVar2 != -1) {
            bVar3 = (char)iVar2 + (char)iVar5 * '\x10';
            goto joined_r0x00f29e34;
          }
        }
        else {
          uVar1 = bVar3 | 0x20;
          if ((uVar1 - 0x61 & 0xff) < 6) {
            bVar3 = (char)uVar1 + -0x57 + (char)iVar5 * '\x10';
joined_r0x00f29e34:
            if (param_4 == (byte *)0x0) {
              __push_char(this,bVar3);
              return param_2 + 3;
            }
            if ((*param_4 & 1) == 0) {
              pbVar4 = param_4 + 1;
              *param_4 = 2;
            }
            else {
              pbVar4 = *(byte **)(param_4 + 0x10);
              param_4[8] = 1;
              param_4[9] = 0;
              param_4[10] = 0;
              param_4[0xb] = 0;
              param_4[0xc] = 0;
              param_4[0xd] = 0;
              param_4[0xe] = 0;
              param_4[0xf] = 0;
            }
            *pbVar4 = bVar3;
            pbVar4[1] = 0;
            return param_2 + 3;
          }
        }
      }
    }
LAB_00f29f8c:
                    /* WARNING: Subroutine does not return */
    FUN_00eab2a8();
  case 0x76:
    if (param_4 != (byte *)0x0) {
      if ((*param_4 & 1) == 0) {
        pbVar4 = param_4 + 1;
        *param_4 = 2;
      }
      else {
        pbVar4 = *(byte **)(param_4 + 0x10);
        param_4[8] = 1;
        param_4[9] = 0;
        param_4[10] = 0;
        param_4[0xb] = 0;
        param_4[0xc] = 0;
        param_4[0xd] = 0;
        param_4[0xe] = 0;
        param_4[0xf] = 0;
      }
      pbVar4[0] = 0xb;
      pbVar4[1] = 0;
      goto LAB_00f29eb8;
    }
    bVar3 = 0xb;
  }
  __push_char(this,bVar3);
LAB_00f29eb8:
                    /* catch() { ... } // from try @ 00f29ef4 with catch @ 00f29ec8 */
  return param_2 + 1;
}

