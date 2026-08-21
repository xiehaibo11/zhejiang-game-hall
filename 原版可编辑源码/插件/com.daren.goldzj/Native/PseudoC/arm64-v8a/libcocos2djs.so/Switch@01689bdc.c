
/* v8::internal::compiler::CodeAssembler::Switch(v8::internal::compiler::Node*,
   v8::internal::compiler::CodeAssemblerLabel*, int const*,
   v8::internal::compiler::CodeAssemblerLabel**, unsigned long) */

void __thiscall
v8::internal::compiler::CodeAssembler::Switch
          (CodeAssembler *this,Node *param_1,CodeAssemblerLabel *param_2,int *param_3,
          CodeAssemblerLabel **param_4,ulong param_5)

{
  RawMachineLabel **ppRVar1;
  ulong uVar2;
  Zone *this_00;
  RawMachineLabel **ppRVar3;
  ulong uVar4;
  
  this_00 = (Zone *)**(undefined8 **)(**(long **)this + 8);
  uVar4 = param_5 * 8;
  ppRVar3 = *(RawMachineLabel ***)(this_00 + 0x10);
  uVar2 = param_5;
  if (uVar4 < (ulong)(*(long *)(this_00 + 0x18) - (long)ppRVar3) ||
      uVar4 - (*(long *)(this_00 + 0x18) - (long)ppRVar3) == 0) {
    *(RawMachineLabel ***)(this_00 + 0x10) = ppRVar3 + param_5;
    ppRVar1 = ppRVar3;
  }
  else {
    ppRVar3 = (RawMachineLabel **)Zone::NewExpand(this_00,uVar4);
    ppRVar1 = ppRVar3;
  }
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    *ppRVar3 = *(RawMachineLabel **)(*param_4 + 0x18);
    CodeAssemblerLabel::MergeVariables(*param_4);
    param_4 = param_4 + 1;
    ppRVar3 = ppRVar3 + 1;
  }
  CodeAssemblerLabel::MergeVariables(param_2);
  RawMachineAssembler::Switch
            ((RawMachineAssembler *)**(undefined8 **)this,param_1,
             *(RawMachineLabel **)(param_2 + 0x18),param_3,ppRVar1,param_5);
  return;
}

