
/* v8::internal::ObjectLiteral::InitDepthAndFlags() */

uint __thiscall v8::internal::ObjectLiteral::InitDepthAndFlags(ObjectLiteral *this)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  double dVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  uint uVar11;
  ArrayLiteral *this_00;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int local_6c;
  uint local_68;
  uint local_64;
  
  if (0 < (int)(*(uint *)(this + 8) * 2)) {
    return *(uint *)(this + 8) & 0x7fffffff;
  }
  iVar3 = *(int *)(this + 0x24);
  if (iVar3 < 1) {
    local_6c = 0;
    local_68 = 0;
    uVar9 = 0;
    uVar11 = 1;
    uVar8 = 1;
  }
  else {
    lVar14 = 0;
    lVar13 = 0;
    bVar2 = 0;
    uVar9 = 0;
    iVar15 = 0;
    uVar8 = 1;
    uVar11 = 1;
    local_6c = 0;
    local_68 = 0;
    do {
      puVar12 = *(ulong **)(*(long *)(this + 0x18) + lVar13 * 8);
      if ((char)puVar12[2] == '\x05') {
        if ((*(uint *)(puVar12[1] + 4) & 0x7bf) == 0x3a9) {
          bVar2 = 1;
          *(uint *)(this + 4) = *(uint *)(this + 4) | 0x1000;
        }
        else {
          uVar8 = 0;
          bVar2 = 1;
        }
      }
      else {
        if (iVar15 == *(int *)(this + 0xc)) {
          uVar8 = 0;
          if (((int)lVar13 < iVar3) && (uVar8 = 0, (bool)(bVar2 ^ 1))) {
            lVar7 = (long)iVar3;
            plVar10 = (long *)(*(long *)(this + 0x18) - lVar14);
            goto LAB_01497304;
          }
          break;
        }
        this_00 = (ArrayLiteral *)puVar12[1];
        uVar4 = *(uint *)(this_00 + 4);
        if ((this_00 != (ArrayLiteral *)0x0) && ((uVar4 + 0x2b & 0x3f) < 3)) {
          if ((uVar4 & 0x3f) == 0x16) {
            iVar3 = InitDepthAndFlags((ObjectLiteral *)this_00);
          }
          else if ((uVar4 & 0x3f) == 0x17) {
            iVar3 = ArrayLiteral::InitDepthAndFlags(this_00);
          }
          else {
            iVar3 = 1;
          }
          if ((int)uVar11 <= iVar3) {
            uVar11 = iVar3 + 1;
          }
          uVar4 = *(uint *)(this_00 + 4) & 0x3f;
          if ((uVar4 == 0x16) || (uVar4 == 0x17)) {
            uVar4 = *(uint *)(this_00 + 4) >> 7 & 1;
          }
          else {
            uVar4 = 0;
          }
          uVar9 = uVar9 | uVar4;
          uVar4 = *(uint *)(puVar12[1] + 4);
        }
        uVar1 = uVar4 & 0x3f;
        uVar5 = *puVar12 & 0xfffffffffffffffc;
        if ((*(uint *)(uVar5 + 4) & 0x3f) != 0x29) {
          uVar5 = 0;
        }
        if (uVar1 == 0x29) {
          uVar4 = 1;
        }
        else if (((uVar4 + 0x2b & 0x3f) < 3) && ((uVar1 == 0x16 || (uVar1 == 0x17)))) {
          uVar4 = uVar4 >> 8 & 1;
        }
        else {
          uVar4 = 0;
        }
        local_64 = 0;
        uVar8 = uVar8 & uVar4;
        uVar4 = *(uint *)(uVar5 + 4) >> 7 & 0xf;
        if (uVar4 == 0) {
          uVar4 = *(uint *)(uVar5 + 8);
          uVar1 = uVar4;
          if ((int)uVar4 < 0) goto LAB_01497060;
LAB_01497048:
          local_64 = uVar1;
          if (local_68 <= uVar4) {
            local_68 = uVar4;
          }
          local_6c = local_6c + 1;
        }
        else if (uVar4 == 1) {
          dVar6 = *(double *)(uVar5 + 8) + 4503599627370496.0;
          if (((ulong)dVar6 >> 0x20 == 0x43300000) &&
             (local_64 = SUB84(dVar6,0),
             *(double *)(uVar5 + 8) == (double)((ulong)dVar6 & 0xffffffff)))
          goto joined_r0x01497234;
        }
        else if ((uVar4 == 3) &&
                (uVar5 = AstRawString::AsArrayIndex(*(AstRawString **)(uVar5 + 8),&local_64),
                (uVar5 & 1) != 0)) {
          dVar6 = (double)(ulong)local_64;
joined_r0x01497234:
          uVar4 = SUB84(dVar6,0);
          uVar1 = local_64;
          if (local_64 != 0xffffffff) goto LAB_01497048;
        }
LAB_01497060:
        iVar3 = *(int *)(this + 0x24);
        iVar15 = iVar15 + 1;
      }
      lVar13 = lVar13 + 1;
      lVar14 = lVar14 + -8;
    } while (lVar13 < iVar3);
  }
  goto LAB_0149724c;
  while( true ) {
    lVar7 = lVar7 + -1;
    plVar10 = plVar10 + 1;
    if (lVar13 == lVar7) break;
LAB_01497304:
    if ((*(char *)(*plVar10 + 0x10) == '\x05') &&
       ((*(uint *)(*(long *)(*plVar10 + 8) + 4) & 0x7bf) == 0x3a9)) {
      uVar8 = 0;
      *(uint *)(this + 4) = *(uint *)(this + 4) | 0x1000;
      goto LAB_0149724c;
    }
  }
  uVar8 = 0;
LAB_0149724c:
  uVar4 = 0x100;
  if (uVar8 == 0) {
    uVar4 = 0;
  }
  uVar8 = 0x80;
  if (uVar9 == 0) {
    uVar8 = 0;
  }
  uVar9 = 0x800;
  if ((uint)(local_6c << 1) < local_68 && 0x20 < local_68) {
    uVar9 = 0;
  }
  *(uint *)(this + 4) =
       uVar9 | (uint)(local_6c != 0) << 9 | uVar4 | uVar8 | *(uint *)(this + 4) & 0xfffff47f;
  *(uint *)(this + 8) = *(uint *)(this + 8) & 0x80000000 | uVar11 & 0x7fffffff;
  return uVar11;
}

