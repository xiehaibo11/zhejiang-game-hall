
/* v8::internal::FeedbackNexus::ConfigureLexicalVarMode(int, int, bool) */

undefined4 __thiscall
v8::internal::FeedbackNexus::ConfigureLexicalVarMode
          (FeedbackNexus *this,int param_1,int param_2,bool param_3)

{
  FeedbackNexus *pFVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (((uint)param_1 < 0x1000) && ((uint)param_2 >> 0x12 == 0)) {
    uVar3 = 0x40000000;
    if (!param_3) {
      uVar3 = 0;
    }
    pFVar1 = this + 8;
    if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
      pFVar1 = *(FeedbackNexus **)this;
    }
    *(uint *)(*(long *)pFVar1 + (long)(*(int *)(this + 0x10) << 2) + 0x1f) =
         (param_1 | param_2 << 0xc | uVar3) << 1;
    pFVar1 = this + 8;
    if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
      pFVar1 = *(FeedbackNexus **)this;
    }
    *(undefined4 *)(*(ulong *)pFVar1 + (long)(*(int *)(this + 0x10) * 4 + 4) + 0x1f) =
         *(undefined4 *)((*(ulong *)pFVar1 & 0xffffffff00000000) + 0xc08);
    uVar2 = 1;
  }
  return uVar2;
}

