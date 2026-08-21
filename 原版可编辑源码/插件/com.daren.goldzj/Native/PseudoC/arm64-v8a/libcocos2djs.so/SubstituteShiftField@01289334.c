
/* v8::internal::DisassemblingDecoder::SubstituteShiftField(v8::internal::Instruction*, char const*)
    */

undefined8 __thiscall
v8::internal::DisassemblingDecoder::SubstituteShiftField
          (DisassemblingDecoder *this,Instruction *param_1,char *param_2)

{
  if ((byte)(param_2[1] | 8U) == 0x4c) {
    if ((*(uint *)param_1 >> 10 & 0x3f) != 0) {
      AppendToOutput((char *)this,", %s #%d",
                     (&PTR_DAT_01cbdbb8)[(ulong)(*(uint *)param_1 >> 0x16) & 3]);
    }
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

