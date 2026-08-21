
/* v8::internal::Runtime_GetAndResetRuntimeCallStats(int, unsigned long*, v8::internal::Isolate*) */

undefined8
v8::internal::Runtime_GetAndResetRuntimeCallStats(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  char *__filename;
  FILE *__stream;
  ios_base *this;
  undefined **ppuVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte local_1b0 [16];
  char *local_1a0;
  char *local_198;
  size_t sStack_190;
  undefined **local_188;
  undefined **local_180;
  undefined **local_178;
  undefined **local_170;
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined **local_138;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (TracingFlags::runtime_stats == 0) {
    pIVar1 = param_3 + 0x9520;
    uVar2 = *(undefined8 *)(param_3 + 0x95a0);
    lVar3 = *(long *)(param_3 + 0x95a8);
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
    WorkerThreadRuntimeCallStats::AddToMainTable
              ((WorkerThreadRuntimeCallStats *)(*(long *)pIVar1 + 0xc928),
               (RuntimeCallStats *)(*(long *)pIVar1 + 0x58a0));
    if (param_1 == 0) {
      this = (ios_base *)local_108;
      local_188 = (undefined **)0x1c670a0;
      local_108[0] = (undefined **)0x1c670c8;
      local_180 = (undefined **)0x0;
      local_178 = &PTR__basic_stringstream_01c66fb0;
      std::__ndk1::ios_base::init(this,&local_170);
      local_188 = &PTR__basic_stringstream_01c66f88;
      local_108[0] = &PTR__basic_stringstream_01c66fd8;
      local_78 = 0xffffffff;
      local_170 = &PTR__basic_streambuf_01c671a8;
      local_80 = 0;
      local_178 = &PTR__basic_stringstream_01c66fb0;
      std::__ndk1::locale::locale(alStack_168);
      uStack_148 = 0;
      local_150 = 0;
      local_138 = (undefined **)0x0;
      uStack_140 = 0;
      local_170 = &PTR__basic_stringbuf_01c67100;
      uStack_158 = 0;
      local_160 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      local_120 = (void *)0x0;
      local_110 = 0x18;
      RuntimeCallStats::Print
                ((RuntimeCallStats *)(*(long *)pIVar1 + 0x58a0),(basic_ostream *)&local_178);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      local_198 = (char *)((ulong)local_1b0 | 1);
      if ((local_1b0[0] & 1) != 0) {
        local_198 = local_1a0;
      }
      sStack_190 = strlen(local_198);
      puVar5 = (undefined8 *)Factory::NewStringFromOneByte(param_3,&local_198,0);
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      if ((local_1b0[0] & 1) != 0) {
        operator_delete(local_1a0);
      }
      RuntimeCallStats::Reset((RuntimeCallStats *)(*(long *)pIVar1 + 0x58a0));
      local_188 = &PTR__basic_stringstream_01c66f88;
      local_178 = &PTR__basic_stringstream_01c66fb0;
      uVar8 = *puVar5;
      local_108[0] = &PTR__basic_stringstream_01c66fd8;
      local_170 = &PTR__basic_stringbuf_01c67100;
      if ((local_130 & 1) != 0) {
        operator_delete(local_120);
      }
      local_170 = &PTR__basic_streambuf_01c671a8;
      std::__ndk1::locale::~locale(alStack_168);
    }
    else {
      ppuVar6 = (undefined **)*param_2;
      if (((ulong)ppuVar6 & 1) == 0) {
        __stream = (FILE *)waitpid;
        if (((ulong)ppuVar6 & 0xfffffffe) != 2) {
          __stream = (FILE *)__cxa_thread_atexit_impl;
        }
      }
      else {
        uVar7 = (ulong)ppuVar6 & 0xffffffff00000000 | 7;
        if (0x3f < *(ushort *)(uVar7 + *(uint *)((long)ppuVar6 + -1))) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","args[0].IsSmi()");
        }
        if (0x3f < *(ushort *)(uVar7 + *(uint *)((long)ppuVar6 + -1))) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","args[0].IsString()");
        }
        local_188 = ppuVar6;
        __filename = (char *)String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_188);
        __stream = fopen(__filename,"a");
      }
      if (1 < param_1) {
        ppuVar6 = (undefined **)param_2[-1];
        if ((((ulong)ppuVar6 & 1) == 0) ||
           (0x3f < *(ushort *)
                    (((ulong)ppuVar6 & 0xffffffff00000000 | 7) +
                    (ulong)*(uint *)((long)ppuVar6 + -1)))) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","args[1].IsString()");
        }
        local_188 = ppuVar6;
        String::PrintOn((String *)&local_188,(__sFILE *)__stream);
        fputc(10,__stream);
        fflush(__stream);
      }
      OFStream::OFStream((OFStream *)&local_188,(__sFILE *)__stream);
      RuntimeCallStats::Print
                ((RuntimeCallStats *)(*(long *)pIVar1 + 0x58a0),(basic_ostream *)&local_188);
      RuntimeCallStats::Reset((RuntimeCallStats *)(*(long *)pIVar1 + 0x58a0));
      uVar7 = *param_2;
      if (((uVar7 & 1) == 0) ||
         (0x3f < *(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)))) {
        fflush(__stream);
      }
      else {
        fclose(__stream);
      }
      uVar8 = *(undefined8 *)(param_3 + 0xa0);
      local_188 = &PTR__OFStream_01ca1000;
      local_138 = &PTR__OFStream_01ca1028;
      local_180 = &PTR__basic_streambuf_01c671a8;
      this = (ios_base *)&local_138;
      std::__ndk1::locale::~locale((locale *)&local_178);
    }
    std::__ndk1::ios_base::~ios_base(this);
    *(undefined8 *)(param_3 + 0x95a0) = uVar2;
    *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
    if (*(long *)(param_3 + 0x95a8) != lVar3) {
      *(long *)(param_3 + 0x95a8) = lVar3;
      HandleScope::DeleteExtensions(param_3);
    }
    if (*(long *)(lVar4 + 0x28) != local_70) {
LAB_0156c4c0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    uVar8 = FUN_0156c514(param_1,param_2,param_3);
    if (*(long *)(lVar4 + 0x28) != local_70) goto LAB_0156c4c0;
  }
  return uVar8;
}

