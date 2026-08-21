
/* v8::internal::CompilerDispatcher::FinishNow(v8::internal::Handle<v8::internal::SharedFunctionInfo>)
    */

uint __thiscall v8::internal::CompilerDispatcher::FinishNow(CompilerDispatcher *this,ulong *param_2)

{
  CompilerDispatcher *pCVar1;
  CompilerDispatcher CVar2;
  byte *pbVar3;
  RuntimeCallStats *pRVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  CompilerDispatcher *pCVar10;
  CompilerDispatcher *pCVar11;
  Job *pJVar12;
  RuntimeCallStats *local_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  byte **local_60;
  byte *local_58;
  char *local_50;
  undefined8 local_48;
  ulong local_28;
  
  if (DAT_01d3ec48 == (byte *)0x0) {
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ec48 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,"disabled-by-default-v8.compile");
  }
  pbVar3 = DAT_01d3ec48;
  local_60 = (byte **)0x0;
  if ((*DAT_01d3ec48 & 5) != 0) {
    local_90 = (RuntimeCallStats *)0x0;
    plStack_88 = (long *)0x0;
    plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar7 = (**(code **)(*plVar6 + 0x18))
                      (plVar6,0x58,pbVar3,"V8.CompilerDispatcherFinishNow",0,0,0,0,0,0,0,&local_90,0
                      );
    plVar6 = plStack_88;
    plStack_88 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    pRVar4 = local_90;
    local_90 = (RuntimeCallStats *)0x0;
    if (pRVar4 != (RuntimeCallStats *)0x0) {
      (**(code **)(*(long *)pRVar4 + 8))();
    }
    local_60 = &local_58;
    local_50 = "V8.CompilerDispatcherFinishNow";
    local_58 = pbVar3;
    local_48 = uVar7;
  }
  local_70 = 0;
  plStack_88 = (long *)0x0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (TracingFlags::runtime_stats == 0) {
    CVar2 = this[0x40];
  }
  else {
    local_90 = (RuntimeCallStats *)(*(long *)(*(long *)this + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x7a);
    CVar2 = this[0x40];
  }
  if (CVar2 != (CompilerDispatcher)0x0) {
    PrintF("CompilerDispatcher: finishing ");
    local_28 = *param_2;
    Object::ShortPrint((Object *)&local_28,(__sFILE *)waitpid);
    PrintF(" now\n");
  }
  puVar8 = (ulong *)IdentityMapBase::FindEntry((IdentityMapBase *)(this + 0x70),*param_2);
  if (puVar8 != (ulong *)0x0) {
    pCVar1 = this + 0x60;
    pCVar10 = *(CompilerDispatcher **)pCVar1;
    if (pCVar10 != (CompilerDispatcher *)0x0) {
      uVar9 = *puVar8;
      pCVar11 = pCVar1;
      do {
        if (*(ulong *)(pCVar10 + 0x20) >= uVar9) {
          pCVar11 = pCVar10;
        }
        pCVar10 = *(CompilerDispatcher **)
                   (pCVar10 + (ulong)(*(ulong *)(pCVar10 + 0x20) < uVar9) * 8);
      } while (pCVar10 != (CompilerDispatcher *)0x0);
      if ((pCVar11 != pCVar1) && (*(ulong *)(pCVar11 + 0x20) <= uVar9)) {
        pJVar12 = *(Job **)(pCVar11 + 0x28);
        WaitForJobIfRunningOnBackground(this,pJVar12);
        if (pJVar12[0x10] == (Job)0x0) {
          BackgroundCompileTask::Run(*(BackgroundCompileTask **)pJVar12);
          pJVar12[0x10] = (Job)0x1;
        }
        uVar5 = Compiler::FinalizeBackgroundCompileTask
                          (*(undefined8 *)pJVar12,param_2,*(undefined8 *)this,0);
        if (*(ulong **)(*(long *)(pCVar11 + 0x28) + 8) != (ulong *)0x0) {
          GlobalHandles::Destroy(*(ulong **)(*(long *)(pCVar11 + 0x28) + 8));
        }
        std::__ndk1::
        __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
        ::erase((__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
                 *)(this + 0x58),pCVar11);
        if (local_90 != (RuntimeCallStats *)0x0) {
          RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
        }
        if ((local_60 != (byte **)0x0) && (*local_58 != 0)) {
          plVar6 = (long *)tracing::TraceEventHelper::GetTracingController();
          (**(code **)(*plVar6 + 0x28))(plVar6,local_58,local_50,local_48);
        }
        return uVar5 & 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","it != jobs_.end()");
}

