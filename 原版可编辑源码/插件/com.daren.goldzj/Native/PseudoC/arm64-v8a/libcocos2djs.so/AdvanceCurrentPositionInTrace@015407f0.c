
/* v8::internal::Trace::AdvanceCurrentPositionInTrace(int, v8::internal::RegExpCompiler*) */

void __thiscall
v8::internal::Trace::AdvanceCurrentPositionInTrace(Trace *this,int param_1,RegExpCompiler *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  Trace *pTVar7;
  
  uVar1 = *(uint *)(this + 0x30);
  uVar4 = (ulong)uVar1;
  *(undefined4 *)(this + 0x28) = 0;
  if ((param_1 < 0) || ((int)uVar1 <= param_1)) {
    if (0 < (int)uVar1) {
      pTVar7 = this + 0x38;
      do {
        *(undefined4 *)(pTVar7 + -4) = 0;
        *pTVar7 = (Trace)0x0;
        uVar4 = uVar4 - 1;
        pTVar7 = pTVar7 + 6;
      } while (uVar4 != 0);
    }
    uVar6 = 0;
  }
  else {
    uVar6 = uVar1 - param_1;
    if (0 < (int)uVar6) {
      uVar4 = (ulong)uVar6;
      pTVar7 = this + 0x34;
      do {
        uVar2 = *(undefined4 *)(pTVar7 + (ulong)(uint)param_1 * 6);
        uVar4 = uVar4 - 1;
        pTVar7[4] = (pTVar7 + (ulong)(uint)param_1 * 6)[4];
        *(undefined4 *)pTVar7 = uVar2;
        pTVar7 = pTVar7 + 6;
      } while (uVar4 != 0);
    }
    if ((int)uVar6 < (int)uVar1) {
      lVar5 = (long)(int)uVar6;
      pTVar7 = this + (long)(int)uVar6 * 6 + 0x38;
      do {
        *(undefined4 *)(pTVar7 + -4) = 0;
        *pTVar7 = (Trace)0x0;
        lVar5 = lVar5 + 1;
        pTVar7 = pTVar7 + 6;
      } while (lVar5 < *(int *)(this + 0x30));
      uVar6 = *(int *)(this + 0x30) - param_1;
    }
  }
  iVar3 = *(int *)this;
  *(uint *)(this + 0x30) = uVar6;
  *(int *)this = iVar3 + param_1;
  if (0x7fff < iVar3 + param_1) {
    param_2[0x31] = (RegExpCompiler)0x1;
    *(undefined4 *)this = 0;
  }
  *(uint *)(this + 0x2c) =
       *(int *)(this + 0x2c) - param_1 & (*(int *)(this + 0x2c) - param_1 >> 0x1f ^ 0xffffffffU);
  return;
}

