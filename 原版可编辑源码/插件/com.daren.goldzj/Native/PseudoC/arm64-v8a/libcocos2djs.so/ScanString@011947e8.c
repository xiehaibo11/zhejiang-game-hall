
/* v8::internal::Scanner::ScanString() */

undefined8 __thiscall v8::internal::Scanner::ScanString(Scanner *this)

{
  LiteralBuffer *pLVar1;
  ushort *puVar2;
  ushort uVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ushort *puVar8;
  uint uVar9;
  long *plVar10;
  uint uVar11;
  ushort *puVar12;
  
  lVar7 = *(long *)(this + 8);
  uVar9 = *(uint *)(this + 0x20);
  *(undefined4 *)(lVar7 + 0x18) = 0;
  *(undefined1 *)(lVar7 + 0x1c) = 1;
LAB_01194828:
  do {
    plVar10 = *(long **)(this + 0x18);
    do {
      puVar12 = (ushort *)plVar10[2];
      puVar2 = (ushort *)plVar10[3];
      puVar8 = puVar12;
      if (puVar12 != puVar2) {
        do {
          uVar3 = *puVar8;
          if (uVar3 < 0x80) {
            puVar12 = puVar8;
            if (((byte)(&DAT_019dc0ed)[uVar3] >> 3 & 1) != 0) break;
            lVar7 = *(long *)(this + 8);
            if (*(char *)(lVar7 + 0x1c) == '\0') {
              LiteralBuffer::AddTwoByteChar((LiteralBuffer *)(lVar7 + 8),(uint)uVar3);
            }
            else {
              iVar6 = *(int *)(lVar7 + 0x18);
              if (*(int *)(lVar7 + 0x10) <= iVar6) {
                LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar7 + 8));
                iVar6 = *(int *)(lVar7 + 0x18);
              }
              *(char *)(*(long *)(lVar7 + 8) + (long)iVar6) = (char)uVar3;
              *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
            }
          }
          else {
            lVar7 = *(long *)(this + 8);
            pLVar1 = (LiteralBuffer *)(lVar7 + 8);
            if (*(char *)(lVar7 + 0x1c) != '\0') {
              if (uVar3 < 0x100) {
                iVar6 = *(int *)(lVar7 + 0x18);
                if (*(int *)(lVar7 + 0x10) <= iVar6) {
                  LiteralBuffer::ExpandBuffer(pLVar1);
                  iVar6 = *(int *)(lVar7 + 0x18);
                }
                *(char *)(*(long *)(lVar7 + 8) + (long)iVar6) = (char)uVar3;
                *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
                goto LAB_01194850;
              }
              LiteralBuffer::ConvertToTwoByte(pLVar1);
            }
            LiteralBuffer::AddTwoByteChar(pLVar1,(uint)uVar3);
          }
LAB_01194850:
          puVar8 = puVar8 + 1;
          puVar12 = puVar2;
        } while (puVar2 != puVar8);
        if (puVar12 != (ushort *)plVar10[3]) {
          plVar10[2] = (long)(puVar12 + 1);
          uVar11 = (uint)*puVar12;
          *(uint *)(this + 0x20) = uVar11;
          goto joined_r0x011949d8;
        }
      }
      plVar10[2] = (long)puVar12;
      if ((char)plVar10[6] != '\0') goto LAB_01194948;
      uVar5 = (**(code **)(*plVar10 + 0x28))(plVar10);
    } while ((uVar5 & 1) != 0);
    puVar12 = (ushort *)plVar10[2];
LAB_01194948:
    uVar11 = 0xffffffff;
    plVar10[2] = (long)(puVar12 + 1);
    *(undefined4 *)(this + 0x20) = 0xffffffff;
LAB_01194958:
    if (uVar11 == uVar9) {
      plVar10 = *(long **)(this + 0x18);
      puVar8 = (ushort *)plVar10[2];
      if (puVar8 < (ushort *)plVar10[3]) {
LAB_01194a60:
        uVar9 = (uint)*puVar8;
      }
      else {
        if ((char)plVar10[6] == '\0') {
          uVar5 = (**(code **)(*plVar10 + 0x28))(plVar10);
          puVar8 = (ushort *)plVar10[2];
          if ((uVar5 & 1) != 0) goto LAB_01194a60;
        }
        uVar9 = 0xffffffff;
      }
      plVar10[2] = (long)(puVar8 + 1);
      *(uint *)(this + 0x20) = uVar9;
      return 0x5a;
    }
    if ((uVar11 + 1 < 0xf) && ((1 << (ulong)(uVar11 + 1 & 0x1f) & 0x4801U) != 0)) {
      return 0x6d;
    }
    lVar7 = *(long *)(this + 8);
    pLVar1 = (LiteralBuffer *)(lVar7 + 8);
    if (*(char *)(lVar7 + 0x1c) != '\0') {
      if ((int)uVar11 < 0x100) {
        iVar6 = *(int *)(lVar7 + 0x18);
        if (*(int *)(lVar7 + 0x10) <= iVar6) {
          LiteralBuffer::ExpandBuffer(pLVar1);
          iVar6 = *(int *)(lVar7 + 0x18);
        }
        *(char *)(*(long *)(lVar7 + 8) + (long)iVar6) = (char)uVar11;
        *(int *)(lVar7 + 0x18) = *(int *)(lVar7 + 0x18) + 1;
        goto LAB_01194828;
      }
      LiteralBuffer::ConvertToTwoByte(pLVar1);
    }
    LiteralBuffer::AddTwoByteChar(pLVar1,uVar11);
  } while( true );
joined_r0x011949d8:
  if (uVar11 != 0x5c) goto LAB_01194958;
  plVar10 = *(long **)(this + 0x18);
  puVar8 = (ushort *)plVar10[2];
  if ((ushort *)plVar10[3] <= puVar8) {
    if ((char)plVar10[6] != '\0') {
LAB_01194a78:
      plVar10[2] = (long)(puVar8 + 1);
      *(undefined4 *)(this + 0x20) = 0xffffffff;
      return 0x6d;
    }
    uVar5 = (**(code **)(*plVar10 + 0x28))(plVar10);
    puVar8 = (ushort *)plVar10[2];
    if ((uVar5 & 1) == 0) goto LAB_01194a78;
  }
  uVar3 = *puVar8;
  plVar10[2] = (long)(puVar8 + 1);
  *(uint *)(this + 0x20) = (uint)uVar3;
  bVar4 = ScanEscape<false>(this);
  if (!bVar4) {
    return 0x6d;
  }
  uVar11 = *(uint *)(this + 0x20);
  goto joined_r0x011949d8;
}

