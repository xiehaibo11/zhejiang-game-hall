
/* v8::internal::Uri::Unescape(v8::internal::Isolate*, v8::internal::Handle<v8::internal::String>)
    */

ulong * v8::internal::Uri::Unescape(Factory *param_1,undefined8 param_2)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  ulong *puVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [12];
  ulong local_68;
  
  puVar8 = (ulong *)String::Flatten(param_1,param_2,0);
  local_68 = *puVar8;
  uVar11 = local_68;
  while( true ) {
    uVar2 = *(ushort *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 - 1)) + 7);
    if ((uVar2 & 9) == 0) break;
    if ((uVar2 & 9) == 8) {
      auVar16 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_68);
      iVar6 = FindFirstCharacter<unsigned_char,unsigned_char>
                        ("%",1,auVar16._0_8_,(long)auVar16._8_4_,0);
      if (iVar6 < 0) {
        return puVar8;
      }
      local_68 = *puVar8;
      iVar1 = *(int *)(local_68 + 7);
      auVar16 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_68);
      if (iVar6 < iVar1) {
        iVar12 = 0;
        bVar3 = true;
        iVar13 = iVar6;
        do {
          iVar7 = FUN_015c6208(auVar16._0_8_,(long)auVar16._8_4_,iVar13,iVar1,&local_68);
          bVar3 = (bool)(bVar3 & iVar7 < 0x100);
          iVar13 = (int)local_68 + iVar13;
          iVar12 = iVar12 + 1;
        } while (iVar13 < iVar1);
        uVar9 = Factory::NewProperSubString(param_1,puVar8,0,iVar6);
        if (!bVar3) {
          plVar10 = (long *)Factory::NewRawTwoByteString(param_1,iVar12,0);
          if (plVar10 != (long *)0x0) {
            local_68 = *puVar8;
            auVar16 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_68);
            lVar14 = 0xb;
            do {
              lVar15 = *plVar10;
              uVar5 = FUN_015c6208(auVar16._0_8_,(long)auVar16._8_4_,iVar6,iVar1,&local_68);
              *(undefined2 *)(lVar14 + lVar15) = uVar5;
              lVar14 = lVar14 + 2;
              iVar6 = (int)local_68 + iVar6;
            } while (iVar6 < iVar1);
            goto LAB_015c5bfc;
          }
          goto LAB_015c5c34;
        }
      }
      else {
        uVar9 = Factory::NewProperSubString(param_1,puVar8,0,iVar6);
        iVar12 = 0;
      }
      plVar10 = (long *)Factory::NewRawOneByteString(param_1,iVar12,0);
      if (plVar10 == (long *)0x0) goto LAB_015c5c34;
      local_68 = *puVar8;
      auVar16 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_68);
      if (iVar6 < iVar1) {
        lVar14 = 0xb;
        do {
          lVar15 = *plVar10;
          uVar4 = FUN_015c6208(auVar16._0_8_,(long)auVar16._8_4_,iVar6,iVar1,&local_68);
          *(undefined1 *)(lVar14 + lVar15) = uVar4;
          lVar14 = lVar14 + 1;
          iVar6 = (int)local_68 + iVar6;
        } while (iVar6 < iVar1);
      }
      goto LAB_015c5bfc;
    }
    uVar11 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0xb);
  }
  auVar16 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_68);
  iVar6 = FindFirstCharacter<unsigned_char,unsigned_short>
                    ("%",1,auVar16._0_8_,(long)auVar16._8_4_,0);
  if (iVar6 < 0) {
    return puVar8;
  }
  local_68 = *puVar8;
  iVar1 = *(int *)(local_68 + 7);
  auVar16 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_68);
  if (iVar6 < iVar1) {
    iVar12 = 0;
    bVar3 = true;
    iVar13 = iVar6;
    do {
      iVar7 = FUN_015c6444(auVar16._0_8_,(long)auVar16._8_4_,iVar13,iVar1,&local_68);
      bVar3 = (bool)(bVar3 & iVar7 < 0x100);
      iVar13 = (int)local_68 + iVar13;
      iVar12 = iVar12 + 1;
    } while (iVar13 < iVar1);
    uVar9 = Factory::NewProperSubString(param_1,puVar8,0,iVar6);
    if (!bVar3) {
      plVar10 = (long *)Factory::NewRawTwoByteString(param_1,iVar12,0);
      if (plVar10 == (long *)0x0) goto LAB_015c5c34;
      local_68 = *puVar8;
      auVar16 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_68);
      lVar14 = 0xb;
      do {
        lVar15 = *plVar10;
        uVar5 = FUN_015c6444(auVar16._0_8_,(long)auVar16._8_4_,iVar6,iVar1,&local_68);
        *(undefined2 *)(lVar14 + lVar15) = uVar5;
        lVar14 = lVar14 + 2;
        iVar6 = (int)local_68 + iVar6;
      } while (iVar6 < iVar1);
      goto LAB_015c5bfc;
    }
  }
  else {
    uVar9 = Factory::NewProperSubString(param_1,puVar8,0,iVar6);
    iVar12 = 0;
  }
  plVar10 = (long *)Factory::NewRawOneByteString(param_1,iVar12,0);
  if (plVar10 == (long *)0x0) {
LAB_015c5c34:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  local_68 = *puVar8;
  auVar16 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_68);
  if (iVar6 < iVar1) {
    lVar14 = 0xb;
    do {
      lVar15 = *plVar10;
      uVar4 = FUN_015c6444(auVar16._0_8_,(long)auVar16._8_4_,iVar6,iVar1,&local_68);
      *(undefined1 *)(lVar14 + lVar15) = uVar4;
      lVar14 = lVar14 + 1;
      iVar6 = (int)local_68 + iVar6;
    } while (iVar6 < iVar1);
  }
LAB_015c5bfc:
  puVar8 = (ulong *)Factory::NewConsString(param_1,uVar9,plVar10);
  return puVar8;
}

