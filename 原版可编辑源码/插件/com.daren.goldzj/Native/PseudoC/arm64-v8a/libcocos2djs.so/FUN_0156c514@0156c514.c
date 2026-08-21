
undefined8 FUN_0156c514(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  char *__filename;
  FILE *__stream;
  locale *this;
  undefined **ppuVar8;
  ulong uVar9;
  ios_base *this_00;
  undefined8 uVar10;
  byte **local_200;
  byte *local_1f8;
  char *local_1f0;
  undefined8 local_1e8;
  RuntimeCallStats *local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  byte local_1b8 [16];
  char *local_1a8;
  char *local_1a0;
  size_t sStack_198;
  undefined **local_190;
  undefined **local_188;
  undefined **local_180;
  undefined **local_178;
  locale alStack_170 [8];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined **ppuStack_140;
  ulong local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined **local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  local_1c0 = 0;
  uStack_1d8 = 0;
  local_1e0 = (RuntimeCallStats *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  pIVar1 = param_3 + 0x9520;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_1e0 = (RuntimeCallStats *)(*(long *)pIVar1 + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_1e0,(ulong)&local_1e0 | 8,0x14d);
  }
  if (DAT_01d47088 == (byte *)0x0) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    DAT_01d47088 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,"disabled-by-default-v8.runtime");
  }
  pbVar4 = DAT_01d47088;
  local_200 = (byte **)0x0;
  if ((*DAT_01d47088 & 5) != 0) {
    local_190 = (undefined **)0x0;
    local_188 = (undefined **)0x0;
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    uVar6 = (**(code **)(*plVar5 + 0x18))
                      (plVar5,0x58,pbVar4,"V8.Runtime_Runtime_GetAndResetRuntimeCallStats",0,0,0,0,0
                       ,0,0,&local_190,0);
    ppuVar8 = local_188;
    local_188 = (undefined **)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      (**(code **)((long)*ppuVar8 + 8))();
    }
    ppuVar8 = local_190;
    local_190 = (undefined **)0x0;
    if (ppuVar8 != (undefined **)0x0) {
      (**(code **)(*ppuVar8 + 8))();
    }
    local_200 = &local_1f8;
    local_1f0 = "V8.Runtime_Runtime_GetAndResetRuntimeCallStats";
    local_1f8 = pbVar4;
    local_1e8 = uVar6;
  }
  uVar6 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  v8::internal::WorkerThreadRuntimeCallStats::AddToMainTable
            ((WorkerThreadRuntimeCallStats *)(*(long *)pIVar1 + 0xc928),
             (RuntimeCallStats *)(*(long *)pIVar1 + 0x58a0));
  if (param_1 == 0) {
    this_00 = (ios_base *)local_110;
    local_190 = (undefined **)0x1c670a0;
    local_110[0] = (undefined **)0x1c670c8;
    local_188 = (undefined **)0x0;
    local_180 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::ios_base::init(this_00,&local_178);
    this = alStack_170;
    local_190 = &PTR__basic_stringstream_01c66f88;
    local_110[0] = &PTR__basic_stringstream_01c66fd8;
    local_80 = 0xffffffff;
    local_178 = &PTR__basic_streambuf_01c671a8;
    local_88 = 0;
    local_180 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::locale::locale(this);
    ppuStack_140 = (undefined **)0x0;
    local_148 = 0;
    local_178 = &PTR__basic_stringbuf_01c67100;
    uStack_150 = 0;
    local_158 = 0;
    uStack_160 = 0;
    local_168 = 0;
    uStack_130 = 0;
    local_138 = 0;
    uStack_120 = 0;
    local_128 = (void *)0x0;
    local_118 = 0x18;
    v8::internal::RuntimeCallStats::Print
              ((RuntimeCallStats *)(*(long *)pIVar1 + 0x58a0),(basic_ostream *)&local_180);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    local_1a0 = (char *)((ulong)local_1b8 | 1);
    if ((local_1b8[0] & 1) != 0) {
      local_1a0 = local_1a8;
    }
    sStack_198 = strlen(local_1a0);
    puVar7 = (undefined8 *)v8::internal::Factory::NewStringFromOneByte(param_3,&local_1a0,0);
    if (puVar7 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    if ((local_1b8[0] & 1) != 0) {
      operator_delete(local_1a8);
    }
    v8::internal::RuntimeCallStats::Reset((RuntimeCallStats *)(*(long *)pIVar1 + 0x58a0));
    uVar10 = *puVar7;
    local_190 = &PTR__basic_stringstream_01c66f88;
    local_180 = &PTR__basic_stringstream_01c66fb0;
    local_110[0] = &PTR__basic_stringstream_01c66fd8;
    local_178 = &PTR__basic_stringbuf_01c67100;
    if ((local_138 & 1) != 0) {
      operator_delete(local_128);
    }
    local_178 = &PTR__basic_streambuf_01c671a8;
  }
  else {
    ppuVar8 = (undefined **)*param_2;
    if (((ulong)ppuVar8 & 1) == 0) {
      __stream = (FILE *)waitpid;
      if (((ulong)ppuVar8 & 0xfffffffe) != 2) {
        __stream = (FILE *)__cxa_thread_atexit_impl;
      }
    }
    else {
      uVar9 = (ulong)ppuVar8 & 0xffffffff00000000 | 7;
      if (0x3f < *(ushort *)(uVar9 + *(uint *)((long)ppuVar8 - 1))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","args[0].IsSmi()");
      }
      if (0x3f < *(ushort *)(uVar9 + *(uint *)((long)ppuVar8 - 1))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","args[0].IsString()");
      }
      local_190 = ppuVar8;
      __filename = (char *)v8::internal::String::GetFlatContent
                                     ((PerThreadAssertScopeDebugOnly *)&local_190);
      __stream = fopen(__filename,"a");
    }
    if (1 < param_1) {
      ppuVar8 = (undefined **)param_2[-1];
      if ((((ulong)ppuVar8 & 1) == 0) ||
         (0x3f < *(ushort *)
                  (((ulong)ppuVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)ppuVar8 - 1)))
         ) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","args[1].IsString()");
      }
      local_190 = ppuVar8;
      v8::internal::String::PrintOn((String *)&local_190,(__sFILE *)__stream);
      fputc(10,__stream);
      fflush(__stream);
    }
    v8::internal::OFStream::OFStream((OFStream *)&local_190,(__sFILE *)__stream);
    v8::internal::RuntimeCallStats::Print
              ((RuntimeCallStats *)(*(long *)pIVar1 + 0x58a0),(basic_ostream *)&local_190);
    v8::internal::RuntimeCallStats::Reset((RuntimeCallStats *)(*(long *)pIVar1 + 0x58a0));
    uVar9 = *param_2;
    if (((uVar9 & 1) == 0) ||
       (0x3f < *(ushort *)((uVar9 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar9 - 1)))) {
      fflush(__stream);
    }
    else {
      fclose(__stream);
    }
    uVar10 = *(undefined8 *)(param_3 + 0xa0);
    this_00 = (ios_base *)&ppuStack_140;
    local_190 = &PTR__OFStream_01ca1000;
    ppuStack_140 = &PTR__OFStream_01ca1028;
    local_188 = &PTR__basic_streambuf_01c671a8;
    this = (locale *)&local_180;
  }
  std::__ndk1::locale::~locale(this);
  std::__ndk1::ios_base::~ios_base(this_00);
  *(undefined8 *)(param_3 + 0x95a0) = uVar6;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    v8::internal::HandleScope::DeleteExtensions(param_3);
  }
  if ((local_200 != (byte **)0x0) && (*local_1f8 != 0)) {
    plVar5 = (long *)v8::internal::tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar5 + 0x28))(plVar5,local_1f8,local_1f0,local_1e8);
  }
  if (local_1e0 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_1e0,(RuntimeCallTimer *)((ulong)&local_1e0 | 8));
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}

