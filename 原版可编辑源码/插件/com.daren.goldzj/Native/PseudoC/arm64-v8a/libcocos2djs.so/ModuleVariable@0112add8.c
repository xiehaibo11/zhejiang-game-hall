
/* v8::internal::ScopeInfo::ModuleVariable(int, v8::internal::String*, int*,
   v8::internal::VariableMode*, v8::internal::InitializationFlag*, v8::internal::MaybeAssignedFlag*)
    */

void __thiscall
v8::internal::ScopeInfo::ModuleVariable
          (ScopeInfo *this,int param_1,String *param_2,int *param_3,VariableMode *param_4,
          InitializationFlag *param_5,MaybeAssignedFlag *param_6)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(ulong *)this;
  if (*(int *)(uVar1 + 3) < 2) {
    uVar2 = 0;
    iVar3 = 5;
  }
  else {
    uVar2 = *(uint *)(uVar1 + 7) >> 0x17 & 1;
    iVar3 = (*(int *)(uVar1 + 0xf) >> 1) + (*(int *)(uVar1 + 0xf) >> 1) +
            (*(uint *)(uVar1 + 7) >> 0xb & 1) + (uint)((*(uint *)(uVar1 + 7) & 0x6000) != 0) * 2 +
            (*(uint *)(uVar1 + 7) >> 0xf & 1);
    if ((*(uint *)(uVar1 + 7) >> 8 & 3) - 1 < 2) {
      iVar3 = iVar3 + 1;
    }
    iVar3 = iVar3 + (uint)(((*(uint *)(uVar1 + 7) >> 1 & 0xf) - 1 & 0xff) < 4) * 2 + 5;
  }
  iVar3 = (iVar3 + param_1 * 3 + uVar2) * 4;
  uVar2 = *(uint *)(uVar1 + 7 + (long)(iVar3 + 8));
  if (param_2 != (String *)0x0) {
    *(ulong *)param_2 = uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 7 + (long)iVar3);
  }
  if (param_3 != (int *)0x0) {
    *param_3 = *(int *)(*(long *)this + (long)(iVar3 + 4) + 7) >> 1;
  }
  if (param_4 != (VariableMode *)0x0) {
    *param_4 = (VariableMode)((byte)(uVar2 >> 1) & 0xf);
  }
  uVar2 = (int)uVar2 >> 1;
  if (param_5 != (InitializationFlag *)0x0) {
    *param_5 = (InitializationFlag)((byte)(uVar2 >> 4) & 1);
  }
  if (param_6 != (MaybeAssignedFlag *)0x0) {
    *param_6 = (MaybeAssignedFlag)((byte)(uVar2 >> 5) & 1);
  }
  return;
}

