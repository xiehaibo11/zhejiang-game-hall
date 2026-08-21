
/* v8::internal::Scanner::ScanTemplateSpan() */

void __thiscall v8::internal::Scanner::ScanTemplateSpan(Scanner *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  short *psVar7;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  LiteralBuffer *pLVar11;
  long *plVar12;
  long *plVar13;
  undefined8 uVar14;
  
  lVar6 = *(long *)(this + 8);
  uVar1 = *(undefined8 *)(this + 0x158);
  uVar2 = *(undefined8 *)(this + 0x160);
  uVar14 = *(undefined8 *)(this + 0x150);
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x160) = 0xffffffff;
  *(undefined8 *)(this + 0x150) = 0xffffffff;
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(undefined1 *)(lVar6 + 0x1c) = 1;
  lVar6 = *(long *)(this + 8);
  *(undefined1 *)(lVar6 + 0x34) = 1;
  *(undefined4 *)(lVar6 + 0x30) = 0;
LAB_011954ac:
  do {
    while (iVar10 = *(int *)(this + 0x20), iVar10 != 0x24) {
      if (iVar10 != 0x5c) {
        if (iVar10 == 0x60) {
          plVar12 = *(long **)(this + 0x18);
          plVar13 = plVar12 + 2;
          puVar8 = (ushort *)*plVar13;
          if (puVar8 < (ushort *)plVar12[3]) {
LAB_01195874:
            uVar9 = (uint)*puVar8;
            uVar3 = 1;
          }
          else {
            if ((char)plVar12[6] == '\0') {
              uVar4 = (**(code **)(*plVar12 + 0x28))(plVar12);
              puVar8 = (ushort *)plVar12[2];
              if ((uVar4 & 1) != 0) goto LAB_01195874;
            }
            uVar3 = 1;
            uVar9 = 0xffffffff;
          }
LAB_011958c8:
          *plVar13 = (long)(puVar8 + 1);
          *(uint *)(this + 0x20) = uVar9;
        }
        else {
          if (-1 < iVar10) goto LAB_011954ec;
          uVar3 = 0;
        }
        lVar6 = *(long *)(this + 0x18);
        *(int *)(*(long *)(this + 8) + 4) =
             (int)((ulong)(*(long *)(lVar6 + 0x10) - *(long *)(lVar6 + 8)) >> 1) +
             *(int *)(lVar6 + 0x20) + -1;
        *(undefined1 *)(*(long *)(this + 8) + 0x38) = uVar3;
        *(undefined8 *)(this + 0x150) = uVar14;
        *(undefined8 *)(this + 0x158) = uVar1;
        *(undefined8 *)(this + 0x160) = uVar2;
        return;
      }
      plVar12 = *(long **)(this + 0x18);
      puVar8 = (ushort *)plVar12[2];
      if (puVar8 < (ushort *)plVar12[3]) {
LAB_0119559c:
        uVar9 = (uint)*puVar8;
      }
      else {
        if ((char)plVar12[6] == '\0') {
          uVar4 = (**(code **)(*plVar12 + 0x28))(plVar12);
          puVar8 = (ushort *)plVar12[2];
          if ((uVar4 & 1) != 0) goto LAB_0119559c;
        }
        uVar9 = 0xffffffff;
      }
      plVar12[2] = (long)(puVar8 + 1);
      lVar6 = *(long *)(this + 8);
      *(uint *)(this + 0x20) = uVar9;
      if (*(char *)(lVar6 + 0x34) == '\0') {
        LiteralBuffer::AddTwoByteChar((LiteralBuffer *)(lVar6 + 0x20),0x5c);
      }
      else {
        iVar10 = *(int *)(lVar6 + 0x30);
        if (*(int *)(lVar6 + 0x28) <= iVar10) {
          LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar6 + 0x20));
          iVar10 = *(int *)(lVar6 + 0x30);
        }
        *(undefined1 *)(*(long *)(lVar6 + 0x20) + (long)iVar10) = 0x5c;
        *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + 1;
      }
      iVar10 = *(int *)(this + 0x20);
      if (((iVar10 - 0x2028U < 2) || (iVar10 == 0xd)) || (iVar10 == 10)) {
        plVar12 = *(long **)(this + 0x18);
        puVar8 = (ushort *)plVar12[2];
        if (puVar8 < (ushort *)plVar12[3]) {
LAB_01195684:
          uVar9 = (uint)*puVar8;
        }
        else {
          if ((char)plVar12[6] == '\0') {
            uVar4 = (**(code **)(*plVar12 + 0x28))(plVar12);
            puVar8 = (ushort *)plVar12[2];
            if ((uVar4 & 1) != 0) goto LAB_01195684;
          }
          uVar9 = 0xffffffff;
        }
        plVar12[2] = (long)(puVar8 + 1);
        *(uint *)(this + 0x20) = uVar9;
        if (iVar10 == 0xd) {
          if (uVar9 == 10) {
            plVar12 = *(long **)(this + 0x18);
            puVar8 = (ushort *)plVar12[2];
            if (puVar8 < (ushort *)plVar12[3]) {
LAB_011956b4:
              uVar9 = (uint)*puVar8;
            }
            else {
              if ((char)plVar12[6] == '\0') {
                uVar4 = (**(code **)(*plVar12 + 0x28))(plVar12);
                puVar8 = (ushort *)plVar12[2];
                if ((uVar4 & 1) != 0) goto LAB_011956b4;
              }
              uVar9 = 0xffffffff;
            }
            plVar12[2] = (long)(puVar8 + 1);
            *(uint *)(this + 0x20) = uVar9;
          }
          iVar10 = 10;
        }
        lVar6 = *(long *)(this + 8);
        pLVar11 = (LiteralBuffer *)(lVar6 + 0x20);
        if (*(char *)(lVar6 + 0x34) == '\0') goto LAB_011954a0;
        if (0xff < iVar10) goto LAB_01195498;
        iVar5 = *(int *)(lVar6 + 0x30);
        if (*(int *)(lVar6 + 0x28) <= iVar5) {
          LiteralBuffer::ExpandBuffer(pLVar11);
          iVar5 = *(int *)(lVar6 + 0x30);
        }
        *(char *)(*(long *)(lVar6 + 0x20) + (long)iVar5) = (char)iVar10;
        *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + 1;
      }
      else {
        ScanEscape<true>(this);
        lVar6 = *(long *)(this + 8);
        if (*(int *)(this + 0x15c) != 0) {
          if (*(int *)(lVar6 + 0x3c) == 0) {
            *(int *)(lVar6 + 0x3c) = *(int *)(this + 0x15c);
            *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(this + 0x160);
            lVar6 = *(long *)(this + 8);
          }
          *(undefined4 *)(this + 0x15c) = 0;
          *(undefined8 *)(this + 0x160) = 0xffffffff;
        }
        if (*(int *)(this + 0x158) != 0) {
          if (*(int *)(lVar6 + 0x3c) == 0) {
            *(int *)(lVar6 + 0x3c) = *(int *)(this + 0x158);
            *(undefined8 *)(lVar6 + 0x40) = *(undefined8 *)(this + 0x150);
          }
          *(undefined4 *)(this + 0x158) = 0;
          *(undefined8 *)(this + 0x150) = 0xffffffff;
        }
      }
    }
    plVar12 = *(long **)(this + 0x18);
    psVar7 = (short *)plVar12[2];
    if ((short *)plVar12[3] <= psVar7) {
      if (((char)plVar12[6] != '\0') ||
         (uVar4 = (**(code **)(*plVar12 + 0x28))(plVar12), (uVar4 & 1) == 0)) goto LAB_011954ec;
      psVar7 = (short *)plVar12[2];
    }
    if (*psVar7 == 0x7b) {
      plVar12 = *(long **)(this + 0x18);
      puVar8 = (ushort *)plVar12[2];
      if (puVar8 < (ushort *)plVar12[3]) {
LAB_01195898:
        uVar9 = (uint)*puVar8;
      }
      else {
        if ((char)plVar12[6] == '\0') {
          uVar4 = (**(code **)(*plVar12 + 0x28))(plVar12);
          puVar8 = (ushort *)plVar12[2];
          if ((uVar4 & 1) != 0) goto LAB_01195898;
        }
        uVar9 = 0xffffffff;
      }
      plVar12[2] = (long)(puVar8 + 1);
      plVar12 = *(long **)(this + 0x18);
      *(uint *)(this + 0x20) = uVar9;
      plVar13 = plVar12 + 2;
      puVar8 = (ushort *)*plVar13;
      if (puVar8 < (ushort *)plVar12[3]) {
LAB_011958c0:
        uVar9 = (uint)*puVar8;
        uVar3 = 0;
      }
      else {
        if ((char)plVar12[6] == '\0') {
          uVar4 = (**(code **)(*plVar12 + 0x28))(plVar12);
          puVar8 = (ushort *)plVar12[2];
          if ((uVar4 & 1) != 0) goto LAB_011958c0;
        }
        uVar3 = 0;
        uVar9 = 0xffffffff;
      }
      goto LAB_011958c8;
    }
LAB_011954ec:
    plVar12 = *(long **)(this + 0x18);
    puVar8 = (ushort *)plVar12[2];
    if (puVar8 < (ushort *)plVar12[3]) {
LAB_011954fc:
      uVar9 = (uint)*puVar8;
    }
    else {
      if ((char)plVar12[6] == '\0') {
        uVar4 = (**(code **)(*plVar12 + 0x28))(plVar12);
        puVar8 = (ushort *)plVar12[2];
        if ((uVar4 & 1) != 0) goto LAB_011954fc;
      }
      uVar9 = 0xffffffff;
    }
    plVar12[2] = (long)(puVar8 + 1);
    *(uint *)(this + 0x20) = uVar9;
    if (iVar10 == 0xd) {
      if (uVar9 == 10) {
        plVar12 = *(long **)(this + 0x18);
        puVar8 = (ushort *)plVar12[2];
        if (puVar8 < (ushort *)plVar12[3]) {
LAB_0119552c:
          uVar9 = (uint)*puVar8;
        }
        else {
          if ((char)plVar12[6] == '\0') {
            uVar4 = (**(code **)(*plVar12 + 0x28))(plVar12);
            puVar8 = (ushort *)plVar12[2];
            if ((uVar4 & 1) != 0) goto LAB_0119552c;
          }
          uVar9 = 0xffffffff;
        }
        plVar12[2] = (long)(puVar8 + 1);
        *(uint *)(this + 0x20) = uVar9;
      }
      iVar10 = 10;
    }
    lVar6 = *(long *)(this + 8);
    pLVar11 = (LiteralBuffer *)(lVar6 + 0x20);
    if (*(char *)(lVar6 + 0x34) == '\0') {
LAB_011955f4:
      LiteralBuffer::AddTwoByteChar(pLVar11,iVar10);
    }
    else {
      if (0xff < iVar10) {
        LiteralBuffer::ConvertToTwoByte(pLVar11);
        goto LAB_011955f4;
      }
      iVar5 = *(int *)(lVar6 + 0x30);
      if (*(int *)(lVar6 + 0x28) <= iVar5) {
        LiteralBuffer::ExpandBuffer(pLVar11);
        iVar5 = *(int *)(lVar6 + 0x30);
      }
      *(char *)(*(long *)(lVar6 + 0x20) + (long)iVar5) = (char)iVar10;
      *(int *)(lVar6 + 0x30) = *(int *)(lVar6 + 0x30) + 1;
    }
    lVar6 = *(long *)(this + 8);
    pLVar11 = (LiteralBuffer *)(lVar6 + 8);
    if (*(char *)(lVar6 + 0x1c) != '\0') {
      if (iVar10 < 0x100) {
        iVar5 = *(int *)(lVar6 + 0x18);
        if (*(int *)(lVar6 + 0x10) <= iVar5) {
          LiteralBuffer::ExpandBuffer(pLVar11);
          iVar5 = *(int *)(lVar6 + 0x18);
        }
        *(char *)(*(long *)(lVar6 + 8) + (long)iVar5) = (char)iVar10;
        *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
        goto LAB_011954ac;
      }
LAB_01195498:
      LiteralBuffer::ConvertToTwoByte(pLVar11);
    }
LAB_011954a0:
    LiteralBuffer::AddTwoByteChar(pLVar11,iVar10);
  } while( true );
}

