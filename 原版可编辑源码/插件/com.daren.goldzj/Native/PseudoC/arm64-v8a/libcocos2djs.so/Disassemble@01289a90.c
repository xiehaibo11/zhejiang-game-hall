
/* disasm::Disassembler::Disassemble(__sFILE*, unsigned char*, unsigned char*,
   disasm::Disassembler::UnimplementedOpcodeAction) */

void disasm::Disassembler::Disassemble(undefined8 param_1,Instruction *param_2,Instruction *param_3)

{
  long ****pppplVar1;
  long ****pppplVar2;
  undefined **local_78;
  void *local_70;
  undefined4 local_68;
  undefined4 local_64;
  char local_60;
  undefined8 local_58;
  undefined **local_50;
  long ***local_48;
  long ***local_40;
  long local_38;
  
  local_48 = (long ***)&local_48;
  local_50 = &PTR__DispatchingDecoderVisitor_01cbe240;
  local_38 = 0;
  local_64 = 0x100;
  local_40 = local_48;
  local_70 = malloc(0x100);
  local_68 = 0;
  local_60 = '\x01';
  local_78 = &PTR__DisassemblingDecoder_01cbdd68;
  local_58 = param_1;
  v8::internal::DispatchingDecoderVisitor::AppendVisitor
            ((DispatchingDecoderVisitor *)&local_50,(DecoderVisitor *)&local_78);
  for (; param_2 < param_3; param_2 = param_2 + 4) {
    v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::Decode
              ((Decoder<v8::internal::DispatchingDecoderVisitor> *)&local_50,param_2);
  }
  local_78 = &PTR__DisassemblingDecoder_01cbd588;
  if (local_60 != '\0') {
    free(local_70);
  }
  local_50 = &PTR__DispatchingDecoderVisitor_01cca348;
  if (local_38 != 0) {
    (*local_40)[1] = (long *)local_48[1];
    *local_48[1] = (long *)*local_40;
    local_38 = 0;
    pppplVar1 = (long ****)local_40;
    while (pppplVar1 != &local_48) {
      pppplVar2 = (long ****)pppplVar1[1];
      operator_delete(pppplVar1);
      pppplVar1 = pppplVar2;
    }
  }
  return;
}

