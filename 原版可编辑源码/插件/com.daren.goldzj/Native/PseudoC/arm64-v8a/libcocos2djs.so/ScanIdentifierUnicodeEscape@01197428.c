
/* v8::internal::Scanner::ScanIdentifierUnicodeEscape() */

int __thiscall v8::internal::Scanner::ScanIdentifierUnicodeEscape(Scanner *this)

{
  ushort uVar1;
  int iVar2;
  ulong uVar3;
  ushort *puVar4;
  uint uVar5;
  long *plVar6;
  
  plVar6 = *(long **)(this + 0x18);
  puVar4 = (ushort *)plVar6[2];
  if ((ushort *)plVar6[3] <= puVar4) {
    if ((char)plVar6[6] != '\0') {
LAB_011974ac:
      plVar6[2] = (long)(puVar4 + 1);
      *(undefined4 *)(this + 0x20) = 0xffffffff;
      return -1;
    }
    uVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
    puVar4 = (ushort *)plVar6[2];
    if ((uVar3 & 1) == 0) goto LAB_011974ac;
  }
  uVar1 = *puVar4;
  plVar6[2] = (long)(puVar4 + 1);
  *(uint *)(this + 0x20) = (uint)uVar1;
  if (uVar1 != 0x75) {
    return -1;
  }
  plVar6 = *(long **)(this + 0x18);
  puVar4 = (ushort *)plVar6[2];
  if (puVar4 < (ushort *)plVar6[3]) {
LAB_0119746c:
    uVar5 = (uint)*puVar4;
  }
  else {
    if ((char)plVar6[6] == '\0') {
      uVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
      puVar4 = (ushort *)plVar6[2];
      if ((uVar3 & 1) != 0) goto LAB_0119746c;
    }
    uVar5 = 0xffffffff;
  }
  plVar6[2] = (long)(puVar4 + 1);
  *(uint *)(this + 0x20) = uVar5;
  iVar2 = ScanUnicodeEscape<false>(this);
  return iVar2;
}

