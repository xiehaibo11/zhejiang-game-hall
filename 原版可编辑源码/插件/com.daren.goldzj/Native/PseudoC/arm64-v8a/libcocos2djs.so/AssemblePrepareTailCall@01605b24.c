
/* v8::internal::compiler::CodeGenerator::AssemblePrepareTailCall() */

void __thiscall v8::internal::compiler::CodeGenerator::AssemblePrepareTailCall(CodeGenerator *this)

{
  long lVar1;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(this + 0x18);
  if (*(char *)(lVar1 + 0x10) != '\0') {
    local_78 = 0;
    local_80 = 0x400000001d;
    local_68 = 8;
    local_74 = 0xffffffff;
    local_6c = 2;
    local_60 = 0xffffffff00000000;
    uStack_58 = 0xffffffff;
    TurboAssembler::LoadStoreMacro
              ((TurboAssembler *)(this + 0xd0),&DAT_01a56388,&local_80,0xc0400000);
    local_80 = 0x400000001d;
    local_78 = 0;
    local_74 = 0xffffffff;
    local_6c = 2;
    local_68 = 0;
    local_60 = 0xffffffff00000000;
    uStack_58 = 0xffffffff;
    TurboAssembler::LoadStoreMacro
              ((TurboAssembler *)(this + 0xd0),&DAT_01a5637c,&local_80,0xc0400000);
    lVar1 = *(long *)(this + 0x18);
  }
  *(undefined1 *)(lVar1 + 8) = 0;
  return;
}

