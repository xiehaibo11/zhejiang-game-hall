
/* v8::internal::DisassemblingDecoder::Format(v8::internal::Instruction*, char const*, char const*)
    */

void __thiscall
v8::internal::DisassemblingDecoder::Format
          (DisassemblingDecoder *this,Instruction *param_1,char *param_2,char *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  *(undefined4 *)(this + 0x10) = 0;
  **(undefined1 **)(this + 8) = 0;
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
  if (param_3 != (char *)0x0) {
    uVar1 = *(uint *)(this + 0x10);
    *(uint *)(this + 0x10) = uVar1 + 1;
    *(undefined1 *)(*(long *)(this + 8) + (ulong)uVar1) = 0x20;
    while( true ) {
      while( true ) {
        pcVar4 = param_3 + 1;
        cVar2 = *param_3;
        if (cVar2 != '\'') break;
        iVar3 = SubstituteField(this,param_1,pcVar4);
        param_3 = pcVar4 + iVar3;
      }
      if (cVar2 == '\0') break;
      uVar1 = *(uint *)(this + 0x10);
      *(uint *)(this + 0x10) = uVar1 + 1;
      *(char *)(*(long *)(this + 8) + (ulong)uVar1) = cVar2;
      param_3 = pcVar4;
    }
  }
  *(undefined1 *)(*(long *)(this + 8) + (ulong)*(uint *)(this + 0x10)) = 0;
                    /* WARNING: Could not recover jumptable at 0x0127f0ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x220))(this,param_1);
  return;
}

