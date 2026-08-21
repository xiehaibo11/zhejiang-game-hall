
/* v8::internal::HeapObject::HeapObjectPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall v8::internal::HeapObject::HeapObjectPrint(HeapObject *this,basic_ostream *param_1)

{
  uint uVar1;
  ushort uVar2;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  basic_ostream *pbVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  ulong local_38;
  ulong local_18;
  
  uVar7 = *(ulong *)this;
  pIVar8 = (Isolate *)(uVar7 & 0xffffffff00000000);
  uVar2 = *(ushort *)(((ulong)pIVar8 | (ulong)*(uint *)(uVar7 - 1)) + 7);
  if (uVar2 < 0x40) {
    local_18 = uVar7;
    String::StringPrint((String *)&local_18,param_1);
    pcVar5 = "\n";
    uVar7 = 1;
    goto LAB_00f2fde4;
  }
  switch(uVar2) {
  case 0x40:
    local_18 = uVar7;
    Symbol::SymbolPrint((Symbol *)&local_18,param_1);
    break;
  case 0x41:
    local_18 = uVar7;
    BigIntBase::BigIntBasePrint((BigIntBase *)&local_18,param_1);
    break;
  case 0x42:
    local_18 = uVar7;
    HeapNumber::HeapNumberPrint((HeapNumber *)&local_18,param_1);
    break;
  case 0x43:
    local_18 = (ulong)pIVar8 | (ulong)*(uint *)(uVar7 + 0xb);
    Object::Print((Object *)&local_18,param_1);
    break;
  case 0x44:
    local_18 = uVar7;
    SourceTextModule::SourceTextModulePrint((SourceTextModule *)&local_18,param_1);
    break;
  case 0x45:
    local_18 = uVar7;
    SyntheticModule::SyntheticModulePrint((SyntheticModule *)&local_18,param_1);
    break;
  case 0x46:
    local_18 = uVar7;
    PrintHeader((HeapObject *)&local_18,param_1,"Foreign");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - foreign address : ",0x16);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*(void **)(uVar7 + 3));
    goto LAB_00f309e0;
  case 0x47:
    local_18 = uVar7;
    PromiseFulfillReactionJobTask::PromiseFulfillReactionJobTaskPrint
              ((PromiseFulfillReactionJobTask *)&local_18,param_1);
    break;
  case 0x48:
    local_18 = uVar7;
    PromiseRejectReactionJobTask::PromiseRejectReactionJobTaskPrint
              ((PromiseRejectReactionJobTask *)&local_18,param_1);
    break;
  case 0x49:
    local_38 = uVar7;
    PrintHeader((HeapObject *)&local_38,param_1,"CallableTask");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - context: ",0xd);
    local_18 = (ulong)pIVar8 | (ulong)*(uint *)(uVar7 + 7);
    internal::operator<<(pbVar3,(Brief *)&local_18);
    pcVar5 = "\n - callable: ";
    uVar6 = 0xe;
    goto LAB_00f309c4;
  case 0x4a:
    local_38 = uVar7;
    PrintHeader((HeapObject *)&local_38,param_1,"CallbackTask");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - callback: ",0xe);
    local_18 = (ulong)pIVar8 | (ulong)*(uint *)(uVar7 + 3);
    internal::operator<<(pbVar3,(Brief *)&local_18);
    pcVar5 = "\n - data: ";
    uVar6 = 10;
    goto LAB_00f30874;
  case 0x4b:
    local_18 = uVar7;
    PromiseResolveThenableJobTask::PromiseResolveThenableJobTaskPrint
              ((PromiseResolveThenableJobTask *)&local_18,param_1);
    break;
  case 0x4c:
    local_18 = uVar7;
    LoadHandler::LoadHandlerPrint((LoadHandler *)&local_18,param_1);
    break;
  case 0x4d:
    local_18 = uVar7;
    StoreHandler::StoreHandlerPrint((StoreHandler *)&local_18,param_1);
    break;
  case 0x4e:
    local_18 = uVar7;
    FunctionTemplateInfo::FunctionTemplateInfoPrint((FunctionTemplateInfo *)&local_18,param_1);
    break;
  case 0x4f:
    local_18 = uVar7;
    ObjectTemplateInfo::ObjectTemplateInfoPrint((ObjectTemplateInfo *)&local_18,param_1);
    break;
  case 0x50:
    local_18 = uVar7;
    AccessCheckInfo::AccessCheckInfoPrint((AccessCheckInfo *)&local_18,param_1);
    break;
  case 0x51:
    local_18 = uVar7;
    AccessorInfo::AccessorInfoPrint((AccessorInfo *)&local_18,param_1);
    break;
  case 0x52:
    local_38 = uVar7;
    PrintHeader((HeapObject *)&local_38,param_1,"AccessorPair");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - getter: ",0xc);
    local_18 = (ulong)pIVar8 | (ulong)*(uint *)(uVar7 + 3);
    internal::operator<<(pbVar3,(Brief *)&local_18);
    pcVar5 = "\n - setter: ";
    uVar6 = 0xc;
    goto LAB_00f30874;
  case 0x53:
    local_18 = uVar7;
    PrintHeader((HeapObject *)&local_18,param_1,"AliasedArgumentsEntry");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - aliased_context_slot: ",0x1a);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*(int *)(uVar7 + 3) >> 1
              );
    break;
  case 0x54:
    local_18 = uVar7;
    AllocationMemento::AllocationMementoPrint((AllocationMemento *)&local_18,param_1);
    break;
  case 0x55:
    local_18 = uVar7;
    AllocationSite::AllocationSitePrint((AllocationSite *)&local_18,param_1);
    break;
  case 0x56:
    local_38 = uVar7;
    PrintHeader((HeapObject *)&local_38,param_1,"ArrayBoilerplateDescription");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - elements kind: ",0x13);
    local_18 = CONCAT71(local_18._1_7_,(char)(*(uint *)(uVar7 + 3) >> 1));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar3,(char *)&local_18,1);
    pcVar5 = "\n - constant elements: ";
    uVar6 = 0x17;
    goto LAB_00f30874;
  case 0x57:
    local_18 = uVar7;
    AsmWasmData::AsmWasmDataPrint((AsmWasmData *)&local_18,param_1);
    break;
  case 0x58:
    local_18 = uVar7;
    AsyncGeneratorRequest::AsyncGeneratorRequestPrint((AsyncGeneratorRequest *)&local_18,param_1);
    break;
  case 0x59:
    local_18 = uVar7;
    CallHandlerInfo::CallHandlerInfoPrint((CallHandlerInfo *)&local_18,param_1);
    break;
  case 0x5a:
    local_18 = uVar7;
    PrintHeader((HeapObject *)&local_18,param_1,"ClassPositions");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - start position: ",0x14);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*(int *)(uVar7 + 3) >> 1
              );
    this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"\n - end position: ",0x12);
    iVar4 = *(int *)(uVar7 + 7);
    goto LAB_00f3081c;
  case 0x5b:
    local_18 = uVar7;
    DebugInfo::DebugInfoPrint((DebugInfo *)&local_18,param_1);
    break;
  case 0x5c:
    local_18 = uVar7;
    TorqueGeneratedEnumCache<v8::internal::EnumCache,v8::internal::Struct>::EnumCachePrint
              ((TorqueGeneratedEnumCache<v8::internal::EnumCache,v8::internal::Struct> *)&local_18,
               param_1);
    break;
  case 0x5d:
    local_18 = uVar7;
    FeedbackCell::FeedbackCellPrint((FeedbackCell *)&local_18,param_1);
    break;
  case 0x5e:
    local_18 = uVar7;
    FunctionTemplateRareData::FunctionTemplateRareDataPrint
              ((FunctionTemplateRareData *)&local_18,param_1);
    break;
  case 0x5f:
    local_18 = uVar7;
    InterceptorInfo::InterceptorInfoPrint((InterceptorInfo *)&local_18,param_1);
    break;
  case 0x60:
    local_18 = uVar7;
    TorqueGeneratedInternalClass<v8::internal::InternalClass,v8::internal::Struct>::
    InternalClassPrint((TorqueGeneratedInternalClass<v8::internal::InternalClass,v8::internal::Struct>
                        *)&local_18,param_1);
    break;
  case 0x61:
    local_38 = uVar7;
    PrintHeader((HeapObject *)&local_38,param_1,"InterpreterData");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - bytecode_array: ",0x14);
    local_18 = (ulong)pIVar8 | (ulong)*(uint *)(uVar7 + 3);
    internal::operator<<(pbVar3,(Brief *)&local_18);
    pcVar5 = "\n - interpreter_trampoline: ";
    uVar6 = 0x1c;
    goto LAB_00f30874;
  case 0x62:
    local_18 = uVar7;
    PromiseCapability::PromiseCapabilityPrint((PromiseCapability *)&local_18,param_1);
    break;
  case 99:
    local_18 = uVar7;
    PromiseReaction::PromiseReactionPrint((PromiseReaction *)&local_18,param_1);
    break;
  case 100:
    local_18 = uVar7;
    PrototypeInfo::PrototypeInfoPrint((PrototypeInfo *)&local_18,param_1);
    break;
  case 0x65:
    local_18 = uVar7;
    Script::ScriptPrint((Script *)&local_18,param_1);
    break;
  case 0x66:
    local_18 = uVar7;
    TorqueGeneratedSmiBox<v8::internal::SmiBox,v8::internal::Struct>::SmiBoxPrint
              ((TorqueGeneratedSmiBox<v8::internal::SmiBox,v8::internal::Struct> *)&local_18,param_1
              );
    break;
  case 0x67:
    local_18 = uVar7;
    TorqueGeneratedSmiPair<v8::internal::SmiPair,v8::internal::Struct>::SmiPairPrint
              ((TorqueGeneratedSmiPair<v8::internal::SmiPair,v8::internal::Struct> *)&local_18,
               param_1);
    break;
  case 0x68:
    local_18 = uVar7;
    TorqueGeneratedSortState<v8::internal::SortState,v8::internal::Struct>::SortStatePrint
              ((TorqueGeneratedSortState<v8::internal::SortState,v8::internal::Struct> *)&local_18,
               param_1);
    break;
  case 0x69:
    local_18 = uVar7;
    TorqueGeneratedSourcePositionTableWithFrameCache<v8::internal::SourcePositionTableWithFrameCache,v8::internal::Struct>
    ::SourcePositionTableWithFrameCachePrint
              ((TorqueGeneratedSourcePositionTableWithFrameCache<v8::internal::SourcePositionTableWithFrameCache,v8::internal::Struct>
                *)&local_18,param_1);
    break;
  case 0x6a:
    local_18 = uVar7;
    SourceTextModuleInfoEntry::SourceTextModuleInfoEntryPrint
              ((SourceTextModuleInfoEntry *)&local_18,param_1);
    break;
  case 0x6b:
    local_18 = uVar7;
    StackFrameInfo::StackFrameInfoPrint((StackFrameInfo *)&local_18,param_1);
    break;
  case 0x6c:
    local_38 = uVar7;
    PrintHeader((HeapObject *)&local_38,param_1,"StackTraceFrame");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - frame_index: ",0x11);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*(int *)(uVar7 + 7) >> 1
              );
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - id: ",8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
               *(int *)(uVar7 + 0xf) >> 1);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - frame_info: ",0x10);
    local_18 = (ulong)pIVar8 | (ulong)*(uint *)(uVar7 + 0xb);
    internal::operator<<(pbVar3,(Brief *)&local_18);
    break;
  case 0x6d:
    local_18 = uVar7;
    TorqueGeneratedTemplateObjectDescription<v8::internal::TemplateObjectDescription,v8::internal::Struct>
    ::TemplateObjectDescriptionPrint
              ((TorqueGeneratedTemplateObjectDescription<v8::internal::TemplateObjectDescription,v8::internal::Struct>
                *)&local_18,param_1);
    break;
  case 0x6e:
    local_18 = uVar7;
    TorqueGeneratedTuple2<v8::internal::Tuple2,v8::internal::Struct>::Tuple2Print
              ((TorqueGeneratedTuple2<v8::internal::Tuple2,v8::internal::Struct> *)&local_18,param_1
              );
    break;
  case 0x6f:
    local_18 = uVar7;
    TorqueGeneratedTuple3<v8::internal::Tuple3,v8::internal::Struct>::Tuple3Print
              ((TorqueGeneratedTuple3<v8::internal::Tuple3,v8::internal::Struct> *)&local_18,param_1
              );
    break;
  case 0x70:
    local_18 = uVar7;
    WasmCapiFunctionData::WasmCapiFunctionDataPrint((WasmCapiFunctionData *)&local_18,param_1);
    break;
  case 0x71:
    local_38 = uVar7;
    PrintHeader((HeapObject *)&local_38,param_1,"WasmDebugInfo");
    pcVar5 = "\n - wasm_instance: ";
    uVar6 = 0x13;
    goto LAB_00f309c4;
  case 0x72:
    local_18 = uVar7;
    PrintHeader((HeapObject *)&local_18,param_1,"WasmExceptionTag");
    this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"\n - index: ",0xb);
    iVar4 = *(int *)(uVar7 + 3);
LAB_00f3081c:
    iVar4 = iVar4 >> 1;
    goto LAB_00f30820;
  case 0x73:
    local_18 = uVar7;
    WasmExportedFunctionData::WasmExportedFunctionDataPrint
              ((WasmExportedFunctionData *)&local_18,param_1);
    break;
  case 0x74:
    local_18 = uVar7;
    WasmIndirectFunctionTable::WasmIndirectFunctionTablePrint
              ((WasmIndirectFunctionTable *)&local_18,param_1);
    break;
  case 0x75:
    local_38 = uVar7;
    PrintHeader((HeapObject *)&local_38,param_1,"WasmJSFunctionData");
    pcVar5 = "\n - wrapper_code: ";
    uVar6 = 0x12;
LAB_00f30874:
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,pcVar5,uVar6);
    local_18 = (ulong)*(uint *)(uVar7 + 7);
LAB_00f309d0:
    local_18 = (ulong)pIVar8 | local_18;
    internal::operator<<(pbVar3,(Brief *)&local_18);
    goto LAB_00f309e0;
  case 0x76:
  case 0x77:
  case 0x79:
  case 0x7a:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
    pcVar5 = "FixedArray";
    goto LAB_00f2fe4c;
  case 0x78:
    local_18 = uVar7;
    EphemeronHashTable::EphemeronHashTablePrint((EphemeronHashTable *)&local_18,param_1);
    break;
  case 0x7b:
    local_18 = uVar7;
    NumberDictionary::NumberDictionaryPrint((NumberDictionary *)&local_18,param_1);
    break;
  case 0x80:
    local_18 = uVar7;
    ObjectHashTable::ObjectHashTablePrint((ObjectHashTable *)&local_18,param_1);
    break;
  case 0x81:
    pcVar5 = "ClosureFeedbackCellArray";
    goto LAB_00f2fe4c;
  case 0x82:
    pcVar5 = "ObjectBoilerplateDescription";
LAB_00f2fe4c:
    local_18 = uVar7;
    PrintHeader((HeapObject *)&local_18,param_1,pcVar5);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - length: ",0xc);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*(int *)(uVar7 + 3) >> 1
              );
    FUN_00f3cc20(param_1,uVar7);
    goto LAB_00f309e0;
  case 0x83:
    local_18 = uVar7;
    ScopeInfo::ScopeInfoPrint((ScopeInfo *)&local_18,param_1);
    break;
  case 0x84:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x90:
  case 0x91:
    FUN_00f3df44(param_1,uVar7,"Context");
    return;
  case 0x85:
    local_18 = uVar7;
    PrintHeader((HeapObject *)&local_18,param_1,"ByteArray");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - length: ",0xc);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                        *(int *)(uVar7 + 3) >> 1);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,"\n - data-start: ",0x10);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                        (void *)(uVar7 + 7));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"\n",1);
    break;
  case 0x86:
    local_18 = uVar7;
    PrintHeader((HeapObject *)&local_18,param_1,"BytecodeArray");
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
    BytecodeArray::Disassemble((BytecodeArray *)&local_18,param_1);
    break;
  case 0x87:
    local_18 = uVar7;
    PrintHeader((HeapObject *)&local_18,param_1,"FixedDoubleArray");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - length: ",0xc);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*(int *)(uVar7 + 3) >> 1
              );
    FUN_00f3cf10(param_1,uVar7,*(int *)(uVar7 + 3) >> 1);
    goto LAB_00f309e0;
  case 0x8f:
    FUN_00f3df44(param_1,uVar7,"NativeContext");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," - microtask_queue: ",0x14);
    param_1 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                         *(void **)(uVar7 + 0x423));
    goto LAB_00f3097c;
  case 0x92:
  case 0x93:
  case 0x94:
    pbVar3 = std::__ndk1::operator<<(param_1,"UNKNOWN TYPE ");
    internal::operator<<
              (pbVar3,*(undefined2 *)
                       ((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this - 1))
                       + 7));
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x95:
    local_18 = uVar7;
    UncompiledDataWithPreparseData::UncompiledDataWithPreparseDataPrint
              ((UncompiledDataWithPreparseData *)&local_18,param_1);
    break;
  case 0x96:
    local_18 = uVar7;
    PrintHeader((HeapObject *)&local_18,param_1,"UncompiledDataWithoutPreparseData");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - start position: ",0x14);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,*(int *)(uVar7 + 7));
    this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"\n - end position: ",0x12);
    iVar4 = *(int *)(uVar7 + 0xb);
    goto LAB_00f30820;
  case 0x97:
    local_18 = uVar7;
    WeakFixedArray::WeakFixedArrayPrint((WeakFixedArray *)&local_18,param_1);
    break;
  case 0x98:
    local_18 = uVar7;
    PrintHeader((HeapObject *)&local_18,param_1,"TransitionArray");
    TransitionArray::PrintInternal((TransitionArray *)&local_18,param_1);
    break;
  case 0x99:
    local_38 = uVar7;
    PrintHeader((HeapObject *)&local_38,param_1,"Cell");
    pcVar5 = "\n - value: ";
    uVar6 = 0xb;
LAB_00f309c4:
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,pcVar5,uVar6);
    local_18 = (ulong)*(uint *)(uVar7 + 3);
    goto LAB_00f309d0;
  case 0x9a:
    local_18 = uVar7;
    PrintHeader((HeapObject *)&local_18,param_1,"Code");
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
    if (FLAG_use_verbose_printer != '\0') {
      Code::Disassemble((Code *)&local_18,(char *)0x0,param_1,pIVar8,0);
    }
    break;
  case 0x9b:
    local_18 = uVar7;
    PrintHeader((HeapObject *)&local_18,param_1,"CodeDataContainer");
    this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"\n - kind_specific_flags: ",0x19);
    iVar4 = *(int *)(uVar7 + 7);
LAB_00f30820:
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<(this_00,iVar4);
    goto LAB_00f309e0;
  case 0x9c:
    local_18 = uVar7;
    DescriptorArray::DescriptorArrayPrint((DescriptorArray *)&local_18,param_1);
    break;
  case 0x9d:
    local_18 = uVar7;
    EmbedderDataArray::EmbedderDataArrayPrint((EmbedderDataArray *)&local_18,param_1);
    break;
  case 0x9e:
    local_18 = uVar7;
    FeedbackMetadata::FeedbackMetadataPrint((FeedbackMetadata *)&local_18,param_1);
    break;
  case 0x9f:
    local_18 = uVar7;
    FeedbackVector::FeedbackVectorPrint((FeedbackVector *)&local_18,param_1);
    break;
  case 0xa0:
    pcVar5 = "filler";
    uVar7 = 6;
    goto LAB_00f2fde4;
  case 0xa1:
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"free space, size ",0x11);
    param_1 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                         *(int *)(uVar7 + 3) >> 1);
LAB_00f3097c:
    pcVar5 = "\n";
    uVar7 = 1;
LAB_00f2fde4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar5,uVar7)
    ;
    return;
  case 0xa2:
    local_18 = uVar7;
    Map::MapPrint((Map *)&local_18,param_1);
    break;
  case 0xa3:
    local_18 = uVar7;
    PreparseData::PreparseDataPrint((PreparseData *)&local_18,param_1);
    break;
  case 0xa4:
    local_18 = uVar7;
    PropertyArray::PropertyArrayPrint((PropertyArray *)&local_18,param_1);
    break;
  case 0xa5:
    local_18 = uVar7;
    PropertyCell::PropertyCellPrint((PropertyCell *)&local_18,param_1);
    break;
  case 0xa6:
    local_18 = uVar7;
    SharedFunctionInfo::SharedFunctionInfoPrint((SharedFunctionInfo *)&local_18,param_1);
    break;
  case 0xa7:
    local_18 = uVar7;
    WeakArrayList::WeakArrayListPrint((WeakArrayList *)&local_18,param_1);
    break;
  case 0xa8:
    local_18 = uVar7;
    WeakCell::WeakCellPrint((WeakCell *)&local_18,param_1);
    break;
  case 0xa9:
    local_38 = uVar7;
    PrintHeader((HeapObject *)&local_38,param_1,"JSProxy");
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - target: ",0xc);
    local_18 = (ulong)pIVar8 | (ulong)*(uint *)(uVar7 + 7);
    Object::ShortPrint((Object *)&local_18,param_1);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\n - handler: ",0xd);
    local_18 = (ulong)pIVar8 | (ulong)*(uint *)(uVar7 + 0xb);
    Object::ShortPrint((Object *)&local_18,param_1);
LAB_00f309e0:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\n",1);
    break;
  case 0xaa:
    local_18 = uVar7;
    JSGlobalObject::JSGlobalObjectPrint((JSGlobalObject *)&local_18,param_1);
    break;
  case 0xab:
    FUN_00f3d5b0(param_1,uVar7,"JSGlobalProxy");
    if (*(int *)(*(long *)(pIVar8 + 0x9508) + 8) == 0) {
      pcVar5 = "\n - native context: ";
      uVar6 = 0x14;
      goto LAB_00f30e28;
    }
    goto LAB_00f30e44;
  case 0xac:
    FUN_00f3d5b0(param_1,uVar7,"JSModuleNamespace");
    pcVar5 = "\n - module: ";
    uVar6 = 0xc;
    goto LAB_00f30e28;
  case 0x410:
  case 0x420:
  case 0x421:
  case 0x422:
  case 0x427:
  case 0x429:
    FUN_00f3d5b0(param_1,uVar7,0);
    FUN_00f3d880(param_1,uVar7,1);
    return;
  case 0x411:
    FUN_00f3d5b0(param_1,uVar7,"JSPrimitiveWrapper");
    pcVar5 = "\n - value: ";
    goto LAB_00f30e24;
  case 0x412:
  case 0x413:
  case 0x414:
    pcVar5 = "JSMapIterator";
    goto LAB_00f2fee0;
  case 0x415:
  case 0x416:
    pcVar5 = "JSSetIterator";
LAB_00f2fee0:
    FUN_00f3d5b0(param_1,uVar7,pcVar5);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - table: ",0xb);
    local_18 = (ulong)pIVar8 | (ulong)*(uint *)(uVar7 + 0xb);
    internal::operator<<(pbVar3,(Brief *)&local_18);
    pcVar5 = "\n - index: ";
    uVar6 = 0xb;
    goto LAB_00f2ff20;
  case 0x417:
  case 0x418:
  case 0x419:
    local_18 = uVar7;
    JSGeneratorObject::JSGeneratorObjectPrint((JSGeneratorObject *)&local_18,param_1);
    break;
  case 0x41a:
    local_18 = uVar7;
    JSDataView::JSDataViewPrint((JSDataView *)&local_18,param_1);
    break;
  case 0x41b:
    local_18 = uVar7;
    JSTypedArray::JSTypedArrayPrint((JSTypedArray *)&local_18,param_1);
    break;
  case 0x41c:
    pcVar5 = "JSMap";
    goto LAB_00f30dec;
  case 0x41d:
    pcVar5 = "JSSet";
LAB_00f30dec:
    FUN_00f3d5b0(param_1,uVar7,pcVar5);
    pcVar5 = " - table: ";
    uVar6 = 10;
    goto LAB_00f30e28;
  case 0x41e:
    pcVar5 = "JSWeakMap";
    goto LAB_00f30e10;
  case 0x41f:
    pcVar5 = "JSWeakSet";
LAB_00f30e10:
    FUN_00f3d5b0(param_1,uVar7,pcVar5);
    pcVar5 = "\n - table: ";
LAB_00f30e24:
    uVar6 = 0xb;
    goto LAB_00f30e28;
  case 0x423:
    FUN_00f3d5b0(param_1,uVar7,"JSArray");
    pcVar5 = "\n - length: ";
    uVar6 = 0xc;
    goto LAB_00f30e28;
  case 0x424:
    local_18 = uVar7;
    JSArrayBuffer::JSArrayBufferPrint((JSArrayBuffer *)&local_18,param_1);
    break;
  case 0x425:
    local_18 = uVar7;
    JSArrayIterator::JSArrayIteratorPrint((JSArrayIterator *)&local_18,param_1);
    break;
  case 0x426:
    FUN_00f3d5b0(param_1,uVar7,"JSAsyncFromSyncIterator");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - sync_iterator: ",0x13);
    local_18 = (ulong)pIVar8 | (ulong)*(uint *)(uVar7 + 0xb);
    internal::operator<<(pbVar3,(Brief *)&local_18);
    pcVar5 = "\n - next: ";
    uVar6 = 10;
    goto LAB_00f2ff20;
  case 0x428:
    local_18 = uVar7;
    JSDate::JSDatePrint((JSDate *)&local_18,param_1);
    break;
  case 0x42a:
    local_18 = uVar7;
    JSFinalizationGroup::JSFinalizationGroupPrint((JSFinalizationGroup *)&local_18,param_1);
    break;
  case 0x42b:
    FUN_00f3d5b0(param_1,uVar7,"JSFinalizationGroupCleanupIterator");
    pcVar5 = "\n - finalization_group: ";
    uVar6 = 0x18;
    goto LAB_00f30e28;
  case 0x42c:
    local_18 = uVar7;
    JSMessageObject::JSMessageObjectPrint((JSMessageObject *)&local_18,param_1);
    break;
  case 0x42d:
    local_18 = uVar7;
    JSPromise::JSPromisePrint((JSPromise *)&local_18,param_1);
    break;
  case 0x42e:
    FUN_00f3d5b0(param_1,uVar7,"JSRegExp");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - data: ",10);
    local_18 = (ulong)pIVar8 | (ulong)*(uint *)(uVar7 + 0xb);
    internal::operator<<(pbVar3,(Brief *)&local_18);
    pcVar5 = "\n - source: ";
    uVar6 = 0xc;
LAB_00f2ff20:
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,pcVar5,uVar6);
    uVar1 = *(uint *)(uVar7 + 0xf);
    goto LAB_00f30e34;
  case 0x42f:
    local_18 = uVar7;
    JSRegExpStringIterator::JSRegExpStringIteratorPrint((JSRegExpStringIterator *)&local_18,param_1)
    ;
    break;
  case 0x430:
    FUN_00f3d5b0(param_1,uVar7,"JSStringIterator");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - string: ",0xc);
    local_18 = (ulong)pIVar8 | (ulong)*(uint *)(uVar7 + 0xb);
    internal::operator<<(pbVar3,(Brief *)&local_18);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - index: ",0xb);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
               *(int *)(uVar7 + 0xf) >> 1);
    goto LAB_00f30e44;
  case 0x431:
    FUN_00f3d5b0(param_1,uVar7,"JSWeakRef");
    pcVar5 = "\n - target: ";
    uVar6 = 0xc;
LAB_00f30e28:
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,pcVar5,uVar6);
    uVar1 = *(uint *)(uVar7 + 0xb);
LAB_00f30e34:
    local_18 = (ulong)pIVar8 | (ulong)uVar1;
    internal::operator<<(pbVar3,(Brief *)&local_18);
LAB_00f30e44:
    FUN_00f3d880(param_1,uVar7,1);
    break;
  case 0x432:
    local_38 = uVar7;
    PrintHeader((HeapObject *)&local_38,param_1,"WasmExceptionObject");
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - serialized_signature: ",0x1a);
    local_18 = (ulong)pIVar8 | (ulong)*(uint *)(uVar7 + 0xb);
    internal::operator<<(pbVar3,(Brief *)&local_18);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\n - exception_tag: ",0x13);
    local_18 = (ulong)*(uint *)(uVar7 + 0xf);
    goto LAB_00f309d0;
  case 0x433:
    local_18 = uVar7;
    WasmGlobalObject::WasmGlobalObjectPrint((WasmGlobalObject *)&local_18,param_1);
    break;
  case 0x434:
    local_18 = uVar7;
    WasmInstanceObject::WasmInstanceObjectPrint((WasmInstanceObject *)&local_18,param_1);
    break;
  case 0x435:
    local_18 = uVar7;
    WasmMemoryObject::WasmMemoryObjectPrint((WasmMemoryObject *)&local_18,param_1);
    break;
  case 0x436:
    local_18 = uVar7;
    WasmModuleObject::WasmModuleObjectPrint((WasmModuleObject *)&local_18,param_1);
    break;
  case 0x437:
    local_18 = uVar7;
    WasmTableObject::WasmTableObjectPrint((WasmTableObject *)&local_18,param_1);
    break;
  case 0x438:
    local_18 = uVar7;
    JSBoundFunction::JSBoundFunctionPrint((JSBoundFunction *)&local_18,param_1);
    break;
  case 0x439:
    local_18 = uVar7;
    JSFunction::JSFunctionPrint((JSFunction *)&local_18,param_1);
  }
  return;
}

