
/* v8::internal::AsmJsScanner::ConsumeCPPComment() */

void __thiscall v8::internal::AsmJsScanner::ConsumeCPPComment(AsmJsScanner *this)

{
  short sVar1;
  ulong uVar2;
  short *psVar3;
  long *plVar4;
  
  do {
    plVar4 = *(long **)this;
    psVar3 = (short *)plVar4[2];
    if ((short *)plVar4[3] <= psVar3) {
      if ((char)plVar4[6] != '\0') {
LAB_0148ec3c:
        plVar4[2] = (long)(psVar3 + 1);
        return;
      }
      uVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
      psVar3 = (short *)plVar4[2];
      if ((uVar2 & 1) == 0) goto LAB_0148ec3c;
    }
    sVar1 = *psVar3;
    plVar4[2] = (long)(psVar3 + 1);
    if (sVar1 == 10) {
      this[0xe4] = (AsmJsScanner)0x1;
      return;
    }
  } while( true );
}

