
/* v8::internal::WasmDebugInfo::RunInterpreter(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::WasmDebugInfo>, unsigned long, int,
   v8::internal::Vector<v8::internal::wasm::WasmValue>,
   v8::internal::Vector<v8::internal::wasm::WasmValue>) */

undefined4 __thiscall
v8::internal::WasmDebugInfo::RunInterpreter
          (WasmDebugInfo *this,ulong *param_1,InterpretedFrame *param_3,ulong param_4,
          WasmValue *param_5,undefined8 param_6,long param_7)

{
  WasmInterpreter *this_00;
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>>>
  *this_01;
  undefined8 *puVar1;
  long lVar2;
  InterpretedFrame *pIVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  Thread *pTVar9;
  ulong *puVar10;
  undefined8 uVar11;
  ulong *puVar12;
  Thread *this_02;
  uchar uVar13;
  Isolate *pIVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  WasmModule *pWVar18;
  ulong uVar19;
  ulong uVar20;
  DebugScope aDStack_688 [72];
  WasmCodeRefScope aWStack_640 [48];
  InterpretedFrame *local_610;
  ulong uStack_608;
  undefined1 local_600;
  WasmInterpreterEntryFrame *local_88;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  plVar8 = (long *)FUN_01205bac();
  uVar17 = *param_1 & 0xffffffff00000000 | (ulong)*(uint *)(*param_1 + 3);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar15 = *(ulong **)(this + 0x95a0);
    if (puVar15 == *(ulong **)(this + 0x95a8)) {
      puVar15 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar15 + 1;
    *puVar15 = uVar17;
  }
  else {
    CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar17);
  }
  lVar16 = (param_4 & 0xffffffff) * 0x20;
  this_00 = (WasmInterpreter *)(plVar8 + 2);
  puVar15 = *(ulong **)(*(long *)(plVar8[1] + 0x88) + lVar16);
  pTVar9 = (Thread *)wasm::WasmInterpreter::GetThread(this_00,0);
  uStack_608 = wasm::WasmInterpreter::Thread::StartActivation(pTVar9);
  uStack_608 = uStack_608 & 0xffffffff;
  this_01 = (__hash_table<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>>>
             *)(plVar8 + 0xc);
  local_610 = param_3;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>>>
  ::__emplace_unique_key_args<unsigned_long,std::__ndk1::pair<unsigned_long,unsigned_int>>
            (this_01,(ulong *)&local_610,(pair *)&local_610);
  wasm::WasmCodeRefScope::WasmCodeRefScope(aWStack_640);
  pTVar9 = (Thread *)wasm::WasmInterpreter::GetThread(this_00,0);
  wasm::WasmInterpreter::Thread::InitFrame
            (pTVar9,(WasmFunction *)(*(long *)(plVar8[1] + 0x88) + lVar16),param_5);
  do {
    switch((char)plVar8[0xb]) {
    case '\0':
      uVar13 = '\x01';
      goto LAB_012061d0;
    case '\x01':
      iVar4 = wasm::WasmInterpreter::Thread::GetFrameCount(pTVar9);
      if (iVar4 == *(int *)((long)plVar8 + 0x5c)) goto switchD_012061a0_caseD_2;
      uVar13 = '\x01';
      if (iVar4 <= *(int *)((long)plVar8 + 0x5c)) {
        uVar13 = '\x02';
      }
LAB_012061d0:
      wasm::WasmInterpreter::Thread::AddBreakFlags(pTVar9,uVar13);
      break;
    case '\x02':
switchD_012061a0_caseD_2:
      break;
    case -0xffffff01:
      break;
    default:
      goto switchD_012061a0_default;
    }
    uVar5 = wasm::WasmInterpreter::Thread::Run((int)pTVar9);
    switch(uVar5) {
    case 0:
      goto switchD_012061fc_caseD_0;
    default:
      goto switchD_012061a0_default;
    case 2:
      DebugScope::DebugScope(aDStack_688,*(Debug **)(*plVar8 + 0xb6c8));
      if (*(char *)(*(long *)((Isolate *)*plVar8 + 0xb6c8) + 0xd) == '\0') {
LAB_01206448:
        switch((char)plVar8[0xb]) {
        case '\0':
          iVar4 = wasm::WasmInterpreter::Thread::GetFrameCount(pTVar9);
          if (iVar4 < *(int *)((long)plVar8 + 0x5c)) goto switchD_01206470_caseD_2;
          break;
        case '\x01':
          iVar4 = wasm::WasmInterpreter::Thread::GetFrameCount(pTVar9);
          if (iVar4 == *(int *)((long)plVar8 + 0x5c)) goto switchD_01206470_caseD_2;
          break;
        case '\x02':
switchD_01206470_caseD_2:
          *(undefined1 *)(plVar8 + 0xb) = 0xff;
          Debug::OnDebugBreak(*(Debug **)(*plVar8 + 0xb6c8),*plVar8 + 0x168);
          break;
        case -0xffffff01:
          break;
        default:
switchD_012061a0_default:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
      }
      else {
        StackTraceFrameIterator::StackTraceFrameIterator
                  ((StackTraceFrameIterator *)&local_610,(Isolate *)*plVar8);
        uVar17 = WasmInterpreterEntryFrame::wasm_instance(local_88);
        pIVar14 = (Isolate *)*plVar8;
        if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)(pIVar14 + 0x95a0);
          if (puVar10 == *(ulong **)(pIVar14 + 0x95a8)) {
            puVar10 = (ulong *)HandleScope::Extend(pIVar14);
          }
          *(ulong **)(pIVar14 + 0x95a0) = puVar10 + 1;
          *puVar10 = uVar17;
        }
        else {
          puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar17);
        }
        pIVar14 = (Isolate *)*plVar8;
        uVar17 = *puVar10 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar10 + 0x6f);
        if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)(pIVar14 + 0x95a0);
          if (puVar10 == *(ulong **)(pIVar14 + 0x95a8)) {
            puVar10 = (ulong *)HandleScope::Extend(pIVar14);
          }
          *(ulong **)(pIVar14 + 0x95a0) = puVar10 + 1;
          *puVar10 = uVar17;
        }
        else {
          puVar10 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar17);
          uVar17 = *puVar10;
        }
        pIVar14 = (Isolate *)*plVar8;
        uVar17 = uVar17 & 0xffffffff00000000 | (ulong)*(uint *)(uVar17 + 0x13);
        if (*(CanonicalHandleScope **)(pIVar14 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar12 = *(ulong **)(pIVar14 + 0x95a0);
          if (puVar12 == *(ulong **)(pIVar14 + 0x95a8)) {
            puVar12 = (ulong *)HandleScope::Extend(pIVar14);
          }
          *(ulong **)(pIVar14 + 0x95a0) = puVar12 + 1;
          *puVar12 = uVar17;
        }
        else {
          puVar12 = (ulong *)CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(pIVar14 + 0x95b8),uVar17);
        }
        this_02 = (Thread *)wasm::WasmInterpreter::GetThread(this_00,0);
        wasm::WasmInterpreter::Thread::GetFrameCount(this_02);
        wasm::WasmInterpreter::Thread::GetFrame((int)this_02);
        pWVar18 = *(WasmModule **)
                   (**(long **)(*(long *)((*puVar10 & 0xffffffff00000000 |
                                          (ulong)*(uint *)(*puVar10 + 0xb)) + 3) + 0x18) + 200);
        lVar16 = wasm::InterpretedFrame::function(local_610);
        iVar4 = wasm::GetWasmFunctionOffset(pWVar18,*(uint *)(lVar16 + 8));
        iVar6 = wasm::InterpretedFrame::pc(local_610);
        pIVar3 = local_610;
        local_610 = (InterpretedFrame *)0x0;
        if (pIVar3 != (InterpretedFrame *)0x0) {
          wasm::InterpretedFrameDeleter::operator()((InterpretedFrameDeleter *)&local_610,pIVar3);
        }
        lVar16 = WasmScript::CheckBreakPoints(*plVar8,puVar12,iVar6 + iVar4);
        if (lVar16 == 0) goto LAB_01206448;
        *(undefined1 *)(plVar8 + 0xb) = 0xff;
        Debug::OnDebugBreak(*(Debug **)(*plVar8 + 0xb6c8));
      }
      DebugScope::~DebugScope(aDStack_688);
      break;
    case 3:
      if (*puVar15 != 0) {
        uVar17 = 1;
        uVar20 = 0;
        do {
          uVar19 = uVar17;
          wasm::WasmInterpreter::Thread::GetReturnValue((int)pTVar9);
          puVar1 = (undefined8 *)(param_7 + uVar20 * 0x11);
          *(undefined1 *)(puVar1 + 2) = local_600;
          puVar1[1] = uStack_608;
          *puVar1 = local_610;
          uVar17 = (ulong)((int)uVar19 + 1);
          uVar20 = uVar19;
        } while (uVar19 < *puVar15);
      }
      local_610 = param_3;
      uVar7 = wasm::WasmInterpreter::GetThread(this_00,0);
      wasm::WasmInterpreter::Thread::FinishActivation(uVar7);
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>>>
      ::__erase_unique<unsigned_long>(this_01,(ulong *)&local_610);
      if ((char)plVar8[0xb] != -1) {
        DebugScope::DebugScope((DebugScope *)&local_610,*(Debug **)(*plVar8 + 0xb6c8));
        Debug::PrepareStep(*(Debug **)(*plVar8 + 0xb6c8),0);
        DebugScope::~DebugScope((DebugScope *)&local_610);
      }
      *(undefined1 *)(plVar8 + 0xb) = 0xff;
      uVar5 = 1;
      goto LAB_012065ac;
    case 4:
      wasm::WasmInterpreter::Thread::GetTrapReason(pTVar9);
      uVar5 = wasm::WasmOpcodes::TrapReasonToMessageId();
      uVar11 = Factory::NewWasmRuntimeError((Factory *)*plVar8,uVar5,0,0,0);
      iVar4 = wasm::WasmInterpreter::Thread::RaiseException(pTVar9,*plVar8,uVar11);
      if (iVar4 != 0) {
switchD_012061fc_caseD_0:
        local_610 = param_3;
        uVar7 = wasm::WasmInterpreter::GetThread(this_00,0);
        wasm::WasmInterpreter::Thread::FinishActivation(uVar7);
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,unsigned_int>>>
        ::__erase_unique<unsigned_long>(this_01,(ulong *)&local_610);
        uVar5 = 0;
LAB_012065ac:
        wasm::WasmCodeRefScope::~WasmCodeRefScope(aWStack_640);
        if (*(long *)(lVar2 + 0x28) == local_70) {
          return uVar5;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  } while( true );
}

