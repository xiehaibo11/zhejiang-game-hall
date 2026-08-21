
/* v8::internal::compiler::SerializerForBackgroundCompilation::TraverseBytecode() */

void __thiscall
v8::internal::compiler::SerializerForBackgroundCompilation::TraverseBytecode
          (SerializerForBackgroundCompilation *this)

{
  SerializerForBackgroundCompilation *pSVar1;
  uint uVar2;
  bool bVar3;
  void *__s;
  void *pvVar4;
  long lVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  BytecodeAnalysis *this_00;
  ulong uVar10;
  basic_ostream *pbVar11;
  long lVar12;
  Zone *pZVar13;
  JSHeapBroker JVar14;
  uint uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  JSHeapBroker *pJVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined1 local_11c [4];
  ObjectRef aOStack_118 [8];
  __tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
  a_Stack_110 [8];
  __tree_node *local_108;
  void *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  ulong local_d0;
  long local_c8;
  undefined **local_c0;
  SerializerForBackgroundCompilation *pSStack_b8;
  undefined ***local_a0;
  long *local_90;
  int local_88;
  long local_78;
  undefined8 *puVar21;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  pJVar22 = *(JSHeapBroker **)this;
  uVar9 = bytecode_array(this);
  this_00 = (BytecodeAnalysis *)
            JSHeapBroker::GetBytecodeAnalysis
                      (pJVar22,uVar9,*(undefined4 *)(this + 0x6c),*(uint *)(this + 0x68) >> 2 & 1,1)
  ;
  uVar23 = *(undefined8 *)this;
  uVar9 = bytecode_array(this);
  ObjectRef::ObjectRef(aOStack_118,uVar23,uVar9,0);
  uVar10 = ObjectRef::IsBytecodeArray(aOStack_118);
  if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsBytecodeArray()");
  }
  BytecodeArrayRef::SerializeForCompilation((BytecodeArrayRef *)aOStack_118);
  uVar9 = bytecode_array(this);
  interpreter::BytecodeArrayIterator::BytecodeArrayIterator
            ((BytecodeArrayIterator *)&local_90,uVar9);
  uVar9 = bytecode_array(this);
  HandlerRangeMatcher::HandlerRangeMatcher((HandlerRangeMatcher *)aOStack_118,&local_90,uVar9);
  uVar10 = interpreter::BytecodeArrayIterator::done((BytecodeArrayIterator *)&local_90);
  if ((uVar10 & 1) != 0) {
LAB_012c14a4:
    lVar12 = (long)local_e0 - (long)local_e8;
    if (lVar12 != 0) {
      lVar18 = local_e8[local_d0 / 0x155] + (local_d0 % 0x155) * 0xc;
      lVar17 = local_e8[(local_c8 + local_d0) / 0x155] + ((local_c8 + local_d0) % 0x155) * 0xc;
      if (lVar17 != lVar18) {
        plVar19 = local_e8 + local_d0 / 0x155;
        do {
          lVar18 = lVar18 + 0xc;
          if (lVar18 - *plVar19 == 0xffc) {
            plVar19 = plVar19 + 1;
            lVar18 = *plVar19;
          }
        } while (lVar17 != lVar18);
      }
    }
    local_c8 = 0;
    puVar24 = local_e0;
    while (uVar10 = lVar12 >> 3, local_e0 = puVar24, 2 < uVar10) {
      operator_delete((void *)*local_e8);
      local_e8 = local_e8 + 1;
      puVar24 = local_e0;
      lVar12 = (long)local_e0 - (long)local_e8;
    }
    if (uVar10 == 1) {
      local_d0 = 0xaa;
    }
    else if (uVar10 == 2) {
      local_d0 = 0x155;
    }
    puVar20 = local_e8;
    if (local_e8 != puVar24) {
      do {
        puVar21 = puVar20 + 1;
        operator_delete((void *)*puVar20);
        puVar20 = puVar21;
      } while (puVar24 != puVar21);
      if ((long)local_e0 - (long)local_e8 != 0) {
        local_e0 = local_e0 + (((long)local_e0 - (long)local_e8) - 8U >> 3 ^ 0xffffffffffffffff);
      }
    }
    if (local_f0 != (void *)0x0) {
      operator_delete(local_f0);
    }
    std::__ndk1::
    __tree<v8::internal::compiler::HandlerRangeMatcher::Range,std::__ndk1::less<v8::internal::compiler::HandlerRangeMatcher::Range>,std::__ndk1::allocator<v8::internal::compiler::HandlerRangeMatcher::Range>>
    ::destroy(a_Stack_110,local_108);
    plVar19 = local_90;
    local_90 = (long *)0x0;
    if (plVar19 != (long *)0x0) {
      (**(code **)(*plVar19 + 0x48))();
    }
    if (*(long *)(lVar5 + 0x28) == local_78) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  pSVar1 = this + 0x28;
  do {
    iVar7 = interpreter::BytecodeArrayAccessor::current_bytecode((BytecodeArrayAccessor *)&local_90)
    ;
    uVar15 = (uint)(0x40000000000021 >> ((ulong)(iVar7 - 0x29U) & 0x3f)) &
             (uint)((iVar7 - 0x29U & 0xff) < 0x37);
    do {
      iVar7 = local_88;
      IncorporateJumpTargetEnvironment(this,local_88);
      pJVar22 = *(JSHeapBroker **)this;
      JVar14 = pJVar22[0x74];
      if ((JVar14 != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
        pbVar11 = (basic_ostream *)JSHeapBroker::Trace(pJVar22);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar11,"Handling bytecode: ",0x13);
        pbVar11 = (basic_ostream *)
                  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar11,iVar7);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar11,"  ",2);
        local_11c[0] = interpreter::BytecodeArrayAccessor::current_bytecode
                                 ((BytecodeArrayAccessor *)&local_90);
        pbVar11 = (basic_ostream *)interpreter::operator<<(pbVar11,local_11c);
        local_c0 = (undefined **)CONCAT71(local_c0._1_7_,10);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar11,(char *)&local_c0,1);
        pJVar22 = *(JSHeapBroker **)this;
        JVar14 = pJVar22[0x74];
      }
      if ((JVar14 != (JSHeapBroker)0x0) && (FLAG_trace_heap_broker_verbose != '\0')) {
        pbVar11 = (basic_ostream *)JSHeapBroker::Trace(pJVar22);
        pbVar11 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                            (pbVar11,"Current environment: ",0x15);
        pbVar11 = (basic_ostream *)compiler::operator<<(pbVar11,*(Environment **)pSVar1);
        local_c0 = (undefined **)CONCAT71(local_c0._1_7_,10);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar11,(char *)&local_c0,1);
      }
      if (*(long *)(*(long *)pSVar1 + 0x30) == *(long *)(*(long *)pSVar1 + 0x38))
      goto switchD_012c0d18_caseD_a7;
      local_c0 = &PTR_FUN_01cbe9b8;
      pSStack_b8 = this;
      local_a0 = &local_c0;
      HandlerRangeMatcher::HandlerOffsetForCurrentPosition
                ((HandlerRangeMatcher *)aOStack_118,(function *)&local_c0);
      if (&local_c0 == local_a0) {
        pcVar16 = (code *)(*local_a0)[4];
LAB_012c0ca8:
        (*pcVar16)();
      }
      else if (local_a0 != (undefined ***)0x0) {
        pcVar16 = (code *)(*local_a0)[5];
        goto LAB_012c0ca8;
      }
      uVar10 = BytecodeAnalysis::IsLoopHeader(this_00,iVar7);
      if ((uVar10 & 1) != 0) {
        lVar12 = BytecodeAnalysis::GetLoopInfoFor(this_00,iVar7);
        lVar18 = *(long *)(lVar12 + 0x20);
        for (lVar12 = *(long *)(lVar12 + 0x18); lVar12 != lVar18; lVar12 = lVar12 + 0xc) {
          ContributeToJumpTargetEnvironment(this,*(int *)(lVar12 + 4));
        }
      }
      uVar6 = interpreter::BytecodeArrayAccessor::current_bytecode
                        ((BytecodeArrayAccessor *)&local_90);
      switch(uVar6) {
      case 0:
      case 1:
      case 0xb6:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      default:
        goto switchD_012c0d18_caseD_2;
      case 0xb:
        VisitLdaZero((BytecodeArrayIterator *)this);
        break;
      case 0xc:
        VisitLdaSmi(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0xd:
        lVar18 = *(long *)(this + 0x20);
        lVar12 = **(long **)this + 0xa0;
        goto joined_r0x012c1210;
      case 0xe:
        lVar18 = *(long *)(this + 0x20);
        lVar12 = **(long **)this + 0xb0;
        goto joined_r0x012c1210;
      case 0xf:
        lVar18 = *(long *)(this + 0x20);
        lVar12 = **(long **)this + 0xa8;
        goto joined_r0x012c1210;
      case 0x10:
        lVar18 = *(long *)(this + 0x20);
        lVar12 = **(long **)this + 0xb8;
        goto joined_r0x012c1210;
      case 0x11:
        lVar18 = *(long *)(this + 0x20);
        lVar12 = **(long **)this + 0xc0;
joined_r0x012c1210:
        if (lVar18 == 0) {
          lVar18 = ZoneStats::NewEmptyZone(*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
          *(long *)(this + 0x20) = lVar18;
        }
        local_c0 = (undefined **)0x0;
        Hints::AddConstant((Hints *)&local_c0,lVar12,lVar18);
        lVar12 = *(long *)pSVar1;
        uVar2 = *(int *)(lVar12 + 0x1c) + *(int *)(lVar12 + 0x18);
        if ((-1 < (int)uVar2) &&
           ((ulong)(*(long *)(lVar12 + 0x38) - *(long *)(lVar12 + 0x30) >> 3) <= (ulong)uVar2)) {
LAB_012c163c:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","accumulator_index() < ephemeral_hints_.size()");
        }
        *(undefined ***)(*(long *)(lVar12 + 0x30) + (long)(int)uVar2 * 8) = local_c0;
        break;
      case 0x12:
        VisitLdaConstant(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x13:
      case 0x14:
        goto switchD_012c0d18_caseD_13;
      case 0x15:
        VisitStaGlobal(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x16:
        VisitPushContext(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x17:
        VisitPopContext(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x18:
        VisitLdaContextSlot(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x19:
        VisitLdaImmutableContextSlot(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x1a:
        uVar8 = interpreter::BytecodeArrayAccessor::GetIndexOperand
                          ((BytecodeArrayAccessor *)&local_90,0);
        lVar12 = *(long *)(this + 0x28);
        uVar9 = 0;
        goto LAB_012c1244;
      case 0x1b:
        uVar8 = interpreter::BytecodeArrayAccessor::GetIndexOperand
                          ((BytecodeArrayAccessor *)&local_90,0);
        lVar12 = *(long *)(this + 0x28);
        uVar9 = 1;
LAB_012c1244:
        local_c0 = (undefined **)0x0;
        ProcessContextAccess(this,lVar12 + 0x28,uVar8,0,uVar9,&local_c0);
        lVar12 = *(long *)(this + 0x28);
        uVar2 = *(int *)(lVar12 + 0x1c) + *(int *)(lVar12 + 0x18);
        if ((-1 < (int)uVar2) &&
           ((ulong)(*(long *)(lVar12 + 0x38) - *(long *)(lVar12 + 0x30) >> 3) <= (ulong)uVar2))
        goto LAB_012c163c;
        *(undefined ***)(*(long *)(lVar12 + 0x30) + (long)(int)uVar2 * 8) = local_c0;
        break;
      case 0x1c:
        VisitStaContextSlot(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x1d:
        uVar8 = interpreter::BytecodeArrayAccessor::GetIndexOperand
                          ((BytecodeArrayAccessor *)&local_90,0);
        ProcessContextAccess(this,*(long *)(this + 0x28) + 0x28,uVar8,0,0,0);
        break;
      case 0x1e:
      case 0x21:
      case 0x24:
        puVar24 = *(undefined8 **)this;
        uVar9 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                          ((BytecodeArrayAccessor *)&local_90,0,(Isolate *)*puVar24);
        ObjectRef::ObjectRef((ObjectRef *)&local_c0,puVar24,uVar9,1);
        goto LAB_012c119c;
      case 0x1f:
      case 0x22:
        ProcessLdaLookupContextSlot(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x20:
      case 0x23:
        iVar7 = interpreter::BytecodeArrayAccessor::GetUnsignedImmediateOperand
                          ((BytecodeArrayAccessor *)&local_90,2);
        ProcessCheckContextExtensions(this,iVar7);
switchD_012c0d18_caseD_13:
        VisitLdaGlobal(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x25:
        VisitLdar(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x26:
        VisitStar(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x27:
        VisitMov(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x28:
        VisitLdaNamedProperty(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x29:
      case 0x2e:
        puVar24 = *(undefined8 **)this;
        uVar9 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                          ((BytecodeArrayAccessor *)&local_90,1,(Isolate *)*puVar24);
        ObjectRef::ObjectRef((ObjectRef *)&local_c0,puVar24,uVar9,0);
        uVar10 = ObjectRef::IsName((ObjectRef *)&local_c0);
        if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","IsName()");
        }
        break;
      case 0x2a:
        VisitLdaKeyedProperty(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x2b:
      case 0x2c:
        ProcessModuleVariableAccess(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x2d:
        VisitStaNamedProperty(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x2f:
        VisitStaNamedOwnProperty(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x30:
        VisitStaKeyedProperty(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x31:
        VisitStaInArrayLiteral(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x32:
        VisitStaDataPropertyInLiteral(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
        iVar7 = 1;
        goto LAB_012c0d24;
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
        iVar7 = 0;
LAB_012c0d24:
        uVar8 = interpreter::BytecodeArrayAccessor::GetSlotOperand
                          ((BytecodeArrayAccessor *)&local_90,iVar7);
        ProcessUnaryOrBinaryOperation(this,uVar8,1);
        break;
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x61:
      case 0x6d:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x78:
      case 0x7b:
      case 0x7e:
      case 0x7f:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0xa2:
      case 0xa4:
      case 0xa6:
      case 0xa8:
        lVar12 = *(long *)pSVar1;
        goto LAB_012c0d40;
      case 0x55:
        VisitGetSuperConstructor(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x56:
        VisitCallAnyReceiver(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x57:
        VisitCallProperty(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x58:
        VisitCallProperty0(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x59:
        VisitCallProperty1(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x5a:
        VisitCallProperty2(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x5b:
        VisitCallUndefinedReceiver(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x5c:
        VisitCallUndefinedReceiver0(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x5d:
        VisitCallUndefinedReceiver1(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x5e:
        VisitCallUndefinedReceiver2(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x5f:
        VisitCallNoFeedback(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x60:
        VisitCallWithSpread(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 99:
        VisitCallJSRuntime(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 100:
        VisitInvokeIntrinsic(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x65:
        VisitConstruct(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x66:
        VisitConstructWithSpread(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
        uVar8 = interpreter::BytecodeArrayAccessor::GetSlotOperand
                          ((BytecodeArrayAccessor *)&local_90,1);
        ProcessCompareOperation(this,uVar8);
        break;
      case 0x6e:
        VisitTestInstanceOf(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x6f:
        VisitTestIn(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x75:
        VisitToNumber(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x76:
        VisitToNumeric(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x79:
        VisitCreateRegExpLiteral(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x7a:
        VisitCreateArrayLiteral(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x7c:
        uVar8 = interpreter::BytecodeArrayAccessor::GetSlotOperand
                          ((BytecodeArrayAccessor *)&local_90,0);
        FeedbackSource::FeedbackSource
                  ((FeedbackSource *)&local_c0,*(undefined8 *)(*(long *)(this + 0x28) + 8),uVar8);
        JSHeapBroker::ProcessFeedbackForArrayOrObjectLiteral
                  (*(JSHeapBroker **)this,(FeedbackSource *)&local_c0);
LAB_012c119c:
        lVar12 = *(long *)(this + 0x28);
LAB_012c0d40:
        uVar2 = *(int *)(lVar12 + 0x1c) + *(int *)(lVar12 + 0x18);
        if ((-1 < (int)uVar2) &&
           ((ulong)(*(long *)(lVar12 + 0x38) - *(long *)(lVar12 + 0x30) >> 3) <= (ulong)uVar2))
        goto LAB_012c163c;
        *(undefined8 *)(*(long *)(lVar12 + 0x30) + (long)(int)uVar2 * 8) = 0;
        break;
      case 0x7d:
        VisitCreateObjectLiteral(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x80:
        VisitGetTemplateObject(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x81:
        VisitCreateClosure(this,(BytecodeArrayIterator *)&local_90);
        break;
      case 0x82:
      case 0x84:
      case 0x85:
        ProcessCreateContext(this,(BytecodeArrayIterator *)&local_90,0);
        break;
      case 0x83:
      case 0x86:
        ProcessCreateContext(this,(BytecodeArrayIterator *)&local_90,1);
        break;
      case 0x8a:
      case 0x8b:
      case 0x8c:
        iVar7 = interpreter::BytecodeArrayAccessor::GetJumpTargetOffset
                          ((BytecodeArrayAccessor *)&local_90);
        if (local_88 < iVar7) {
          ContributeToJumpTargetEnvironment(this,iVar7);
        }
        goto switchD_012c0d18_caseD_2;
      case 0x8d:
      case 0x8e:
      case 0x8f:
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0x96:
      case 0x97:
      case 0x98:
      case 0x99:
      case 0x9a:
      case 0x9b:
      case 0x9c:
      case 0x9d:
      case 0x9e:
      case 0x9f:
      case 0xa0:
        iVar7 = interpreter::BytecodeArrayAccessor::GetJumpTargetOffset
                          ((BytecodeArrayAccessor *)&local_90);
        if (local_88 < iVar7) {
          ContributeToJumpTargetEnvironment(this,iVar7);
        }
        break;
      case 0xa1:
        VisitSwitchOnSmiNoFeedback((BytecodeArrayIterator *)this);
        break;
      case 0xa3:
        iVar7 = 1;
        goto LAB_012c138c;
      case 0xa5:
        iVar7 = 3;
LAB_012c138c:
        uVar8 = interpreter::BytecodeArrayAccessor::GetSlotOperand
                          ((BytecodeArrayAccessor *)&local_90,iVar7);
        ProcessForIn(this,uVar8);
        break;
      case 0xa7:
      case 0xad:
      case 0xae:
      case 0xb4:
        break;
      case 0xa9:
      case 0xaa:
      case 0xb5:
        *(undefined8 *)(*(long *)pSVar1 + 0x38) = *(undefined8 *)(*(long *)pSVar1 + 0x30);
        break;
      case 0xab:
        lVar18 = *(long *)pSVar1;
        lVar12 = *(long *)(lVar18 + 0x30);
        uVar2 = *(int *)(lVar18 + 0x1c) + *(int *)(lVar18 + 0x18);
        if ((-1 < (int)uVar2) && ((ulong)(*(long *)(lVar18 + 0x38) - lVar12 >> 3) <= (ulong)uVar2))
        goto LAB_012c163c;
        pZVar13 = *(Zone **)(this + 0x20);
        if (pZVar13 == (Zone *)0x0) {
          pZVar13 = (Zone *)ZoneStats::NewEmptyZone
                                      (*(ZoneStats **)(this + 0x18),*(char **)(this + 0x10));
          *(Zone **)(this + 0x20) = pZVar13;
        }
        Hints::Add((Hints *)(this + 0x90),(Hints *)(lVar12 + (long)(int)uVar2 * 8),pZVar13);
switchD_012c0d18_caseD_2:
        __s = *(void **)(*(long *)pSVar1 + 0x30);
        pvVar4 = *(void **)(*(long *)pSVar1 + 0x38);
        if (__s != pvVar4) {
          memset(__s,0,(long)pvVar4 - (long)__s & 0xfffffffffffffff8);
        }
        break;
      case 0xac:
        puVar24 = *(undefined8 **)this;
        uVar9 = interpreter::BytecodeArrayAccessor::GetConstantForIndexOperand
                          ((BytecodeArrayAccessor *)&local_90,0,(Isolate *)*puVar24);
        ObjectRef::ObjectRef((ObjectRef *)&local_c0,puVar24,uVar9,1);
        break;
      case 0xaf:
        pJVar22 = *(JSHeapBroker **)this;
        uVar9 = bytecode_array(this);
        lVar12 = JSHeapBroker::GetBytecodeAnalysis
                           (pJVar22,uVar9,*(undefined4 *)(this + 0x6c),
                            *(uint *)(this + 0x68) >> 2 & 1,0);
        lVar18 = *(long *)(lVar12 + 0x90);
        for (lVar12 = *(long *)(lVar12 + 0x88); lVar12 != lVar18; lVar12 = lVar12 + 0xc) {
          ContributeToJumpTargetEnvironment(this,*(int *)(lVar12 + 4));
        }
        break;
      case 0xb2:
        VisitGetIterator(this,(BytecodeArrayIterator *)&local_90);
      }
switchD_012c0d18_caseD_a7:
      interpreter::BytecodeArrayIterator::Advance((BytecodeArrayIterator *)&local_90);
      uVar10 = interpreter::BytecodeArrayIterator::done((BytecodeArrayIterator *)&local_90);
      if ((uVar10 & 1) != 0) {
        if (uVar15 != 0) {
          Isolate::CountUsage(**(undefined8 **)this,0x47);
        }
        goto LAB_012c14a4;
      }
      bVar3 = uVar15 != 0;
      uVar15 = 1;
    } while (bVar3);
  } while( true );
}

