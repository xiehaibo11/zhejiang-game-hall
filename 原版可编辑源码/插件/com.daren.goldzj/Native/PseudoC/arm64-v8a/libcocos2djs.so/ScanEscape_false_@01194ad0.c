
/* bool v8::internal::Scanner::ScanEscape<false>() */

bool __thiscall v8::internal::Scanner::ScanEscape<false>(Scanner *this)

{
  LiteralBuffer *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  long *plVar13;
  long lVar14;
  
  plVar13 = *(long **)(this + 0x18);
  iVar5 = *(int *)(this + 0x20);
  puVar9 = (ushort *)plVar13[2];
  if (puVar9 < (ushort *)plVar13[3]) {
LAB_01194afc:
    uVar10 = (uint)*puVar9;
  }
  else {
    if ((char)plVar13[6] == '\0') {
      uVar6 = (**(code **)(*plVar13 + 0x28))(plVar13);
      puVar9 = (ushort *)plVar13[2];
      if ((uVar6 & 1) != 0) goto LAB_01194afc;
    }
    uVar10 = 0xffffffff;
  }
  plVar13[2] = (long)(puVar9 + 1);
  *(uint *)(this + 0x20) = uVar10;
  switch(iVar5) {
  case 10:
    goto switchD_01194b30_caseD_a;
  case 0xb:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 99:
  case 100:
  case 0x65:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x73:
  case 0x77:
    break;
  case 0xd:
    if (uVar10 != 10) {
      return true;
    }
    plVar13 = *(long **)(this + 0x18);
    puVar9 = (ushort *)plVar13[2];
    if (puVar9 < (ushort *)plVar13[3]) {
LAB_01194c90:
      uVar10 = (uint)*puVar9;
    }
    else {
      if ((char)plVar13[6] == '\0') {
        uVar6 = (**(code **)(*plVar13 + 0x28))(plVar13);
        puVar9 = (ushort *)plVar13[2];
        if ((uVar6 & 1) != 0) goto LAB_01194c90;
      }
      uVar10 = 0xffffffff;
    }
    plVar13[2] = (long)(puVar9 + 1);
    *(uint *)(this + 0x20) = uVar10;
    return true;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
    iVar8 = iVar5 + -0x30;
    if ((uVar10 - 0x30 < 8) && (iVar1 = (uVar10 - 0x30) + iVar8 * 8, iVar1 < 0x100)) {
      plVar13 = *(long **)(this + 0x18);
      puVar9 = (ushort *)plVar13[2];
      iVar5 = iVar1;
      if (puVar9 < (ushort *)plVar13[3]) {
LAB_01194ba8:
        iVar7 = -3;
        uVar4 = *puVar9;
        plVar13[2] = (long)(puVar9 + 1);
        uVar10 = uVar4 - 0x30;
        *(uint *)(this + 0x20) = (uint)uVar4;
        if ((uVar10 < 8) && (iVar8 = uVar10 + iVar1 * 8, iVar8 < 0x100)) {
          plVar13 = *(long **)(this + 0x18);
          puVar9 = (ushort *)plVar13[2];
          if (puVar9 < (ushort *)plVar13[3]) {
            uVar10 = (uint)*puVar9;
          }
          else {
            if ((char)plVar13[6] == '\0') {
              uVar6 = (**(code **)(*plVar13 + 0x28))(plVar13);
              puVar9 = (ushort *)plVar13[2];
              if ((uVar6 & 1) != 0) {
                uVar10 = (uint)*puVar9;
                goto LAB_01194d98;
              }
            }
            uVar10 = 0xffffffff;
          }
LAB_01194d98:
          plVar13[2] = (long)(puVar9 + 1);
          *(uint *)(this + 0x20) = uVar10;
          iVar7 = -4;
          iVar5 = iVar8;
        }
      }
      else {
        if ((char)plVar13[6] == '\0') {
          uVar6 = (**(code **)(*plVar13 + 0x28))(plVar13);
          puVar9 = (ushort *)plVar13[2];
          if ((uVar6 & 1) != 0) goto LAB_01194ba8;
        }
        iVar7 = -3;
        plVar13[2] = (long)(puVar9 + 1);
        *(undefined4 *)(this + 0x20) = 0xffffffff;
      }
    }
    else if (iVar5 == 0x30) {
      iVar5 = iVar8;
      if ((uVar10 & 0xfffffffe) != 0x38) break;
      iVar7 = -2;
      iVar5 = 0;
    }
    else {
      iVar7 = -2;
      iVar5 = iVar8;
    }
    lVar14 = *(long *)(this + 0x18);
    lVar2 = *(long *)(lVar14 + 8);
    lVar3 = *(long *)(lVar14 + 0x10);
    lVar14 = *(long *)(lVar14 + 0x20);
    *(undefined4 *)(this + 0x158) = 300;
    lVar14 = lVar14 + ((ulong)(lVar3 - lVar2) >> 1);
    *(ulong *)(this + 0x150) = ((ulong)(uint)(iVar7 + (int)lVar14) | lVar14 << 0x20) - 0x200000000;
    break;
  case 0x62:
    iVar5 = 8;
    break;
  case 0x66:
    iVar5 = 0xc;
    break;
  case 0x6e:
    iVar5 = 10;
    break;
  case 0x72:
    iVar5 = 0xd;
    break;
  case 0x74:
    iVar5 = 9;
    break;
  case 0x75:
    iVar5 = ScanUnicodeEscape<false>(this);
    goto joined_r0x01194d7c;
  case 0x76:
    iVar5 = 0xb;
    break;
  case 0x78:
    plVar13 = *(long **)(this + 0x18);
    uVar10 = uVar10 - 0x30;
    lVar14 = plVar13[4];
    lVar2 = plVar13[1];
    puVar9 = (ushort *)plVar13[2];
    if ((9 < uVar10) &&
       ((5 < (uVar10 | 0x20) - 0x31 || (uVar10 = (uVar10 | 0x20) - 0x27, (int)uVar10 < 0))))
    goto LAB_01194e58;
    puVar12 = puVar9;
    if ((ushort *)plVar13[3] <= puVar9) {
      if ((char)plVar13[6] == '\0') {
        uVar6 = (**(code **)(*plVar13 + 0x28))(plVar13);
        puVar12 = (ushort *)plVar13[2];
        if ((uVar6 & 1) != 0) goto LAB_01194d28;
      }
      plVar13[2] = (long)(puVar12 + 1);
      *(undefined4 *)(this + 0x20) = 0xffffffff;
LAB_01194e58:
      if (*(int *)(this + 0x15c) != 0) {
        return false;
      }
      lVar14 = lVar14 + ((ulong)((long)puVar9 - lVar2) >> 1);
      *(undefined4 *)(this + 0x15c) = 0x14e;
      *(ulong *)(this + 0x160) = (lVar14 + 0xfffffffdU & 0xffffffff | lVar14 << 0x20) + 0x100000000;
      return false;
    }
LAB_01194d28:
    uVar4 = *puVar12;
    plVar13[2] = (long)(puVar12 + 1);
    uVar11 = uVar4 - 0x30;
    *(uint *)(this + 0x20) = (uint)uVar4;
    if ((9 < uVar11) &&
       ((5 < (uVar11 | 0x20) - 0x31 || (uVar11 = (uVar11 | 0x20) - 0x27, (int)uVar11 < 0))))
    goto LAB_01194e58;
    plVar13 = *(long **)(this + 0x18);
    iVar5 = uVar11 + uVar10 * 0x10;
    puVar9 = (ushort *)plVar13[2];
    if (puVar9 < (ushort *)plVar13[3]) {
LAB_01194d6c:
      uVar10 = (uint)*puVar9;
    }
    else {
      if ((char)plVar13[6] == '\0') {
        uVar6 = (**(code **)(*plVar13 + 0x28))(plVar13);
        puVar9 = (ushort *)plVar13[2];
        if ((uVar6 & 1) != 0) goto LAB_01194d6c;
      }
      uVar10 = 0xffffffff;
    }
    plVar13[2] = (long)(puVar9 + 1);
    *(uint *)(this + 0x20) = uVar10;
joined_r0x01194d7c:
    if (iVar5 < 0) {
      return false;
    }
    break;
  default:
    if (iVar5 - 0x2028U < 2) {
      return true;
    }
  }
  lVar14 = *(long *)(this + 8);
  this_00 = (LiteralBuffer *)(lVar14 + 8);
  if (*(char *)(lVar14 + 0x1c) != '\0') {
    if (iVar5 < 0x100) {
      iVar8 = *(int *)(lVar14 + 0x18);
      if (*(int *)(lVar14 + 0x10) <= iVar8) {
        LiteralBuffer::ExpandBuffer(this_00);
        iVar8 = *(int *)(lVar14 + 0x18);
      }
      *(char *)(*(long *)(lVar14 + 8) + (long)iVar8) = (char)iVar5;
      *(int *)(lVar14 + 0x18) = *(int *)(lVar14 + 0x18) + 1;
      return true;
    }
    LiteralBuffer::ConvertToTwoByte(this_00);
  }
  LiteralBuffer::AddTwoByteChar(this_00,iVar5);
switchD_01194b30_caseD_a:
  return true;
}

