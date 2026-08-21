
/* v8::internal::compiler::LiveRange::ConvertUsesToOperand(v8::internal::compiler::InstructionOperand
   const&, v8::internal::compiler::InstructionOperand const&) */

void __thiscall
v8::internal::compiler::LiveRange::ConvertUsesToOperand
          (LiveRange *this,InstructionOperand *param_1,InstructionOperand *param_2)

{
  InstructionOperand *pIVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = *(long **)(this + 0x18);
  if (plVar2 != (long *)0x0) {
    puVar3 = (undefined8 *)*plVar2;
    while( true ) {
      if (puVar3 == (undefined8 *)0x0) {
        plVar2 = (long *)plVar2[2];
      }
      else {
        pIVar1 = param_2;
        if (((*(uint *)((long)plVar2 + 0x1c) ^ 0xffffffff) & 3) != 0) {
          pIVar1 = param_1;
        }
        *puVar3 = *(undefined8 *)pIVar1;
        plVar2 = (long *)plVar2[2];
      }
      if (plVar2 == (long *)0x0) break;
      puVar3 = (undefined8 *)*plVar2;
    }
  }
  return;
}

