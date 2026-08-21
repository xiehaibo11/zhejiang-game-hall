
/* v8::internal::HeapObject::HeapObjectShortPrint(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::HeapObject::HeapObjectShortPrint(HeapObject *this,basic_ostream *param_1)

{
  short sVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  basic_ostream *pbVar4;
  size_t sVar5;
  char *pcVar6;
  basic_ostream<char,std::__ndk1::char_traits<char>> *this_00;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  undefined ***pppuVar11;
  undefined ***local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 *local_58;
  undefined **local_50;
  undefined **local_48;
  char *local_28;
  
  local_70 = *(undefined ****)this;
  local_68 = 0x10c;
  pbVar4 = (basic_ostream *)internal::operator<<(param_1,(AsHex *)&local_70);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4," ",1);
  pppuVar11 = *(undefined ****)this;
  uVar8 = (ulong)pppuVar11 & 0xffffffff00000000;
  if (*(ushort *)((uVar8 | 7) + (ulong)*(uint *)((long)pppuVar11 + -1)) < 0x40) {
    local_70 = &local_50;
    local_50 = &PTR__HeapStringAllocator_01cbbc78;
    local_68 = 0x1000000001;
    local_60 = 0;
    local_58 = (undefined1 *)HeapStringAllocator::allocate((HeapStringAllocator *)&local_50,0x10);
    *local_58 = 0;
    local_28 = *(char **)this;
    String::StringShortPrint((String *)&local_28,(StringStream *)&local_70,true);
LAB_01109eb8:
    StringStream::ToCString();
    pcVar6 = local_28;
    sVar5 = strlen(local_28);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar6,sVar5)
    ;
    pcVar6 = local_28;
    local_28 = (char *)0x0;
    if (pcVar6 != (char *)0x0) {
      operator_delete__(pcVar6);
    }
    goto LAB_01109ef0;
  }
  if (0xa9 < *(ushort *)((uVar8 | 7) + (ulong)*(uint *)((long)pppuVar11 + -1))) {
    local_70 = &local_50;
    local_50 = &PTR__HeapStringAllocator_01cbbc78;
    local_68 = 0x1000000001;
    local_60 = 0;
    local_58 = (undefined1 *)HeapStringAllocator::allocate((HeapStringAllocator *)&local_50,0x10);
    *local_58 = 0;
    local_28 = *(char **)this;
    JSObject::JSObjectShortPrint((JSObject *)&local_28,(StringStream *)&local_70);
    goto LAB_01109eb8;
  }
  sVar1 = *(short *)((uVar8 | *(uint *)((long)pppuVar11 + -1)) + 7);
  pbVar4 = param_1;
  switch(sVar1) {
  case 0x40:
    local_70 = pppuVar11;
    Symbol::SymbolShortPrint((Symbol *)&local_70,param_1);
    return;
  case 0x41:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"<BigInt ",8)
    ;
    local_70 = *(undefined ****)this;
    BigInt::BigIntShortPrint((BigInt *)&local_70,param_1);
    goto LAB_0110ac98;
  case 0x42:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"<HeapNumber ",0xc);
    local_70 = *(undefined ****)this;
    HeapNumber::HeapNumberShortPrint((HeapNumber *)&local_70,param_1);
    goto LAB_0110ac98;
  case 0x43:
    iVar10 = (int)pppuVar11;
    if (iVar10 == *(int *)(uVar8 + 0xa0)) {
      pcVar6 = "<undefined>";
      uVar8 = 0xb;
      goto LAB_0110aca8;
    }
    if (iVar10 == *(int *)(uVar8 + 0xa8)) {
      pcVar6 = "<the_hole>";
      uVar8 = 10;
      goto LAB_0110aca8;
    }
    if (iVar10 == *(int *)(uVar8 + 0xb0)) {
      pcVar6 = "<null>";
    }
    else {
      if (iVar10 != *(int *)(uVar8 + 0xb8)) {
        if (iVar10 == *(int *)(uVar8 + 0xc0)) {
          pcVar6 = "<false>";
          uVar8 = 7;
          goto LAB_0110aca8;
        }
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,"<Odd Oddball: ",0xe);
        local_50 = (undefined **)
                   (*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0xb));
        String::ToCString(&local_70,&local_50,1,1,0);
        pppuVar11 = local_70;
        sVar5 = strlen((char *)local_70);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (param_1,(char *)pppuVar11,sVar5);
        pppuVar11 = local_70;
        local_70 = (undefined ***)0x0;
        if (pppuVar11 != (undefined ***)0x0) {
          operator_delete__(pppuVar11);
        }
        goto LAB_0110ac98;
      }
      pcVar6 = "<true>";
    }
    uVar8 = 6;
    goto LAB_0110aca8;
  case 0x44:
  case 0x45:
  case 0x4c:
  case 0x4d:
  case 0x78:
  case 0x92:
  case 0x93:
  case 0x94:
  case 0x97:
  case 0x9b:
  case 0x9d:
  case 0x9e:
  case 0xa0:
  case 0xa7:
  case 0xa8:
    goto switchD_01109f30_caseD_44;
  case 0x46:
    pcVar6 = "<Foreign>";
    goto LAB_0110ac08;
  case 0x47:
    pcVar6 = "<PromiseFulfillReactionJobTask";
    goto LAB_0110a080;
  case 0x48:
    pcVar6 = "<PromiseRejectReactionJobTask";
    sVar5 = 0x1d;
    goto LAB_0110ac94;
  case 0x49:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"<CallableTask",0xd);
    uVar8 = *(ulong *)this;
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," callable=",10);
    uVar7 = *(uint *)(uVar8 + 3);
    goto LAB_0110a14c;
  case 0x4a:
    pcVar6 = "<CallbackTask";
    goto LAB_0110a0c4;
  case 0x4b:
    pcVar6 = "<PromiseResolveThenableJobTask";
LAB_0110a080:
    sVar5 = 0x1e;
    goto LAB_0110ac94;
  case 0x4e:
    pcVar6 = "<FunctionTemplateInfo";
    goto LAB_0110a478;
  case 0x4f:
    pcVar6 = "<ObjectTemplateInfo";
    goto LAB_0110a4dc;
  case 0x50:
    pcVar6 = "<AccessCheckInfo";
    goto LAB_0110a3c0;
  case 0x51:
    pcVar6 = "<AccessorInfo";
    goto LAB_0110a0c4;
  case 0x52:
    pcVar6 = "<AccessorPair";
LAB_0110a0c4:
    sVar5 = 0xd;
    goto LAB_0110ac94;
  case 0x53:
    pcVar6 = "<AliasedArgumentsEntry";
    goto LAB_0110a180;
  case 0x54:
    pcVar6 = "<AllocationMemento";
    goto LAB_0110a318;
  case 0x55:
    pcVar6 = "<AllocationSite";
    goto LAB_0110a3ac;
  case 0x56:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"<ArrayBoilerplateDescription",0x1c);
    uVar8 = *(ulong *)this;
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," ",1);
    local_70 = (undefined ***)CONCAT71(local_70._1_7_,(char)(*(uint *)(uVar8 + 3) >> 1));
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,(char *)&local_70,1);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,", ",2);
    uVar7 = *(uint *)(uVar8 + 7);
LAB_0110a14c:
    local_70 = (undefined ***)(uVar8 & 0xffffffff00000000 | (ulong)uVar7);
    internal::operator<<(pbVar4,(Brief *)&local_70);
    goto LAB_0110ac98;
  case 0x57:
    pcVar6 = "<AsmWasmData";
    sVar5 = 0xc;
    goto LAB_0110ac94;
  case 0x58:
    pcVar6 = "<AsyncGeneratorRequest";
LAB_0110a180:
    sVar5 = 0x16;
    goto LAB_0110ac94;
  case 0x59:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"<CallHandlerInfo ",0x11);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"callback= ",10);
    local_70 = (undefined ***)(uVar8 | *(uint *)((long)pppuVar11 + 3));
    internal::operator<<(pbVar4,(Brief *)&local_70);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,", js_callback= ",0xf);
    local_70 = (undefined ***)(uVar8 | *(uint *)((long)pppuVar11 + 7));
    internal::operator<<(pbVar4,(Brief *)&local_70);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,", data= ",8);
    local_70 = (undefined ***)(uVar8 | *(uint *)((long)pppuVar11 + 0xb));
    internal::operator<<(pbVar4,(Brief *)&local_70);
    if (*(int *)((long)pppuVar11 + -1) == *(int *)(uVar8 + 600)) {
      pcVar6 = ", side_effect_free= true>";
      uVar8 = 0x19;
    }
    else {
      pcVar6 = ", side_effect_free= false>";
      uVar8 = 0x1a;
    }
    goto LAB_0110aca8;
  case 0x5a:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"<ClassPositions",0xf);
    lVar9 = *(long *)this;
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," ",1);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                        *(int *)(lVar9 + 3) >> 1);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,", ",2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,*(int *)(lVar9 + 7) >> 1
              );
    goto LAB_0110ac98;
  case 0x5b:
    pcVar6 = "<DebugInfo";
    goto LAB_0110a378;
  case 0x5c:
    pcVar6 = "<EnumCache";
    goto LAB_0110a378;
  case 0x5d:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"<FeedbackCell[",0xe);
    lVar9 = *(long *)this;
    if (*(int *)(lVar9 + -1) == *(int *)(uVar8 + 0x210)) {
      pcVar6 = "no feedback";
      uVar8 = 0xb;
    }
    else if (*(int *)(lVar9 + -1) == *(int *)(uVar8 + 0x210)) {
      pcVar6 = "no closures";
      uVar8 = 0xb;
    }
    else if (*(int *)(lVar9 + -1) == *(int *)(uVar8 + 0x220)) {
      pcVar6 = "one closure";
      uVar8 = 0xb;
    }
    else if (*(int *)(lVar9 + -1) == *(int *)(uVar8 + 0x1f8)) {
      pcVar6 = "many closures";
      uVar8 = 0xd;
    }
    else {
      pcVar6 = "!!!INVALID MAP!!!";
      uVar8 = 0x11;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar6,uVar8)
    ;
    pcVar6 = "]>";
    uVar8 = 2;
    goto LAB_0110aca8;
  case 0x5e:
    pcVar6 = "<FunctionTemplateRareData";
    goto LAB_0110a4b4;
  case 0x5f:
    pcVar6 = "<InterceptorInfo";
    goto LAB_0110a3c0;
  case 0x60:
    pcVar6 = "<InternalClass";
    goto LAB_0110a48c;
  case 0x61:
    pcVar6 = "<InterpreterData";
    goto LAB_0110a3c0;
  case 0x62:
    pcVar6 = "<PromiseCapability";
LAB_0110a318:
    sVar5 = 0x12;
    goto LAB_0110ac94;
  case 99:
    pcVar6 = "<PromiseReaction";
    goto LAB_0110a3c0;
  case 100:
    pcVar6 = "<PrototypeInfo";
    goto LAB_0110a48c;
  case 0x65:
    pcVar6 = "<Script";
    goto LAB_0110a350;
  case 0x66:
    pcVar6 = "<SmiBox";
LAB_0110a350:
    sVar5 = 7;
    goto LAB_0110ac94;
  case 0x67:
    pcVar6 = "<SmiPair";
    sVar5 = 8;
    goto LAB_0110ac94;
  case 0x68:
    pcVar6 = "<SortState";
LAB_0110a378:
    sVar5 = 10;
    goto LAB_0110ac94;
  case 0x69:
    pcVar6 = "<SourcePositionTableWithFrameCache";
    sVar5 = 0x22;
    goto LAB_0110ac94;
  case 0x6a:
    pcVar6 = "<SourceTextModuleInfoEntry";
    goto LAB_0110a4c8;
  case 0x6b:
    pcVar6 = "<StackFrameInfo";
LAB_0110a3ac:
    sVar5 = 0xf;
    goto LAB_0110ac94;
  case 0x6c:
    pcVar6 = "<StackTraceFrame";
LAB_0110a3c0:
    sVar5 = 0x10;
    goto LAB_0110ac94;
  case 0x6d:
    pcVar6 = "<TemplateObjectDescription";
    goto LAB_0110a4c8;
  case 0x6e:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"<Tuple2",7);
    uVar8 = *(ulong *)this;
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," ",1);
    local_70 = (undefined ***)(uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 3));
    pbVar4 = (basic_ostream *)internal::operator<<(pbVar4,(Brief *)&local_70);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,", ",2);
    local_50 = (undefined **)(uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 7));
    internal::operator<<(pbVar4,(Brief *)&local_50);
    goto LAB_0110ac98;
  case 0x6f:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"<Tuple3",7);
    local_70 = *(undefined ****)this;
    Tuple3::BriefPrintDetails((Tuple3 *)&local_70,param_1);
    goto LAB_0110ac98;
  case 0x70:
    pcVar6 = "<WasmCapiFunctionData";
LAB_0110a478:
    sVar5 = 0x15;
    goto LAB_0110ac94;
  case 0x71:
    pcVar6 = "<WasmDebugInfo";
LAB_0110a48c:
    sVar5 = 0xe;
    goto LAB_0110ac94;
  case 0x72:
    pcVar6 = "<WasmExceptionTag";
    sVar5 = 0x11;
    goto LAB_0110ac94;
  case 0x73:
    pcVar6 = "<WasmExportedFunctionData";
LAB_0110a4b4:
    sVar5 = 0x19;
    goto LAB_0110ac94;
  case 0x74:
    pcVar6 = "<WasmIndirectFunctionTable";
LAB_0110a4c8:
    sVar5 = 0x1a;
    goto LAB_0110ac94;
  case 0x75:
    pcVar6 = "<WasmJSFunctionData";
LAB_0110a4dc:
    sVar5 = 0x13;
    goto LAB_0110ac94;
  case 0x76:
    pcVar6 = "<FixedArray[";
    uVar8 = 0xc;
    break;
  case 0x77:
    pcVar6 = "<HashTable[";
    goto LAB_0110a9a4;
  case 0x79:
    pcVar6 = "<GlobalDictionary[";
    uVar8 = 0x12;
    break;
  case 0x7a:
    pcVar6 = "<NameDictionary[";
    uVar8 = 0x10;
    break;
  case 0x7b:
    pcVar6 = "<NumberDictionary[";
    uVar8 = 0x12;
    break;
  case 0x7c:
    pcVar6 = "<OrderedHashMap[";
    uVar8 = 0x10;
    break;
  case 0x7d:
    pcVar6 = "<OrderedHashSet[";
    uVar8 = 0x10;
    break;
  case 0x7e:
    pcVar6 = "<OrderedNameDictionary[";
    uVar8 = 0x17;
    break;
  case 0x7f:
    pcVar6 = "<SimpleNumberDictionary[";
    uVar8 = 0x18;
    break;
  case 0x80:
    pcVar6 = "<StringTable[";
    uVar8 = 0xd;
    break;
  case 0x81:
    pcVar6 = "<ClosureFeedbackCellArray[";
    uVar8 = 0x1a;
    break;
  case 0x82:
    pcVar6 = "<ObjectBoilerplateDescription[";
    uVar8 = 0x1e;
    break;
  case 0x83:
    local_70 = pppuVar11;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"<ScopeInfo",10);
    if (1 < *(uint *)((long)pppuVar11 + 3)) {
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1," ",1);
      uVar3 = ScopeInfo::scope_type((ScopeInfo *)&local_70);
      pbVar4 = (basic_ostream *)internal::operator<<(pbVar4,uVar3);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4," ",1);
    }
    this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"[",1);
    pppuVar11 = local_70;
    goto LAB_0110a9b4;
  case 0x84:
    pcVar6 = "<ScriptContextTable[";
    uVar8 = 0x14;
    break;
  case 0x85:
    pcVar6 = "<ByteArray[";
    goto LAB_0110a9a4;
  case 0x86:
    pcVar6 = "<BytecodeArray[";
    uVar8 = 0xf;
    break;
  case 0x87:
    pcVar6 = "<FixedDoubleArray[";
    uVar8 = 0x12;
    break;
  case 0x88:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"<AwaitContext generator= ",0x19);
    local_70 = &local_50;
    local_50 = &PTR__HeapStringAllocator_01cbbc78;
    local_68 = 0x1000000001;
    local_60 = 0;
    local_58 = (undefined1 *)HeapStringAllocator::allocate((HeapStringAllocator *)&local_50,0x10);
    *local_58 = 0;
    uVar8 = *(ulong *)this;
    uVar7 = *(uint *)(uVar8 + 0xf);
    goto LAB_0110a870;
  case 0x89:
    pcVar6 = "<BlockContext[";
    goto LAB_0110a6d8;
  case 0x8a:
    pcVar6 = "<CatchContext[";
LAB_0110a6d8:
    uVar8 = 0xe;
    break;
  case 0x8b:
    pcVar6 = "<DebugEvaluateContext[";
    uVar8 = 0x16;
    break;
  case 0x8c:
    pcVar6 = "<EvalContext[";
    uVar8 = 0xd;
    break;
  case 0x8d:
    pcVar6 = "<FunctionContext[";
    uVar8 = 0x11;
    break;
  case 0x8e:
    pcVar6 = "<ModuleContext[";
    uVar8 = 0xf;
    break;
  case 0x8f:
    pcVar6 = "<NativeContext[";
    uVar8 = 0xf;
    break;
  case 0x90:
    pcVar6 = "<ScriptContext[";
    uVar8 = 0xf;
    break;
  case 0x91:
    pcVar6 = "<WithContext[";
    uVar8 = 0xd;
    break;
  case 0x95:
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"<UncompiledDataWithPreparseData (",0x21);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                        *(int *)((long)pppuVar11 + 7));
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,", ",2);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                        *(int *)((long)pppuVar11 + 0xb));
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,") preparsed=",0xc);
    local_70 = (undefined ***)(uVar8 | *(uint *)((long)pppuVar11 + 0xf));
    param_1 = (basic_ostream *)internal::operator<<(pbVar4,(Brief *)&local_70);
    pcVar6 = ">";
    uVar8 = 1;
    goto LAB_0110aca8;
  case 0x96:
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"<UncompiledDataWithoutPreparseData (",0x24);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                        *(int *)((long)pppuVar11 + 7));
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,", ",2);
    param_1 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                         *(int *)((long)pppuVar11 + 0xb));
    pcVar6 = ")]>";
    uVar8 = 3;
    goto LAB_0110aca8;
  case 0x98:
    pcVar6 = "<TransitionArray[";
    uVar8 = 0x11;
    break;
  case 0x99:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"<Cell value= ",0xd);
    local_70 = &local_50;
    local_50 = &PTR__HeapStringAllocator_01cbbc78;
    local_68 = 0x1000000001;
    local_60 = 0;
    local_58 = (undefined1 *)HeapStringAllocator::allocate((HeapStringAllocator *)&local_50,0x10);
    *local_58 = 0;
    uVar8 = *(ulong *)this;
    uVar7 = *(uint *)(uVar8 + 3);
LAB_0110a870:
    local_28 = (char *)(uVar8 & 0xffffffff00000000 | (ulong)uVar7);
    Object::ShortPrint((Object *)&local_28,(StringStream *)&local_70);
    StringStream::ToCString();
    pcVar6 = local_28;
    sVar5 = strlen(local_28);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar6,sVar5)
    ;
    pcVar6 = local_28;
    local_28 = (char *)0x0;
    if (pcVar6 != (char *)0x0) {
      operator_delete__(pcVar6);
    }
    local_28 = (char *)CONCAT71(local_28._1_7_,0x3e);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,(char *)&local_28,1);
LAB_01109ef0:
    local_50 = &PTR__HeapStringAllocator_01cbbc78;
joined_r0x0110ace0:
    if (local_48 == (undefined **)0x0) {
      return;
    }
LAB_01109efc:
    operator_delete__(local_48);
    return;
  case 0x9a:
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"<Code ",6);
    pcVar6 = (char *)Code::Kind2String(*(uint *)((long)pppuVar11 + 0x17) >> 1 & 0x1f);
    sVar5 = strlen(pcVar6);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,pcVar6,sVar5);
    if (*(int *)((long)pppuVar11 + 0x27) != -1) {
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1," ",1);
      pcVar6 = (char *)Builtins::name(*(int *)((long)pppuVar11 + 0x27));
      sVar5 = strlen(pcVar6);
      goto LAB_0110ac94;
    }
    goto LAB_0110ac98;
  case 0x9c:
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"<DescriptorArray[",0x11);
    param_1 = (basic_ostream *)
              std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                         *(short *)(*(long *)this + 5));
    goto LAB_0110a9c0;
  case 0x9f:
    this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"<FeedbackVector[",0x10);
    uVar7 = *(uint *)(*(long *)this + 0xf);
    goto LAB_0110a9bc;
  case 0xa1:
    pcVar6 = "<FreeSpace[";
LAB_0110a9a4:
    uVar8 = 0xb;
    break;
  case 0xa2:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"<Map",4);
    lVar9 = *(long *)this;
    if (*(ushort *)(lVar9 + 7) < 0xaa) {
      if (*(char *)(lVar9 + 3) == '\0') goto LAB_0110ac98;
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"[",1);
      pbVar4 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                          (uint)*(byte *)(lVar9 + 3) << 2);
      pcVar6 = "]";
    }
    else {
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"(",1);
      pcVar6 = (char *)ElementsKindToString(*(byte *)(lVar9 + 10) >> 3);
      sVar5 = strlen(pcVar6);
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar4,pcVar6,sVar5);
      pcVar6 = ")";
    }
    sVar5 = 1;
LAB_0110ac94:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,pcVar6,sVar5);
LAB_0110ac98:
    pcVar6 = ">";
    uVar8 = 1;
    goto LAB_0110aca8;
  case 0xa3:
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"<PreparseData[data=",0x13);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                        *(int *)((long)pppuVar11 + 3));
    this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (pbVar4," children=",10);
    uVar7 = *(uint *)((long)pppuVar11 + 7);
    goto LAB_0110a9bc;
  case 0xa4:
    this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
              std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        (param_1,"<PropertyArray[",0xf);
    uVar7 = *(uint *)(*(long *)this + 3) >> 1 & 0x3ff;
    goto LAB_0110a9bc;
  case 0xa5:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"<PropertyCell name=",0x13);
    local_70 = (undefined ***)(uVar8 | *(uint *)((long)pppuVar11 + 3));
    pbVar4 = (basic_ostream *)internal::operator<<(param_1,(Brief *)&local_70);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4," value=",7);
    local_70 = &local_50;
    local_68 = 0x1000000001;
    local_60 = 0;
    local_50 = &PTR__HeapStringAllocator_01cbbc78;
    local_58 = (undefined1 *)HeapStringAllocator::allocate((HeapStringAllocator *)&local_50,0x10);
    *local_58 = 0;
    local_28 = (char *)(uVar8 | *(uint *)((long)pppuVar11 + 0xb));
    Object::ShortPrint((Object *)&local_28,(StringStream *)&local_70);
    StringStream::ToCString();
    pcVar6 = local_28;
    sVar5 = strlen(local_28);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar6,sVar5)
    ;
    pcVar6 = local_28;
    local_28 = (char *)0x0;
    if (pcVar6 != (char *)0x0) {
      operator_delete__(pcVar6);
    }
    local_28 = (char *)CONCAT71(local_28._1_7_,0x3e);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,(char *)&local_28,1);
    local_50 = &PTR__HeapStringAllocator_01cbbc78;
    if (local_48 == (undefined **)0x0) {
      return;
    }
    goto LAB_01109efc;
  case 0xa6:
    local_70 = pppuVar11;
    local_28 = (char *)SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_70);
    String::ToCString(&local_50,&local_28,1,1,0);
    if (*(char *)local_50 == '\0') {
      pcVar6 = "<SharedFunctionInfo>";
      uVar8 = 0x14;
    }
    else {
      pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"<SharedFunctionInfo ",0x14);
      ppuVar2 = local_50;
      sVar5 = strlen((char *)local_50);
      param_1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                          (pbVar4,(char *)ppuVar2,sVar5);
      pcVar6 = ">";
      uVar8 = 1;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar6,uVar8)
    ;
    local_48 = local_50;
    local_50 = (undefined **)0x0;
    goto joined_r0x0110ace0;
  case 0xa9:
    pcVar6 = "<JSProxy>";
LAB_0110ac08:
    uVar8 = 9;
    goto LAB_0110aca8;
  default:
    if (sVar1 == 0x42c) {
      pcVar6 = "<JSMessageObject>";
      uVar8 = 0x11;
      goto LAB_0110aca8;
    }
    goto switchD_01109f30_caseD_44;
  }
  this_00 = (basic_ostream<char,std::__ndk1::char_traits<char>> *)
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,pcVar6,uVar8);
  pppuVar11 = *(undefined ****)this;
LAB_0110a9b4:
  uVar7 = *(int *)((long)pppuVar11 + 3) >> 1;
LAB_0110a9bc:
  param_1 = (basic_ostream *)
            std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      (this_00,uVar7);
LAB_0110a9c0:
  pcVar6 = "]>";
LAB_0110a9c8:
  uVar8 = 2;
LAB_0110aca8:
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,pcVar6,uVar8);
  return;
switchD_01109f30_caseD_44:
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"<Other heap object (",0x14);
  param_1 = (basic_ostream *)
            internal::operator<<
                      (pbVar4,*(undefined2 *)
                               ((*(ulong *)this & 0xffffffff00000000 |
                                (ulong)*(uint *)(*(ulong *)this - 1)) + 7));
  pcVar6 = ")>";
  goto LAB_0110a9c8;
}

