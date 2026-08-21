
/* v8::internal::DisassemblingDecoder::SubstituteBitfieldImmediateField(v8::internal::Instruction*,
   char const*) */

undefined8 __thiscall
v8::internal::DisassemblingDecoder::SubstituteBitfieldImmediateField
          (DisassemblingDecoder *this,Instruction *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  
  cVar2 = param_2[2];
  uVar1 = *(uint *)param_1;
  uVar3 = uVar1 >> 0x10 & 0x3f;
  uVar4 = (ulong)uVar3;
  if (cVar2 == 'Z') {
    iVar5 = 0x40;
    if (-1 < (int)uVar1) {
      iVar5 = 0x20;
    }
    uVar4 = (ulong)(iVar5 - uVar3);
    uVar6 = 5;
  }
  else if (cVar2 == 'r') {
    uVar6 = 3;
  }
  else {
    if (cVar2 != 's') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = uVar1 >> 10 & 0x3f;
    if (param_2[3] == '+') {
      uVar4 = (ulong)(uVar1 + 1);
      uVar6 = 5;
    }
    else {
      uVar4 = (ulong)((uVar1 - uVar3) + 1);
      uVar6 = 7;
    }
  }
  AppendToOutput((char *)this,&DAT_019f62a9,uVar4);
  return uVar6;
}

