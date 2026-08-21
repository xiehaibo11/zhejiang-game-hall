
/* v8::internal::Scanner::ScanDecimalAsSmi(unsigned long*, bool) */

undefined8 __thiscall
v8::internal::Scanner::ScanDecimalAsSmi(Scanner *this,ulong *param_1,bool param_2)

{
  LiteralBuffer *this_00;
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  ushort *puVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  
  if (param_2) {
    uVar2 = ScanDecimalAsSmiWithNumericSeparators(this,param_1);
    return uVar2;
  }
  iVar1 = *(int *)(this + 0x20);
  do {
    if (9 < iVar1 - 0x30U) {
      return 1;
    }
    *param_1 = *param_1 * 10 + (ulong)(iVar1 - 0x30U);
    plVar7 = *(long **)(this + 0x18);
    iVar1 = *(int *)(this + 0x20);
    puVar5 = (ushort *)plVar7[2];
    if (puVar5 < (ushort *)plVar7[3]) {
LAB_01196364:
      uVar6 = (uint)*puVar5;
    }
    else {
      if ((char)plVar7[6] == '\0') {
        uVar3 = (**(code **)(*plVar7 + 0x28))(plVar7);
        puVar5 = (ushort *)plVar7[2];
        if ((uVar3 & 1) != 0) goto LAB_01196364;
      }
      uVar6 = 0xffffffff;
    }
    plVar7[2] = (long)(puVar5 + 1);
    lVar8 = *(long *)(this + 8);
    *(uint *)(this + 0x20) = uVar6;
    this_00 = (LiteralBuffer *)(lVar8 + 8);
    if (*(char *)(lVar8 + 0x1c) == '\0') {
LAB_01196324:
      LiteralBuffer::AddTwoByteChar(this_00,iVar1);
    }
    else {
      if (0xff < iVar1) {
        LiteralBuffer::ConvertToTwoByte(this_00);
        goto LAB_01196324;
      }
      iVar4 = *(int *)(lVar8 + 0x18);
      if (*(int *)(lVar8 + 0x10) <= iVar4) {
        LiteralBuffer::ExpandBuffer(this_00);
        iVar4 = *(int *)(lVar8 + 0x18);
      }
      *(char *)(*(long *)(lVar8 + 8) + (long)iVar4) = (char)iVar1;
      *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
    }
    iVar1 = *(int *)(this + 0x20);
  } while( true );
}

