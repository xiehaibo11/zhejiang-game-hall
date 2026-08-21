
/* v8::internal::Assembler::NEONModifiedImmShiftMsl(v8::internal::VRegister const&, int, int,
   v8::internal::NEONModifiedImmediateOp) */

void __thiscall
v8::internal::Assembler::NEONModifiedImmShiftMsl
          (Assembler *this,uint *param_1,uint param_2,uint param_3,uint param_5)

{
  uint uVar1;
  
  uVar1 = 0x40000000;
  if (param_1[1] != 0x80 || param_1[2] != 1) {
    uVar1 = 0;
  }
  Emit(this,(param_2 & 0xe0) << 0xb | (param_2 & 0x1f) << 5 | param_5 | (param_3 & 0x10) << 8 |
            *param_1 | uVar1 | 0xc000);
  return;
}

