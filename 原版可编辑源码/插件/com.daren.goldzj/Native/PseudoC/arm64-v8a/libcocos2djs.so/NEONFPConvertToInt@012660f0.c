
/* v8::internal::Assembler::NEONFPConvertToInt(v8::internal::Register const&,
   v8::internal::VRegister const&, unsigned int) */

void __thiscall
v8::internal::Assembler::NEONFPConvertToInt
          (Assembler *this,Register *param_1,VRegister *param_2,uint param_3)

{
  Emit(this,(uint)*(ulong *)param_1 | param_3 | (uint)(*(ulong *)param_1 >> 0x20 == 0x40) << 0x1f |
            (int)*(ulong *)param_2 << 5 | (uint)(*(ulong *)param_2 >> 0x20 == 0x40) << 0x16);
  return;
}

