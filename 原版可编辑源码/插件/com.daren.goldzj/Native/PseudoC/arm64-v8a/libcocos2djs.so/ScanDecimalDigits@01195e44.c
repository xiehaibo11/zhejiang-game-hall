
/* v8::internal::Scanner::ScanDecimalDigits(bool) */

undefined8 __thiscall v8::internal::Scanner::ScanDecimalDigits(Scanner *this,bool param_1)

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
  
  if (param_1) {
    uVar6 = *(uint *)(this + 0x20);
    bVar1 = false;
    do {
      while (uVar6 - 0x30 < 10) {
        if (uVar6 == 0x5f) goto LAB_01195ecc;
        lVar9 = *(long *)(this + 8);
        this_00 = (LiteralBuffer *)(lVar9 + 8);
        if (*(char *)(lVar9 + 0x1c) == '\0') {
LAB_01195f08:
          LiteralBuffer::AddTwoByteChar(this_00,uVar6);
        }
        else {
          if (0xff < (int)uVar6) {
            LiteralBuffer::ConvertToTwoByte(this_00);
            goto LAB_01195f08;
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
LAB_01195f2c:
          uVar6 = (uint)*puVar4;
          bVar1 = false;
        }
        else {
          if ((char)plVar7[6] == '\0') {
            uVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
            puVar4 = (ushort *)plVar7[2];
            if ((uVar2 & 1) != 0) goto LAB_01195f2c;
          }
          bVar1 = false;
          uVar6 = 0xffffffff;
        }
LAB_01195f34:
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
        goto LAB_011960b4;
      }
LAB_01195ecc:
      plVar7 = *(long **)(this + 0x18);
      plVar8 = plVar7 + 2;
      puVar4 = (ushort *)*plVar8;
      if ((ushort *)plVar7[3] <= puVar4) {
        if ((char)plVar7[6] == '\0') {
          uVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
          puVar4 = (ushort *)plVar7[2];
          if ((uVar2 & 1) != 0) goto LAB_01195ee4;
        }
        bVar1 = true;
        uVar6 = 0xffffffff;
        goto LAB_01195f34;
      }
LAB_01195ee4:
      uVar6 = (uint)*puVar4;
      bVar1 = true;
      *plVar8 = (long)(puVar4 + 1);
      *(uint *)(this + 0x20) = uVar6;
    } while (uVar6 != 0x5f);
    if (*(int *)(this + 0x15c) != 0) {
      return 0;
    }
    lVar9 = *(long *)(this + 0x18);
    uVar5 = 0xd7;
  }
  else {
    uVar6 = *(uint *)(this + 0x20);
    while (uVar6 - 0x30 < 10) {
      lVar9 = *(long *)(this + 8);
      if (*(char *)(lVar9 + 0x1c) == '\0') {
        LiteralBuffer::AddTwoByteChar((LiteralBuffer *)(lVar9 + 8),uVar6);
      }
      else {
        iVar3 = *(int *)(lVar9 + 0x18);
        if (*(int *)(lVar9 + 0x10) <= iVar3) {
          LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar9 + 8));
          iVar3 = *(int *)(lVar9 + 0x18);
        }
        *(char *)(*(long *)(lVar9 + 8) + (long)iVar3) = (char)uVar6;
        *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + 1;
      }
      plVar7 = *(long **)(this + 0x18);
      puVar4 = (ushort *)plVar7[2];
      if ((ushort *)plVar7[3] <= puVar4) {
        if ((char)plVar7[6] != '\0') {
LAB_01196040:
          plVar7[2] = (long)(puVar4 + 1);
          *(undefined4 *)(this + 0x20) = 0xffffffff;
          return 1;
        }
        uVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
        puVar4 = (ushort *)plVar7[2];
        if ((uVar2 & 1) == 0) goto LAB_01196040;
      }
      uVar6 = (uint)*puVar4;
      plVar7[2] = (long)(puVar4 + 1);
      *(uint *)(this + 0x20) = uVar6;
    }
    if (uVar6 != 0x5f) {
      return 1;
    }
    if (*(int *)(this + 0x15c) != 0) {
      return 0;
    }
    lVar9 = *(long *)(this + 0x18);
    uVar5 = 0x102;
  }
LAB_011960b4:
  lVar9 = *(long *)(lVar9 + 0x20) + ((ulong)(*(long *)(lVar9 + 0x10) - *(long *)(lVar9 + 8)) >> 1);
  *(undefined4 *)(this + 0x15c) = uVar5;
  *(ulong *)(this + 0x160) = (ulong)((int)lVar9 - 1) | lVar9 << 0x20;
  return 0;
}

