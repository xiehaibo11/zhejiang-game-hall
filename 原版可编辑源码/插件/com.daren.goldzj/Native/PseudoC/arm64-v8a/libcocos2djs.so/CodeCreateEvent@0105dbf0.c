
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105dd78 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::AbstractCode, v8::internal::SharedFunctionInfo, v8::internal::Name, int, int) */

void __thiscall
v8::internal::Logger::CodeCreateEvent
          (Logger *this,undefined4 param_2,ulong param_3,ulong param_4,undefined8 param_5,
          int param_6,int param_7)

{
  long lVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  MessageBuilder *pMVar5;
  MessageBuilder *this_00;
  MessageBuilder *pMVar6;
  Log *pLVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  bool bVar14;
  uint uVar15;
  long lVar16;
  ulong *puVar17;
  ulong local_c8;
  ulong local_c0;
  Mutex *local_b8;
  ulong local_b0;
  ulong local_a8;
  Mutex *local_a0;
  int local_90;
  int local_88;
  ulong local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_b0 = param_4;
  uVar4 = (**(code **)(*(long *)this + 0x88))();
  if ((((FLAG_log_code == '\0') || ((uVar4 & 1) == 0)) ||
      (pLVar7 = *(Log **)(this + 0x28), *pLVar7 != (Log)0x0)) || (*(long *)(pLVar7 + 8) == 0))
  goto LAB_0105dc64;
  Log::MessageBuilder::MessageBuilder((MessageBuilder *)&local_a8,pLVar7);
  uVar4 = param_3 & 0xffffffff00000000;
  uVar10 = uVar4 | 7;
  if (*(short *)(uVar10 + *(uint *)(param_3 - 1)) == 0x9a) {
    uVar15 = *(uint *)(param_3 + 0x17) >> 1 & 0x1f;
  }
  else {
    uVar15 = 0xc;
  }
  if (*(short *)(uVar10 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_c0 = param_3;
      lVar16 = Code::OffHeapInstructionStart((Code *)&local_c0);
    }
    else {
      lVar16 = param_3 + 0x3f;
      local_c0 = param_3;
    }
  }
  else {
    lVar16 = param_3 + 0x21;
  }
  if (*(short *)(uVar10 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_c0 = param_3;
      iVar3 = Code::OffHeapInstructionSize((Code *)&local_c0);
    }
    else {
      iVar3 = *(int *)(param_3 + 0x13);
      local_c0 = param_3;
    }
  }
  else {
    iVar3 = *(int *)(param_3 + 3) >> 1;
  }
  FUN_0105db00(&local_a8,param_2,uVar15,lVar16,iVar3,this + 0x80);
  pMVar5 = (MessageBuilder *)SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_b0);
  pMVar5 = Log::MessageBuilder::operator<<(pMVar5,pMVar5);
  Log::MessageBuilder::operator<<(pMVar5," ");
  pMVar5 = Log::MessageBuilder::operator<<(pMVar5,param_5);
  pMVar5 = Log::MessageBuilder::operator<<(pMVar5,":");
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar5 + 0x10),param_6)
  ;
  pMVar5 = Log::MessageBuilder::operator<<(pMVar5,":");
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar5 + 0x10),param_7)
  ;
  pMVar5 = Log::MessageBuilder::operator<<(pMVar5,0);
  Log::MessageBuilder::operator<<(pMVar5,(void *)(local_b0 - 1));
  pMVar5 = Log::MessageBuilder::operator<<(pMVar5,0);
  if (*(short *)(uVar10 + *(uint *)(param_3 - 1)) == 0x9a) {
    uVar15 = *(uint *)(param_3 + 0x17) >> 1 & 0x1f;
    if (uVar15 == 0) {
      pcVar8 = "*";
    }
    else {
      if (uVar15 == 0xc) goto LAB_0105de20;
      pcVar8 = "";
    }
  }
  else {
LAB_0105de20:
    pcVar8 = "~";
    if ((*(uint *)(local_b0 + 0x1b) & 0xf00000) != 0) {
      pcVar8 = "";
    }
  }
  Log::MessageBuilder::operator<<(pMVar5,pcVar8);
  Log::MessageBuilder::WriteToLogFile((MessageBuilder *)&local_a8);
  base::Mutex::Unlock(local_a0);
  if (FLAG_log_source_code == '\0') goto LAB_0105dc64;
  uVar9 = local_b0 & 0xffffffff00000000;
  uVar13 = uVar9 | *(uint *)(local_b0 + 0xf);
  if (*(short *)((uVar9 | 7) + (ulong)*(uint *)(uVar13 - 1)) == 0x5b) {
    uVar13 = uVar9 | *(uint *)(uVar13 + 0xb);
  }
  if ((((uVar13 & 1) == 0) ||
      (*(short *)((uVar13 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar13 - 1)) != 0x65)) ||
     (pMVar5 = (MessageBuilder *)EnsureLogScriptSource(this,uVar13), ((ulong)pMVar5 & 1) == 0))
  goto LAB_0105dc64;
  Log::MessageBuilder::MessageBuilder((MessageBuilder *)&local_c0,*(Log **)(this + 0x28));
  Log::MessageBuilder::operator<<((MessageBuilder *)&local_c0,"code-source-info");
  this_00 = Log::MessageBuilder::operator<<(pMVar5,0);
  pMVar5 = this_00;
  if (*(short *)(uVar10 + *(uint *)(param_3 - 1)) == 0x9a) {
    local_a8 = param_3;
    if (*(int *)(param_3 + 0x17) < 0) {
      pMVar6 = (MessageBuilder *)Code::OffHeapInstructionStart((Code *)&local_a8);
      pMVar5 = pMVar6;
    }
    else {
      pMVar6 = (MessageBuilder *)(param_3 + 0x3f);
    }
  }
  else {
    pMVar6 = (MessageBuilder *)(param_3 + 0x21);
  }
  Log::MessageBuilder::operator<<(this_00,pMVar6);
  pMVar5 = Log::MessageBuilder::operator<<(pMVar5,0);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar5 + 0x10),
             *(int *)(uVar13 + 0x1f) >> 1);
  pMVar5 = Log::MessageBuilder::operator<<(pMVar5,0);
  SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_b0);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar5 + 0x10),
             (int)pMVar5);
  pMVar5 = Log::MessageBuilder::operator<<(pMVar5,0);
  SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_b0);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar5 + 0x10),
             (int)pMVar5);
  Log::MessageBuilder::operator<<(pMVar5,0);
  if (*(short *)(uVar10 + *(uint *)(param_3 - 1)) == 0x9a) {
    uVar9 = uVar4 | *(uint *)(param_3 + 0xb);
    if (((*(uint *)(param_3 + 0xb) & 1) == 0) || (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) != 0x85)
       ) {
      uVar9 = uVar4 | *(uint *)(uVar9 + 3);
    }
  }
  else {
    uVar15 = *(uint *)(param_3 + 0xf);
    uVar9 = uVar4 | uVar15;
    if (((uVar15 & 1) == 0) || (*(short *)(uVar10 + *(uint *)(uVar9 - 1)) != 0x85)) {
      if (uVar15 == *(uint *)(uVar4 + 0x180)) {
        uVar9 = *(ulong *)(uVar4 + 0x3c0);
      }
      else {
        uVar9 = uVar4 | *(uint *)(uVar9 + 3);
      }
    }
  }
  SourcePositionTableIterator::SourcePositionTableIterator
            ((SourcePositionTableIterator *)&local_a8,uVar9,0);
  if (local_90 == -1) {
    Log::MessageBuilder::operator<<(pMVar5,0);
LAB_0105e1f4:
    Log::MessageBuilder::operator<<(pMVar5,0);
  }
  else {
    bVar14 = false;
    do {
      uVar10 = local_80;
      pMVar5 = Log::MessageBuilder::operator<<((MessageBuilder *)&local_c0,"C");
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar5 + 0x10),
                 local_88);
      pMVar5 = Log::MessageBuilder::operator<<(pMVar5,"O");
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar5 + 0x10),
                 ((uint)uVar10 >> 1 & 0x3fffffff) - 1);
      if (((uVar10 & 1) == 0) && ((uVar10 & 0x7fff80000000) != 0)) {
        pMVar5 = Log::MessageBuilder::operator<<((MessageBuilder *)&local_c0,"I");
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar5 + 0x10),
                   ((uint)(uVar10 >> 0x1f) & 0xffff) - 1);
        bVar14 = true;
      }
      SourcePositionTableIterator::Advance((SourcePositionTableIterator *)&local_a8);
    } while (local_90 != -1);
    Log::MessageBuilder::operator<<(pMVar5,0);
    if (!bVar14) goto LAB_0105e1f4;
    uVar10 = uVar4 | *(uint *)((uVar4 | *(uint *)(param_3 + 7)) + 0x23);
    if (*(int *)(uVar10 + 3) < 0x20) {
      iVar3 = -1;
    }
    else {
      lVar16 = 0;
      puVar17 = (ulong *)(uVar10 + 7);
      iVar3 = -1;
      do {
        uVar9 = *puVar17;
        iVar12 = (int)puVar17[1];
        Log::MessageBuilder::operator<<((MessageBuilder *)&local_c0,"F");
        iVar2 = iVar3;
        if ((iVar12 != -1) &&
           (std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(local_c0 + 0x10),
                       iVar12), iVar2 = iVar12, iVar12 <= iVar3)) {
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
        pMVar5 = Log::MessageBuilder::operator<<((MessageBuilder *)&local_c0,"O");
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar5 + 0x10),
                   ((uint)uVar9 >> 1 & 0x3fffffff) - 1);
        if (((uVar9 & 1) == 0) && ((uVar9 & 0x7fff80000000) != 0)) {
          pMVar5 = Log::MessageBuilder::operator<<((MessageBuilder *)&local_c0,"I");
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar5 + 0x10),
                     ((uint)(uVar9 >> 0x1f) & 0xffff) - 1);
        }
        lVar16 = lVar16 + 1;
        puVar17 = puVar17 + 2;
      } while (lVar16 < *(int *)(uVar10 + 3) >> 5);
    }
    Log::MessageBuilder::operator<<(pMVar5,0);
    local_c8 = uVar4 | *(uint *)(param_3 + 7);
    plVar11 = (long *)(local_c0 + 0x10);
    *(uint *)((long)plVar11 + *(long *)(*plVar11 + -0x18) + 8) =
         *(uint *)((long)plVar11 + *(long *)(*plVar11 + -0x18) + 8) & 0xffffffb5 | 8;
    if (-1 < iVar3) {
      iVar12 = 0;
      do {
        pMVar5 = Log::MessageBuilder::operator<<((MessageBuilder *)&local_c0,"S");
        lVar16 = DeoptimizationData::GetInlinedFunction((DeoptimizationData *)&local_c8,iVar12);
        Log::MessageBuilder::operator<<(pMVar5,(void *)(lVar16 + -1));
        iVar12 = iVar12 + 1;
      } while (iVar3 + 1 != iVar12);
    }
    plVar11 = (long *)(local_c0 + 0x10);
    *(uint *)((long)plVar11 + *(long *)(*plVar11 + -0x18) + 8) =
         *(uint *)((long)plVar11 + *(long *)(*plVar11 + -0x18) + 8) & 0xffffffb5 | 2;
  }
  Log::MessageBuilder::WriteToLogFile((MessageBuilder *)&local_c0);
  base::Mutex::Unlock(local_b8);
LAB_0105dc64:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

