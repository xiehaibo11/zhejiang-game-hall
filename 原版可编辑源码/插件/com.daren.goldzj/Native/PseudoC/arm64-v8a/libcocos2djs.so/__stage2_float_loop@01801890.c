
/* std::__ndk1::__num_get<wchar_t>::__stage2_float_loop(wchar_t, bool&, char&, char*, char*&,
   wchar_t, wchar_t, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int*, unsigned int*&, unsigned int&, wchar_t*) */

undefined8
std::__ndk1::__num_get<wchar_t>::__stage2_float_loop
          (wchar_t param_1,bool *param_2,char *param_3,char *param_4,char **param_5,wchar_t param_6,
          wchar_t param_7,basic_string *param_8,uint *param_9,uint **param_10,uint *param_11,
          wchar_t *param_12)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  char *pcVar4;
  uint *puVar5;
  long lVar6;
  wchar_t *pwVar7;
  ulong uVar8;
  
  if (param_1 == param_6) {
    if (*param_2 == false) {
      return 0xffffffff;
    }
    *param_2 = false;
    pcVar4 = *param_5;
    *param_5 = pcVar4 + 1;
    *pcVar4 = '.';
    uVar8 = (ulong)((byte)*param_8 >> 1);
    if (((byte)*param_8 & 1) != 0) {
      uVar8 = *(ulong *)(param_8 + 8);
    }
    if (uVar8 != 0) {
      puVar5 = *param_10;
      if ((long)puVar5 - (long)param_9 < 0xa0) {
        uVar1 = *param_11;
        *param_10 = puVar5 + 1;
        *puVar5 = uVar1;
        return 0;
      }
      return 0;
    }
    return 0;
  }
  if (param_1 == param_7) {
    uVar8 = (ulong)((byte)*param_8 >> 1);
    if (((byte)*param_8 & 1) != 0) {
      uVar8 = *(ulong *)(param_8 + 8);
    }
    if (uVar8 != 0) {
      if (*param_2 == false) {
        return 0xffffffff;
      }
      puVar5 = *param_10;
      if ((long)puVar5 - (long)param_9 < 0xa0) {
        uVar1 = *param_11;
        *param_10 = puVar5 + 1;
        *puVar5 = uVar1;
        *param_11 = 0;
        return 0;
      }
      return 0;
    }
  }
  pwVar7 = param_12 + 0x20;
  if (*param_12 == param_1) {
    lVar6 = 0;
  }
  else if (param_12[1] == param_1) {
    lVar6 = 1;
  }
  else if (param_12[2] == param_1) {
    lVar6 = 2;
  }
  else if (param_12[3] == param_1) {
    lVar6 = 3;
  }
  else if (param_12[4] == param_1) {
    lVar6 = 4;
  }
  else if (param_12[5] == param_1) {
    lVar6 = 5;
  }
  else if (param_12[6] == param_1) {
    lVar6 = 6;
  }
  else if (param_12[7] == param_1) {
    lVar6 = 7;
  }
  else if (param_12[8] == param_1) {
    lVar6 = 8;
  }
  else if (param_12[9] == param_1) {
    lVar6 = 9;
  }
  else if (param_12[10] == param_1) {
    lVar6 = 10;
  }
  else if (param_12[0xb] == param_1) {
    lVar6 = 0xb;
  }
  else if (param_12[0xc] == param_1) {
    lVar6 = 0xc;
  }
  else if (param_12[0xd] == param_1) {
    lVar6 = 0xd;
  }
  else if (param_12[0xe] == param_1) {
    lVar6 = 0xe;
  }
  else if (param_12[0xf] == param_1) {
    lVar6 = 0xf;
  }
  else if (param_12[0x10] == param_1) {
    lVar6 = 0x10;
  }
  else if (param_12[0x11] == param_1) {
    lVar6 = 0x11;
  }
  else if (param_12[0x12] == param_1) {
    lVar6 = 0x12;
  }
  else if (param_12[0x13] == param_1) {
    lVar6 = 0x13;
  }
  else if (param_12[0x14] == param_1) {
    lVar6 = 0x14;
  }
  else if (param_12[0x15] == param_1) {
    lVar6 = 0x15;
  }
  else if (param_12[0x16] == param_1) {
    lVar6 = 0x16;
  }
  else if (param_12[0x17] == param_1) {
    lVar6 = 0x17;
  }
  else if (param_12[0x18] == param_1) {
    lVar6 = 0x18;
  }
  else if (param_12[0x19] == param_1) {
    lVar6 = 0x19;
  }
  else if (param_12[0x1a] == param_1) {
    lVar6 = 0x1a;
  }
  else if (param_12[0x1b] == param_1) {
    lVar6 = 0x1b;
  }
  else if (param_12[0x1c] == param_1) {
    lVar6 = 0x1c;
  }
  else if (param_12[0x1d] == param_1) {
    lVar6 = 0x1d;
  }
  else if (param_12[0x1e] == param_1) {
    lVar6 = 0x1e;
  }
  else {
    if (param_12[0x1f] != param_1) goto LAB_01801c04;
    lVar6 = 0x1f;
  }
  pwVar7 = param_12 + lVar6;
LAB_01801c04:
  lVar6 = (long)pwVar7 - (long)param_12;
  if (0x7c < lVar6) {
    return 0xffffffff;
  }
  bVar2 = (&__num_get_base::__src)[lVar6 >> 2];
  uVar8 = lVar6 - 0x58U >> 2 | lVar6 << 0x3e;
  if (uVar8 < 2) {
    *param_3 = 'P';
  }
  else {
    if (uVar8 - 2 < 2) {
      pbVar3 = (byte *)*param_5;
      if ((pbVar3 != (byte *)param_4) && ((pbVar3[-1] & 0x5f) != (*param_3 & 0x7fU))) {
        return 0xffffffff;
      }
      *param_5 = (char *)(pbVar3 + 1);
      *pbVar3 = bVar2;
      return 0;
    }
    if (((bVar2 & 0x5f) == *param_3) && (*param_3 = bVar2 & 0x5f | 0x80, *param_2 != false)) {
      *param_2 = false;
      uVar8 = (ulong)((byte)*param_8 >> 1);
      if (((byte)*param_8 & 1) != 0) {
        uVar8 = *(ulong *)(param_8 + 8);
      }
      if ((uVar8 != 0) && (puVar5 = *param_10, (long)puVar5 - (long)param_9 < 0xa0)) {
        uVar1 = *param_11;
        *param_10 = puVar5 + 1;
        *puVar5 = uVar1;
      }
    }
  }
  pbVar3 = (byte *)*param_5;
  *param_5 = (char *)(pbVar3 + 1);
  *pbVar3 = bVar2;
  if (lVar6 < 0x55) {
    *param_11 = *param_11 + 1;
  }
  return 0;
}

