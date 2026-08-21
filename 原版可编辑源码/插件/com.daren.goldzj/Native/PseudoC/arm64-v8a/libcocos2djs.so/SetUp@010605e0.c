
/* v8::internal::Logger::SetUp(v8::internal::Isolate*) */

undefined8 __thiscall v8::internal::Logger::SetUp(Logger *this,Isolate *param_1)

{
  Mutex *pMVar1;
  Thread *pTVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  basic_ostream *pbVar11;
  Log *this_00;
  void *pvVar12;
  PerfBasicLogger *this_01;
  long *plVar13;
  PerfJitLogger *this_02;
  LowLevelLogger *this_03;
  Sampler *this_04;
  Thread *pTVar14;
  undefined8 uVar15;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  void *pvVar19;
  __hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
  *p_Var20;
  double dVar21;
  Logger *local_298;
  undefined4 local_290;
  char *local_288;
  undefined **local_280;
  undefined **local_278;
  locale alStack_270 [8];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  ulong local_238;
  undefined8 uStack_230;
  void *local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined **local_210 [17];
  undefined8 local_188;
  undefined4 local_180;
  undefined **local_178;
  undefined **local_170;
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (this[0x6c] == (Logger)0x0) {
    this[0x6c] = (Logger)0x1;
    local_178 = (undefined **)0x1c6c8a8;
    local_108[0] = (undefined **)0x1c6c8d0;
    std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
    local_78 = 0xffffffff;
    local_80 = 0;
    local_178 = &PTR__basic_ostringstream_01c6c858;
    local_170 = &PTR__basic_streambuf_01c671a8;
    local_108[0] = &PTR__basic_ostringstream_01c6c880;
    std::__ndk1::locale::locale(alStack_168);
    uStack_138 = 0;
    local_140 = 0;
    uStack_148 = 0;
    local_150 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (void *)0x0;
    local_110 = 0x10;
    local_280 = (undefined **)0x1c6c8a8;
    local_210[0] = (undefined **)0x1c6c8d0;
    local_170 = &PTR__basic_stringbuf_01c67100;
    std::__ndk1::ios_base::init((ios_base *)local_210,&local_278);
    local_180 = 0xffffffff;
    local_188 = 0;
    local_280 = &PTR__basic_ostringstream_01c6c858;
    local_278 = &PTR__basic_streambuf_01c671a8;
    local_210[0] = &PTR__basic_ostringstream_01c6c880;
    std::__ndk1::locale::locale(alStack_270);
    pbVar17 = FLAG_logfile;
    uStack_240 = 0;
    local_248 = 0;
    uStack_250 = 0;
    local_258 = 0;
    uStack_260 = 0;
    local_268 = 0;
    uStack_230 = 0;
    local_238 = 0;
    uStack_220 = 0;
    local_228 = (void *)0x0;
    local_218 = 0x10;
    cVar4 = *FLAG_logfile;
    local_278 = &PTR__basic_stringbuf_01c67100;
    if (cVar4 != '\0') {
      iVar9 = 0;
      lVar16 = 1;
      do {
        uVar8 = base::OS::isDirectorySeparator(cVar4);
        cVar4 = pbVar17[lVar16];
        iVar9 = iVar9 + (uVar8 & 1);
        lVar16 = lVar16 + 1;
      } while (cVar4 != '\0');
      bVar7 = *pbVar17;
      while (bVar7 != 0) {
        if (iVar9 == 0) {
          if (FLAG_logfile_per_isolate != '\0') {
            pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                ((basic_ostream *)&local_178,"isolate-",8);
            pbVar11 = (basic_ostream *)
                      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,
                                 param_1);
            pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                (pbVar11,"-",1);
            iVar9 = base::OS::GetCurrentProcessId();
            pbVar11 = (basic_ostream *)
                      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,iVar9
                                );
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (pbVar11,"-",1);
            bVar7 = *pbVar17;
          }
          iVar9 = -1;
        }
        if (bVar7 == 0x25) {
          pbVar18 = pbVar17 + 1;
          bVar7 = *pbVar18;
          if (bVar7 < 0x70) {
            if (bVar7 != 0) {
              if (bVar7 == 0x25) {
                pbVar11 = (basic_ostream *)&local_178;
                local_298 = (Logger *)CONCAT71(local_298._1_7_,0x25);
              }
              else {
LAB_0106078c:
                local_298._0_1_ = (Options)0x25;
                pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                                    ((basic_ostream *)&local_178,(char *)&local_298,1);
                local_298 = (Logger *)CONCAT71(local_298._1_7_,*pbVar18);
              }
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar11,(char *)&local_298,1);
              pbVar17 = pbVar18;
            }
          }
          else if (bVar7 == 0x74) {
            plVar13 = (long *)V8::GetCurrentPlatform();
            dVar21 = (double)(**(code **)(*plVar13 + 0x80))();
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178,(long)dVar21
                      );
            pbVar17 = pbVar18;
          }
          else {
            if (bVar7 != 0x70) goto LAB_0106078c;
            iVar10 = base::OS::GetCurrentProcessId();
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178,iVar10);
            pbVar17 = pbVar18;
          }
        }
        else {
          uVar8 = base::OS::isDirectorySeparator(bVar7);
          iVar9 = iVar9 - (uVar8 & 1);
          local_298 = (Logger *)CONCAT71(local_298._1_7_,*pbVar17);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_178,(char *)&local_298,1);
        }
        pbVar17 = pbVar17 + 1;
        bVar7 = *pbVar17;
      }
    }
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pcVar3 = (char *)((ulong)&local_298 | 1);
    if (((ulong)local_298 & 1) != 0) {
      pcVar3 = local_288;
    }
    this_00 = operator_new(0x130);
    Log::Log(this_00,this,pcVar3);
    pvVar19 = *(void **)(this + 0x28);
    *(Log **)(this + 0x28) = this_00;
    if (pvVar19 != (void *)0x0) {
      pvVar12 = *(void **)((long)pvVar19 + 0x120);
      *(undefined8 *)((long)pvVar19 + 0x120) = 0;
      if (pvVar12 != (void *)0x0) {
        operator_delete__(pvVar12);
      }
      base::Mutex::~Mutex((Mutex *)((long)pvVar19 + 0xf8));
      *(undefined ***)((long)pvVar19 + 0x10) = &PTR__OFStream_01ca1000;
      *(undefined ***)((long)pvVar19 + 0x18) = &PTR__basic_streambuf_01c671a8;
      *(undefined ***)((long)pvVar19 + 0x60) = &PTR__OFStream_01ca1028;
      std::__ndk1::locale::~locale((locale *)((long)pvVar19 + 0x20));
      std::__ndk1::ios_base::~ios_base((ios_base *)((long)pvVar19 + 0x60));
      operator_delete(pvVar19);
    }
    if (((ulong)local_298 & 1) != 0) {
      operator_delete(local_288);
    }
    if (FLAG_perf_basic_prof != '\0') {
      this_01 = operator_new(0x20);
      PerfBasicLogger::PerfBasicLogger(this_01,param_1);
      plVar13 = *(long **)(this + 0x30);
      *(PerfBasicLogger **)(this + 0x30) = this_01;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
        this_01 = *(PerfBasicLogger **)(this + 0x30);
      }
      p_Var20 = *(__hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
                  **)(*(long *)(this + 8) + 0xb6d8);
      pMVar1 = (Mutex *)(p_Var20 + 0x28);
      local_298 = (Logger *)this_01;
      base::Mutex::Lock(pMVar1);
      std::__ndk1::
      __hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
      ::
      __emplace_unique_key_args<v8::internal::CodeEventListener*,v8::internal::CodeEventListener*const&>
                (p_Var20,(CodeEventListener **)&local_298,(CodeEventListener **)&local_298);
      base::Mutex::Unlock(pMVar1);
      if ((extraout_x1 & 1) == 0) goto LAB_01060e5c;
    }
    if (FLAG_perf_prof != '\0') {
      this_02 = operator_new(0x18);
      PerfJitLogger::PerfJitLogger(this_02,param_1);
      plVar13 = *(long **)(this + 0x38);
      *(PerfJitLogger **)(this + 0x38) = this_02;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
        this_02 = *(PerfJitLogger **)(this + 0x38);
      }
      p_Var20 = *(__hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
                  **)(*(long *)(this + 8) + 0xb6d8);
      pMVar1 = (Mutex *)(p_Var20 + 0x28);
      local_298 = (Logger *)this_02;
      base::Mutex::Lock(pMVar1);
      std::__ndk1::
      __hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
      ::
      __emplace_unique_key_args<v8::internal::CodeEventListener*,v8::internal::CodeEventListener*const&>
                (p_Var20,(CodeEventListener **)&local_298,(CodeEventListener **)&local_298);
      base::Mutex::Unlock(pMVar1);
      if ((extraout_x1_00 & 1) == 0) goto LAB_01060e5c;
    }
    if (FLAG_ll_prof != '\0') {
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      pcVar3 = (char *)((ulong)&local_298 | 1);
      if (((ulong)local_298 & 1) != 0) {
        pcVar3 = local_288;
      }
      this_03 = operator_new(0x20);
      LowLevelLogger::LowLevelLogger(this_03,param_1,pcVar3);
      plVar13 = *(long **)(this + 0x40);
      *(LowLevelLogger **)(this + 0x40) = this_03;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
      }
      if (((ulong)local_298 & 1) != 0) {
        operator_delete(local_288);
      }
      local_298 = *(Logger **)(this + 0x40);
      p_Var20 = *(__hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
                  **)(*(long *)(this + 8) + 0xb6d8);
      pMVar1 = (Mutex *)(p_Var20 + 0x28);
      base::Mutex::Lock(pMVar1);
      std::__ndk1::
      __hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
      ::
      __emplace_unique_key_args<v8::internal::CodeEventListener*,v8::internal::CodeEventListener*const&>
                (p_Var20,(CodeEventListener **)&local_298,(CodeEventListener **)&local_298);
      base::Mutex::Unlock(pMVar1);
      if ((extraout_x1_01 & 1) == 0) goto LAB_01060e5c;
    }
    this_04 = operator_new(0x40);
    uVar6 = FLAG_prof_sampling_interval;
    v8::sampler::Sampler::Sampler(this_04,(Isolate *)param_1);
    *(undefined8 *)(this_04 + 0x30) = 0;
    *(undefined ***)this_04 = &PTR__Ticker_01cb23f8;
    pTVar14 = operator_new(0x40);
    local_298 = (Logger *)0x19d5107;
    local_290 = 0x10000;
    base::Thread::Thread(pTVar14,(Options *)&local_298);
    *(Sampler **)(pTVar14 + 0x30) = this_04;
    *(undefined4 *)(pTVar14 + 0x38) = uVar6;
    *(Thread **)(this_04 + 0x38) = pTVar14;
    *(undefined ***)pTVar14 = &PTR__Thread_01cb2420;
    plVar13 = *(long **)(this + 0x10);
    *(Sampler **)(this + 0x10) = this_04;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 8))();
    }
    if ((((((((((((FLAG_log_api != '\0' || FLAG_log != '\0') || FLAG_log_code != '\0') ||
                FLAG_log_handles != '\0') || FLAG_log_suspect != '\0') || FLAG_ll_prof != '\0') ||
             FLAG_perf_basic_prof != '\0') || FLAG_perf_prof != '\0') ||
           FLAG_log_source_code != '\0') || FLAG_log_internal_timer_events != '\0') ||
         FLAG_prof_cpp != '\0') || FLAG_trace_ic != '\0') || FLAG_log_function_events != '\0') {
      this[0x20] = (Logger)0x1;
    }
    uVar15 = base::TimeTicks::HighResolutionNow();
    *(undefined8 *)(this + 0x80) = uVar15;
    if (FLAG_prof_cpp != '\0') {
      pTVar14 = operator_new(0x81458);
      local_298 = (Logger *)0x19d4e3b;
      local_290 = 0;
      base::Thread::Thread(pTVar14,(Options *)&local_298);
      *(Isolate **)(pTVar14 + 0x30) = param_1;
      lVar16 = 0x38;
      *(undefined ***)pTVar14 = &PTR__Profiler_01cb2280;
      do {
        pTVar2 = pTVar14 + lVar16;
        lVar16 = lVar16 + 0x1028;
        *(undefined4 *)pTVar2 = 5;
        *(undefined8 *)(pTVar2 + 0x1008) = 0;
        *(undefined8 *)(pTVar2 + 0x10) = 0;
        *(undefined8 *)(pTVar2 + 8) = 0;
        *(ushort *)(pTVar2 + 0x1010) = *(ushort *)(pTVar2 + 0x1010) & 0xfc00 | 0x200;
        *(undefined8 *)(pTVar2 + 0x1020) = 0;
        *(undefined8 *)(pTVar2 + 0x1018) = 0;
      } while (pTVar2 + 0x1028 != pTVar14 + 0x81438);
      *(undefined4 *)(pTVar14 + 0x81438) = 0;
      pTVar14[0x81440] = (Thread)0x0;
      base::Semaphore::Semaphore((Semaphore *)(pTVar14 + 0x81444),0);
      *(undefined4 *)(pTVar14 + 0x8143c) = 0;
      *(undefined4 *)(pTVar14 + 0x81454) = 0;
      plVar13 = *(long **)(this + 0x18);
      *(Thread **)(this + 0x18) = pTVar14;
      if (plVar13 != (long *)0x0) {
        (**(code **)(*plVar13 + 8))();
        pTVar14 = *(Thread **)(this + 0x18);
      }
      this[0x20] = (Logger)0x1;
      Profiler::Engage((Profiler *)pTVar14);
    }
    if (this[0x20] != (Logger)0x0) {
      p_Var20 = *(__hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
                  **)(*(long *)(this + 8) + 0xb6d8);
      pMVar1 = (Mutex *)(p_Var20 + 0x28);
      local_298 = this;
      base::Mutex::Lock(pMVar1);
      std::__ndk1::
      __hash_table<v8::internal::CodeEventListener*,std::__ndk1::hash<v8::internal::CodeEventListener*>,std::__ndk1::equal_to<v8::internal::CodeEventListener*>,std::__ndk1::allocator<v8::internal::CodeEventListener*>>
      ::
      __emplace_unique_key_args<v8::internal::CodeEventListener*,v8::internal::CodeEventListener*const&>
                (p_Var20,(CodeEventListener **)&local_298,(CodeEventListener **)&local_298);
      base::Mutex::Unlock(pMVar1);
      if ((extraout_x1_02 & 1) == 0) {
LAB_01060e5c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","result");
      }
    }
    local_280 = &PTR__basic_ostringstream_01c6c858;
    local_210[0] = &PTR__basic_ostringstream_01c6c880;
    if ((local_238 & 1) != 0) {
      local_278 = &PTR__basic_stringbuf_01c67100;
      operator_delete(local_228);
    }
    local_278 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_270);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_210);
    local_178 = &PTR__basic_ostringstream_01c6c858;
    local_108[0] = &PTR__basic_ostringstream_01c6c880;
    if ((local_130 & 1) != 0) {
      local_170 = &PTR__basic_stringbuf_01c67100;
      operator_delete(local_120);
    }
    local_170 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_168);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  }
  if (*(long *)(lVar5 + 0x28) == local_70) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

