
bool FUN_00f14314(int *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_1;
  iVar4 = *param_2;
  bVar1 = SBORROW4(iVar3,iVar4);
  bVar2 = iVar3 - iVar4 < 0;
  if (iVar3 == iVar4) {
    iVar3 = param_1[1];
    iVar4 = param_2[1];
    bVar1 = SBORROW4(iVar3,iVar4);
    bVar2 = iVar3 - iVar4 < 0;
    if (iVar3 == iVar4) {
      if (iVar3 == 1) {
        iVar3 = v8::internal::FunctionLiteral::start_position(*(FunctionLiteral **)(param_1 + 2));
        iVar4 = v8::internal::FunctionLiteral::start_position(*(FunctionLiteral **)(param_2 + 2));
        if (iVar3 == iVar4) {
          return *(int *)(*(long *)(param_2 + 2) + 0x1c) <
                 *(int *)(*(FunctionLiteral **)(param_1 + 2) + 0x1c);
        }
        iVar3 = v8::internal::FunctionLiteral::start_position(*(FunctionLiteral **)(param_1 + 2));
        iVar4 = v8::internal::FunctionLiteral::start_position(*(FunctionLiteral **)(param_2 + 2));
LAB_00f1441c:
        return iVar4 < iVar3;
      }
      if (iVar3 == 0) {
        iVar3 = v8::internal::FunctionLiteral::end_position(*(FunctionLiteral **)(param_1 + 2));
        iVar4 = v8::internal::FunctionLiteral::end_position(*(FunctionLiteral **)(param_2 + 2));
        if (iVar3 != iVar4) {
          iVar3 = v8::internal::FunctionLiteral::end_position(*(FunctionLiteral **)(param_1 + 2));
          iVar4 = v8::internal::FunctionLiteral::end_position(*(FunctionLiteral **)(param_2 + 2));
          goto LAB_00f1441c;
        }
        iVar3 = *(int *)(*(FunctionLiteral **)(param_1 + 2) + 0x1c);
        iVar4 = *(int *)(*(long *)(param_2 + 2) + 0x1c);
      }
      else {
        iVar3 = param_1[2];
        iVar4 = param_2[2];
      }
      bVar1 = SBORROW4(iVar3,iVar4);
      bVar2 = iVar3 - iVar4 < 0;
    }
  }
  return bVar2 != bVar1;
}

