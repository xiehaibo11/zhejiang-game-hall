
/* v8::internal::HandlerTable::EmitReturnEntry(v8::internal::Assembler*, int, int) */

void v8::internal::HandlerTable::EmitReturnEntry(Assembler *param_1,int param_2,int param_3)

{
  Assembler::dc32(param_1,param_2);
  Assembler::dc32(param_1,param_3 << 3);
  return;
}

