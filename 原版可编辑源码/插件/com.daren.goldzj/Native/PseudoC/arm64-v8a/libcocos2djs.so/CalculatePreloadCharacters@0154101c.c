
/* v8::internal::ChoiceNode::CalculatePreloadCharacters(v8::internal::RegExpCompiler*, int) */

int __thiscall
v8::internal::ChoiceNode::CalculatePreloadCharacters
          (ChoiceNode *this,RegExpCompiler *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  iVar3 = param_2;
  if (3 < param_2) {
    iVar3 = 4;
  }
  uVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  if ((uVar2 & 1) == 0) {
    if (0 < iVar3) {
      param_2 = 1;
    }
  }
  else {
    iVar1 = 2;
    if (iVar3 != 3) {
      iVar1 = iVar3;
    }
    if (1 < iVar3) {
      param_2 = 2;
    }
    if (param_1[0x30] != (RegExpCompiler)0x0) {
      param_2 = iVar1;
    }
  }
  return param_2;
}

