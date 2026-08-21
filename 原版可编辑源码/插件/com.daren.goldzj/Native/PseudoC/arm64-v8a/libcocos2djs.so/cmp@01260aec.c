
/* v8::internal::Assembler::cmp(v8::internal::Register const&, v8::internal::Operand const&) */

void __thiscall v8::internal::Assembler::cmp(Assembler *this,Register *param_1,Operand *param_2)

{
  undefined8 *puVar1;
  undefined8 local_20;
  undefined4 local_18;
  
  puVar1 = &DAT_019f3858;
  if (*(int *)(param_1 + 4) != 0x40) {
    puVar1 = &DAT_019f3864;
  }
  local_18 = *(undefined4 *)(puVar1 + 1);
  local_20 = *puVar1;
  AddSub(this,&local_20,param_1,param_2,1,0x40000000);
  return;
}

