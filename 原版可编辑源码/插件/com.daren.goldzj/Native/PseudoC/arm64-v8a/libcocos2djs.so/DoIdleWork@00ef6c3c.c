
/* v8::internal::CompilerDispatcher::DoIdleWork(double) */

void __thiscall
v8::internal::CompilerDispatcher::DoIdleWork(CompilerDispatcher *this,double param_1)

{
  Mutex *this_00;
  byte *pbVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  CompilerDispatcher *pCVar6;
  undefined8 *puVar7;
  CompilerDispatcher *pCVar8;
  double dVar9;
  byte **local_80;
  byte *local_78;
  char *local_70;
  undefined8 local_68;
  long *local_60;
  long *local_58;
  
  if (DAT_01d3ec60 == (byte *)0x0) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3ec60 = (byte *)(**(code **)(*plVar3 + 0x10))(plVar3,"disabled-by-default-v8.compile");
  }
  pbVar1 = DAT_01d3ec60;
  local_80 = (byte **)0x0;
  if ((*DAT_01d3ec60 & 5) != 0) {
    local_60 = (long *)0x0;
    local_58 = (long *)0x0;
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar4 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,0x58,pbVar1,"V8.CompilerDispatcherDoIdleWork",0,0,0,0,0,0,0,&local_60,
                       0);
    plVar3 = local_58;
    local_58 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    plVar3 = local_60;
    local_60 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    local_80 = &local_78;
    local_70 = "V8.CompilerDispatcherDoIdleWork";
    local_78 = pbVar1;
    local_68 = uVar4;
  }
  this_00 = (Mutex *)(this + 0xb0);
  base::Mutex::Lock(this_00);
  this[0xd8] = (CompilerDispatcher)0x0;
  base::Mutex::Unlock(this_00);
  if (this[0x40] != (CompilerDispatcher)0x0) {
    dVar9 = (double)(**(code **)(**(long **)(this + 0x30) + 0x78))();
    PrintF("CompilerDispatcher: received %0.1lfms of idle time\n",(param_1 - dVar9) * 1000.0);
  }
  dVar9 = (double)(**(code **)(**(long **)(this + 0x30) + 0x78))();
  base::Mutex::Lock(this_00);
  if (dVar9 < param_1) {
    do {
      pCVar8 = *(CompilerDispatcher **)(this + 0x58);
      while( true ) {
        if (this + 0x60 == pCVar8) goto LAB_00ef6ea4;
        lVar5 = *(long *)(pCVar8 + 0x28);
        if ((*(char *)(lVar5 + 0x10) != '\0') &&
           ((*(long *)(lVar5 + 8) != 0 || (*(char *)(lVar5 + 0x11) != '\0')))) break;
        pCVar6 = *(CompilerDispatcher **)(pCVar8 + 8);
        if (*(CompilerDispatcher **)(pCVar8 + 8) == (CompilerDispatcher *)0x0) {
          pCVar6 = pCVar8 + 0x10;
          bVar2 = *(CompilerDispatcher **)*(CompilerDispatcher **)pCVar6 != pCVar8;
          pCVar8 = *(CompilerDispatcher **)pCVar6;
          if (bVar2) {
            do {
              lVar5 = *(long *)pCVar6;
              pCVar6 = (CompilerDispatcher *)(lVar5 + 0x10);
              pCVar8 = *(CompilerDispatcher **)pCVar6;
            } while (*(long *)pCVar8 != lVar5);
          }
        }
        else {
          do {
            pCVar8 = pCVar6;
            pCVar6 = *(CompilerDispatcher **)pCVar8;
          } while (*(CompilerDispatcher **)pCVar8 != (CompilerDispatcher *)0x0);
        }
      }
      base::Mutex::Unlock(this_00);
      if (this + 0x60 == pCVar8) goto LAB_00ef6eac;
      puVar7 = *(undefined8 **)(pCVar8 + 0x28);
      if (*(char *)((long)puVar7 + 0x11) == '\0') {
        if (puVar7[1] == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr");
        }
        Compiler::FinalizeBackgroundCompileTask(*puVar7,puVar7[1],*(undefined8 *)this,1);
        puVar7 = *(undefined8 **)(pCVar8 + 0x28);
      }
      if ((ulong *)puVar7[1] != (ulong *)0x0) {
        GlobalHandles::Destroy((ulong *)puVar7[1]);
      }
      std::__ndk1::
      __tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
      ::erase((__tree<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>,std::__ndk1::less<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<unsigned_long,std::__ndk1::unique_ptr<v8::internal::CompilerDispatcher::Job,std::__ndk1::default_delete<v8::internal::CompilerDispatcher::Job>>>>>
               *)(this + 0x58),pCVar8);
      dVar9 = (double)(**(code **)(**(long **)(this + 0x30) + 0x78))();
      base::Mutex::Lock(this_00);
    } while (dVar9 < param_1);
  }
  ScheduleIdleTaskFromAnyThread((LockGuard *)this);
LAB_00ef6ea4:
  base::Mutex::Unlock(this_00);
LAB_00ef6eac:
  if ((local_80 != (byte **)0x0) && (*local_78 != 0)) {
    plVar3 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar3 + 0x28))(plVar3,local_78,local_70,local_68);
  }
  return;
}

