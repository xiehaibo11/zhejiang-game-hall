
/* v8::internal::JsonParser<unsigned short>::ParseJsonNumber() */

void __thiscall
v8::internal::JsonParser<unsigned_short>::ParseJsonNumber(JsonParser<unsigned_short> *this)

{
  ushort uVar1;
  ushort *puVar2;
  CanonicalHandleScope *this_00;
  ulong *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  ushort *puVar6;
  Isolate *pIVar7;
  ushort *puVar8;
  ushort *puVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  double dVar16;
  
  puVar2 = *(ushort **)(this + 0x30);
  if (*puVar2 == 0x2d) {
    puVar6 = puVar2 + 1;
    *(ushort **)(this + 0x30) = puVar6;
    if (puVar6 == *(ushort **)(this + 0x38)) {
LAB_010480a4:
      *(ushort **)(this + 0x30) = puVar6;
    }
    else {
      iVar10 = -1;
      puVar8 = puVar6;
      puVar11 = puVar6;
      iVar14 = iVar10;
      if (*puVar6 == 0x30) goto LAB_01048064;
LAB_01047fac:
      puVar6 = *(ushort **)(this + 0x38);
      puVar9 = puVar11;
      if (puVar11 == puVar6) goto LAB_010480a4;
      do {
        puVar8 = puVar9;
        if (9 < *puVar9 - 0x30) break;
        puVar9 = puVar9 + 1;
        puVar8 = puVar6;
      } while (puVar6 != puVar9);
      *(ushort **)(this + 0x30) = puVar8;
      if (puVar11 == puVar8) {
        if (puVar11 == puVar6) goto LAB_010480a8;
        if ((ulong)*puVar11 < 0x100) {
          uVar5 = (&DAT_019cbf74)[*puVar11];
          goto LAB_01048258;
        }
LAB_01048250:
        uVar5 = 0xc;
        goto LAB_01048258;
      }
      if (puVar8 == puVar6) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = (uint)*puVar8;
      }
      if (((long)puVar8 - (long)puVar11 < 0x14) &&
         ((0xff < uVar13 || (((byte)(&DAT_019cc074)[uVar13] >> 4 & 1) == 0)))) {
        iVar14 = 0;
        do {
          puVar2 = puVar11 + 1;
          iVar14 = (uint)*puVar11 + iVar14 * 10 + -0x30;
          puVar11 = puVar2;
        } while (puVar8 != puVar2);
        pIVar7 = *(Isolate **)this;
        this_00 = *(CanonicalHandleScope **)(pIVar7 + 0x95b8);
        uVar15 = -(ulong)((uint)(iVar14 * iVar10) >> 0x1f) & 0xfffffffe00000000 |
                 (ulong)(uint)(iVar14 * iVar10) << 1;
        if (this_00 == (CanonicalHandleScope *)0x0) {
          puVar3 = *(ulong **)(pIVar7 + 0x95a0);
          if (puVar3 == *(ulong **)(pIVar7 + 0x95a8)) {
            puVar3 = (ulong *)HandleScope::Extend(pIVar7);
          }
          *(ulong **)(pIVar7 + 0x95a0) = puVar3 + 1;
          *puVar3 = uVar15;
          return;
        }
        goto LAB_01048270;
      }
LAB_010480bc:
      if (puVar8 == puVar6) goto LAB_01048204;
      if (*puVar8 == 0x2e) {
        puVar11 = puVar8 + 1;
        *(ushort **)(this + 0x30) = puVar11;
        if (puVar11 == puVar6) goto LAB_010480a8;
        uVar12 = (uint)*puVar11;
        uVar13 = *puVar11 - 0x30;
        if (uVar13 < 10) {
          if (uVar13 < 10) {
            puVar8 = puVar8 + 2;
            do {
              puVar9 = puVar8;
              puVar11 = puVar6;
              if (puVar6 == puVar9) break;
              puVar8 = puVar9 + 1;
              puVar11 = puVar9;
            } while (*puVar9 - 0x30 < 10);
          }
          puVar8 = puVar11;
          *(ushort **)(this + 0x30) = puVar8;
          goto LAB_01048150;
        }
LAB_010481c4:
        if (uVar12 < 0x100) {
          uVar5 = (&DAT_019cbf74)[uVar12];
          goto LAB_01048258;
        }
        goto LAB_01048250;
      }
LAB_01048150:
      if ((puVar8 == puVar6) || ((*puVar8 | 0x20) != 0x65)) goto LAB_01048204;
      puVar11 = puVar8 + 1;
      *(ushort **)(this + 0x30) = puVar11;
      if (puVar11 != puVar6) {
        uVar1 = *puVar11;
        if ((uVar1 == 0x2d) || (uVar1 == 0x2b)) {
          puVar11 = puVar8 + 2;
          *(ushort **)(this + 0x30) = puVar11;
          if (puVar11 == puVar6) goto LAB_010480a8;
          uVar1 = *puVar11;
        }
        uVar12 = (uint)uVar1;
        uVar13 = uVar12 - 0x30;
        if (uVar13 < 10) {
          puVar8 = puVar6;
          if (puVar11 != puVar6) {
            while ((puVar8 = puVar11, uVar13 < 10 &&
                   (puVar11 = puVar8 + 1, puVar8 = puVar6, puVar6 != puVar11))) {
              uVar13 = *puVar11 - 0x30;
            }
          }
          *(ushort **)(this + 0x30) = puVar8;
LAB_01048204:
          dVar16 = (double)StringToDouble((internal *)0x7ff8000000000000,puVar2,
                                          (long)puVar8 - (long)puVar2 >> 1,0);
          Factory::NewNumber<(v8::internal::AllocationType)0>(*(Factory **)this,dVar16);
          return;
        }
        goto LAB_010481c4;
      }
    }
LAB_010480a8:
    uVar5 = 0xd;
LAB_01048258:
    ReportUnexpectedToken(this,uVar5);
  }
  else {
    iVar14 = 1;
    iVar10 = 1;
    puVar8 = puVar2;
    puVar11 = puVar2;
    if (*puVar2 != 0x30) goto LAB_01047fac;
LAB_01048064:
    puVar6 = *(ushort **)(this + 0x38);
    puVar8 = puVar8 + 1;
    *(ushort **)(this + 0x30) = puVar8;
    if (puVar8 != puVar6) {
      uVar1 = *puVar8;
      if ((0xff < uVar1) || (((byte)(&DAT_019cc074)[uVar1] >> 4 & 1) == 0)) goto LAB_01048094;
      if (9 < uVar1 - 0x30) goto LAB_010480bc;
      uVar5 = 0;
      goto LAB_01048258;
    }
LAB_01048094:
    if (iVar14 < 1) goto LAB_010480bc;
  }
  pIVar7 = *(Isolate **)this;
  this_00 = *(CanonicalHandleScope **)(pIVar7 + 0x95b8);
  if (this_00 == (CanonicalHandleScope *)0x0) {
    puVar4 = *(undefined8 **)(pIVar7 + 0x95a0);
    if (puVar4 == *(undefined8 **)(pIVar7 + 0x95a8)) {
      puVar4 = (undefined8 *)HandleScope::Extend(pIVar7);
    }
    *(undefined8 **)(pIVar7 + 0x95a0) = puVar4 + 1;
    *puVar4 = 0;
    return;
  }
  uVar15 = 0;
LAB_01048270:
  CanonicalHandleScope::Lookup(this_00,uVar15);
  return;
}

