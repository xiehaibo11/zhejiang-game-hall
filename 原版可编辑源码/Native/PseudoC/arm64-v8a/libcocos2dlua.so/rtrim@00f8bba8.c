
/* cocos2d::Console::Utility::rtrim(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

basic_string * cocos2d::Console::Utility::rtrim(basic_string *param_1)

{
  basic_string *pbVar1;
  basic_string bVar2;
  basic_string *pbVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  basic_string *pbVar7;
  basic_string *pbVar8;
  ulong uVar9;
  
  bVar2 = *param_1;
  if (((byte)bVar2 & 1) == 0) {
    pbVar7 = param_1 + 1;
    pbVar8 = pbVar7 + ((byte)bVar2 >> 1);
    if (pbVar8 == pbVar7) goto joined_r0x00f8bc14;
  }
  else {
    pbVar7 = *(basic_string **)(param_1 + 0x10);
    pbVar8 = pbVar7 + *(long *)(param_1 + 8);
    if (pbVar8 == pbVar7) goto joined_r0x00f8bc14;
  }
  iVar4 = isspace((int)(char)pbVar8[-1]);
  pbVar3 = pbVar8 + -1;
  while ((pbVar1 = pbVar3, iVar4 != 0 && (pbVar8 = pbVar7, pbVar7 != pbVar1))) {
    iVar4 = isspace((int)(char)pbVar1[-1]);
    pbVar3 = pbVar1 + -1;
    pbVar8 = pbVar1;
  }
joined_r0x00f8bc14:
  if (((byte)bVar2 & 1) == 0) {
    uVar9 = (ulong)((byte)bVar2 >> 1);
    pbVar7 = param_1 + 1;
  }
  else {
    uVar9 = *(ulong *)(param_1 + 8);
    pbVar7 = *(basic_string **)(param_1 + 0x10);
  }
  uVar5 = (long)pbVar8 - (long)pbVar7;
  pbVar3 = (basic_string *)(uVar9 - uVar5);
  if (uVar9 < uVar5) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  pbVar7 = pbVar7 + (uVar9 - (long)pbVar8);
  if (pbVar7 != (basic_string *)0x0) {
    pbVar8 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar8 = param_1 + 1;
    }
    pbVar1 = pbVar3;
    if (pbVar7 <= pbVar3) {
      pbVar1 = pbVar7;
    }
    if ((long)pbVar3 - (long)pbVar1 != 0) {
      memmove(pbVar8 + uVar5,pbVar8 + uVar5 + (long)pbVar1,(long)pbVar3 - (long)pbVar1);
    }
    lVar6 = uVar9 - (long)pbVar1;
    if (((byte)*param_1 & 1) == 0) {
      *param_1 = SUB41((int)lVar6 << 1,0);
    }
    else {
      *(long *)(param_1 + 8) = lVar6;
    }
    pbVar8[lVar6] = (basic_string)0x0;
  }
  return param_1;
}

