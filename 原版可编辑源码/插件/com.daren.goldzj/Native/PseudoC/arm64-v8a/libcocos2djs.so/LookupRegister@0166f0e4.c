
/* v8::internal::compiler::BytecodeGraphBuilder::Environment::LookupRegister(v8::internal::interpreter::Register)
   const */

undefined8 __thiscall
v8::internal::compiler::BytecodeGraphBuilder::Environment::LookupRegister
          (Environment *this,int param_2)

{
  int iVar1;
  ulong uVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  BytecodeGraphBuilder *this_00;
  int local_30 [2];
  Node *local_28;
  
  local_30[0] = param_2;
  uVar2 = interpreter::Register::is_current_context((Register *)local_30);
  if ((uVar2 & 1) == 0) {
    uVar2 = interpreter::Register::is_function_closure((Register *)local_30);
    if ((uVar2 & 1) == 0) {
      local_28 = (Node *)CONCAT44(local_28._4_4_,local_30[0]);
      if (local_30[0] < 0) {
        iVar1 = interpreter::Register::ToParameterIndex((Register *)&local_28,*(int *)(this + 0xc));
      }
      else {
        iVar1 = *(int *)(this + 0x58) + local_30[0];
      }
      if ((ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 3) <= (ulong)(long)iVar1) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      this = (Environment *)(*(long *)(this + 0x28) + (long)iVar1 * 8);
    }
    else {
      this_00 = *(BytecodeGraphBuilder **)this;
      this = (Environment *)(this_00 + 0x168);
      if (*(long *)(this_00 + 0x168) == 0) {
        pOVar3 = (Operator *)
                 CommonOperatorBuilder::Parameter
                           (*(CommonOperatorBuilder **)(*(long *)(this_00 + 0x10) + 8),-1,"%closure"
                           );
        local_28 = *(Node **)(**(long **)(this_00 + 0x10) + 8);
        uVar4 = MakeNode(this_00,pOVar3,1,&local_28,false);
        *(undefined8 *)(this_00 + 0x168) = uVar4;
      }
    }
  }
  else {
    this = this + 0x10;
  }
  return *(undefined8 *)this;
}

