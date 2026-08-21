
/* v8::internal::Scanner::ScanDecimalAsSmiWithNumericSeparators(unsigned long*) */

undefined8 __thiscall
v8::internal::Scanner::ScanDecimalAsSmiWithNumericSeparators(Scanner *this,ulong *param_1)

{
  LiteralBuffer *this_00;
  int iVar1;
  ushort uVar2;
  bool bVar3;
  ulong uVar4;
  ushort *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  
  bVar3 = false;
LAB_0119612c:
  do {
    while( true ) {
      uVar6 = *(int *)(this + 0x20) - 0x30;
      if (uVar6 < 10) break;
      if (*(int *)(this + 0x20) != 0x5f) {
        if (!bVar3) {
          return 1;
        }
        if (*(int *)(this + 0x15c) != 0) {
          return 0;
        }
        lVar10 = *(long *)(this + 0x18);
        uVar8 = 0xd6;
        goto LAB_01196290;
      }
      plVar9 = *(long **)(this + 0x18);
      puVar5 = (ushort *)plVar9[2];
      if (puVar5 < (ushort *)plVar9[3]) {
LAB_011961d8:
        uVar2 = *puVar5;
        plVar9[2] = (long)(puVar5 + 1);
        bVar3 = true;
        *(uint *)(this + 0x20) = (uint)uVar2;
        if (uVar2 == 0x5f) {
          if (*(int *)(this + 0x15c) == 0) {
            lVar10 = *(long *)(this + 0x18);
            uVar8 = 0xd7;
LAB_01196290:
            lVar10 = *(long *)(lVar10 + 0x20) +
                     ((ulong)(*(long *)(lVar10 + 0x10) - *(long *)(lVar10 + 8)) >> 1);
            *(undefined4 *)(this + 0x15c) = uVar8;
            *(ulong *)(this + 0x160) = (ulong)((int)lVar10 - 1) | lVar10 << 0x20;
          }
          return 0;
        }
      }
      else {
        if ((char)plVar9[6] == '\0') {
          uVar4 = (**(code **)(*plVar9 + 0x28))(plVar9);
          puVar5 = (ushort *)plVar9[2];
          if ((uVar4 & 1) != 0) goto LAB_011961d8;
        }
        plVar9[2] = (long)(puVar5 + 1);
        *(undefined4 *)(this + 0x20) = 0xffffffff;
        bVar3 = true;
      }
    }
    *param_1 = *param_1 * 10 + (ulong)uVar6;
    plVar9 = *(long **)(this + 0x18);
    iVar1 = *(int *)(this + 0x20);
    puVar5 = (ushort *)plVar9[2];
    if (puVar5 < (ushort *)plVar9[3]) {
LAB_01196160:
      uVar6 = (uint)*puVar5;
    }
    else {
      if ((char)plVar9[6] == '\0') {
        uVar4 = (**(code **)(*plVar9 + 0x28))(plVar9);
        puVar5 = (ushort *)plVar9[2];
        if ((uVar4 & 1) != 0) goto LAB_01196160;
      }
      uVar6 = 0xffffffff;
    }
    plVar9[2] = (long)(puVar5 + 1);
    lVar10 = *(long *)(this + 8);
    *(uint *)(this + 0x20) = uVar6;
    this_00 = (LiteralBuffer *)(lVar10 + 8);
    if (*(char *)(lVar10 + 0x1c) != '\0') {
      if (iVar1 < 0x100) {
        iVar7 = *(int *)(lVar10 + 0x18);
        if (*(int *)(lVar10 + 0x10) <= iVar7) {
          LiteralBuffer::ExpandBuffer(this_00);
          iVar7 = *(int *)(lVar10 + 0x18);
        }
        bVar3 = false;
        *(char *)(*(long *)(lVar10 + 8) + (long)iVar7) = (char)iVar1;
        *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 1;
        goto LAB_0119612c;
      }
      LiteralBuffer::ConvertToTwoByte(this_00);
    }
    LiteralBuffer::AddTwoByteChar(this_00,iVar1);
    bVar3 = false;
  } while( true );
}

