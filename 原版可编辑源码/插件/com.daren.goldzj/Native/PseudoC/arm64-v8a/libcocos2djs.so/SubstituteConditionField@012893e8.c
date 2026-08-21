
/* v8::internal::DisassemblingDecoder::SubstituteConditionField(v8::internal::Instruction*, char
   const*) */

undefined8 __thiscall
v8::internal::DisassemblingDecoder::SubstituteConditionField
          (DisassemblingDecoder *this,Instruction *param_1,char *param_2)

{
  ulong uVar1;
  
  if (param_2[1] == 'I') {
    uVar1 = (ulong)(*(uint *)param_1 >> 0xc & 0xf ^ 1);
  }
  else if (param_2[1] == 'B') {
    uVar1 = (ulong)(*(uint *)param_1 & 0xf);
  }
  else {
    uVar1 = (ulong)(*(uint *)param_1 >> 0xc & 0xf);
  }
  AppendToOutput((char *)this,"%s",*(undefined8 *)(&DAT_01cbdbd8 + uVar1 * 8));
  return 4;
}

