
/* v8::internal::Variable::Variable(v8::internal::Variable*) */

void __thiscall v8::internal::Variable::Variable(Variable *this,Variable *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined2 *)(this + 0x28) = *(undefined2 *)(param_1 + 0x28);
  return;
}

