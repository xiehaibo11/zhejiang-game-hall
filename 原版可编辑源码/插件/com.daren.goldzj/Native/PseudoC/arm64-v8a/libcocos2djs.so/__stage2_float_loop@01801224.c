
/* std::__ndk1::__num_get<char>::__stage2_float_loop(char, bool&, char&, char*, char*&, char, char,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, unsigned int*, unsigned int*&, unsigned int&, char*) */

undefined8
std::__ndk1::__num_get<char>::__stage2_float_loop
          (char param_1,bool *param_2,char *param_3,char *param_4,char **param_5,char param_6,
          char param_7,basic_string *param_8,uint *param_9,uint **param_10,uint *param_11,
          char *param_12)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  byte *pbVar4;
  char *pcVar5;
  uint *puVar6;
  long lVar7;
  
  if (param_1 == param_6) {
    if (*param_2 == false) {
      return 0xffffffff;
    }
    *param_2 = false;
    pcVar5 = *param_5;
    *param_5 = pcVar5 + 1;
    *pcVar5 = '.';
    uVar1 = (ulong)((byte)*param_8 >> 1);
    if (((byte)*param_8 & 1) != 0) {
      uVar1 = *(ulong *)(param_8 + 8);
    }
    if (uVar1 != 0) {
      puVar6 = *param_10;
      if ((long)puVar6 - (long)param_9 < 0xa0) {
        uVar2 = *param_11;
        *param_10 = puVar6 + 1;
        *puVar6 = uVar2;
        return 0;
      }
      return 0;
    }
    return 0;
  }
  if (param_1 == param_7) {
    uVar1 = (ulong)((byte)*param_8 >> 1);
    if (((byte)*param_8 & 1) != 0) {
      uVar1 = *(ulong *)(param_8 + 8);
    }
    if (uVar1 != 0) {
      if (*param_2 == false) {
        return 0xffffffff;
      }
      puVar6 = *param_10;
      if ((long)puVar6 - (long)param_9 < 0xa0) {
        uVar2 = *param_11;
        *param_10 = puVar6 + 1;
        *puVar6 = uVar2;
        *param_11 = 0;
        return 0;
      }
      return 0;
    }
  }
  pcVar5 = param_12 + 0x20;
  if (*param_12 == param_1) {
    lVar7 = 0;
  }
  else if (param_12[1] == param_1) {
    lVar7 = 1;
  }
  else if (param_12[2] == param_1) {
    lVar7 = 2;
  }
  else if (param_12[3] == param_1) {
    lVar7 = 3;
  }
  else if (param_12[4] == param_1) {
    lVar7 = 4;
  }
  else if (param_12[5] == param_1) {
    lVar7 = 5;
  }
  else if (param_12[6] == param_1) {
    lVar7 = 6;
  }
  else if (param_12[7] == param_1) {
    lVar7 = 7;
  }
  else if (param_12[8] == param_1) {
    lVar7 = 8;
  }
  else if (param_12[9] == param_1) {
    lVar7 = 9;
  }
  else if (param_12[10] == param_1) {
    lVar7 = 10;
  }
  else if (param_12[0xb] == param_1) {
    lVar7 = 0xb;
  }
  else if (param_12[0xc] == param_1) {
    lVar7 = 0xc;
  }
  else if (param_12[0xd] == param_1) {
    lVar7 = 0xd;
  }
  else if (param_12[0xe] == param_1) {
    lVar7 = 0xe;
  }
  else if (param_12[0xf] == param_1) {
    lVar7 = 0xf;
  }
  else if (param_12[0x10] == param_1) {
    lVar7 = 0x10;
  }
  else if (param_12[0x11] == param_1) {
    lVar7 = 0x11;
  }
  else if (param_12[0x12] == param_1) {
    lVar7 = 0x12;
  }
  else if (param_12[0x13] == param_1) {
    lVar7 = 0x13;
  }
  else if (param_12[0x14] == param_1) {
    lVar7 = 0x14;
  }
  else if (param_12[0x15] == param_1) {
    lVar7 = 0x15;
  }
  else if (param_12[0x16] == param_1) {
    lVar7 = 0x16;
  }
  else if (param_12[0x17] == param_1) {
    lVar7 = 0x17;
  }
  else if (param_12[0x18] == param_1) {
    lVar7 = 0x18;
  }
  else if (param_12[0x19] == param_1) {
    lVar7 = 0x19;
  }
  else if (param_12[0x1a] == param_1) {
    lVar7 = 0x1a;
  }
  else if (param_12[0x1b] == param_1) {
    lVar7 = 0x1b;
  }
  else if (param_12[0x1c] == param_1) {
    lVar7 = 0x1c;
  }
  else if (param_12[0x1d] == param_1) {
    lVar7 = 0x1d;
  }
  else if (param_12[0x1e] == param_1) {
    lVar7 = 0x1e;
  }
  else {
    if (param_12[0x1f] != param_1) goto LAB_0180159c;
    lVar7 = 0x1f;
  }
  pcVar5 = param_12 + lVar7;
LAB_0180159c:
  lVar7 = (long)pcVar5 - (long)param_12;
  if (0x1f < lVar7) {
    return 0xffffffff;
  }
  bVar3 = (&__num_get_base::__src)[lVar7];
  if (lVar7 - 0x16U < 2) {
    *param_3 = 'P';
    pbVar4 = (byte *)*param_5;
  }
  else {
    if (1 < lVar7 - 0x18U) {
      if (((bVar3 & 0x5f) == *param_3) && (*param_3 = bVar3 & 0x5f | 0x80, *param_2 != false)) {
        *param_2 = false;
        uVar1 = (ulong)((byte)*param_8 >> 1);
        if (((byte)*param_8 & 1) != 0) {
          uVar1 = *(ulong *)(param_8 + 8);
        }
        if ((uVar1 != 0) && (puVar6 = *param_10, (long)puVar6 - (long)param_9 < 0xa0)) {
          uVar2 = *param_11;
          *param_10 = puVar6 + 1;
          *puVar6 = uVar2;
        }
      }
      pbVar4 = (byte *)*param_5;
      *param_5 = (char *)(pbVar4 + 1);
      *pbVar4 = bVar3;
      if (lVar7 < 0x16) {
        *param_11 = *param_11 + 1;
      }
      return 0;
    }
    pbVar4 = (byte *)*param_5;
    if ((pbVar4 != (byte *)param_4) && ((pbVar4[-1] & 0x5f) != (*param_3 & 0x7fU))) {
      return 0xffffffff;
    }
  }
  *param_5 = (char *)(pbVar4 + 1);
  *pbVar4 = bVar3;
  return 0;
}

