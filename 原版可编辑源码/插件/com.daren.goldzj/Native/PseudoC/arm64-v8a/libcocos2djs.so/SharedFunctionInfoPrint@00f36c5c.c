
/* v8::internal::SharedFunctionInfo::SharedFunctionInfoPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::SharedFunctionInfo::SharedFunctionInfoPrint
          (SharedFunctionInfo *this,basic_ostream *param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  ulong uVar4;
  basic_ostream *pbVar5;
  size_t sVar6;
  Isolate *pIVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  char *pcVar11;
  ulong local_38;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"SharedFunctionInfo");
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - name: ",10);
  uVar8 = *(ulong *)this & 0xffffffff00000000;
  puVar9 = (uint *)(*(ulong *)this + 7);
  uVar1 = *puVar9;
  if (((uVar1 & 1) == 0) ||
     (*(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar1) - 1)) != 0x83)) {
    if (uVar1 != 0) goto LAB_00f36ce4;
LAB_00f36d74:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"<no-shared-name>",0x10);
  }
  else {
    local_38 = uVar8 | uVar1;
    uVar8 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_38);
    if ((uVar8 & 1) == 0) goto LAB_00f36d74;
    uVar8 = *(ulong *)this & 0xffffffff00000000;
    puVar9 = (uint *)(*(ulong *)this + 7);
LAB_00f36ce4:
    uVar1 = *puVar9;
    local_38 = uVar8 | uVar1;
    if (((uVar1 & 1) == 0) || (*(short *)((uVar8 | 7) + (ulong)*(uint *)(local_38 - 1)) != 0x83)) {
      uVar4 = local_38;
      if (uVar1 != 0) goto joined_r0x00f36d38;
LAB_00f36d94:
      uVar4 = *(ulong *)(uVar8 + 200);
    }
    else {
      uVar4 = ScopeInfo::HasSharedFunctionName((ScopeInfo *)&local_38);
      uVar8 = *(ulong *)this & 0xffffffff00000000;
      if ((uVar4 & 1) == 0) goto LAB_00f36d94;
      uVar1 = *(uint *)(*(ulong *)this + 7);
      uVar4 = uVar8 | uVar1;
joined_r0x00f36d38:
      if (((uVar1 & 1) != 0) && (*(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x83)) {
        local_38 = uVar4;
        uVar8 = ScopeInfo::HasFunctionName((ScopeInfo *)&local_38);
        if ((uVar8 & 1) == 0) {
          uVar8 = (ulong)*(uint *)(this + 4) << 0x20;
          goto LAB_00f36d94;
        }
        local_38 = uVar4;
        uVar4 = ScopeInfo::FunctionName((ScopeInfo *)&local_38);
      }
    }
    local_38 = uVar4;
    internal::operator<<(param_1,(Brief *)&local_38);
  }
  uVar4 = *(ulong *)this;
  uVar8 = uVar4 & 0xffffffff00000000;
  if (((*(uint *)(uVar4 + 7) & 1) == 0) ||
     (uVar10 = uVar8 | *(uint *)(uVar4 + 7),
     *(short *)((uVar8 | 7) + (ulong)*(uint *)(uVar10 - 1)) != 0x83)) {
    if (((*(uint *)(uVar4 + 3) & 1) == 0) ||
       (1 < *(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | *(uint *)(uVar4 + 3)) - 1)) - 0x95))
    goto LAB_00f36ee8;
  }
  else {
    local_38 = uVar10;
    uVar8 = ScopeInfo::HasInferredFunctionName((ScopeInfo *)&local_38);
    if ((uVar8 & 1) == 0) goto LAB_00f36ee8;
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - inferred name: ",0x13);
  uVar4 = *(ulong *)this;
  uVar8 = uVar4 & 0xffffffff00000000;
  if (((*(uint *)(uVar4 + 7) & 1) == 0) ||
     (local_38 = uVar8 | *(uint *)(uVar4 + 7),
     *(short *)((uVar8 | 7) + (ulong)*(uint *)(local_38 - 1)) != 0x83)) {
    if (((*(uint *)(uVar4 + 3) & 1) == 0) ||
       (1 < *(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | *(uint *)(uVar4 + 3)) - 1)) - 0x95))
    goto LAB_00f36ecc;
    local_38 = *(ulong *)this & 0xffffffff00000000;
    local_38 = local_38 | *(uint *)((local_38 | *(uint *)(*(ulong *)this + 3)) + 3);
  }
  else {
    uVar8 = ScopeInfo::HasInferredFunctionName((ScopeInfo *)&local_38);
    if ((((uVar8 & 1) == 0) ||
        (local_38 = ScopeInfo::InferredFunctionName((ScopeInfo *)&local_38), (local_38 & 1) == 0))
       || (0x3f < *(ushort *)((local_38 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_38 - 1)))
       ) {
LAB_00f36ecc:
      local_38 = *(ulong *)(((ulong)*(uint *)(this + 4) << 0x20) + 200);
    }
  }
  internal::operator<<(pbVar5,(Brief *)&local_38);
LAB_00f36ee8:
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - kind: ",10);
  uVar1 = *(uint *)(*(long *)this + 0x1b) ^ 0x10;
  if ((0xffff0007U >> (ulong)(uVar1 & 0x1f) & 1) != 0) {
    pcVar11 = (&PTR_s_ConciseGeneratorMethod_019afcde_5_01ca4c58)[(ulong)uVar1 & 0x1f];
    sVar6 = strlen(pcVar11);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar11,sVar6)
    ;
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - syntax kind: ",0x11);
    uVar8 = (ulong)(*(uint *)(*(long *)this + 0x1b) >> 7 ^ 4);
    if ((0xf1U >> (uVar8 & 7) & 1) != 0) {
      pcVar11 = (&PTR_s_Wrapped_01ca4c18)[uVar8 & 7];
      sVar6 = strlen(pcVar11);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar5,pcVar11,sVar6);
      if ((*(uint *)(*(long *)this + 0x1b) >> 0xd & 1) != 0) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"\n - needs_home_object",0x15);
      }
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - function_map_index: ",0x18);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                 (*(uint *)(*(long *)this + 0x1b) >> 0xf & 0x1f) + 0xa9);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - formal_parameter_count: ",0x1c);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                 *(ushort *)(*(long *)this + 0x15));
      if ((*(uint *)(*(long *)this + 0x1b) >> 0x1e & 1) != 0) {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"\n - safe_to_skip_arguments_adaptor",0x22);
      }
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - expected_nof_properties: ",0x1d);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                 *(ushort *)(*(long *)this + 0x17));
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - language_mode: ",0x13);
      pcVar11 = "sloppy";
      if ((*(uint *)(*(long *)this + 0x1b) & 0x40) != 0) {
        pcVar11 = "strict";
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar11,6);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - data: ",10);
      local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
      internal::operator<<(pbVar5,(Brief *)&local_38);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - code (from data): ",0x16);
      local_38 = GetCode(this);
      internal::operator<<(pbVar5,(Brief *)&local_38);
      PrintSourceCode(this,param_1);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - function token position: ",0x1d);
      uVar2 = *(ushort *)(*(long *)this + 0x19);
      if (uVar2 == 0xffff) {
        iVar3 = -1;
      }
      else {
        iVar3 = StartPosition(this);
        iVar3 = iVar3 - (uint)uVar2;
      }
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar3);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - start position: ",0x14);
      iVar3 = StartPosition(this);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar3);
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - end position: ",0x12);
      iVar3 = EndPosition(this);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar3);
      uVar8 = *(ulong *)this & 0xffffffff00000000;
      if (*(short *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | *(uint *)(*(ulong *)this + 0xf)) - 1))
          == 0x5b) {
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"\n - debug info: ",0x10);
        local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xf);
        internal::operator<<(pbVar5,(Brief *)&local_38);
      }
      else {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"\n - no debug info",0x11);
      }
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - scope info: ",0x10);
      uVar1 = *(uint *)(*(ulong *)this + 7);
      pIVar7 = (Isolate *)(*(ulong *)this & 0xffffffff00000000);
      if (((uVar1 & 1) == 0) ||
         (uVar8 = (ulong)pIVar7 | (ulong)uVar1,
         *(short *)(((ulong)pIVar7 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x83)) {
        uVar8 = ScopeInfo::Empty(pIVar7);
      }
      local_38 = uVar8;
      internal::operator<<(pbVar5,(Brief *)&local_38);
      uVar8 = HasOuterScopeInfo(this);
      if ((uVar8 & 1) != 0) {
        pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"\n - outer scope info: ",0x16);
        uVar1 = *(uint *)(*(ulong *)this + 3);
        if ((uVar1 == 0x84) ||
           (((uVar1 & 1) != 0 &&
            (uVar8 = *(ulong *)this & 0xffffffff00000000,
            *(ushort *)((uVar8 | 7) + (ulong)*(uint *)((uVar8 | uVar1) - 1)) - 0x95 < 2)))) {
          local_38 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb);
        }
        else {
          uVar1 = *(uint *)(*(ulong *)this + 7);
          pIVar7 = (Isolate *)(*(ulong *)this & 0xffffffff00000000);
          if (((uVar1 & 1) == 0) ||
             (uVar8 = (ulong)pIVar7 | (ulong)uVar1,
             *(short *)(((ulong)pIVar7 | 7) + (ulong)*(uint *)(uVar8 - 1)) != 0x83)) {
            uVar8 = ScopeInfo::Empty(pIVar7);
          }
          local_38 = uVar8;
          local_38 = ScopeInfo::OuterScopeInfo((ScopeInfo *)&local_38);
        }
        internal::operator<<(pbVar5,(Brief *)&local_38);
      }
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - length: ",0xc);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                 *(ushort *)(*(long *)this + 0x13));
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,"\n - feedback_metadata: ",0x17);
      uVar4 = *(ulong *)this & 0xffffffff00000000;
      uVar8 = uVar4 | *(uint *)(*(ulong *)this + 0xb);
      if (*(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar8 - 1)) == 0x9e) {
        local_38 = uVar8;
        FeedbackMetadata::FeedbackMetadataPrint((FeedbackMetadata *)&local_38,param_1);
      }
      else {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"<none>",6);
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

