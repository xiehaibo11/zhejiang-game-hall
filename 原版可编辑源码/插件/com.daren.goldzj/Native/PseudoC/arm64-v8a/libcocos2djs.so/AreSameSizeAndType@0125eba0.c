
/* v8::internal::AreSameSizeAndType(v8::internal::CPURegister const&, v8::internal::CPURegister
   const&, v8::internal::CPURegister const&, v8::internal::CPURegister const&,
   v8::internal::CPURegister const&, v8::internal::CPURegister const&, v8::internal::CPURegister
   const&, v8::internal::CPURegister const&) */

byte v8::internal::AreSameSizeAndType
               (CPURegister *param_1,CPURegister *param_2,CPURegister *param_3,CPURegister *param_4,
               CPURegister *param_5,CPURegister *param_6,CPURegister *param_7,CPURegister *param_8)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(int *)param_2 == -1) {
    bVar2 = true;
  }
  else {
    bVar2 = *(int *)(param_2 + 4) == *(int *)(param_1 + 4) &&
            *(int *)(param_2 + 8) == *(int *)(param_1 + 8);
  }
  if (*(int *)param_3 == -1) {
    bVar3 = true;
  }
  else {
    bVar3 = *(int *)(param_3 + 4) == *(int *)(param_1 + 4) &&
            *(int *)(param_3 + 8) == *(int *)(param_1 + 8);
  }
  if (*(int *)param_4 == -1) {
    bVar4 = true;
  }
  else {
    bVar4 = *(int *)(param_4 + 4) == *(int *)(param_1 + 4) &&
            *(int *)(param_4 + 8) == *(int *)(param_1 + 8);
  }
  if (*(int *)param_5 == -1) {
    bVar5 = true;
  }
  else {
    bVar5 = *(int *)(param_5 + 4) == *(int *)(param_1 + 4) &&
            *(int *)(param_5 + 8) == *(int *)(param_1 + 8);
  }
  if (*(int *)param_6 == -1) {
    bVar6 = true;
  }
  else {
    bVar6 = *(int *)(param_6 + 4) == *(int *)(param_1 + 4) &&
            *(int *)(param_6 + 8) == *(int *)(param_1 + 8);
  }
  if (*(int *)param_7 == -1) {
    bVar7 = true;
  }
  else {
    bVar7 = *(int *)(param_7 + 4) == *(int *)(param_1 + 4) &&
            *(int *)(param_7 + 8) == *(int *)(param_1 + 8);
  }
  bVar1 = bVar3 & bVar2 & bVar4 & bVar5 & bVar6 & bVar7;
  if (*(int *)param_8 != -1) {
    return bVar1 & (*(int *)(param_8 + 4) == *(int *)(param_1 + 4) &&
                   *(int *)(param_8 + 8) == *(int *)(param_1 + 8));
  }
  return bVar1;
}

