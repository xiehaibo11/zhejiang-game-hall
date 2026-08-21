
/* disasm::BufferDisassembler::ProcessOutput(v8::internal::Instruction*) */

void __thiscall
disasm::BufferDisassembler::ProcessOutput(BufferDisassembler *this,Instruction *param_1)

{
  v8::internal::SNPrintF
            (*(undefined8 *)(this + 0x20),*(undefined8 *)(this + 0x28),"%08x       %s",
             *(undefined4 *)param_1,*(undefined8 *)(this + 8));
  return;
}

