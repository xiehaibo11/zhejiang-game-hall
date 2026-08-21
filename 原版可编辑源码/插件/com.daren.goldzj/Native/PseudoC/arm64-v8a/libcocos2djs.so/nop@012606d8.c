
/* v8::internal::Assembler::nop(v8::internal::Assembler::NopMarkerTypes) */

void __thiscall v8::internal::Assembler::nop(Assembler *this,uint param_2)

{
  ulong local_30;
  undefined4 local_28;
  ulong local_20;
  undefined4 local_18;
  
  local_30 = 0x400000003f;
  if (param_2 != 0x3f) {
    local_30 = (ulong)param_2 | 0x4000000000;
  }
  local_18 = 0;
  local_28 = 0;
  local_20 = local_30;
  mov(this,(Register *)&local_20,(Register *)&local_30);
  return;
}

