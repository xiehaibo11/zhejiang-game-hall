
/* std::__ndk1::__wrap_iter<char const*> std::__ndk1::basic_regex<char,
   std::__ndk1::regex_traits<char> >::__parse_awk_escape<std::__ndk1::__wrap_iter<char const*>
   >(std::__ndk1::__wrap_iter<char const*>, std::__ndk1::__wrap_iter<char const*>,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*)
    */

byte * __thiscall
std::__ndk1::basic_regex<char,std::__ndk1::regex_traits<char>>::
__parse_awk_escape<std::__ndk1::__wrap_iter<char_const*>>
          (basic_regex<char,std::__ndk1::regex_traits<char>> *this,byte *param_2,byte *param_3,
          byte *param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined2 uVar5;
  
  if (param_2 == param_3) {
LAB_009c599c:
                    /* WARNING: Subroutine does not return */
    FUN_008653b8();
  }
  bVar2 = *param_2;
  switch(bVar2) {
  case 0x22:
  case 0x2f:
  case 0x5c:
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
      *pbVar4 = bVar2;
                    /* try { // try from 009c5898 to 00ac58af has its CatchHandler @ 009c5ab4 */
      pbVar4[1] = 0;
      goto LAB_009c5988;
    }
    break;
  default:
    if ((bVar2 & 0xf8) == 0x30) {
      pbVar4 = param_2 + 1;
                    /* try { // try from 009c575c to 00ac5843 has its CatchHandler @ 009c5594 */
      bVar2 = bVar2 - 0x30;
      if ((pbVar4 != param_3) && (bVar1 = *pbVar4, (bVar1 & 0xf8) == 0x30)) {
        pbVar4 = param_2 + 2;
        bVar2 = (bVar1 + bVar2 * '\b') - 0x30;
        if ((pbVar4 != param_3) && (bVar1 = *pbVar4, (bVar1 & 0xf8) == 0x30)) {
          pbVar4 = param_2 + 3;
          bVar2 = (bVar1 + bVar2 * '\b') - 0x30;
        }
      }
      if (param_4 != (byte *)0x0) {
        if ((*param_4 & 1) == 0) {
          pbVar3 = param_4 + 1;
          *param_4 = 2;
        }
        else {
          pbVar3 = *(byte **)(param_4 + 0x10);
          param_4[8] = 1;
          param_4[9] = 0;
          param_4[10] = 0;
          param_4[0xb] = 0;
          param_4[0xc] = 0;
          param_4[0xd] = 0;
          param_4[0xe] = 0;
          param_4[0xf] = 0;
        }
        *pbVar3 = bVar2;
        pbVar3[1] = 0;
        return pbVar4;
      }
      __push_char(this,bVar2);
      return pbVar4;
    }
    goto LAB_009c599c;
  case 0x61:
    if (param_4 != (byte *)0x0) {
      if ((*param_4 & 1) == 0) {
                    /* catch() { ... } // from try @ 009c5618 with catch @ 009c57d4 */
        pbVar4 = param_4 + 1;
        *param_4 = 2;
                    /* catch() { ... } // from try @ 009c560c with catch @ 009c57d8 */
                    /* catch() { ... } // from try @ 009c55ec with catch @ 009c57dc */
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
      uVar5 = 7;
LAB_009c5984:
      *(undefined2 *)pbVar4 = uVar5;
      goto LAB_009c5988;
    }
    bVar2 = 7;
    break;
  case 0x62:
    if (param_4 != (byte *)0x0) {
      if ((*param_4 & 1) == 0) {
                    /* catch() { ... } // from try @ 009c5624 with catch @ 009c57ec */
        pbVar4 = param_4 + 1;
        *param_4 = 2;
      }
      else {
                    /* try { // try from 009c5910 to 00ac592f has its CatchHandler @ 009c5a9c */
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
      uVar5 = 8;
      goto LAB_009c5984;
    }
    bVar2 = 8;
    break;
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
      uVar5 = 0xc;
      goto LAB_009c5984;
    }
    bVar2 = 0xc;
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
      uVar5 = 10;
      goto LAB_009c5984;
    }
                    /* try { // try from 009c58b8 to 00ac58c3 has its CatchHandler @ 009c5a98 */
    bVar2 = 10;
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
      uVar5 = 0xd;
      goto LAB_009c5984;
    }
    bVar2 = 0xd;
                    /* try { // try from 009c58c4 to 00ac58cf has its CatchHandler @ 009c5a94 */
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
      uVar5 = 9;
      goto LAB_009c5984;
    }
                    /* try { // try from 009c58d0 to 00ac58fb has its CatchHandler @ 009c5ac4 */
    bVar2 = 9;
    break;
  case 0x76:
    if (param_4 != (byte *)0x0) {
      if ((*param_4 & 1) == 0) {
                    /* try { // try from 009c5844 to 00ac5897 has its CatchHandler @ 009c5844
                       catch() { ... } // from try @ 009c5844 with catch @ 009c5844
                       catch() { ... } // from try @ 009c5a48 with catch @ 009c5844 */
        pbVar4 = param_4 + 1;
        *param_4 = 2;
      }
      else {
                    /* try { // try from 009c594c to 00ac59cb has its CatchHandler @ 009c5ac4 */
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
      uVar5 = 0xb;
      goto LAB_009c5984;
    }
    bVar2 = 0xb;
  }
  __push_char(this,bVar2);
LAB_009c5988:
  return param_2 + 1;
}

