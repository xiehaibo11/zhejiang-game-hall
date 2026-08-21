
/* std::__ndk1::__num_get<char>::__stage2_int_loop(char, int, char*, char*&, unsigned int&, char,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned int*, unsigned int*&, char*) */

undefined8
std::__ndk1::__num_get<char>::__stage2_int_loop
          (char param_1,int param_2,char *param_3,char **param_4,uint *param_5,char param_6,
          basic_string *param_7,uint *param_8,uint **param_9,char *param_10)

{
  ulong uVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  uint *puVar5;
  char *pcVar6;
  long lVar7;
  
  pcVar3 = *param_4;
  if ((pcVar3 == param_3) && ((param_10[0x18] == param_1 || (param_10[0x19] == param_1)))) {
    cVar4 = '+';
    if (param_10[0x18] != param_1) {
      cVar4 = '-';
    }
    *param_4 = param_3 + 1;
    *param_3 = cVar4;
    *param_5 = 0;
    return 0;
  }
  uVar1 = (ulong)((byte)*param_7 >> 1);
  if (((byte)*param_7 & 1) != 0) {
    uVar1 = *(ulong *)(param_7 + 8);
  }
  if ((param_1 == param_6) && (uVar1 != 0)) {
    puVar5 = *param_9;
    if ((long)puVar5 - (long)param_8 < 0xa0) {
      uVar2 = *param_5;
      *param_9 = puVar5 + 1;
      *puVar5 = uVar2;
      *param_5 = 0;
      return 0;
    }
    return 0;
  }
  pcVar6 = param_10 + 0x1a;
  if (*param_10 == param_1) {
    lVar7 = 0;
LAB_017fd48c:
    pcVar6 = param_10 + lVar7;
  }
  else {
    if (param_10[1] == param_1) {
      lVar7 = 1;
      goto LAB_017fd48c;
    }
    if (param_10[2] == param_1) {
      lVar7 = 2;
      goto LAB_017fd48c;
    }
    if (param_10[3] == param_1) {
      lVar7 = 3;
      goto LAB_017fd48c;
    }
    if (param_10[4] == param_1) {
      lVar7 = 4;
      goto LAB_017fd48c;
    }
    if (param_10[5] == param_1) {
      lVar7 = 5;
      goto LAB_017fd48c;
    }
    if (param_10[6] == param_1) {
      lVar7 = 6;
      goto LAB_017fd48c;
    }
    if (param_10[7] == param_1) {
      lVar7 = 7;
      goto LAB_017fd48c;
    }
    if (param_10[8] == param_1) {
      lVar7 = 8;
      goto LAB_017fd48c;
    }
    if (param_10[9] == param_1) {
      lVar7 = 9;
      goto LAB_017fd48c;
    }
    if (param_10[10] == param_1) {
      lVar7 = 10;
      goto LAB_017fd48c;
    }
    if (param_10[0xb] == param_1) {
      lVar7 = 0xb;
      goto LAB_017fd48c;
    }
    if (param_10[0xc] == param_1) {
      lVar7 = 0xc;
      goto LAB_017fd48c;
    }
    if (param_10[0xd] == param_1) {
      lVar7 = 0xd;
      goto LAB_017fd48c;
    }
    if (param_10[0xe] == param_1) {
      lVar7 = 0xe;
      goto LAB_017fd48c;
    }
    if (param_10[0xf] == param_1) {
      lVar7 = 0xf;
      goto LAB_017fd48c;
    }
    if (param_10[0x10] == param_1) {
      lVar7 = 0x10;
      goto LAB_017fd48c;
    }
    if (param_10[0x11] == param_1) {
      lVar7 = 0x11;
      goto LAB_017fd48c;
    }
    if (param_10[0x12] == param_1) {
      lVar7 = 0x12;
      goto LAB_017fd48c;
    }
    if (param_10[0x13] == param_1) {
      lVar7 = 0x13;
      goto LAB_017fd48c;
    }
    if (param_10[0x14] == param_1) {
      lVar7 = 0x14;
      goto LAB_017fd48c;
    }
    if (param_10[0x15] == param_1) {
      lVar7 = 0x15;
      goto LAB_017fd48c;
    }
    if (param_10[0x16] == param_1) {
      lVar7 = 0x16;
      goto LAB_017fd48c;
    }
    if (param_10[0x17] == param_1) {
      lVar7 = 0x17;
      goto LAB_017fd48c;
    }
    if (param_10[0x18] == param_1) {
      lVar7 = 0x18;
      goto LAB_017fd48c;
    }
    if (param_10[0x19] == param_1) {
      lVar7 = 0x19;
      goto LAB_017fd48c;
    }
  }
  lVar7 = (long)pcVar6 - (long)param_10;
  if (0x17 < lVar7) {
    return 0xffffffff;
  }
  if (param_2 != 8) {
    if (param_2 == 0x10) {
      if (0x15 < lVar7) {
        if (pcVar3 == param_3) {
          return 0xffffffff;
        }
        if ((long)pcVar3 - (long)param_3 < 3) {
          if (pcVar3[-1] == '0') {
            cVar4 = (&__num_get_base::__src)[lVar7];
            *param_5 = 0;
            *param_4 = pcVar3 + 1;
            *pcVar3 = cVar4;
            return 0;
          }
          return 0xffffffff;
        }
        return 0xffffffff;
      }
      goto LAB_017fd4dc;
    }
    if (param_2 != 10) goto LAB_017fd4dc;
  }
  if (param_2 <= lVar7) {
    return 0xffffffff;
  }
LAB_017fd4dc:
  cVar4 = (&__num_get_base::__src)[lVar7];
  *param_4 = pcVar3 + 1;
  *pcVar3 = cVar4;
  *param_5 = *param_5 + 1;
  return 0;
}

