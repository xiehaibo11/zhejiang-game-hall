
/* cocos2d::Console::Utility::ltrim(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

basic_string * cocos2d::Console::Utility::ltrim(basic_string *param_1)

{
  basic_string *pbVar1;
  ulong uVar2;
  basic_string *pbVar3;
  basic_string bVar4;
  ulong uVar5;
  int iVar6;
  basic_string *pbVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  basic_string *pbVar11;
  ulong uVar12;
  
  bVar4 = *param_1;
  uVar12 = *(ulong *)(param_1 + 8);
  pbVar3 = *(basic_string **)(param_1 + 0x10);
  if (((byte)bVar4 & 1) == 0) {
    pbVar3 = param_1 + 1;
    uVar12 = (ulong)((byte)bVar4 >> 1);
  }
  pbVar11 = pbVar3;
  if ((uVar12 != 0) && (iVar6 = isspace((int)(char)*pbVar3), iVar6 != 0)) {
    pbVar1 = pbVar3 + uVar12;
    pbVar7 = pbVar3;
    do {
      uVar12 = uVar12 - 1;
      pbVar11 = pbVar1;
      if (uVar12 == 0) break;
      pbVar11 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      iVar6 = isspace((int)(char)*pbVar11);
      pbVar11 = pbVar7;
    } while (iVar6 != 0);
  }
  uVar12 = *(ulong *)(param_1 + 8);
  pbVar7 = *(basic_string **)(param_1 + 0x10);
  if (((byte)bVar4 & 1) == 0) {
    pbVar7 = param_1 + 1;
    uVar12 = (ulong)((byte)bVar4 >> 1);
  }
  uVar8 = (long)pbVar3 - (long)pbVar7;
  uVar5 = uVar12 - uVar8;
  if (uVar8 <= uVar12) {
    uVar10 = (long)pbVar11 - (long)pbVar3;
    if (uVar10 != 0) {
      uVar2 = uVar5;
      if (uVar10 <= uVar5) {
        uVar2 = uVar10;
      }
      if (uVar5 - uVar2 != 0) {
        memmove(pbVar7 + uVar8,pbVar7 + uVar8 + uVar2,uVar5 - uVar2);
      }
      lVar9 = uVar12 - uVar2;
      if (((byte)*param_1 & 1) == 0) {
        *param_1 = SUB41((int)lVar9 << 1,0);
      }
      else {
        *(long *)(param_1 + 8) = lVar9;
      }
      pbVar7[lVar9] = (basic_string)0x0;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
}

