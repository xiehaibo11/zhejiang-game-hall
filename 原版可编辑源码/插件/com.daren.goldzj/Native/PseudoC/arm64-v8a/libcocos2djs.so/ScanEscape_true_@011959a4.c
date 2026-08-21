
/* bool v8::internal::Scanner::ScanEscape<true>() */

bool __thiscall v8::internal::Scanner::ScanEscape<true>(Scanner *this)

{
  LiteralBuffer *this_00;
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  
  iVar3 = *(int *)(this + 0x20);
  Advance<true>(this);
  iVar4 = iVar3 + -0x30;
  switch(iVar4) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    uVar9 = *(uint *)(this + 0x20) - 0x30;
    if ((uVar9 < 8) && (iVar1 = uVar9 + iVar4 * 8, iVar1 < 0x100)) {
      iVar7 = -3;
      Advance<true>(this);
      iVar3 = iVar1;
      if ((*(int *)(this + 0x20) - 0x30U < 8) &&
         (iVar4 = (*(int *)(this + 0x20) - 0x30U) + iVar1 * 8, iVar4 < 0x100)) {
        Advance<true>(this);
        iVar7 = -4;
        iVar3 = iVar4;
      }
    }
    else if (iVar3 == 0x30) {
      iVar3 = iVar4;
      if ((*(uint *)(this + 0x20) & 0xfffffffe) != 0x38) break;
      iVar7 = -2;
      iVar3 = 0;
    }
    else {
      iVar7 = -2;
      iVar3 = iVar4;
    }
    lVar8 = *(long *)(this + 0x18);
    lVar2 = *(long *)(lVar8 + 8);
    lVar6 = *(long *)(lVar8 + 0x10);
    lVar8 = *(long *)(lVar8 + 0x20);
    *(undefined4 *)(this + 0x158) = 0x12e;
    lVar8 = lVar8 + ((ulong)(lVar6 - lVar2) >> 1);
    *(ulong *)(this + 0x150) = ((ulong)(uint)(iVar7 + (int)lVar8) | lVar8 << 0x20) - 0x200000000;
    break;
  case 0x32:
    iVar3 = 8;
    break;
  case 0x36:
    iVar3 = 0xc;
    break;
  case 0x3e:
    iVar3 = 10;
    break;
  case 0x42:
    iVar3 = 0xd;
    break;
  case 0x44:
    iVar3 = 9;
    break;
  case 0x45:
    iVar3 = ScanUnicodeEscape<true>(this);
    goto joined_r0x01195bcc;
  case 0x46:
    iVar3 = 0xb;
    break;
  case 0x48:
    lVar6 = *(long *)(this + 0x18);
    lVar8 = *(long *)(lVar6 + 0x20);
    lVar2 = *(long *)(lVar6 + 8);
    lVar6 = *(long *)(lVar6 + 0x10);
    uVar9 = *(int *)(this + 0x20) - 0x30;
    if ((9 < uVar9) &&
       ((5 < (uVar9 | 0x20) - 0x31 || (uVar9 = (uVar9 | 0x20) - 0x27, (int)uVar9 < 0)))) {
LAB_01195bd4:
      if (*(int *)(this + 0x15c) != 0) {
        return false;
      }
      lVar8 = lVar8 + ((ulong)(lVar6 - lVar2) >> 1);
      *(undefined4 *)(this + 0x15c) = 0x14e;
      *(ulong *)(this + 0x160) = (lVar8 + 0xfffffffdU & 0xffffffff | lVar8 << 0x20) + 0x100000000;
      return false;
    }
    Advance<true>(this);
    uVar5 = *(int *)(this + 0x20) - 0x30;
    if ((9 < uVar5) &&
       ((5 < (uVar5 | 0x20) - 0x31 || (uVar5 = (uVar5 | 0x20) - 0x27, (int)uVar5 < 0))))
    goto LAB_01195bd4;
    iVar3 = uVar5 + uVar9 * 0x10;
    Advance<true>(this);
joined_r0x01195bcc:
    if (iVar3 < 0) {
      return false;
    }
  }
  lVar8 = *(long *)(this + 8);
  this_00 = (LiteralBuffer *)(lVar8 + 8);
  if (*(char *)(lVar8 + 0x1c) != '\0') {
    if (iVar3 < 0x100) {
      iVar4 = *(int *)(lVar8 + 0x18);
      if (*(int *)(lVar8 + 0x10) <= iVar4) {
        LiteralBuffer::ExpandBuffer(this_00);
        iVar4 = *(int *)(lVar8 + 0x18);
      }
      *(char *)(*(long *)(lVar8 + 8) + (long)iVar4) = (char)iVar3;
      *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + 1;
      return true;
    }
    LiteralBuffer::ConvertToTwoByte(this_00);
  }
  LiteralBuffer::AddTwoByteChar(this_00,iVar3);
  return true;
}

