
/* v8::internal::RegExpBytecodeGenerator::ClearRegisters(int, int) */

void __thiscall
v8::internal::RegExpBytecodeGenerator::ClearRegisters
          (RegExpBytecodeGenerator *this,int param_1,int param_2)

{
  bool bVar1;
  
  if (param_1 <= param_2) {
    do {
      (**(code **)(*(long *)this + 0x150))(this,param_1,0xffffffff);
      bVar1 = param_1 < param_2;
      param_1 = param_1 + 1;
    } while (bVar1);
  }
  return;
}

