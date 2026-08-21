
/* v8::internal::compiler::CodeAssembler::Branch(v8::internal::SloppyTNode<v8::internal::IntegralT>,
   v8::internal::compiler::CodeAssemblerLabel*, v8::internal::compiler::CodeAssemblerLabel*) */

void __thiscall
v8::internal::compiler::CodeAssembler::Branch
          (CodeAssembler *this,Node *param_2,CodeAssemblerLabel *param_3,CodeAssemblerLabel *param_4
          )

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)param_2;
  if (*(short *)(lVar1 + 0x10) == 0x18) {
    lVar1 = *(long *)(lVar1 + 0x30);
    if (lVar1 != (int)lVar1) goto LAB_016821f8;
    lVar2 = *(long *)(param_3 + 8);
  }
  else {
    if (*(short *)(lVar1 + 0x10) != 0x17) goto LAB_016821f8;
    lVar1 = (long)*(int *)(lVar1 + 0x2c);
    lVar2 = *(long *)(param_3 + 8);
  }
  if (((lVar2 != 0) || (*param_3 != (CodeAssemblerLabel)0x0)) &&
     ((*(long *)(param_4 + 8) != 0 || (*param_4 != (CodeAssemblerLabel)0x0)))) {
    if ((int)lVar1 != 0) {
      param_4 = param_3;
    }
    CodeAssemblerLabel::MergeVariables(param_4);
    RawMachineAssembler::Goto
              ((RawMachineAssembler *)**(undefined8 **)this,*(RawMachineLabel **)(param_4 + 0x18));
    return;
  }
LAB_016821f8:
  CodeAssemblerLabel::MergeVariables(param_3);
  CodeAssemblerLabel::MergeVariables(param_4);
  RawMachineAssembler::Branch
            ((RawMachineAssembler *)**(undefined8 **)this,param_2,
             *(RawMachineLabel **)(param_3 + 0x18),*(RawMachineLabel **)(param_4 + 0x18));
  return;
}

