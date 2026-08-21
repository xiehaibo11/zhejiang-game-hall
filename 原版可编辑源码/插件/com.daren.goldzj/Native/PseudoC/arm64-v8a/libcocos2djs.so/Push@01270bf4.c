
/* v8::internal::TurboAssembler::Push(v8::internal::CPURegister const&, v8::internal::CPURegister
   const&, v8::internal::CPURegister const&, v8::internal::CPURegister const&,
   v8::internal::CPURegister const&, v8::internal::CPURegister const&, v8::internal::CPURegister
   const&, v8::internal::CPURegister const&) */

void __thiscall
v8::internal::TurboAssembler::Push
          (TurboAssembler *this,CPURegister *param_1,CPURegister *param_2,CPURegister *param_3,
          CPURegister *param_4,CPURegister *param_5,CPURegister *param_6,CPURegister *param_7,
          CPURegister *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)param_7;
  iVar4 = *(int *)(param_1 + 4);
  iVar3 = *(int *)param_6;
  iVar1 = iVar4 + 7;
  if (-1 < iVar4) {
    iVar1 = iVar4;
  }
  PushHelper(this,4,iVar1 >> 3,param_1,param_2,param_3,param_4);
  iVar4 = 1;
  if (iVar3 != -1) {
    iVar4 = 2;
  }
  PushHelper(this,iVar4 + (uint)(iVar2 != -1) * 2,iVar1 >> 3,param_5,param_6,param_7,param_8);
  return;
}

