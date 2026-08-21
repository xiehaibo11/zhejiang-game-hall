
/* v8::internal::RegExpBytecodeGenerator::GetCode(v8::internal::Handle<v8::internal::String>) */

long * __thiscall
v8::internal::RegExpBytecodeGenerator::GetCode(RegExpBytecodeGenerator *this,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  
  (**(code **)(*(long *)this + 0x40))(this,this + 0x3c);
  iVar2 = *(int *)(this + 0x38);
  if (*(int *)(this + 0x30) <= iVar2 + 3) {
    Expand(this);
    iVar2 = *(int *)(this + 0x38);
  }
  *(undefined4 *)(*(long *)(this + 0x28) + (long)iVar2) = 0xb;
  iVar2 = *(int *)(this + 0x38) + 4;
  *(int *)(this + 0x38) = iVar2;
  if (FLAG_regexp_peephole_optimization != '\0') {
    plVar1 = (long *)RegExpBytecodePeepholeOptimization::OptimizeBytecode
                               (*(Factory **)(this + 0x88),*(undefined8 *)(this + 0x20),param_2,
                                *(undefined8 *)(this + 0x28),iVar2,this + 0x50);
    return plVar1;
  }
  plVar1 = (long *)Factory::NewByteArray(*(Factory **)(this + 0x88),iVar2,0);
  MemCopy((void *)(*plVar1 + 7),*(void **)(this + 0x28),(long)*(int *)(this + 0x38));
  return plVar1;
}

