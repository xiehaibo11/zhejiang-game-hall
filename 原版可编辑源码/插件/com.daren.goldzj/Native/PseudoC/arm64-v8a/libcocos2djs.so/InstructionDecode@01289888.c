
/* disasm::Disassembler::InstructionDecode(v8::internal::Vector<char>, unsigned char*) */

undefined8
disasm::Disassembler::InstructionDecode
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,Instruction *param_4)

{
  long ****pppplVar1;
  long ****pppplVar2;
  undefined **local_80;
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  char local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined **local_50;
  long ***local_48;
  long ***local_40;
  long local_38;
  
  local_50 = &PTR__DispatchingDecoderVisitor_01cbe240;
  local_38 = 0;
  local_6c = 0x100;
  local_48 = (long ***)&local_48;
  local_40 = (long ***)&local_48;
  local_78 = malloc(0x100);
  local_70 = 0;
  local_68 = '\x01';
  local_80 = &PTR__DisassemblingDecoder_01cbe000;
  local_60 = param_2;
  uStack_58 = param_3;
  v8::internal::DispatchingDecoderVisitor::AppendVisitor
            ((DispatchingDecoderVisitor *)&local_50,(DecoderVisitor *)&local_80);
  v8::internal::Decoder<v8::internal::DispatchingDecoderVisitor>::Decode
            ((Decoder<v8::internal::DispatchingDecoderVisitor> *)&local_50,param_4);
  local_80 = &PTR__DisassemblingDecoder_01cbd588;
  if (local_68 != '\0') {
    free(local_78);
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
  return 4;
}

