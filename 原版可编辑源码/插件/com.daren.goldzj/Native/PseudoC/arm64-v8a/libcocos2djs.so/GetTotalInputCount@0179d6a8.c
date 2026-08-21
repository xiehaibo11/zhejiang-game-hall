
/* v8::internal::compiler::OperatorProperties::GetTotalInputCount(v8::internal::compiler::Operator
   const*) */

int v8::internal::compiler::OperatorProperties::GetTotalInputCount(Operator *param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar2 = *(ushort *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x14);
  uVar3 = HasFrameStateInput(param_1);
  iVar1 = iVar1 + (uVar3 & 1) + *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c);
  if (uVar2 - 0x2b1 < 0x6d) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

