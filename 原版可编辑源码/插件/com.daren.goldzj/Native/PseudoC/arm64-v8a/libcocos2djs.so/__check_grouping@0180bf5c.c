
/* std::__ndk1::__check_grouping(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int*, unsigned int*, unsigned int&) */

void std::__ndk1::__check_grouping(basic_string *param_1,uint *param_2,uint *param_3,uint *param_4)

{
  ulong uVar1;
  basic_string bVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint *puVar6;
  basic_string *pbVar7;
  uint *puVar8;
  uint *puVar9;
  basic_string *pbVar10;
  ulong uVar11;
  byte bVar12;
  bool bVar13;
  
  bVar2 = *param_1;
  uVar11 = (ulong)(byte)bVar2;
  uVar1 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 8);
  }
  if (uVar1 != 0) {
    bVar12 = (byte)bVar2 & 1;
    puVar4 = param_3 + -1;
    if ((param_2 != param_3) && (puVar8 = puVar4, puVar3 = param_2, param_2 < puVar4)) {
      do {
        puVar6 = puVar3 + 1;
        uVar5 = *puVar3;
        *puVar3 = *puVar8;
        puVar9 = puVar8 + -1;
        *puVar8 = uVar5;
        puVar8 = puVar9;
        puVar3 = puVar6;
      } while (puVar6 < puVar9);
      uVar11 = (ulong)(byte)*param_1;
      bVar12 = (byte)*param_1 & 1;
    }
    pbVar7 = *(basic_string **)(param_1 + 0x10);
    if (bVar12 == 0) {
      pbVar7 = param_1 + 1;
    }
    uVar5 = (uint)(byte)*pbVar7;
    bVar13 = 1 < (byte)((char)*pbVar7 + 1U);
    if (param_2 < puVar4) {
      pbVar10 = pbVar7;
      uVar1 = uVar11 >> 1;
      if (bVar12 != 0) {
        uVar1 = *(ulong *)(param_1 + 8);
      }
      do {
        if ((bVar13) && (*param_2 != uVar5)) goto LAB_0180c044;
        if (1 < (long)(pbVar7 + (uVar1 - (long)pbVar10))) {
          pbVar10 = pbVar10 + 1;
        }
        uVar5 = (uint)(byte)*pbVar10;
        param_2 = param_2 + 1;
        bVar13 = 1 < (uVar5 + 1 & 0xff);
      } while (param_2 < puVar4);
    }
    if ((bVar13) && (uVar5 <= *puVar4 - 1)) {
LAB_0180c044:
      *param_4 = 4;
    }
  }
  return;
}

