
/* int v8::internal::Scanner::ScanUnicodeEscape<false>() */

int __thiscall v8::internal::Scanner::ScanUnicodeEscape<false>(Scanner *this)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  
  plVar13 = *(long **)(this + 0x18);
  puVar10 = (ushort *)plVar13[2];
  lVar9 = plVar13[4] + ((ulong)((long)puVar10 - plVar13[1]) >> 1);
  if (*(int *)(this + 0x20) == 0x7b) {
    if (puVar10 < (ushort *)plVar13[3]) {
      uVar11 = (uint)*puVar10;
    }
    else if ((char)plVar13[6] == '\0') {
      uVar7 = (**(code **)(*plVar13 + 0x28))(plVar13);
      puVar10 = (ushort *)plVar13[2];
      if ((uVar7 & 1) == 0) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = (uint)*puVar10;
      }
    }
    else {
      uVar11 = 0xffffffff;
    }
    plVar13[2] = (long)(puVar10 + 1);
    *(uint *)(this + 0x20) = uVar11;
    iVar6 = ScanUnlimitedLengthHexNumber<false>(this,0x10ffff,(int)lVar9 + -3);
    if ((-1 < iVar6) && (*(int *)(this + 0x20) == 0x7d)) {
      plVar13 = *(long **)(this + 0x18);
      puVar10 = (ushort *)plVar13[2];
      if (puVar10 < (ushort *)plVar13[3]) {
        uVar11 = (uint)*puVar10;
      }
      else if ((char)plVar13[6] == '\0') {
        uVar7 = (**(code **)(*plVar13 + 0x28))(plVar13);
        puVar10 = (ushort *)plVar13[2];
        if ((uVar7 & 1) == 0) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = (uint)*puVar10;
        }
      }
      else {
        uVar11 = 0xffffffff;
      }
      plVar13[2] = (long)(puVar10 + 1);
      *(uint *)(this + 0x20) = uVar11;
      return iVar6;
    }
    if (*(int *)(this + 0x15c) != 0) {
      return -1;
    }
    lVar9 = *(long *)(this + 0x18);
    lVar1 = *(long *)(lVar9 + 8);
    lVar2 = *(long *)(lVar9 + 0x10);
    lVar9 = *(long *)(lVar9 + 0x20);
    *(undefined4 *)(this + 0x15c) = 0x14f;
    lVar9 = lVar9 + ((ulong)(lVar2 - lVar1) >> 1);
    *(ulong *)(this + 0x160) = (ulong)((int)lVar9 - 1) | lVar9 << 0x20;
    return -1;
  }
  uVar11 = *(int *)(this + 0x20) - 0x30;
  if ((9 < uVar11) &&
     ((5 < (uVar11 | 0x20) - 0x31 || (uVar11 = (uVar11 | 0x20) - 0x27, (int)uVar11 < 0))))
  goto LAB_01197784;
  if (puVar10 < (ushort *)plVar13[3]) {
LAB_011975c8:
    uVar3 = *puVar10;
    plVar13[2] = (long)(puVar10 + 1);
    uVar4 = uVar3 - 0x30;
    *(uint *)(this + 0x20) = (uint)uVar3;
    if ((9 < uVar4) &&
       ((5 < (uVar4 | 0x20) - 0x31 || (uVar4 = (uVar4 | 0x20) - 0x27, (int)uVar4 < 0))))
    goto LAB_01197784;
    plVar13 = *(long **)(this + 0x18);
    puVar10 = (ushort *)plVar13[2];
    if (puVar10 < (ushort *)plVar13[3]) {
LAB_01197608:
      uVar3 = *puVar10;
      plVar13[2] = (long)(puVar10 + 1);
      uVar5 = uVar3 - 0x30;
      *(uint *)(this + 0x20) = (uint)uVar3;
      if ((9 < uVar5) &&
         ((5 < (uVar5 | 0x20) - 0x31 || (uVar5 = (uVar5 | 0x20) - 0x27, (int)uVar5 < 0))))
      goto LAB_01197784;
      plVar13 = *(long **)(this + 0x18);
      puVar10 = (ushort *)plVar13[2];
      if (puVar10 < (ushort *)plVar13[3]) {
LAB_01197648:
        uVar3 = *puVar10;
        uVar12 = uVar3 - 0x30;
        plVar13[2] = (long)(puVar10 + 1);
        *(uint *)(this + 0x20) = (uint)uVar3;
        if ((uVar12 < 10) ||
           (((uVar12 | 0x20) - 0x31 < 6 && (uVar12 = (uVar12 | 0x20) - 0x27, -1 < (int)uVar12)))) {
          plVar13 = *(long **)(this + 0x18);
          puVar10 = (ushort *)plVar13[2];
          if (puVar10 < (ushort *)plVar13[3]) {
            uVar8 = (uint)*puVar10;
          }
          else if ((char)plVar13[6] == '\0') {
            uVar7 = (**(code **)(*plVar13 + 0x28))(plVar13);
            puVar10 = (ushort *)plVar13[2];
            if ((uVar7 & 1) == 0) {
              uVar8 = 0xffffffff;
            }
            else {
              uVar8 = (uint)*puVar10;
            }
          }
          else {
            uVar8 = 0xffffffff;
          }
          plVar13[2] = (long)(puVar10 + 1);
          *(uint *)(this + 0x20) = uVar8;
          return uVar12 + (uVar5 + (uVar4 + uVar11 * 0x10) * 0x10) * 0x10;
        }
        goto LAB_01197784;
      }
      if ((char)plVar13[6] == '\0') {
        uVar7 = (**(code **)(*plVar13 + 0x28))(plVar13);
        puVar10 = (ushort *)plVar13[2];
        if ((uVar7 & 1) != 0) goto LAB_01197648;
      }
      puVar10 = puVar10 + 1;
    }
    else {
      if ((char)plVar13[6] == '\0') {
        uVar7 = (**(code **)(*plVar13 + 0x28))(plVar13);
        puVar10 = (ushort *)plVar13[2];
        if ((uVar7 & 1) != 0) goto LAB_01197608;
      }
      puVar10 = puVar10 + 1;
    }
  }
  else {
    if ((char)plVar13[6] == '\0') {
      uVar7 = (**(code **)(*plVar13 + 0x28))(plVar13);
      puVar10 = (ushort *)plVar13[2];
      if ((uVar7 & 1) != 0) goto LAB_011975c8;
    }
    puVar10 = puVar10 + 1;
  }
  plVar13[2] = (long)puVar10;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
LAB_01197784:
  if (*(int *)(this + 0x15c) == 0) {
    *(undefined4 *)(this + 0x15c) = 0x14f;
    *(ulong *)(this + 0x160) = (lVar9 + 0xfffffffdU & 0xffffffff | lVar9 << 0x20) + 0x300000000;
  }
  return -1;
}

