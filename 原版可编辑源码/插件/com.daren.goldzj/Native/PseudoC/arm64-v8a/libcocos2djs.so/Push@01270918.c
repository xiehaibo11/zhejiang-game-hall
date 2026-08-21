
/* v8::internal::TurboAssembler::Push(v8::internal::CPURegister const&, v8::internal::CPURegister
   const&, v8::internal::CPURegister const&, v8::internal::CPURegister const&) */

void __thiscall
v8::internal::TurboAssembler::Push
          (TurboAssembler *this,CPURegister *param_1,CPURegister *param_2,CPURegister *param_3,
          CPURegister *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = 1;
  if (*(int *)param_2 != -1) {
    iVar3 = 2;
  }
  if (*(int *)param_3 != -1) {
    iVar3 = iVar3 + 1;
  }
  if (*(int *)param_4 != -1) {
    iVar3 = iVar3 + 1;
  }
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  PushHelper(this,iVar3,iVar1 >> 3,param_1,param_2,param_3,param_4);
  return;
}

