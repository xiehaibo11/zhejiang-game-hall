
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
LAB_00f2aef8:
                    /* WARNING: Subroutine does not return */
    FUN_00eab2a8();
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
      pbVar4[1] = 0;
      goto LAB_00f2aee4;
    }
    break;
  default:
    if ((bVar2 & 0xf8) == 0x30) {
      pbVar4 = param_2 + 1;
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
                    /* try { // try from 00f2ae48 to 0102ae4f has its CatchHandler @ 00f2aea0 */
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
    goto LAB_00f2aef8;
  case 0x61:
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
      uVar5 = 7;
LAB_00f2aee0:
      *(undefined2 *)pbVar4 = uVar5;
      goto LAB_00f2aee4;
    }
    bVar2 = 7;
    break;
  case 0x62:
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
      uVar5 = 8;
                    /* try { // try from 00f2ae7c to 0102ae87 has its CatchHandler @ 00f2aea8 */
      goto LAB_00f2aee0;
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
      goto LAB_00f2aee0;
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
                    /* try { // try from 00f2ae88 to 0102aecb has its CatchHandler @ 00f2ae24 */
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
      goto LAB_00f2aee0;
    }
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
                    /* catch() { ... } // from try @ 00f2ae48 with catch @ 00f2aea0 */
      uVar5 = 0xd;
      goto LAB_00f2aee0;
    }
    bVar2 = 0xd;
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
      goto LAB_00f2aee0;
    }
    bVar2 = 9;
    break;
  case 0x76:
    if (param_4 != (byte *)0x0) {
      if ((*param_4 & 1) == 0) {
        pbVar4 = param_4 + 1;
        *param_4 = 2;
      }
      else {
                    /* catch() { ... } // from try @ 00f2ae7c with catch @ 00f2aea8 */
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
      goto LAB_00f2aee0;
    }
                    /* catch() { ... } // from try @ 00f2ae88 with catch @ 00f2ae24 */
    bVar2 = 0xb;
  }
  __push_char(this,bVar2);
LAB_00f2aee4:
  return param_2 + 1;
}

