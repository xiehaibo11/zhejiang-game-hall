
/* v8::internal::DisassemblingDecoder::SubstituteBarrierField(v8::internal::Instruction*, char
   const*) */

undefined8
v8::internal::DisassemblingDecoder::SubstituteBarrierField(Instruction *param_1,char *param_2)

{
  AppendToOutput((char *)param_1,"%s",
                 (&PTR_s_sy__0b0000__01cbdcd8)
                 [((ulong)(*(uint *)param_2 >> 10) & 3) * 4 + ((ulong)(*(uint *)param_2 >> 8) & 3)])
  ;
  return 1;
}

