
/* std::__ndk1::__check_grouping(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int*, unsigned int*, unsigned int&) */

void std::__ndk1::__check_grouping(basic_string *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  ulong uVar2;
  basic_string bVar3;
  uint *puVar4;
  uint *puVar5;
  basic_string *pbVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  basic_string *pbVar10;
  ulong uVar11;
  byte bVar12;
  
  bVar3 = *param_1;
  uVar11 = (ulong)(byte)bVar3;
  uVar2 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  if ((uVar2 != 0) && (4 < (long)param_3 - (long)param_2)) {
    bVar12 = (byte)bVar3 & 1;
    if ((param_2 != param_3) && (puVar4 = param_3 + -1, puVar7 = param_2, param_2 < puVar4)) {
      do {
        puVar9 = puVar7 + 1;
        uVar8 = *puVar7;
        *puVar7 = *puVar4;
        puVar5 = puVar4 + -1;
        *puVar4 = uVar8;
        puVar4 = puVar5;
        puVar7 = puVar9;
      } while (puVar9 < puVar5);
      uVar11 = (ulong)(byte)*param_1;
      bVar12 = (byte)*param_1 & 1;
    }
    pbVar6 = *(basic_string **)(param_1 + 0x10);
    if (bVar12 == 0) {
      pbVar6 = param_1 + 1;
    }
    uVar8 = (uint)(byte)*pbVar6;
    puVar7 = param_3 + -1;
    bVar1 = 1 < (byte)((char)*pbVar6 + 1U);
    if (param_2 < puVar7) {
      uVar2 = uVar11 >> 1;
      if (bVar12 != 0) {
        uVar2 = *(ulong *)(param_1 + 8);
      }
      pbVar10 = pbVar6;
      if (bVar1) goto LAB_011ee7d8;
      do {
        do {
          if (1 < (long)(pbVar6 + (uVar2 - (long)pbVar10))) {
            pbVar10 = pbVar10 + 1;
          }
          uVar8 = (uint)(byte)*pbVar10;
          param_2 = param_2 + 1;
          bVar1 = 1 < (byte)((char)*pbVar10 + 1U);
          if (puVar7 <= param_2) goto LAB_011ee7e8;
        } while (!bVar1);
LAB_011ee7d8:
      } while (*param_2 == uVar8);
    }
    else {
LAB_011ee7e8:
      if (!bVar1) {
        return;
      }
      if (*puVar7 - 1 < uVar8) {
        return;
      }
    }
    *param_4 = 4;
  }
  return;
}

