
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
                    /* try { // try from 009c47d0 to 00ac4823 has its CatchHandler @ 009c47d0
                       catch() { ... } // from try @ 009c47d0 with catch @ 009c47d0
                       catch() { ... } // from try @ 009c49d4 with catch @ 009c47d0 */
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
                    /* try { // try from 009c4b1c to 00ac4b27 has its CatchHandler @ 009c4cc8 */
        **(undefined2 **)(param_4 + 0x10) = 0;
      }
      goto LAB_009c4afc;
    }
    bVar3 = 0;
    break;
  default:
    if (((char)bVar3 == 0x5f) ||
       ((-1 < (char)bVar3 &&
        ((*(ulong *)(*(long *)(*(long *)(this + 8) + 0x10) + (long)(char)bVar3 * 8) & 0x60) != 0))))
    goto LAB_009c4bd0;
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
      goto LAB_009c4afc;
    }
    break;
  case 99:
                    /* try { // try from 009c4850 to 00ac485b has its CatchHandler @ 009c4a20 */
                    /* try { // try from 009c485c to 00ac4887 has its CatchHandler @ 009c4a50 */
    if (((param_2 + 1 != param_3) && (bVar3 = param_2[1], '@' < (char)bVar3)) &&
       (((char)bVar3 < '[' || ((byte)(bVar3 + 0x9f) < 0x1a)))) {
      if (param_4 != (byte *)0x0) {
        if ((*param_4 & 1) == 0) {
                    /* try { // try from 009c489c to 00ac48bb has its CatchHandler @ 009c4a28 */
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
        *pbVar4 = (char)bVar3 % ' ';
        pbVar4[1] = 0;
        return param_2 + 2;
      }
      __push_char(this,(char)bVar3 % ' ');
      return param_2 + 2;
    }
    goto LAB_009c4bd0;
  case 0x66:
    if (param_4 != (byte *)0x0) {
      if ((*param_4 & 1) == 0) {
                    /* try { // try from 009c4824 to 00ac483b has its CatchHandler @ 009c4a40 */
        pbVar4 = param_4 + 1;
        *param_4 = 2;
      }
      else {
        pbVar4 = *(byte **)(param_4 + 0x10);
                    /* try { // try from 009c4b28 to 00ac4b33 has its CatchHandler @ 009c4cc4 */
        param_4[8] = 1;
        param_4[9] = 0;
        param_4[10] = 0;
        param_4[0xb] = 0;
        param_4[0xc] = 0;
        param_4[0xd] = 0;
        param_4[0xe] = 0;
        param_4[0xf] = 0;
      }
                    /* try { // try from 009c4b34 to 00ac4c4f has its CatchHandler @ 009c4cdc */
      pbVar4[0] = 0xc;
      pbVar4[1] = 0;
      goto LAB_009c4afc;
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
      goto LAB_009c4afc;
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
      goto LAB_009c4afc;
    }
    bVar3 = 0xd;
    break;
  case 0x74:
    if (param_4 != (byte *)0x0) {
      if ((*param_4 & 1) == 0) {
        pbVar4 = param_4 + 1;
        *param_4 = 2;
                    /* try { // try from 009c4844 to 00ac484f has its CatchHandler @ 009c4a24 */
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
      goto LAB_009c4afc;
    }
    bVar3 = 9;
    break;
  case 0x75:
    if (param_2 + 1 == param_3) goto LAB_009c4bd0;
    bVar3 = param_2[1];
                    /* try { // try from 009c48d8 to 00ac4957 has its CatchHandler @ 009c4a50 */
    if (((bVar3 & 0xf8) == 0x30) || ((bVar3 & 0xfe) == 0x38)) {
      if (bVar3 == 0x2f) goto LAB_009c4bd0;
    }
    else if (5 < (byte)((bVar3 | 0x20) + 0x9f)) goto LAB_009c4bd0;
    param_2 = param_2 + 2;
    if (param_2 == param_3) goto LAB_009c4bd0;
                    /* try { // try from 009c4990 to 00ac49d3 has its CatchHandler @ 009c4a28 */
    bVar3 = *param_2;
    if (((bVar3 & 0xf8) == 0x30) || ((bVar3 & 0xfe) == 0x38)) {
      if (bVar3 == 0x2f) goto LAB_009c4bd0;
    }
    else if (5 < (byte)((bVar3 | 0x20) + 0x9f)) goto LAB_009c4bd0;
  case 0x78:
                    /* try { // try from 009c49d4 to 00ac4aa7 has its CatchHandler @ 009c47d0 */
    if (param_2 + 1 != param_3) {
      bVar3 = param_2[1];
      if (((bVar3 & 0xf8) == 0x30) || ((bVar3 & 0xfe) == 0x38)) {
        iVar5 = bVar3 - 0x30;
        if (iVar5 == -1) goto LAB_009c4bd0;
      }
      else {
        uVar1 = bVar3 | 0x20;
        if (5 < (uVar1 - 0x61 & 0xff)) goto LAB_009c4bd0;
        iVar5 = uVar1 - 0x57;
      }
                    /* catch() { ... } // from try @ 009c4850 with catch @ 009c4a20 */
                    /* catch() { ... } // from try @ 009c4844 with catch @ 009c4a24 */
      if (param_2 + 2 != param_3) {
                    /* catch() { ... } // from try @ 009c489c with catch @ 009c4a28
                       catch() { ... } // from try @ 009c4990 with catch @ 009c4a28 */
        bVar3 = param_2[2];
                    /* catch() { ... } // from try @ 009c4824 with catch @ 009c4a40 */
        if (((bVar3 & 0xf8) == 0x30) || ((bVar3 & 0xfe) == 0x38)) {
          iVar2 = bVar3 - 0x30;
          if (iVar2 != -1) {
            bVar3 = (char)iVar2 + (char)iVar5 * '\x10';
            goto joined_r0x009c4a78;
          }
        }
        else {
          uVar1 = bVar3 | 0x20;
                    /* catch() { ... } // from try @ 009c485c with catch @ 009c4a50
                       catch() { ... } // from try @ 009c48d8 with catch @ 009c4a50 */
          if ((uVar1 - 0x61 & 0xff) < 6) {
            bVar3 = (char)uVar1 + -0x57 + (char)iVar5 * '\x10';
joined_r0x009c4a78:
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
                    /* try { // try from 009c4aa8 to 00ac4afb has its CatchHandler @ 009c4aa8
                       catch() { ... } // from try @ 009c4aa8 with catch @ 009c4aa8
                       catch() { ... } // from try @ 009c4c50 with catch @ 009c4aa8 */
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
LAB_009c4bd0:
                    /* WARNING: Subroutine does not return */
    FUN_008653b8();
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
      goto LAB_009c4afc;
    }
    bVar3 = 0xb;
  }
  __push_char(this,bVar3);
LAB_009c4afc:
                    /* try { // try from 009c4afc to 00ac4b13 has its CatchHandler @ 009c4ccc */
  return param_2 + 1;
}

