
/* v8::internal::compiler::WasmGraphBuilder::WasmGraphBuilder(v8::internal::wasm::CompilationEnv*,
   v8::internal::Zone*, v8::internal::compiler::MachineGraph*,
   v8::internal::Signature<v8::internal::wasm::ValueType>*,
   v8::internal::compiler::SourcePositionTable*) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::WasmGraphBuilder
          (WasmGraphBuilder *this,CompilationEnv *param_1,Zone *param_2,MachineGraph *param_3,
          Signature *param_4,SourcePositionTable *param_5)

{
  WasmGraphBuilder WVar1;
  char *pcVar2;
  long lVar3;
  
  *(Zone **)this = param_2;
  *(MachineGraph **)(this + 8) = param_3;
  *(CompilationEnv **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  pcVar2 = *(char **)(param_4 + 0x10);
  if (pcVar2 != pcVar2 + *(long *)(param_4 + 8) + *(long *)param_4) {
    lVar3 = *(long *)param_4 + *(long *)(param_4 + 8);
    do {
      if (*pcVar2 == '\x05') {
        WVar1 = (WasmGraphBuilder)0x1;
        goto LAB_013106f4;
      }
      lVar3 = lVar3 + -1;
      pcVar2 = pcVar2 + 1;
    } while (lVar3 != 0);
  }
  WVar1 = (WasmGraphBuilder)0x0;
LAB_013106f4:
  this[0x60] = WVar1;
  this[0x61] = (WasmGraphBuilder)0x0;
  WVar1 = FLAG_untrusted_code_mitigations;
  *(Signature **)(this + 0x68) = param_4;
  *(undefined8 *)(this + 0x70) = 0;
  *(SourcePositionTable **)(this + 0x78) = param_5;
  *(undefined8 *)(this + 0x80) = 0;
  this[0x62] = WVar1;
  return;
}

