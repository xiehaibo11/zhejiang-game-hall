
/* v8::internal::Uri::Escape(v8::internal::Isolate*, v8::internal::Handle<v8::internal::String>) */

ulong * v8::internal::Uri::Escape(Factory *param_1,undefined8 param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ulong *puVar5;
  long lVar6;
  ushort *puVar7;
  ulong *puVar8;
  byte *pbVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  ulong uVar20;
  ulong local_38;
  
  puVar5 = (ulong *)String::Flatten(param_1,param_2,0);
  local_38 = *puVar5;
  uVar12 = local_38;
  while( true ) {
    uVar1 = *(ushort *)((uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 - 1)) + 7);
    if ((uVar1 & 9) == 0) {
      uVar10 = *(uint *)(local_38 + 7);
      uVar12 = (ulong)uVar10;
      lVar6 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_38);
      if ((int)uVar10 < 1) {
        uVar19 = 0;
      }
      else {
        uVar11 = 0;
        uVar19 = 0;
        do {
          uVar1 = *(ushort *)(lVar6 + uVar11 * 2);
          if (uVar1 < 0x100) {
            uVar17 = (uint)uVar1;
            iVar16 = 1;
            if ((9 < uVar17 - 0x30) && (0x19 < (uVar17 | 0x20) - 0x61)) {
              if ((uVar17 - 0x2a < 0x36) &&
                 ((1L << ((ulong)(uVar17 - 0x2a) & 0x3f) & 0x2000000040003bU) != 0)) {
                iVar16 = 1;
              }
              else {
                iVar16 = 3;
              }
            }
          }
          else {
            iVar16 = 6;
          }
          uVar11 = uVar11 + 1;
          uVar19 = uVar19 + iVar16;
        } while ((uVar11 < uVar12) && (uVar19 < 0xffffff1));
      }
      if (uVar19 == uVar10) {
        return puVar5;
      }
      puVar8 = (ulong *)Factory::NewRawOneByteString(param_1,uVar19,0);
      if (puVar8 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      local_38 = *puVar5;
      puVar7 = (ushort *)String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_38);
      if (0 < (int)uVar10) {
        uVar10 = 0;
        do {
          uVar1 = *puVar7;
          uVar19 = (uint)uVar1;
          iVar16 = 0x30;
          cVar15 = '0';
          if (uVar19 < 0x100) {
            if (((uVar19 - 0x30 < 10) || ((uVar19 | 0x20) - 0x61 < 0x1a)) ||
               ((uVar19 - 0x2a < 0x36 &&
                ((1L << ((ulong)(uVar19 - 0x2a) & 0x3f) & 0x2000000040003bU) != 0)))) {
              uVar20 = (ulong)(uVar10 + 0xb);
              iVar16 = 1;
            }
            else {
              uVar11 = (ulong)uVar10;
              *(undefined1 *)(uVar11 + *puVar8 + 0xb) = 0x25;
              cVar15 = '0';
              if (0x9f < uVar19) {
                cVar15 = '7';
              }
              if (9 < (uVar19 & 0xf)) {
                iVar16 = 0x37;
              }
              uVar19 = iVar16 + (uVar19 & 0xf);
              uVar20 = uVar11 + 0xd;
              iVar16 = 3;
              *(char *)(uVar11 + *puVar8 + 0xc) = cVar15 + (char)(uVar1 >> 4);
            }
          }
          else {
            uVar11 = (ulong)uVar10;
            cVar14 = '0';
            cVar13 = '0';
            if (0x9fff < uVar19) {
              cVar13 = '7';
            }
            *(undefined1 *)(uVar11 + *puVar8 + 0xb) = 0x25;
            uVar3 = uVar1 >> 8 & 0xf;
            *(undefined1 *)(uVar11 + *puVar8 + 0xc) = 0x75;
            if (9 < uVar3) {
              cVar14 = '7';
            }
            uVar4 = uVar1 >> 4 & 0xf;
            *(byte *)(uVar11 + *puVar8 + 0xd) = cVar13 + (byte)(uVar1 >> 0xc);
            if (9 < uVar4) {
              cVar15 = '7';
            }
            *(char *)(uVar11 + *puVar8 + 0xe) = cVar14 + (char)uVar3;
            if (9 < (uVar19 & 0xf)) {
              iVar16 = 0x37;
            }
            uVar19 = iVar16 + (uVar19 & 0xf);
            uVar20 = uVar11 + 0x10;
            *(char *)(uVar11 + *puVar8 + 0xf) = cVar15 + (char)uVar4;
            iVar16 = 6;
          }
          uVar10 = uVar10 + iVar16;
          uVar12 = uVar12 - 1;
          puVar7 = puVar7 + 1;
          *(char *)(uVar20 + *puVar8) = (char)uVar19;
        } while (uVar12 != 0);
        return puVar8;
      }
      return puVar8;
    }
    if ((uVar1 & 9) == 8) break;
    uVar12 = uVar12 & 0xffffffff00000000 | (ulong)*(uint *)(uVar12 + 0xb);
  }
  uVar10 = *(uint *)(local_38 + 7);
  uVar12 = (ulong)uVar10;
  lVar6 = String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_38);
  if ((int)uVar10 < 1) {
    uVar19 = 0;
    if (uVar10 == 0) {
      return puVar5;
    }
  }
  else {
    uVar11 = 0;
    uVar19 = 0;
    do {
      bVar18 = *(byte *)(lVar6 + uVar11);
      if ((bVar18 - 0x30 < 10) || ((bVar18 | 0x20) - 0x61 < 0x1a)) {
LAB_015c5548:
        iVar16 = 1;
      }
      else {
        iVar16 = 3;
        if ((bVar18 - 0x2a < 0x36) &&
           ((1L << ((ulong)(bVar18 - 0x2a) & 0x3f) & 0x2000000040003bU) != 0)) goto LAB_015c5548;
      }
      uVar11 = uVar11 + 1;
      uVar19 = uVar19 + iVar16;
    } while ((uVar11 < uVar12) && (uVar19 < 0xffffff1));
    if (uVar19 == uVar10) {
      return puVar5;
    }
  }
  puVar8 = (ulong *)Factory::NewRawOneByteString(param_1,uVar19,0);
  if (puVar8 != (ulong *)0x0) {
    local_38 = *puVar5;
    pbVar9 = (byte *)String::GetFlatContent((PerThreadAssertScopeDebugOnly *)&local_38);
    if (0 < (int)uVar10) {
      uVar10 = 0;
      do {
        bVar18 = *pbVar9;
        if ((bVar18 - 0x30 < 10) || ((bVar18 | 0x20) - 0x61 < 0x1a)) {
LAB_015c57b0:
          uVar11 = (ulong)(uVar10 + 0xb);
          iVar16 = 1;
        }
        else {
          uVar19 = (uint)bVar18;
          if ((uVar19 - 0x2a < 0x36) &&
             ((1L << ((ulong)(uVar19 - 0x2a) & 0x3f) & 0x2000000040003bU) != 0)) goto LAB_015c57b0;
          uVar20 = (ulong)uVar10;
          *(undefined1 *)(uVar20 + *puVar8 + 0xb) = 0x25;
          cVar13 = '0';
          cVar15 = '0';
          if (0x9f < uVar19) {
            cVar15 = '7';
          }
          bVar2 = bVar18 >> 4;
          if (9 < (uVar19 & 0xf)) {
            cVar13 = '7';
          }
          bVar18 = cVar13 + (char)(uVar19 & 0xf);
          uVar11 = uVar20 + 0xd;
          iVar16 = 3;
          *(byte *)(uVar20 + *puVar8 + 0xc) = cVar15 + bVar2;
        }
        uVar10 = uVar10 + iVar16;
        uVar12 = uVar12 - 1;
        pbVar9 = pbVar9 + 1;
        *(byte *)(uVar11 + *puVar8) = bVar18;
      } while (uVar12 != 0);
    }
  }
  return puVar8;
}

