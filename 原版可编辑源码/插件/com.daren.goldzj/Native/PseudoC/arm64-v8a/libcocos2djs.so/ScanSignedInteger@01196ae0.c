
/* v8::internal::Scanner::ScanSignedInteger() */

undefined8 __thiscall v8::internal::Scanner::ScanSignedInteger(Scanner *this)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  ushort *puVar5;
  uint uVar6;
  long lVar7;
  
  uVar6 = *(uint *)(this + 0x20);
  if ((uVar6 != 0x2d) && (uVar6 != 0x2b)) goto LAB_01196b70;
  lVar7 = *(long *)(this + 8);
  if (*(char *)(lVar7 + 0x1c) == '\0') {
    LiteralBuffer::AddTwoByteChar((LiteralBuffer *)(lVar7 + 8),uVar6);
  }
  else {
    iVar3 = *(int *)(lVar7 + 0x18);
    if (*(int *)(lVar7 + 0x10) <= iVar3) {
      LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar7 + 8));
      iVar3 = *(int *)(lVar7 + 0x18);
    }
    *(char *)(*(long *)(lVar7 + 8) + (long)iVar3) = (char)uVar6;
    *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
  }
  plVar4 = *(long **)(this + 0x18);
  puVar5 = (ushort *)plVar4[2];
  if (puVar5 < (ushort *)plVar4[3]) {
LAB_01196b60:
    uVar6 = (uint)*puVar5;
  }
  else {
    if ((char)plVar4[6] == '\0') {
      uVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
      puVar5 = (ushort *)plVar4[2];
      if ((uVar2 & 1) != 0) goto LAB_01196b60;
    }
    uVar6 = 0xffffffff;
  }
  plVar4[2] = (long)(puVar5 + 1);
  *(uint *)(this + 0x20) = uVar6;
LAB_01196b70:
  if (uVar6 - 0x30 < 10) {
    uVar1 = ScanDecimalDigits(this,true);
    return uVar1;
  }
  return 0;
}

