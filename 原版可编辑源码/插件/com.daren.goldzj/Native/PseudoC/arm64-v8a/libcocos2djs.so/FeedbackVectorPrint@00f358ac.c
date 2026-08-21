
/* v8::internal::FeedbackVector::FeedbackVectorPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::FeedbackVector::FeedbackVectorPrint(FeedbackVector *this,basic_ostream *param_1)

{
  uint uVar1;
  int iVar2;
  basic_ostream *pbVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  ulong local_80;
  undefined8 uStack_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  
  HeapObject::PrintHeader((HeapObject *)this,param_1,"FeedbackVector");
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - length: ",0xc);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
             *(int *)(*(long *)this + 0xf));
  if (*(int *)(*(long *)this + 0xf) == 0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1," (empty)\n",9);
    return;
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - shared function info: ",0x1a);
  local_80 = *(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 3);
  internal::operator<<(pbVar3,(Brief *)&local_80);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\n - optimized code/marker: ",0x1b);
  uVar1 = *(uint *)(*(ulong *)this + 7);
  if ((uVar1 == 3) || ((uVar1 & 1) == 0)) {
    iVar7 = (int)uVar1 >> 1;
    if ((uVar1 & 1) != 0) {
      iVar7 = 1;
    }
    switch(iVar7) {
    case 0:
      pcVar4 = "OptimizationMarker::kLogFirstExecution";
      uVar5 = 0x26;
      break;
    case 1:
      pcVar4 = "OptimizationMarker::kNone";
      uVar5 = 0x19;
      break;
    case 2:
      pcVar4 = "OptimizationMarker::kCompileOptimized";
      uVar5 = 0x25;
      break;
    case 3:
      pcVar4 = "OptimizationMarker::kCompileOptimizedConcurrent";
      uVar5 = 0x2f;
      break;
    case 4:
      pcVar4 = "OptimizationMarker::kInOptimizationQueue";
      uVar5 = 0x28;
      break;
    default:
switchD_00f35c50_caseD_0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar4,uVar5)
    ;
  }
  else {
    local_80 = -((ulong)uVar1 & 1) &
               ((ulong)uVar1 & 0xfffffffffffffffd | *(ulong *)this & 0xffffffff00000000);
    internal::operator<<(param_1,(Brief *)&local_80);
  }
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - invocation count: ",0x16);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
             *(int *)(*(long *)this + 0x13));
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\n - profiler ticks: ",0x14);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
             *(int *)(*(long *)this + 0x17));
  uVar5 = *(ulong *)this & 0xffffffff00000000;
  uVar5 = uVar5 | *(uint *)((uVar5 | *(uint *)(*(ulong *)this + 3)) + 0xb);
  if (0 < *(int *)(uVar5 + 3)) {
    iVar7 = 0;
    do {
      local_80 = uVar5;
      iVar2 = FeedbackMetadata::GetKind((FeedbackMetadata *)&local_80,iVar7);
      if (iVar2 - 1U < 0xe) {
switchD_00f35c28_caseD_11:
        iVar8 = 2;
      }
      else {
        iVar8 = 1;
        switch(iVar2) {
        case 0:
        case 0x17:
          goto switchD_00f35c50_caseD_0;
        case 0x11:
        case 0x16:
          goto switchD_00f35c28_caseD_11;
        }
      }
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\n - slot ",9);
      pbVar3 = (basic_ostream *)internal::operator<<(pbVar3,iVar7);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3," ",1);
      pbVar3 = (basic_ostream *)internal::operator<<(pbVar3,iVar2);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3," ",1);
      uStack_78 = *(undefined8 *)this;
      local_80 = 0;
      local_70 = iVar7;
      local_68 = uStack_78;
      if ((int)uStack_78 == 0) {
        local_6c = 0;
      }
      else {
        local_6c = GetKind((FeedbackVector *)&local_68,iVar7);
      }
      FeedbackNexus::Print((FeedbackNexus *)&local_80,param_1);
      if (iVar2 - 1U < 0xe) {
switchD_00f35c50_caseD_11:
        lVar6 = 2;
      }
      else {
        lVar6 = 1;
        switch(iVar2) {
        case 0:
        case 0x17:
          goto switchD_00f35c50_caseD_0;
        case 0x11:
        case 0x16:
          goto switchD_00f35c50_caseD_11;
        }
      }
      iVar8 = iVar8 + iVar7;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1," {",2);
      iVar2 = iVar7 << 2;
      do {
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_1,"\n     [",7);
        pbVar3 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,iVar7);
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar3,"]: ",3);
        local_80 = *(ulong *)this & 0xffffffff00000000 |
                   (ulong)*(uint *)(*(ulong *)this + (long)iVar2 + 0x1f);
        internal::operator<<(pbVar3,(Brief *)&local_80);
        iVar7 = iVar7 + 1;
        lVar6 = lVar6 + -1;
        iVar2 = iVar2 + 4;
      } while (lVar6 != 0);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n  }",4);
      iVar7 = iVar8;
    } while (iVar8 < *(int *)(uVar5 + 3));
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
  return;
}

