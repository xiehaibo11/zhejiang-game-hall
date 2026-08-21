
/* v8::internal::Scanner::ScanOctalDigits() */

undefined8 __thiscall v8::internal::Scanner::ScanOctalDigits(Scanner *this)

{
  LiteralBuffer *this_00;
  bool bVar1;
  ulong uVar2;
  int iVar3;
  ushort *puVar4;
  undefined4 uVar5;
  uint uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  uVar6 = *(uint *)(this + 0x20);
  if ((uVar6 & 0xfffffff8) == 0x30) {
    bVar1 = false;
    do {
      while ((uVar6 & 0xfffffff8) == 0x30) {
        if (uVar6 == 0x5f) goto LAB_01196660;
        lVar9 = *(long *)(this + 8);
        this_00 = (LiteralBuffer *)(lVar9 + 8);
        if (*(char *)(lVar9 + 0x1c) == '\0') {
LAB_0119669c:
          LiteralBuffer::AddTwoByteChar(this_00,uVar6);
        }
        else {
          if (0xff < (int)uVar6) {
            LiteralBuffer::ConvertToTwoByte(this_00);
            goto LAB_0119669c;
          }
          iVar3 = *(int *)(lVar9 + 0x18);
          if (*(int *)(lVar9 + 0x10) <= iVar3) {
            LiteralBuffer::ExpandBuffer(this_00);
            iVar3 = *(int *)(lVar9 + 0x18);
          }
          *(char *)(*(long *)(lVar9 + 8) + (long)iVar3) = (char)uVar6;
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
        }
        plVar7 = *(long **)(this + 0x18);
        plVar8 = plVar7 + 2;
        puVar4 = (ushort *)*plVar8;
        if (puVar4 < (ushort *)plVar7[3]) {
LAB_011966c0:
          uVar6 = (uint)*puVar4;
          bVar1 = false;
        }
        else {
          if ((char)plVar7[6] == '\0') {
            uVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar4 = (ushort *)plVar7[2];
            if ((uVar2 & 1) != 0) goto LAB_011966c0;
          }
          bVar1 = false;
          uVar6 = 0xffffffff;
        }
LAB_011966c8:
        *plVar8 = (long)(puVar4 + 1);
        *(uint *)(this + 0x20) = uVar6;
      }
      if (uVar6 != 0x5f) {
        if (!bVar1) {
          return 1;
        }
        if (*(int *)(this + 0x15c) != 0) {
          return 0;
        }
        lVar9 = *(long *)(this + 0x18);
        uVar5 = 0xd6;
        goto LAB_0119677c;
      }
LAB_01196660:
      plVar7 = *(long **)(this + 0x18);
      plVar8 = plVar7 + 2;
      puVar4 = (ushort *)*plVar8;
      if ((ushort *)plVar7[3] <= puVar4) {
        if ((char)plVar7[6] == '\0') {
          uVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
          puVar4 = (ushort *)plVar7[2];
          if ((uVar2 & 1) != 0) goto LAB_01196678;
        }
        bVar1 = true;
        uVar6 = 0xffffffff;
        goto LAB_011966c8;
      }
LAB_01196678:
      uVar6 = (uint)*puVar4;
      bVar1 = true;
      *plVar8 = (long)(puVar4 + 1);
      *(uint *)(this + 0x20) = uVar6;
    } while (uVar6 != 0x5f);
    if (*(int *)(this + 0x15c) == 0) {
      lVar9 = *(long *)(this + 0x18);
      uVar5 = 0xd7;
LAB_0119677c:
      lVar9 = *(long *)(lVar9 + 0x20) +
              ((ulong)(*(long *)(lVar9 + 0x10) - *(long *)(lVar9 + 8)) >> 1);
      *(undefined4 *)(this + 0x15c) = uVar5;
      *(ulong *)(this + 0x160) = (ulong)((int)lVar9 - 1) | lVar9 << 0x20;
      return 0;
    }
  }
  return 0;
}

