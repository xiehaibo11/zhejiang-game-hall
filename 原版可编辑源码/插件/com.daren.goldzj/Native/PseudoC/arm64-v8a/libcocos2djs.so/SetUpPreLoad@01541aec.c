
/* v8::internal::ChoiceNode::SetUpPreLoad(v8::internal::RegExpCompiler*, v8::internal::Trace*,
   v8::internal::PreloadState*) */

void __thiscall
v8::internal::ChoiceNode::SetUpPreLoad
          (ChoiceNode *this,RegExpCompiler *param_1,Trace *param_2,PreloadState *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_3 + 8);
  if (uVar5 == 0xffffffff) {
    lVar1 = 0x1a;
    if (*(int *)(param_2 + 0x5c) == 0) {
      lVar1 = 0x1b;
    }
    uVar5 = (uint)(byte)this[lVar1];
    *(uint *)(param_3 + 8) = uVar5;
  }
  uVar4 = uVar5;
  if (3 < (int)uVar5) {
    uVar4 = 4;
  }
  uVar3 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
  if ((uVar3 & 1) == 0) {
    if (0 < (int)uVar4) {
      uVar5 = 1;
    }
  }
  else {
    uVar2 = 2;
    if (uVar4 != 3) {
      uVar2 = uVar4;
    }
    if (1 < (int)uVar4) {
      uVar5 = 2;
    }
    if (param_1[0x30] != (RegExpCompiler)0x0) {
      uVar5 = uVar2;
    }
  }
  *(uint *)(param_3 + 4) = uVar5;
  uVar4 = *(uint *)(param_2 + 0x28);
  *param_3 = (PreloadState)(uVar4 == uVar5);
  param_3[1] = (PreloadState)(uVar4 == uVar5);
  return;
}

