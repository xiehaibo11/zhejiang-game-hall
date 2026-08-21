
/* v8::internal::CodeDesc::Initialize(v8::internal::CodeDesc*, v8::internal::Assembler*, int, int,
   int, int, int) */

void v8::internal::CodeDesc::Initialize
               (CodeDesc *param_1,Assembler *param_2,int param_3,int param_4,int param_5,int param_6
               ,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = (**(code **)(**(long **)(param_2 + 8) + 0x10))(*(long **)(param_2 + 8));
  *(undefined8 *)param_1 = uVar4;
  iVar3 = (**(code **)(**(long **)(param_2 + 8) + 0x18))();
  *(int *)(param_1 + 8) = iVar3;
  iVar1 = *(int *)(param_2 + 0x20);
  iVar2 = *(int *)(param_2 + 0x10);
  *(int *)(param_1 + 0x1c) = param_5 - param_4;
  *(int *)(param_1 + 0x20) = param_5;
  *(int *)(param_1 + 0x24) = param_6 - param_5;
  *(int *)(param_1 + 0x28) = param_6;
  *(int *)(param_1 + 0x14) = param_4 - param_3;
  *(int *)(param_1 + 0x18) = param_4;
  *(int *)(param_1 + 0x30) = param_7;
  *(int *)(param_1 + 0x34) = iVar3 - param_7;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(int *)(param_1 + 0xc) = iVar1 - iVar2;
  *(int *)(param_1 + 0x10) = param_3;
  *(int *)(param_1 + 0x2c) = (iVar1 - iVar2) - param_6;
  *(Assembler **)(param_1 + 0x48) = param_2;
  return;
}

