
/* v8::internal::Scanner::ScanRegExpPattern() */

undefined8 __thiscall v8::internal::Scanner::ScanRegExpPattern(Scanner *this)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ushort *puVar5;
  uint uVar6;
  long *plVar7;
  LiteralBuffer *this_00;
  
  lVar4 = *(long *)(this + 8);
  *(undefined4 *)(lVar4 + 0x18) = 0;
  *(undefined1 *)(lVar4 + 0x1c) = 1;
  lVar4 = *(long *)(this + 8);
  if (*(char *)(lVar4 + 0x38) == '\x19') {
    iVar3 = *(int *)(lVar4 + 0x18);
    if (*(int *)(lVar4 + 0x10) <= iVar3) {
      LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar4 + 8));
      iVar3 = *(int *)(lVar4 + 0x18);
    }
    *(undefined1 *)(*(long *)(lVar4 + 8) + (long)iVar3) = 0x3d;
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
  }
  uVar6 = *(uint *)(this + 0x20);
  if (uVar6 != 0x2f) {
    bVar1 = false;
    do {
      if ((int)uVar6 < 0x5c) {
        if (uVar6 == 0x5b) {
          bVar1 = true;
        }
        else if ((uVar6 + 1 < 0xf) && ((1 << (ulong)(uVar6 + 1 & 0x1f) & 0x4801U) != 0)) {
          return 0;
        }
LAB_01197e30:
        lVar4 = *(long *)(this + 8);
        bVar1 = (bool)(uVar6 != 0x5d & bVar1);
        this_00 = (LiteralBuffer *)(lVar4 + 8);
        if (*(char *)(lVar4 + 0x1c) == '\0') goto LAB_01197eec;
        if (0xff < (int)uVar6) {
LAB_01197ee4:
          LiteralBuffer::ConvertToTwoByte(this_00);
          goto LAB_01197eec;
        }
LAB_01197e54:
        iVar3 = *(int *)(lVar4 + 0x18);
        if (*(int *)(lVar4 + 0x10) <= iVar3) {
          LiteralBuffer::ExpandBuffer(this_00);
          iVar3 = *(int *)(lVar4 + 0x18);
        }
        *(char *)(*(long *)(lVar4 + 8) + (long)iVar3) = (char)uVar6;
        *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      }
      else {
        if (uVar6 != 0x5c) {
          if (uVar6 - 0x2028 < 2) {
            return 0;
          }
          goto LAB_01197e30;
        }
        lVar4 = *(long *)(this + 8);
        if (*(char *)(lVar4 + 0x1c) == '\0') {
          LiteralBuffer::AddTwoByteChar((LiteralBuffer *)(lVar4 + 8),0x5c);
        }
        else {
          iVar3 = *(int *)(lVar4 + 0x18);
          if (*(int *)(lVar4 + 0x10) <= iVar3) {
            LiteralBuffer::ExpandBuffer((LiteralBuffer *)(lVar4 + 8));
            iVar3 = *(int *)(lVar4 + 0x18);
          }
          *(undefined1 *)(*(long *)(lVar4 + 8) + (long)iVar3) = 0x5c;
          *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
        }
        plVar7 = *(long **)(this + 0x18);
        puVar5 = (ushort *)plVar7[2];
        if ((ushort *)plVar7[3] <= puVar5) {
          if ((char)plVar7[6] != '\0') {
LAB_01197f78:
            plVar7[2] = (long)(puVar5 + 1);
            *(undefined4 *)(this + 0x20) = 0xffffffff;
            return 0;
          }
          uVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
          puVar5 = (ushort *)plVar7[2];
          if ((uVar2 & 1) == 0) goto LAB_01197f78;
        }
        uVar6 = (uint)*puVar5;
        plVar7[2] = (long)(puVar5 + 1);
        *(uint *)(this + 0x20) = uVar6;
        if (uVar6 - 0x2028 < 2) {
          return 0;
        }
        if (uVar6 == 10) {
          return 0;
        }
        if (uVar6 == 0xd) {
          return 0;
        }
        lVar4 = *(long *)(this + 8);
        this_00 = (LiteralBuffer *)(lVar4 + 8);
        if (*(char *)(lVar4 + 0x1c) != '\0') {
          if (0xff < uVar6) goto LAB_01197ee4;
          goto LAB_01197e54;
        }
LAB_01197eec:
        LiteralBuffer::AddTwoByteChar(this_00,uVar6);
      }
      plVar7 = *(long **)(this + 0x18);
      puVar5 = (ushort *)plVar7[2];
      if (puVar5 < (ushort *)plVar7[3]) {
LAB_01197f10:
        uVar6 = (uint)*puVar5;
      }
      else {
        if ((char)plVar7[6] == '\0') {
          uVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
          puVar5 = (ushort *)plVar7[2];
          if ((uVar2 & 1) != 0) goto LAB_01197f10;
        }
        uVar6 = 0xffffffff;
      }
      plVar7[2] = (long)(puVar5 + 1);
      *(uint *)(this + 0x20) = uVar6;
    } while ((bVar1) || (uVar6 != 0x2f));
  }
  plVar7 = *(long **)(this + 0x18);
  puVar5 = (ushort *)plVar7[2];
  if (puVar5 < (ushort *)plVar7[3]) {
LAB_01197fa0:
    uVar6 = (uint)*puVar5;
  }
  else {
    if ((char)plVar7[6] == '\0') {
      uVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
      puVar5 = (ushort *)plVar7[2];
      if ((uVar2 & 1) != 0) goto LAB_01197fa0;
    }
    uVar6 = 0xffffffff;
  }
  plVar7[2] = (long)(puVar5 + 1);
  *(uint *)(this + 0x20) = uVar6;
  *(undefined1 *)(*(long *)(this + 8) + 0x38) = 0x71;
  return 1;
}

