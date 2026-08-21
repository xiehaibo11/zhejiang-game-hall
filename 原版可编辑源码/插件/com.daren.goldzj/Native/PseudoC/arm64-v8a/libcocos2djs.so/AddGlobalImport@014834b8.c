
/* v8::internal::wasm::AsmJsParser::AddGlobalImport(v8::internal::Vector<char const>,
   v8::internal::wasm::AsmType*, v8::internal::wasm::ValueType, bool,
   v8::internal::wasm::AsmJsParser::VarInfo*) */

void v8::internal::wasm::AsmJsParser::AddGlobalImport
               (long param_1,long param_2,long param_3,undefined8 param_4,undefined4 param_5,
               byte param_6,undefined8 *param_7)

{
  long lVar1;
  undefined4 uVar2;
  long *plVar3;
  Zone *this;
  long lVar4;
  undefined4 local_68;
  undefined3 uStack_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = 0;
  *(undefined4 *)(param_7 + 4) = 2;
  *param_7 = param_4;
  uVar2 = WasmModuleBuilder::AddGlobal(*(WasmModuleBuilder **)(param_1 + 0xf0),param_5,1,&local_68);
  *(undefined4 *)((long)param_7 + 0x1c) = uVar2;
  *(byte *)((long)param_7 + 0x24) = param_6 & 1;
  this = *(Zone **)(param_1 + 0x2b8);
  plVar3 = *(long **)(this + 0x10);
  if ((ulong)(*(long *)(this + 0x18) - (long)plVar3) < 0x30) {
    plVar3 = (long *)Zone::NewExpand(this,0x30);
  }
  else {
    *(long **)(this + 0x10) = plVar3 + 6;
  }
  *plVar3 = 0;
  plVar3[2] = param_2;
  plVar3[3] = param_3;
  *(char *)(plVar3 + 4) = (char)param_5;
  plVar3[5] = (long)param_7;
  plVar3[1] = param_1 + 0x2a0;
  *(uint *)((long)plVar3 + 0x24) = CONCAT31(uStack_64,local_68._3_1_);
  *(undefined4 *)((long)plVar3 + 0x21) = local_68;
  lVar4 = *(long *)(param_1 + 0x2a0);
  *plVar3 = lVar4;
  *(long **)(lVar4 + 8) = plVar3;
  *(long **)(param_1 + 0x2a0) = plVar3;
  *(long *)(param_1 + 0x2b0) = *(long *)(param_1 + 0x2b0) + 1;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

