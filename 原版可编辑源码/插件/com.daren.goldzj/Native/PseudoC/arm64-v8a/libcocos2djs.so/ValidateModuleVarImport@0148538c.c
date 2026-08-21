
/* v8::internal::wasm::AsmJsParser::ValidateModuleVarImport(v8::internal::wasm::AsmJsParser::VarInfo*,
   bool) */

void __thiscall
v8::internal::wasm::AsmJsParser::ValidateModuleVarImport
          (AsmJsParser *this,VarInfo *param_1,bool param_2)

{
  AsmJsScanner *this_00;
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined1 (*pauVar4) [16];
  Zone *pZVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined4 local_68;
  undefined3 uStack_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this_00 = (AsmJsScanner *)(this + 8);
  if (*(int *)(this + 0x10) == 0x2b) {
    AsmJsScanner::Next(this_00);
    if ((*(int *)(this + 0x10) == *(int *)(this + 0x1f8)) &&
       (AsmJsScanner::Next(this_00), *(int *)(this + 0x10) == 0x2e)) {
      AsmJsScanner::Next(this_00);
      auVar9 = CopyCurrentIdentifierString(this);
      local_68 = 0;
      *(undefined4 *)(param_1 + 0x20) = 2;
      *(undefined8 *)param_1 = 0xed;
      uVar2 = WasmModuleBuilder::AddGlobal(*(WasmModuleBuilder **)(this + 0xf0),4,1,&local_68);
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
      param_1[0x24] = (VarInfo)param_2;
      pZVar5 = *(Zone **)(this + 0x2b8);
      plVar3 = *(long **)(pZVar5 + 0x10);
      if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)plVar3) < 0x30) {
        plVar3 = (long *)Zone::NewExpand(pZVar5,0x30);
      }
      else {
        *(long **)(pZVar5 + 0x10) = plVar3 + 6;
      }
      *plVar3 = 0;
      *(undefined1 (*) [16])(plVar3 + 2) = auVar9;
      *(undefined1 *)(plVar3 + 4) = 4;
      plVar3[5] = (long)param_1;
      plVar3[1] = (long)(this + 0x2a0);
      *(uint *)((long)plVar3 + 0x24) = CONCAT31(uStack_64,local_68._3_1_);
      *(undefined4 *)((long)plVar3 + 0x21) = local_68;
      lVar6 = *(long *)(this + 0x2a0);
      *plVar3 = lVar6;
      *(long **)(lVar6 + 8) = plVar3;
      *(long **)(this + 0x2a0) = plVar3;
      *(long *)(this + 0x2b0) = *(long *)(this + 0x2b0) + 1;
      AsmJsScanner::Next(this_00);
      goto LAB_01485554;
    }
LAB_01485538:
    uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar7 = "Unexpected token";
  }
  else {
    if ((*(int *)(this + 0x10) != *(int *)(this + 0x1f8)) ||
       (AsmJsScanner::Next(this_00), *(int *)(this + 0x10) != 0x2e)) goto LAB_01485538;
    AsmJsScanner::Next(this_00);
    auVar9 = CopyCurrentIdentifierString(this);
    AsmJsScanner::Next(this_00);
    if (*(int *)(this + 0x10) != 0x7c) {
      *(undefined4 *)(param_1 + 0x20) = 6;
      pZVar5 = *(Zone **)this;
      pauVar4 = *(undefined1 (**) [16])(pZVar5 + 0x10);
      if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)pauVar4) < 0x48) {
        pauVar4 = (undefined1 (*) [16])Zone::NewExpand(pZVar5,0x48);
      }
      else {
        *(undefined1 **)(pZVar5 + 0x10) = pauVar4[4] + 8;
      }
      uVar8 = *(undefined8 *)this;
      *pauVar4 = auVar9;
      *(undefined8 *)(pauVar4[1] + 8) = 0;
      *(undefined8 *)pauVar4[2] = uVar8;
      *(undefined8 *)(pauVar4 + 1) = 0;
      *(undefined8 *)(pauVar4[2] + 8) = 0;
      *(undefined8 *)pauVar4[3] = uVar8;
      *(undefined8 *)(pauVar4[3] + 8) = 0;
      *(undefined4 *)pauVar4[4] = 0x3f800000;
      std::__ndk1::
      __hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
      ::rehash((__hash_table<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::__unordered_map_hasher<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,v8::base::hash<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,std::__ndk1::__unordered_map_equal<v8::internal::Signature<v8::internal::wasm::ValueType>,std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>,std::__ndk1::equal_to<v8::internal::Signature<v8::internal::wasm::ValueType>>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<v8::internal::Signature<v8::internal::wasm::ValueType>,unsigned_int>>>
                *)(pauVar4 + 1),100);
      *(undefined1 (**) [16])(param_1 + 0x10) = pauVar4;
      param_1[0x24] = (VarInfo)0x0;
      goto LAB_01485554;
    }
    AsmJsScanner::Next(this_00);
    if ((*(int *)(this + 0x10) == -3) && (*(int *)(this + 0xe8) == 0)) {
      AsmJsScanner::Next(this_00);
      local_68 = 0;
      *(undefined4 *)(param_1 + 0x20) = 2;
      *(undefined8 *)param_1 = 0x301;
      uVar2 = WasmModuleBuilder::AddGlobal(*(WasmModuleBuilder **)(this + 0xf0),1,1,&local_68);
      *(undefined4 *)(param_1 + 0x1c) = uVar2;
      param_1[0x24] = (VarInfo)param_2;
      pZVar5 = *(Zone **)(this + 0x2b8);
      plVar3 = *(long **)(pZVar5 + 0x10);
      if ((ulong)(*(long *)(pZVar5 + 0x18) - (long)plVar3) < 0x30) {
        plVar3 = (long *)Zone::NewExpand(pZVar5,0x30);
      }
      else {
        *(long **)(pZVar5 + 0x10) = plVar3 + 6;
      }
      *plVar3 = 0;
      *(undefined1 (*) [16])(plVar3 + 2) = auVar9;
      *(undefined1 *)(plVar3 + 4) = 1;
      plVar3[5] = (long)param_1;
      plVar3[1] = (long)(this + 0x2a0);
      *(uint *)((long)plVar3 + 0x24) = CONCAT31(uStack_64,local_68._3_1_);
      *(undefined4 *)((long)plVar3 + 0x21) = local_68;
      lVar6 = *(long *)(this + 0x2a0);
      *plVar3 = lVar6;
      *(long **)(lVar6 + 8) = plVar3;
      *(long **)(this + 0x2a0) = plVar3;
      *(long *)(this + 0x2b0) = *(long *)(this + 0x2b0) + 1;
      goto LAB_01485554;
    }
    uVar2 = (undefined4)*(undefined8 *)(this + 0x20);
    this[0x1e4] = (AsmJsParser)0x1;
    pcVar7 = "Expected |0 type annotation for foreign integer import";
  }
  *(char **)(this + 0x1e8) = pcVar7;
  *(undefined4 *)(this + 0x1f0) = uVar2;
LAB_01485554:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

