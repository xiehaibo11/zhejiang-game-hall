
/* v8::internal::AsmJsScanner::ConsumeCComment() */

undefined8 __thiscall v8::internal::AsmJsScanner::ConsumeCComment(AsmJsScanner *this)

{
  ulong uVar1;
  uint uVar2;
  ushort *puVar3;
  long *plVar4;
  
  do {
    plVar4 = *(long **)this;
    puVar3 = (ushort *)plVar4[2];
    if (puVar3 < (ushort *)plVar4[3]) {
LAB_0148ec84:
      uVar2 = (uint)*puVar3;
    }
    else {
      if ((char)plVar4[6] == '\0') {
        uVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
        puVar3 = (ushort *)plVar4[2];
        if ((uVar1 & 1) != 0) goto LAB_0148ec84;
      }
      uVar2 = 0xffffffff;
    }
    plVar4[2] = (long)(puVar3 + 1);
    while (uVar2 == 0x2a) {
      plVar4 = *(long **)this;
      puVar3 = (ushort *)plVar4[2];
      if (puVar3 < (ushort *)plVar4[3]) {
LAB_0148eca8:
        uVar2 = (uint)*puVar3;
      }
      else {
        if ((char)plVar4[6] == '\0') {
          uVar1 = (**(code **)(*plVar4 + 0x28))(plVar4);
          puVar3 = (ushort *)plVar4[2];
          if ((uVar1 & 1) != 0) goto LAB_0148eca8;
        }
        uVar2 = 0xffffffff;
      }
      plVar4[2] = (long)(puVar3 + 1);
      if (uVar2 == 0x2f) {
        return 1;
      }
    }
    if (uVar2 == 0xffffffff) {
      return 0;
    }
    if (uVar2 == 10) {
      this[0xe4] = (AsmJsScanner)0x1;
    }
  } while( true );
}

