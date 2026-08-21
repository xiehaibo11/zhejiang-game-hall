
/* v8::internal::AstValueFactory::Flatten(v8::internal::AstConsString const*) */

long __thiscall v8::internal::AstValueFactory::Flatten(AstValueFactory *this,AstConsString *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  Zone *this_00;
  uchar *puVar6;
  ushort *puVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  AstConsString *pAVar11;
  int iVar12;
  uchar *puVar13;
  ushort *puVar14;
  long lVar15;
  AstConsString *pAVar16;
  
  pAVar16 = param_1 + 8;
  lVar9 = *(long *)pAVar16;
  if (lVar9 == 0) {
    lVar9 = *(long *)(*(long *)(this + 0x38) + 0x110);
  }
  else {
    pAVar11 = param_1 + 0x10;
    plVar10 = *(long **)pAVar11;
    if (plVar10 != (long *)0x0) {
      iVar1 = *(int *)(lVar9 + 0x10);
      iVar12 = iVar1;
      if (iVar1 < 0) {
        iVar12 = iVar1 + 1;
      }
      bVar3 = *(char *)(lVar9 + 0x1c) != '\0';
      iVar12 = iVar12 >> 1;
      if (bVar3) {
        iVar12 = iVar1;
      }
      do {
        lVar9 = *plVar10;
        plVar10 = (long *)plVar10[1];
        iVar2 = *(int *)(lVar9 + 0x10);
        iVar1 = iVar2;
        if (iVar2 < 0) {
          iVar1 = iVar2 + 1;
        }
        bVar4 = *(char *)(lVar9 + 0x1c) != '\0';
        iVar1 = iVar1 >> 1;
        if (bVar4) {
          iVar1 = iVar2;
        }
        iVar12 = iVar1 + iVar12;
        bVar3 = (bool)(bVar3 & bVar4);
      } while (plVar10 != (long *)0x0);
      this_00 = *(Zone **)(this + 0x448);
      lVar9 = (long)iVar12;
      if (!bVar3) {
        puVar7 = *(ushort **)(this_00 + 0x10);
        uVar8 = lVar9 * 2 + 7U & 0xfffffffffffffff8;
        if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar7) < uVar8) {
          puVar7 = (ushort *)Zone::NewExpand(this_00,uVar8);
          puVar14 = puVar7;
        }
        else {
          *(ulong *)(this_00 + 0x10) = (long)puVar7 + uVar8;
          puVar14 = puVar7;
        }
        while( true ) {
          lVar15 = *(long *)pAVar16;
          pAVar16 = *(AstConsString **)pAVar11;
          if (*(char *)(lVar15 + 0x1c) == '\0') {
            uVar5 = *(uint *)(lVar15 + 0x10);
            if ((int)uVar5 < 0) {
              uVar5 = uVar5 + 1;
            }
            CopyChars<unsigned_short,unsigned_short>
                      (puVar7,*(ushort **)(lVar15 + 8),(long)((ulong)uVar5 << 0x20) >> 0x21);
          }
          else {
            CopyChars<unsigned_char,unsigned_short>
                      (puVar7,(uchar *)*(ushort **)(lVar15 + 8),(long)*(int *)(lVar15 + 0x10));
          }
          if (pAVar16 == (AstConsString *)0x0) break;
          iVar2 = *(int *)(lVar15 + 0x10);
          pAVar11 = pAVar16 + 8;
          iVar1 = iVar2;
          if (iVar2 < 0) {
            iVar1 = iVar2 + 1;
          }
          iVar1 = iVar1 >> 1;
          if (*(char *)(lVar15 + 0x1c) != '\0') {
            iVar1 = iVar2;
          }
          puVar7 = puVar7 + iVar1;
        }
        uVar5 = StringHasher::HashSequentialString<unsigned_short>
                          (puVar14,iVar12,*(ulong *)(this + 0x450));
        lVar9 = GetString(this,uVar5,0,puVar14,lVar9 * 2);
        return lVar9;
      }
      puVar6 = *(uchar **)(this_00 + 0x10);
      uVar8 = lVar9 + 7U & 0xfffffffffffffff8;
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)puVar6) < uVar8) {
        puVar6 = (uchar *)Zone::NewExpand(this_00,uVar8);
        puVar13 = puVar6;
      }
      else {
        *(uchar **)(this_00 + 0x10) = puVar6 + uVar8;
        puVar13 = puVar6;
      }
      while( true ) {
        lVar15 = *(long *)pAVar16;
        pAVar16 = *(AstConsString **)pAVar11;
        iVar1 = *(int *)(lVar15 + 0x10);
        iVar12 = iVar1;
        if (iVar1 < 0) {
          iVar12 = iVar1 + 1;
        }
        iVar12 = iVar12 >> 1;
        if (*(char *)(lVar15 + 0x1c) != '\0') {
          iVar12 = iVar1;
        }
        CopyChars<unsigned_char,unsigned_char>(puVar6,*(uchar **)(lVar15 + 8),(long)iVar12);
        if (pAVar16 == (AstConsString *)0x0) break;
        iVar1 = *(int *)(lVar15 + 0x10);
        pAVar11 = pAVar16 + 8;
        iVar12 = iVar1;
        if (iVar1 < 0) {
          iVar12 = iVar1 + 1;
        }
        iVar12 = iVar12 >> 1;
        if (*(char *)(lVar15 + 0x1c) != '\0') {
          iVar12 = iVar1;
        }
        puVar6 = puVar6 + iVar12;
      }
      lVar9 = GetOneByteString(this,puVar13,lVar9);
      return lVar9;
    }
  }
  return lVar9;
}

