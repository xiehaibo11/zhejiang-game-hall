
/* v8::internal::V8HeapExplorer::GetSystemEntryName(v8::internal::HeapObject) */

char * __thiscall v8::internal::V8HeapExplorer::GetSystemEntryName(undefined8 param_1,ulong param_2)

{
  char *pcVar1;
  
  pcVar1 = "system / Cell";
  switch(*(undefined2 *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 - 1)) + 7)) {
  case 0x43:
    return "system / Oddball";
  default:
    pcVar1 = "system";
switchD_0119fac8_caseD_99:
    return pcVar1;
  case 0x46:
    return "system / Foreign";
  case 0x47:
    return "system / PromiseFulfillReactionJobTask";
  case 0x48:
    return "system / PromiseRejectReactionJobTask";
  case 0x49:
    return "system / CallableTask";
  case 0x4a:
    return "system / CallbackTask";
  case 0x4b:
    return "system / PromiseResolveThenableJobTask";
  case 0x4e:
    return "system / FunctionTemplateInfo";
  case 0x4f:
    return "system / ObjectTemplateInfo";
  case 0x50:
    return "system / AccessCheckInfo";
  case 0x51:
    return "system / AccessorInfo";
  case 0x52:
    return "system / AccessorPair";
  case 0x53:
    return "system / AliasedArgumentsEntry";
  case 0x54:
    return "system / AllocationMemento";
  case 0x55:
    return "system / AllocationSite";
  case 0x56:
    return "system / ArrayBoilerplateDescription";
  case 0x57:
    return "system / AsmWasmData";
  case 0x58:
    return "system / AsyncGeneratorRequest";
  case 0x5a:
    return "system / ClassPositions";
  case 0x5b:
    return "system / DebugInfo";
  case 0x5c:
    return "system / EnumCache";
  case 0x5e:
    return "system / FunctionTemplateRareData";
  case 0x5f:
    return "system / InterceptorInfo";
  case 0x60:
    return "system / InternalClass";
  case 0x61:
    return "system / InterpreterData";
  case 0x62:
    return "system / PromiseCapability";
  case 99:
    return "system / PromiseReaction";
  case 100:
    return "system / PrototypeInfo";
  case 0x65:
    return "system / Script";
  case 0x66:
    return "system / SmiBox";
  case 0x67:
    return "system / SmiPair";
  case 0x68:
    return "system / SortState";
  case 0x69:
    return "system / SourcePositionTableWithFrameCache";
  case 0x6a:
    return "system / SourceTextModuleInfoEntry";
  case 0x6b:
    return "system / StackFrameInfo";
  case 0x6c:
    return "system / StackTraceFrame";
  case 0x6d:
    return "system / TemplateObjectDescription";
  case 0x6e:
    return "system / Tuple2";
  case 0x6f:
    return "system / Tuple3";
  case 0x70:
    return "system / WasmCapiFunctionData";
  case 0x71:
    return "system / WasmDebugInfo";
  case 0x72:
    return "system / WasmExceptionTag";
  case 0x73:
    return "system / WasmExportedFunctionData";
  case 0x74:
    return "system / WasmIndirectFunctionTable";
  case 0x75:
    return "system / WasmJSFunctionData";
  case 0x99:
    goto switchD_0119fac8_caseD_99;
  case 0xa2:
    pcVar1 = "system / Map (String)";
    switch(*(undefined2 *)(param_2 + 7)) {
    case 0:
      return "system / Map (InternalizedString)";
    default:
      return "system / Map";
    case 2:
      return "system / Map (ExternalInternalizedString)";
    case 8:
      return "system / Map (OneByteInternalizedString)";
    case 10:
      return "system / Map (ExternalOneByteInternalizedString)";
    case 0x12:
      return "system / Map (UncachedExternalInternalizedString)";
    case 0x1a:
      return "system / Map (UncachedExternalOneByteInternalizedString)";
    case 0x20:
      goto switchD_0119fac8_caseD_99;
    case 0x21:
      return "system / Map (ConsString)";
    case 0x22:
      return "system / Map (ExternalString)";
    case 0x23:
      return "system / Map (SlicedString)";
    case 0x25:
      return "system / Map (ThinString)";
    case 0x28:
      return "system / Map (OneByteString)";
    case 0x29:
      return "system / Map (ConsOneByteString)";
    case 0x2a:
      return "system / Map (ExternalOneByteString)";
    case 0x2b:
      return "system / Map (SlicedOneByteString)";
    case 0x2d:
      return "system / Map (ThinOneByteString)";
    case 0x32:
      return "system / Map (UncachedExternalString)";
    case 0x3a:
      return "system / Map (UncachedExternalOneByteString)";
    }
  case 0xa5:
    return "system / PropertyCell";
  }
}

