
/* v8::internal::RegExpBytecodeGenerator::~RegExpBytecodeGenerator() */

void __thiscall
v8::internal::RegExpBytecodeGenerator::~RegExpBytecodeGenerator(RegExpBytecodeGenerator *this)

{
  void *pvVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__RegExpBytecodeGenerator_01cc8038;
  if (0 < *(int *)(this + 0x3c)) {
    *(undefined4 *)(this + 0x3c) = 0;
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  for (plVar2 = *(long **)(this + 0x68); plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
  }
  *(undefined8 *)(this + 0x50) = 0;
  NativeRegExpMacroAssembler::~NativeRegExpMacroAssembler((NativeRegExpMacroAssembler *)this);
  operator_delete(this);
  return;
}

