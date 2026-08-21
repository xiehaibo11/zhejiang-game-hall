
/* void v8::internal::Scanner::Advance<true>() */

void __thiscall v8::internal::Scanner::Advance<true>(Scanner *this)

{
  LiteralBuffer *this_00;
  int iVar1;
  ulong uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(this + 8);
  iVar1 = *(int *)(this + 0x20);
  this_00 = (LiteralBuffer *)(lVar7 + 0x20);
  if (*(char *)(lVar7 + 0x34) == '\0') {
LAB_011982e4:
    LiteralBuffer::AddTwoByteChar(this_00,iVar1);
  }
  else {
    if (0xff < iVar1) {
      LiteralBuffer::ConvertToTwoByte(this_00);
      goto LAB_011982e4;
    }
    iVar3 = *(int *)(lVar7 + 0x30);
    if (*(int *)(lVar7 + 0x28) <= iVar3) {
      LiteralBuffer::ExpandBuffer(this_00);
      iVar3 = *(int *)(lVar7 + 0x30);
    }
    *(char *)(*(long *)(lVar7 + 0x20) + (long)iVar3) = (char)iVar1;
    *(int *)(lVar7 + 0x30) = *(int *)(lVar7 + 0x30) + 1;
  }
  plVar6 = *(long **)(this + 0x18);
  puVar4 = (ushort *)plVar6[2];
  if (puVar4 < (ushort *)plVar6[3]) {
LAB_01198300:
    uVar5 = (uint)*puVar4;
  }
  else {
    if ((char)plVar6[6] == '\0') {
      uVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
      puVar4 = (ushort *)plVar6[2];
      if ((uVar2 & 1) != 0) goto LAB_01198300;
    }
    uVar5 = 0xffffffff;
  }
  plVar6[2] = (long)(puVar4 + 1);
  *(uint *)(this + 0x20) = uVar5;
  return;
}

