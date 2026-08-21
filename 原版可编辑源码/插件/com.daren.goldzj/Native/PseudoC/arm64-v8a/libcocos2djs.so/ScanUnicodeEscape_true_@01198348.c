
/* int v8::internal::Scanner::ScanUnicodeEscape<true>() */

int __thiscall v8::internal::Scanner::ScanUnicodeEscape<true>(Scanner *this)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  lVar5 = *(long *)(this + 0x18);
  lVar5 = *(long *)(lVar5 + 0x20) + ((ulong)(*(long *)(lVar5 + 0x10) - *(long *)(lVar5 + 8)) >> 1);
  uVar1 = lVar5 + 0xfffffffd;
  if (*(int *)(this + 0x20) == 0x7b) {
    Advance<true>(this);
    uVar3 = *(int *)(this + 0x20) - 0x30;
    if ((uVar3 < 10) ||
       (((uVar3 | 0x20) - 0x31 < 6 && (uVar3 = (uVar3 | 0x20) - 0x27, -1 < (int)uVar3)))) {
      iVar7 = 0;
      do {
        iVar7 = uVar3 + iVar7 * 0x10;
        if (0x10ffff < iVar7) {
          if (*(int *)(this + 0x15c) != 0) goto LAB_01198504;
          lVar6 = *(long *)(this + 0x18);
          lVar5 = *(long *)(lVar6 + 8);
          lVar2 = *(long *)(lVar6 + 0x10);
          iVar7 = *(int *)(lVar6 + 0x20);
          *(undefined4 *)(this + 0x15c) = 0x150;
          *(ulong *)(this + 0x160) =
               uVar1 & 0xffffffff |
               (ulong)(uint)((int)((ulong)(lVar2 - lVar5) >> 1) + iVar7) << 0x20;
          iVar7 = *(int *)(this + 0x15c);
          goto joined_r0x0119857c;
        }
        Advance<true>(this);
        uVar3 = *(int *)(this + 0x20) - 0x30;
        if (9 < uVar3) {
          if (5 < (uVar3 | 0x20) - 0x31) break;
          uVar3 = (uVar3 | 0x20) - 0x27;
        }
      } while (-1 < (int)uVar3);
      if ((-1 < iVar7) && (*(int *)(this + 0x20) == 0x7d)) {
LAB_011984cc:
        Advance<true>(this);
        return iVar7;
      }
    }
LAB_01198504:
    iVar7 = *(int *)(this + 0x15c);
joined_r0x0119857c:
    if (iVar7 == 0) {
      lVar5 = *(long *)(this + 0x18);
      lVar2 = *(long *)(lVar5 + 8);
      lVar6 = *(long *)(lVar5 + 0x10);
      lVar5 = *(long *)(lVar5 + 0x20);
      *(undefined4 *)(this + 0x15c) = 0x14f;
      lVar5 = lVar5 + ((ulong)(lVar6 - lVar2) >> 1);
      *(ulong *)(this + 0x160) = (ulong)((int)lVar5 - 1) | lVar5 << 0x20;
    }
  }
  else {
    uVar3 = *(int *)(this + 0x20) - 0x30;
    if ((uVar3 < 10) ||
       (((uVar3 | 0x20) - 0x31 < 6 && (uVar3 = (uVar3 | 0x20) - 0x27, -1 < (int)uVar3)))) {
      Advance<true>(this);
      uVar8 = *(int *)(this + 0x20) - 0x30;
      if ((uVar8 < 10) ||
         (((uVar8 | 0x20) - 0x31 < 6 && (uVar8 = (uVar8 | 0x20) - 0x27, -1 < (int)uVar8)))) {
        Advance<true>(this);
        uVar9 = *(int *)(this + 0x20) - 0x30;
        if ((uVar9 < 10) ||
           (((uVar9 | 0x20) - 0x31 < 6 && (uVar9 = (uVar9 | 0x20) - 0x27, -1 < (int)uVar9)))) {
          Advance<true>(this);
          uVar4 = *(int *)(this + 0x20) - 0x30;
          if ((uVar4 < 10) ||
             (((uVar4 | 0x20) - 0x31 < 6 && (uVar4 = (uVar4 | 0x20) - 0x27, -1 < (int)uVar4)))) {
            iVar7 = uVar4 + (uVar9 + (uVar8 + uVar3 * 0x10) * 0x10) * 0x10;
            goto LAB_011984cc;
          }
        }
      }
    }
    if (*(int *)(this + 0x15c) == 0) {
      *(undefined4 *)(this + 0x15c) = 0x14f;
      *(ulong *)(this + 0x160) = (uVar1 & 0xffffffff | lVar5 << 0x20) + 0x300000000;
    }
  }
  return -1;
}

