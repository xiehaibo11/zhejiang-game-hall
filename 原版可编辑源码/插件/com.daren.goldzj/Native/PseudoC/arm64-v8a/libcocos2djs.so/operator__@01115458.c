
/* v8::internal::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::SourceCodeOf const&) */

basic_ostream * v8::internal::operator<<(basic_ostream *param_1,SourceCodeOf *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  basic_ostream *pbVar6;
  char *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  
  uVar12 = *(ulong *)param_2;
  uVar10 = uVar12 & 0xffffffff00000000;
  uVar11 = uVar10 | 7;
  uVar8 = uVar10 | *(uint *)(uVar12 + 0xf);
  uVar9 = uVar8;
  if (*(short *)(uVar11 + *(uint *)(uVar8 - 1)) == 0x5b) {
    uVar9 = (ulong)*(uint *)(uVar8 + 0xb);
  }
  local_50 = uVar12;
  if ((uint)uVar9 != *(uint *)(uVar10 + 0xa0)) {
    uVar9 = uVar8;
    if (*(short *)(uVar11 + *(uint *)(uVar8 - 1)) == 0x5b) {
      uVar9 = uVar10 | *(uint *)(uVar8 + 0xb);
    }
    if ((*(uint *)(uVar9 + 3) != *(uint *)(uVar10 + 0xa0)) || ((*(uint *)(uVar9 + 3) & 1) == 0)) {
      if (*(short *)(uVar11 + *(uint *)(uVar8 - 1)) == 0x5b) {
        uVar8 = uVar10 | *(uint *)(uVar8 + 0xb);
      }
      local_58 = uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 3);
      uVar9 = String::LooksValid((String *)&local_58);
      if ((uVar9 & 1) == 0) {
        pcVar7 = "<Invalid Source>";
        uVar9 = 0x10;
        goto LAB_011154f0;
      }
      if ((*(uint *)(uVar12 + 0x1b) >> 0x1c & 1) == 0) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"function ",9);
        uVar1 = *(uint *)(uVar12 + 7);
        local_48 = uVar10 | uVar1;
        if (((uVar1 & 1) == 0) || (*(short *)(uVar11 + *(uint *)(local_48 - 1)) != 0x83)) {
          uVar9 = local_48;
          if (uVar1 != 0) goto joined_r0x011155c0;
LAB_011155f8:
          uVar9 = *(ulong *)(uVar10 + 200);
        }
        else {
          uVar9 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_48);
          if ((uVar9 & 1) == 0) goto LAB_011155f8;
          uVar1 = *(uint *)(uVar12 + 7);
          uVar9 = uVar10 | uVar1;
joined_r0x011155c0:
          if (((uVar1 & 1) != 0) && (*(short *)(uVar11 + *(uint *)(uVar9 - 1)) == 0x83)) {
            local_48 = uVar9;
            uVar8 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_48);
            if ((uVar8 & 1) == 0) goto LAB_011155f8;
            local_48 = uVar9;
            uVar9 = ScopeInfo::FunctionName((ScopeInfo *)&local_48);
          }
        }
        local_48 = uVar9;
        if (0 < *(int *)(uVar9 + 7)) {
          String::PrintUC16((String *)&local_48,param_1,0,-1);
        }
      }
      iVar2 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_50);
      iVar3 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_50);
      iVar5 = *(int *)(param_2 + 8);
      iVar4 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_50);
      if ((iVar2 - iVar3 <= iVar5) || (iVar5 < 0)) {
        iVar5 = SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_50);
        String::PrintUC16((String *)&local_58,param_1,iVar4,iVar5);
        return param_1;
      }
      iVar5 = SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_50);
      String::PrintUC16((String *)&local_58,param_1,iVar4,*(int *)(param_2 + 8) + iVar5);
      pcVar7 = "...\n";
      uVar9 = 4;
      goto LAB_011154f0;
    }
  }
  pcVar7 = "<No Source>";
  uVar9 = 0xb;
LAB_011154f0:
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,pcVar7,uVar9);
  return pbVar6;
}

