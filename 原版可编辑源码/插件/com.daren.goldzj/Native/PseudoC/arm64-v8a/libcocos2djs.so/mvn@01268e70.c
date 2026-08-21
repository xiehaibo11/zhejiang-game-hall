
/* v8::internal::Assembler::mvn(v8::internal::VRegister const&, v8::internal::VRegister const&) */

void __thiscall v8::internal::Assembler::mvn(Assembler *this,VRegister *param_1,VRegister *param_2)

{
  ulong local_30;
  undefined8 uStack_28;
  ulong local_20 [2];
  
  if ((*(int *)(param_1 + 8) == 1) && (*(int *)(param_1 + 4) == 0x40)) {
    uStack_28 = 0x800000001;
    local_20[0] = (ulong)*(uint *)param_1 | 0x4000000000;
    local_20[1] = 0x800000001;
    local_30 = (ulong)*(uint *)param_2 | 0x4000000000;
  }
  else {
    uStack_28 = 0x1000000001;
    local_20[0] = (ulong)*(uint *)param_1 | 0x8000000000;
    local_20[1] = 0x1000000001;
    local_30 = (ulong)*(uint *)param_2 | 0x8000000000;
  }
  not_(this,(VRegister *)local_20,(VRegister *)&local_30);
  return;
}

