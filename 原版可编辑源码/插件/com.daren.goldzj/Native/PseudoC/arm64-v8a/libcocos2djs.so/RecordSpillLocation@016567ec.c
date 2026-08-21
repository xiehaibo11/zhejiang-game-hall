
/* v8::internal::compiler::TopLevelLiveRange::RecordSpillLocation(v8::internal::Zone*, int,
   v8::internal::compiler::InstructionOperand*) */

void __thiscall
v8::internal::compiler::TopLevelLiveRange::RecordSpillLocation
          (TopLevelLiveRange *this,Zone *param_1,int param_2,InstructionOperand *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if ((ulong)(*(long *)(param_1 + 0x18) - (long)piVar1) < 0x18) {
    piVar1 = (int *)Zone::NewExpand(param_1,0x18);
  }
  else {
    *(int **)(param_1 + 0x10) = piVar1 + 6;
  }
  uVar2 = *(undefined8 *)(this + 0x78);
  *piVar1 = param_2;
  *(InstructionOperand **)(piVar1 + 2) = param_3;
  *(undefined8 *)(piVar1 + 4) = uVar2;
  *(int **)(this + 0x78) = piVar1;
  return;
}

