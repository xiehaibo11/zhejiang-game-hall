
/* v8::internal::DisassemblingDecoder::Substitute(v8::internal::Instruction*, char const*) */

void __thiscall
v8::internal::DisassemblingDecoder::Substitute
          (DisassemblingDecoder *this,Instruction *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  while( true ) {
    while( true ) {
      pcVar4 = param_2 + 1;
      cVar2 = *param_2;
      if (cVar2 != '\'') break;
      iVar3 = SubstituteField(this,param_1,pcVar4);
      param_2 = pcVar4 + iVar3;
    }
    if (cVar2 == '\0') break;
    uVar1 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar1 + 1;
    *(char *)(*(long *)(this + 8) + (ulong)uVar1) = cVar2;
    param_2 = pcVar4;
  }
  return;
}

