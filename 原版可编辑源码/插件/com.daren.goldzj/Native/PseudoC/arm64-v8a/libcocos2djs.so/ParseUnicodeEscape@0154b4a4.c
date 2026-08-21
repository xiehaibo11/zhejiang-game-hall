
/* v8::internal::RegExpParser::ParseUnicodeEscape(int*) */

undefined8 __thiscall
v8::internal::RegExpParser::ParseUnicodeEscape(RegExpParser *this,int *param_1)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  if (*(int *)(this + 0x38) == 0x7b) {
    iVar7 = *(int *)(this + 0x40);
    iVar8 = iVar7 + -1;
    if (((byte)this[0x3c] >> 4 & 1) == 0) {
LAB_0154b68c:
      *(int *)(this + 0x40) = iVar8;
      this[0x4c] = (RegExpParser)(iVar7 <= *(int *)(*(long *)(this + 0x30) + 0x24));
      Advance(this);
      return 0;
    }
    Advance(this);
    uVar3 = *(int *)(this + 0x38) - 0x30;
    if ((9 < uVar3) &&
       ((5 < (uVar3 | 0x20) - 0x31 || (uVar3 = (uVar3 | 0x20) - 0x27, (int)uVar3 < 0))))
    goto LAB_0154b68c;
    iVar9 = 0;
    do {
      iVar9 = uVar3 + iVar9 * 0x10;
      if (0x10ffff < iVar9) goto LAB_0154b68c;
      Advance(this);
      uVar3 = *(int *)(this + 0x38) - 0x30;
      if (9 < uVar3) {
        if (5 < (uVar3 | 0x20) - 0x31) break;
        uVar3 = (uVar3 | 0x20) - 0x27;
      }
    } while (-1 < (int)uVar3);
    *param_1 = iVar9;
    if (*(int *)(this + 0x38) != 0x7d) goto LAB_0154b68c;
    goto LAB_0154b86c;
  }
  iVar7 = *(int *)(this + 0x40);
  uVar3 = *(int *)(this + 0x38) - 0x30;
  iVar8 = iVar7 + -1;
  if ((9 < uVar3) &&
     ((5 < (uVar3 | 0x20) - 0x31 || (uVar3 = (uVar3 | 0x20) - 0x27, (int)uVar3 < 0))))
  goto LAB_0154b68c;
  Advance(this);
  uVar10 = *(int *)(this + 0x38) - 0x30;
  if ((9 < uVar10) &&
     ((5 < (uVar10 | 0x20) - 0x31 || (uVar10 = (uVar10 | 0x20) - 0x27, (int)uVar10 < 0))))
  goto LAB_0154b68c;
  Advance(this);
  uVar11 = *(int *)(this + 0x38) - 0x30;
  if ((9 < uVar11) &&
     ((5 < (uVar11 | 0x20) - 0x31 || (uVar11 = (uVar11 | 0x20) - 0x27, (int)uVar11 < 0))))
  goto LAB_0154b68c;
  Advance(this);
  uVar4 = *(int *)(this + 0x38) - 0x30;
  if ((9 < uVar4) &&
     ((5 < (uVar4 | 0x20) - 0x31 || (uVar4 = (uVar4 | 0x20) - 0x27, (int)uVar4 < 0))))
  goto LAB_0154b68c;
  uVar4 = uVar4 + (uVar11 + (uVar10 + uVar3 * 0x10) * 0x10) * 0x10;
  Advance(this);
  *param_1 = uVar4;
  if (((byte)this[0x3c] >> 4 & 1) == 0) {
    return 1;
  }
  if ((uVar4 & 0xfc00) != 0xd800) {
    return 1;
  }
  if (*(int *)(this + 0x38) != 0x5c) {
    return 1;
  }
  lVar5 = *(long *)(this + 0x30);
  iVar7 = *(int *)(this + 0x40);
  if (iVar7 < *(int *)(lVar5 + 0x24)) {
    if (*(char *)(lVar5 + 0x20) == '\0') {
      lVar6 = *(long *)(lVar5 + 0x28);
      uVar2 = *(ushort *)(lVar6 + (long)iVar7 * 2);
    }
    else {
      lVar6 = *(long *)(lVar5 + 0x28);
      uVar2 = (ushort)*(byte *)(lVar6 + iVar7);
    }
    iVar8 = iVar7 + 1;
    if ((iVar8 < *(int *)(lVar5 + 0x24)) && ((uVar2 & 0xfc00) == 0xd800)) {
      if (*(char *)(lVar5 + 0x20) == '\0') {
        bVar1 = *(ushort *)(lVar6 + (long)iVar8 * 2) >> 10 != 0x37;
      }
      else {
        bVar1 = true;
      }
      if ((uVar2 == 0x75) && (bVar1)) {
LAB_0154b728:
        *(int *)(this + 0x40) = iVar8;
        Advance(this);
        iVar8 = *(int *)(this + 0x40);
        uVar3 = *(int *)(this + 0x38) - 0x30;
        if ((uVar3 < 10) ||
           (((uVar3 | 0x20) - 0x31 < 6 && (uVar3 = (uVar3 | 0x20) - 0x27, -1 < (int)uVar3)))) {
          Advance(this);
          uVar10 = *(int *)(this + 0x38) - 0x30;
          if ((uVar10 < 10) ||
             (((uVar10 | 0x20) - 0x31 < 6 && (uVar10 = (uVar10 | 0x20) - 0x27, -1 < (int)uVar10))))
          {
            Advance(this);
            uVar11 = *(int *)(this + 0x38) - 0x30;
            if ((uVar11 < 10) ||
               (((uVar11 | 0x20) - 0x31 < 6 && (uVar11 = (uVar11 | 0x20) - 0x27, -1 < (int)uVar11)))
               ) {
              Advance(this);
              uVar4 = *(int *)(this + 0x38) - 0x30;
              if ((uVar4 < 10) ||
                 (((uVar4 | 0x20) - 0x31 < 6 && (uVar4 = (uVar4 | 0x20) - 0x27, -1 < (int)uVar4))))
              {
                uVar4 = uVar4 + (uVar11 + (uVar10 + uVar3 * 0x10) * 0x10) * 0x10;
                Advance(this);
                if ((uVar4 & 0xfc00) == 0xdc00) {
                  *param_1 = (uVar4 & 0x3ff | (*param_1 & 0x3ffU) << 10) + 0x10000;
                  return 1;
                }
                goto LAB_0154b850;
              }
            }
          }
        }
        *(int *)(this + 0x40) = iVar8 + -1;
        this[0x4c] = (RegExpParser)(iVar8 <= *(int *)(*(long *)(this + 0x30) + 0x24));
        Advance(this);
      }
    }
    else if (uVar2 == 0x75) goto LAB_0154b728;
  }
LAB_0154b850:
  *(int *)(this + 0x40) = iVar7 + -1;
  this[0x4c] = (RegExpParser)(iVar7 <= *(int *)(*(long *)(this + 0x30) + 0x24));
LAB_0154b86c:
  Advance(this);
  return 1;
}

