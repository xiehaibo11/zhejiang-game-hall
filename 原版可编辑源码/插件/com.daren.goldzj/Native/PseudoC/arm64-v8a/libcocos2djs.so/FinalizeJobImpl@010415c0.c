
/* v8::internal::interpreter::InterpreterCompilationJob::FinalizeJobImpl(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Isolate*) */

undefined4 __thiscall
v8::internal::interpreter::InterpreterCompilationJob::FinalizeJobImpl
          (InterpreterCompilationJob *this,undefined8 *param_2,Isolate *param_3)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined **ppuVar3;
  char cVar4;
  int iVar5;
  RuntimeCallStats *pRVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong *puVar9;
  basic_ostream *pbVar10;
  size_t sVar11;
  ulong uVar12;
  undefined4 uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  char *local_1b0;
  undefined **local_1a8;
  undefined **local_1a0;
  locale alStack_198 [8];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined **local_148 [17];
  undefined8 local_c0;
  undefined4 local_b8;
  byte **local_b0;
  byte *local_a8;
  char *local_a0;
  undefined8 local_98;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  
  pRVar6 = *(RuntimeCallStats **)(*(long *)(this + 0x20) + 0x88);
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((pRVar6 != (RuntimeCallStats *)0x0) && (TracingFlags::runtime_stats != 0)) {
    local_90 = pRVar6;
    RuntimeCallStats::Enter(pRVar6,(RuntimeCallTimer *)((ulong)&local_90 | 8),0x7c);
  }
  if (DAT_01d3f5d0 == (byte *)0x0) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    DAT_01d3f5d0 = (byte *)(**(code **)(*plVar7 + 0x10))(plVar7,"disabled-by-default-v8.compile");
  }
  pbVar2 = DAT_01d3f5d0;
  local_b0 = (byte **)0x0;
  if ((*DAT_01d3f5d0 & 5) != 0) {
    local_1a8 = (undefined **)0x0;
    local_1a0 = (undefined **)0x0;
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    uVar8 = (**(code **)(*plVar7 + 0x18))
                      (plVar7,0x58,pbVar2,"V8.CompileIgnitionFinalization",0,0,0,0,0,0,0,&local_1a8,
                       0);
    ppuVar3 = local_1a0;
    local_1a0 = (undefined **)0x0;
    if (ppuVar3 != (undefined **)0x0) {
      (**(code **)((long)*ppuVar3 + 8))();
    }
    ppuVar3 = local_1a8;
    local_1a8 = (undefined **)0x0;
    if (ppuVar3 != (undefined **)0x0) {
      (**(code **)(*ppuVar3 + 8))();
    }
    local_b0 = &local_a8;
    local_a0 = "V8.CompileIgnitionFinalization";
    local_a8 = pbVar2;
    local_98 = uVar8;
  }
  puVar14 = *(ulong **)(this + 0xa8);
  if (puVar14 == (ulong *)0x0) {
    puVar14 = (ulong *)BytecodeGenerator::FinalizeBytecode
                                 (this + 0xe0,param_3,*(undefined8 *)(*(long *)(this + 0x20) + 0x50)
                                 );
    if (this[0xe8] != (InterpreterCompilationJob)0x0) {
      uVar13 = 1;
      goto joined_r0x010417cc;
    }
    *(ulong **)(*(long *)(this + 0x28) + 0x28) = puVar14;
  }
  iVar5 = UnoptimizedCompilationInfo::SourcePositionRecordingMode
                    (*(UnoptimizedCompilationInfo **)(this + 0x28));
  if (iVar5 == 2) {
    puVar9 = (ulong *)BytecodeGenerator::FinalizeSourcePositionTable
                                ((BytecodeGenerator *)(this + 0xe0),param_3);
    uVar16 = *puVar14;
    uVar15 = *puVar9;
    *(int *)(uVar16 + 0xf) = (int)uVar15;
    if ((uVar15 & 1) != 0) {
      uVar12 = *(ulong *)((uVar15 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar16,uVar16 + 0xf,uVar15);
        uVar12 = *(ulong *)(uVar15 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar16 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar16,uVar16 + 0xf,uVar15);
      }
    }
  }
  puVar1 = FLAG_print_bytecode_filter;
  if (FLAG_print_bytecode != '\0') {
    if ((*(uint *)((long)*param_2 + 0x1b) >> 0x1c & 1) == 0) {
      local_1a8 = (undefined **)*param_2;
      uVar15 = SharedFunctionInfo::PassesFilter
                         ((SharedFunctionInfo *)&local_1a8,FLAG_print_bytecode_filter);
      if ((uVar15 & 1) != 0) {
LAB_01041800:
        local_1a8 = (undefined **)0x1ca1178;
        local_148[0] = (undefined **)0x1ca11a0;
        std::__ndk1::ios_base::init((ios_base *)local_148,(AndroidLogStream *)&local_1a0);
        local_b8 = 0xffffffff;
        local_1a0 = &PTR__basic_streambuf_01c671a8;
        local_c0 = 0;
        local_1a8 = &PTR__StdoutStream_01ca1128;
        local_148[0] = &PTR__StdoutStream_01ca1150;
        std::__ndk1::locale::locale(alStack_198);
        local_160 = 0;
        uStack_158 = 0;
        uStack_178 = 0;
        local_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        local_1a0 = &PTR__AndroidLogStream_01cbc008;
        uStack_188 = 0;
        local_190 = 0;
        local_150 = 0;
        FunctionLiteral::GetDebugName();
        pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            ((basic_ostream *)&local_1a8,"[generated bytecode for function: ",0x22);
        sVar11 = strlen(local_1b0);
        pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar10,local_1b0,sVar11);
        pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar10," (",2);
        local_68 = *param_2;
        pbVar10 = (basic_ostream *)internal::operator<<(pbVar10,(Brief *)&local_68);
        pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar10,")]",2);
        std::__ndk1::ios_base::getloc();
        plVar7 = (long *)std::__ndk1::locale::use_facet
                                   ((locale *)&local_68,(id *)&std::__ndk1::ctype<char>::id);
        cVar4 = (**(code **)(*plVar7 + 0x38))(plVar7,10);
        std::__ndk1::locale::~locale((locale *)&local_68);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,cVar4);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10);
        local_68 = *puVar14;
        BytecodeArray::Disassemble((BytecodeArray *)&local_68,(basic_ostream *)&local_1a8);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1a8);
        if (local_1b0 != (char *)0x0) {
          operator_delete__(local_1b0);
        }
        local_1a8 = &PTR__StdoutStream_01ca1128;
        local_148[0] = &PTR__StdoutStream_01ca1150;
        AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_1a0);
        std::__ndk1::ios_base::~ios_base((ios_base *)local_148);
      }
    }
    else {
      sVar11 = strlen(FLAG_print_bytecode_filter);
      if (((int)sVar11 == 0) || (((int)sVar11 == 1 && (*puVar1 == '*')))) goto LAB_01041800;
    }
  }
  uVar13 = 0;
joined_r0x010417cc:
  if ((local_b0 != (byte **)0x0) && (*local_a8 != 0)) {
    plVar7 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar7 + 0x28))(plVar7,local_a8,local_a0,local_98);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar13;
}

