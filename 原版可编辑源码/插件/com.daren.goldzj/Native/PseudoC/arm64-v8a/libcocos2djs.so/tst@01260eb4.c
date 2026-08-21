
/* v8::internal::Assembler::tst(v8::internal::Register const&, v8::internal::Operand const&) */

void __thiscall v8::internal::Assembler::tst(Assembler *this,Register *param_1,Operand *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_019f3858;
  if (*(int *)(param_1 + 4) != 0x40) {
    puVar1 = &DAT_019f3864;
  }
  Logical(this,puVar1,param_1,param_2,0x60000000);
  return;
}

