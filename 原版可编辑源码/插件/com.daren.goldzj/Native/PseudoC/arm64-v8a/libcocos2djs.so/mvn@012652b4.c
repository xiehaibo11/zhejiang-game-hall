
/* v8::internal::Assembler::mvn(v8::internal::Register const&, v8::internal::Operand const&) */

void __thiscall v8::internal::Assembler::mvn(Assembler *this,Register *param_1,Operand *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_019f3858;
  if (*(int *)(param_1 + 4) != 0x40) {
    puVar1 = &DAT_019f3864;
  }
  Logical(this,param_1,puVar1,param_2,0x20200000);
  return;
}

