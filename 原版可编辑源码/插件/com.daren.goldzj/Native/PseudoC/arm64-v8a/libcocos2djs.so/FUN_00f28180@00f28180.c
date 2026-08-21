
void FUN_00f28180(SimpleStringBuilder *param_1,Isolate *param_2,ExternalReferenceEncoder *param_3,
                 basic_ostream *param_4,int param_5,long param_6,RelocInfo *param_7,uint param_8)

{
  Instruction IVar1;
  ulong *puVar2;
  char cVar3;
  uint uVar4;
  size_t sVar5;
  basic_ostream *this;
  long *plVar6;
  Instruction *this_00;
  uint *puVar7;
  undefined8 *puVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  int iVar12;
  long lVar13;
  NativeModule *this_01;
  ulong *local_88;
  undefined ***local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined **local_60;
  void *local_58;
  
  if ((param_8 & 1) == 0) {
    pcVar11 = (char *)v8::internal::SimpleStringBuilder::Finalize(param_1);
    sVar5 = strlen(pcVar11);
    this = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_4,pcVar11,sVar5);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)&local_80,(id *)&std::__ndk1::ctype<char>::id);
    cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)&local_80);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this,cVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this);
    iVar12 = 0x39;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    iVar12 = 0x39 - *(int *)(param_1 + 0x10);
  }
  v8::internal::SimpleStringBuilder::AddPadding(param_1,' ',iVar12);
  switch(param_7[8]) {
  case (RelocInfo)0xd:
    uVar10 = (ulong)*(uint *)(param_7 + 0x10);
    pcVar11 = "    ;; debug: deopt position, script offset \'%d\'";
    break;
  case (RelocInfo)0xe:
    uVar10 = (ulong)*(uint *)(param_7 + 0x10);
    pcVar11 = "    ;; debug: deopt position, inlining id \'%d\'";
    break;
  case (RelocInfo)0xf:
    pcVar9 = (char *)v8::internal::DeoptimizeReasonToString(param_7[0x10]);
    pcVar11 = "    ;; debug: deopt reason \'%s\'";
    goto LAB_00f282a8;
  case (RelocInfo)0x10:
    uVar10 = (ulong)*(uint *)(param_7 + 0x10);
    pcVar11 = "    ;; debug: deopt index %d";
    break;
  default:
    uVar4 = (uint)(char)param_7[8];
    if ((uVar4 & 0xfffffffe) == 2) {
      local_80 = &local_60;
      local_60 = &PTR__HeapStringAllocator_01cbbc78;
      local_78 = 0x1000000001;
      local_70 = 0;
      local_68 = (undefined1 *)
                 v8::internal::HeapStringAllocator::allocate((HeapStringAllocator *)&local_60,0x10);
      *local_68 = 0;
      this_00 = *(Instruction **)param_7;
      if (param_7[8] == (RelocInfo)0x2) {
        if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
        }
        lVar13 = *(long *)(param_7 + 0x18);
        puVar7 = (uint *)v8::internal::Instruction::ImmPCOffsetTarget(this_00);
        local_88 = (ulong *)(lVar13 - 1U & 0xffffffff00000000 | (ulong)*puVar7);
      }
      else {
        IVar1 = this_00[3];
        local_88 = (ulong *)v8::internal::Instruction::ImmPCOffsetTarget(this_00);
        if (IVar1 == (Instruction)0x58) {
          local_88 = (ulong *)*local_88;
        }
      }
      v8::internal::Object::ShortPrint((Object *)&local_88,(StringStream *)&local_80);
      v8::internal::StringStream::ToCString();
      pcVar11 = "(compressed) ";
      if (uVar4 != 2) {
        pcVar11 = "";
      }
      v8::internal::StringBuilder::AddFormatted
                ((char *)param_1,"    ;; %sobject: %s",pcVar11,local_88);
      puVar2 = local_88;
      local_88 = (ulong *)0x0;
      if (puVar2 != (ulong *)0x0) {
        operator_delete__(puVar2);
      }
      local_60 = &PTR__HeapStringAllocator_01cbbc78;
      if (local_58 == (void *)0x0) {
        return;
      }
      operator_delete__(local_58);
      return;
    }
    if (uVar4 == 7) {
      if (param_3 == (ExternalReferenceEncoder *)0x0) {
        pcVar9 = "unknown";
        pcVar11 = "    ;; external reference (%s)";
      }
      else {
        IVar1 = (*(Instruction **)param_7)[3];
        puVar8 = (undefined8 *)
                 v8::internal::Instruction::ImmPCOffsetTarget(*(Instruction **)param_7);
        if (IVar1 == (Instruction)0x58) {
          puVar8 = (undefined8 *)*puVar8;
        }
        pcVar9 = (char *)v8::internal::ExternalReferenceEncoder::NameOfAddress
                                   (param_3,param_2,(ulong)puVar8);
        pcVar11 = "    ;; external reference (%s)";
      }
    }
    else if ((int)uVar4 < 2) {
      v8::internal::StringBuilder::AddFormatted((char *)param_1,"    ;; code:");
      IVar1 = (*(Instruction **)param_7)[3];
      puVar8 = (undefined8 *)v8::internal::Instruction::ImmPCOffsetTarget(*(Instruction **)param_7);
      if (IVar1 == (Instruction)0x58) {
        puVar8 = (undefined8 *)*puVar8;
      }
      lVar13 = v8::internal::Heap::GcSafeFindCodeForInnerPointer
                         ((Heap *)(param_2 + 0x8850),(ulong)puVar8);
      if (*(int *)(lVar13 + 0x27) == -1) {
        pcVar9 = (char *)v8::internal::Code::Kind2String(*(uint *)(lVar13 + 0x17) >> 1 & 0x1f);
        pcVar11 = " %s";
      }
      else {
        pcVar9 = (char *)v8::internal::Builtins::name(*(int *)(lVar13 + 0x27));
        pcVar11 = " Builtin::%s";
      }
    }
    else {
      if (uVar4 == 5) {
        if (param_5 == 2) {
          this_01 = *(NativeModule **)(param_6 + 0x30);
          uVar10 = v8::internal::RelocInfo::wasm_stub_call_address(param_7);
          pcVar9 = (char *)v8::internal::wasm::NativeModule::GetRuntimeStubName(this_01,uVar10);
          pcVar11 = "    ;; wasm stub: %s";
          goto LAB_00f282a8;
        }
      }
      else if (((param_2 != (Isolate *)0x0) && (uVar4 == 6)) && (*(long *)(param_2 + 0x9570) != 0))
      {
        IVar1 = (*(Instruction **)param_7)[3];
        puVar8 = (undefined8 *)
                 v8::internal::Instruction::ImmPCOffsetTarget(*(Instruction **)param_7);
        if (IVar1 == (Instruction)0x58) {
          puVar8 = (undefined8 *)*puVar8;
        }
        uVar10 = v8::internal::Deoptimizer::IsDeoptimizationEntry
                           (param_2,(ulong)puVar8,(DeoptimizeKind *)&local_80);
        if ((uVar10 & 1) != 0) {
          pcVar9 = (char *)v8::internal::Deoptimizer::MessageFor((ulong)local_80 & 0xff);
          pcVar11 = "    ;; %s deoptimization bailout";
          goto LAB_00f282a8;
        }
        uVar4 = 6;
      }
      pcVar9 = (char *)v8::internal::RelocInfo::RelocModeName(uVar4);
      pcVar11 = "    ;; %s";
    }
LAB_00f282a8:
    v8::internal::StringBuilder::AddFormatted((char *)param_1,pcVar11,pcVar9);
    return;
  }
  v8::internal::StringBuilder::AddFormatted((char *)param_1,pcVar11,uVar10);
  return;
}

