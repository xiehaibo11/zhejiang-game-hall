
/* v8::internal::TurboAssembler::PopCPURegList(v8::internal::CPURegList) */

void v8::internal::TurboAssembler::PopCPURegList
               (TurboAssembler *param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [12];
  undefined1 local_80 [12];
  undefined1 local_70 [12];
  undefined1 local_60 [12];
  undefined1 local_50 [12];
  ulong local_40;
  undefined8 uStack_38;
  
  iVar2 = (int)param_3;
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  if (param_2 != 0) {
    local_40 = param_2;
    uStack_38 = param_3;
    do {
      iVar2 = CountSetBits(local_40,0x40);
      auVar4 = CPURegList::PopLowestIndex((CPURegList *)&local_40);
      local_50 = auVar4;
      auVar4 = CPURegList::PopLowestIndex((CPURegList *)&local_40);
      local_60 = auVar4;
      auVar4 = CPURegList::PopLowestIndex((CPURegList *)&local_40);
      local_70 = auVar4;
      auVar4 = CPURegList::PopLowestIndex((CPURegList *)&local_40);
      local_80 = auVar4;
      iVar3 = CountSetBits(local_40,0x40);
      PopHelper(param_1,iVar2 - iVar3,iVar1 >> 3,(CPURegister *)local_50,(CPURegister *)local_60,
                (CPURegister *)local_70,(CPURegister *)local_80);
    } while (local_40 != 0);
  }
  return;
}

