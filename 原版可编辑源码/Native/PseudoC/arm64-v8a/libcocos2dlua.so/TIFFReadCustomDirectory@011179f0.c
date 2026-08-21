
undefined8 TIFFReadCustomDirectory(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  char *pcVar9;
  ushort *puVar10;
  ulong uVar11;
  ushort uVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  ushort uVar19;
  double dVar20;
  ushort *local_80;
  uint local_74;
  ulong local_68;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 011179bc with catch @ 01117a04
                        */
                    /* try { // try from 01117a0c to 01217a13 has its CatchHandler @ 01117a1c */
                    /* try { // try from 01117a14 to 01217a1f has its CatchHandler @ 0111794c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117a0c with catch @ 01117a1c
                        */
                    /* try { // try from 01117a20 to 01217a53 has its CatchHandler @ 01117a20
                       catch(type#1 @ 00000000) { ... } // from try @ 01117a20 with catch @ 01117a20
                       catch(type#1 @ 00000000) { ... } // from try @ 01117a84 with catch @ 01117a20
                        */
  _TIFFSetupFields(param_1,param_3);
  uVar4 = FUN_01114388(param_1,param_2,&local_80,0);
  if (uVar4 == 0) {
    TIFFErrorExt(param_1[0x77],"TIFFReadCustomDirectory",
                 "Failed to read custom directory at offset %lu",param_2);
    return 0;
  }
  TIFFFreeDirectory(param_1);
                    /* try { // try from 01117a54 to 01217a5f has its CatchHandler @ 01117a78 */
  _TIFFmemset(param_1 + 7,0,0x118);
  uVar19 = 0;
  uVar12 = 0;
  puVar10 = local_80;
  do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117a54 with catch @ 01117a78
                        */
    if (*puVar10 < uVar12) {
                    /* try { // try from 01117ac0 to 01217ac7 has its CatchHandler @ 01117b30 */
                    /* try { // try from 01117ac8 to 01217aff has its CatchHandler @ 01117a90 */
      TIFFWarningExt(param_1[0x77],"TIFFReadDirectoryCheckOrder",
                     "Invalid TIFF directory; tags are not sorted in ascending order");
      break;
    }
                    /* try { // try from 01117a7c to 01217a83 has its CatchHandler @ 01117a8c */
    uVar19 = uVar19 + 1;
    uVar12 = *puVar10 + 1;
                    /* try { // try from 01117a84 to 01217a8f has its CatchHandler @ 01117a20 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117a7c with catch @ 01117a8c
                        */
    puVar10 = puVar10 + 0xc;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117ac8 with catch @ 01117a90
                       catch(type#1 @ 00000000) { ... } // from try @ 01117b10 with catch @ 01117a90
                       catch(type#1 @ 00000000) { ... } // from try @ 01117b58 with catch @ 01117a90
                        */
  } while (uVar19 < uVar4);
  uVar19 = 0;
  puVar10 = local_80;
                    /* try { // try from 01117b00 to 01217b0f has its CatchHandler @ 01117b4c */
LAB_01117d50:
  uVar11 = param_1[0x7f];
                    /* try { // try from 01117d54 to 01217d8b has its CatchHandler @ 01117c78 */
  uVar12 = *puVar10;
  uVar8 = (uint)uVar12;
  if ((int)uVar11 != 0) {
    uVar13 = 0xffffffff;
    uVar15 = uVar11 & 0xffffffff;
    do {
      uVar1 = uVar13 + (uint)uVar15;
      if ((int)uVar1 < 0) {
        uVar1 = uVar1 + 1;
      }
      uVar16 = (int)uVar1 >> 1;
      uVar2 = **(uint **)(param_1[0x7e] + (long)(int)uVar16 * 8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117d44 with catch @ 01117d88
                        */
      if (uVar2 == uVar12) {
        puVar14 = (undefined8 *)(param_1[0x7e] + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 8);
        uVar16 = uVar16 + 1;
        goto LAB_01117e40;
      }
      uVar1 = (uint)uVar15;
                    /* try { // try from 01117d8c to 01217d93 has its CatchHandler @ 01117d98 */
      if (uVar12 <= uVar2) {
        uVar1 = uVar16;
        uVar16 = uVar13;
      }
      uVar13 = uVar16;
      uVar15 = (ulong)uVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117d8c with catch @ 01117d98
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117cc0 with catch @ 01117d9c
                        */
    } while (uVar13 + 1 != uVar1);
  }
  goto LAB_01117da0;
  while (*(uint *)*puVar14 == (uint)uVar12) {
LAB_01117e40:
    puVar14 = puVar14 + -1;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) goto LAB_01117eac;
  }
  if (uVar16 != 0xffffffff) goto joined_r0x01117ea4;
LAB_01117da0:
                    /* try { // try from 01117da0 to 01217da7 has its CatchHandler @ 01117db0 */
                    /* try { // try from 01117da8 to 01217db3 has its CatchHandler @ 01117c78 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117da0 with catch @ 01117db0
                        */
  TIFFWarningExt(param_1[0x77],"TIFFReadCustomDirectory",
                 "Unknown field with tag %d (0x%x) encountered",uVar8,uVar8);
                    /* catch() { ... } // from try @ 01117e18 with catch @ 01117db4 */
  uVar7 = _TIFFCreateAnonField(param_1,*puVar10,puVar10[1]);
  iVar5 = _TIFFMergeFields(param_1,uVar7,1);
  if (iVar5 != 0) {
    uVar11 = param_1[0x7f];
    uVar12 = *puVar10;
    uVar8 = (uint)uVar12;
    uVar15 = uVar11 & 0xffffffff;
    if ((int)uVar11 != 0) {
      uVar13 = 0xffffffff;
      do {
        uVar1 = uVar13 + (uint)uVar15;
        if ((int)uVar1 < 0) {
          uVar1 = uVar1 + 1;
        }
        uVar16 = (int)uVar1 >> 1;
        uVar2 = **(uint **)(param_1[0x7e] + (long)(int)uVar16 * 8);
                    /* try { // try from 01117e10 to 01217e17 has its CatchHandler @ 01117e90 */
        if (uVar2 == uVar12) {
          puVar14 = (undefined8 *)(param_1[0x7e] + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 8);
          uVar16 = uVar16 + 1;
          goto LAB_01117e8c;
        }
        uVar1 = (uint)uVar15;
        if (uVar12 <= uVar2) {
          uVar1 = uVar16;
          uVar16 = uVar13;
        }
        uVar13 = uVar16;
                    /* try { // try from 01117e18 to 01217eab has its CatchHandler @ 01117db4 */
        uVar15 = (ulong)uVar1;
      } while (uVar13 + 1 != uVar1);
    }
    uVar16 = 0xffffffff;
    uVar8 = (uint)uVar12;
    goto joined_r0x01117ea4;
  }
  TIFFWarningExt(param_1[0x77],"TIFFReadCustomDirectory",
                 "Registering anonymous field with tag %d (0x%x) failed",*puVar10,*puVar10);
  goto LAB_01117f28;
  while (*(uint *)*puVar14 == (uint)uVar12) {
LAB_01117e8c:
    puVar14 = puVar14 + -1;
    uVar16 = uVar16 - 1;
                    /* catch() { ... } // from try @ 01117e10 with catch @ 01117e90 */
    if (uVar16 == 0) goto LAB_01117eac;
  }
joined_r0x01117ea4:
  if (uVar8 != 0) {
    puVar17 = *(uint **)(param_1[0x7e] + (ulong)uVar16 * 8);
    if ((short)puVar17[6] != 0) {
      while( true ) {
        puVar18 = puVar17;
        uVar16 = uVar16 + 1;
        if ((puVar18[2] == 0) || (uVar12 = puVar10[1], puVar18[2] == (uint)uVar12)) break;
        if ((uVar11 == uVar16) ||
           (puVar17 = *(uint **)(param_1[0x7e] + (ulong)uVar16 * 8), *puVar17 != uVar8))
        goto LAB_01117f10;
      }
      if (uVar16 != 0x10000) {
        sVar3 = (short)puVar18[1];
                    /* try { // try from 01117b10 to 01217b4f has its CatchHandler @ 01117a90 */
        if ((sVar3 != -3) && (sVar3 != -1)) {
          if (sVar3 == -2) {
            uVar11 = (ulong)*(ushort *)((long)param_1 + 0x82);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117ac0 with catch @ 01117b30
                        */
          }
          else {
            uVar11 = (ulong)(uint)(int)sVar3;
          }
          if (*(ulong *)(puVar10 + 4) < uVar11) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117b00 with catch @ 01117b4c
                        */
                    /* try { // try from 01117b50 to 01217b57 has its CatchHandler @ 01117b60 */
            lVar6 = TIFFFieldWithTag(param_1,uVar8);
                    /* try { // try from 01117b58 to 01217b63 has its CatchHandler @ 01117a90 */
            if (lVar6 == 0) {
              pcVar9 = "unknown tagname";
            }
            else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117b50 with catch @ 01117b60
                        */
              pcVar9 = *(char **)(lVar6 + 0x20);
                    /* try { // try from 01117b64 to 01217b97 has its CatchHandler @ 01117b64
                       catch(type#1 @ 00000000) { ... } // from try @ 01117b64 with catch @ 01117b64
                       catch(type#1 @ 00000000) { ... } // from try @ 01117bcc with catch @ 01117b64
                        */
            }
                    /* try { // try from 01117b98 to 01217ba7 has its CatchHandler @ 01117bc0 */
            TIFFWarningExt(param_1[0x77],*param_1,
                           "incorrect count for field \"%s\" (%lu, expecting %u); tag ignored",
                           pcVar9,*(undefined8 *)(puVar10 + 4),uVar11);
            *puVar10 = 0;
            goto LAB_01117f2c;
          }
          if (*(ulong *)(puVar10 + 4) != uVar11) {
            lVar6 = TIFFFieldWithTag(param_1,uVar8);
            if (lVar6 == 0) {
              pcVar9 = "unknown tagname";
            }
            else {
              pcVar9 = *(char **)(lVar6 + 0x20);
            }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117b98 with catch @ 01117bc0
                        */
                    /* try { // try from 01117bc4 to 01217bcb has its CatchHandler @ 01117bd4 */
                    /* try { // try from 01117bcc to 01217bd7 has its CatchHandler @ 01117b64 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01117bc4 with catch @ 01117bd4
                        */
            TIFFWarningExt(param_1[0x77],*param_1,
                           "incorrect count for field \"%s\" (%lu, expecting %u); tag trimmed",
                           pcVar9,*(undefined8 *)(puVar10 + 4),uVar11);
                    /* catch() { ... } // from try @ 01117c10 with catch @ 01117bd8 */
            uVar8 = (uint)*puVar10;
            *(ulong *)(puVar10 + 4) = uVar11;
          }
        }
        if (uVar8 == 0) goto LAB_01117f2c;
        if (uVar8 != 0x9206) {
                    /* try { // try from 01117c78 to 01217cbf has its CatchHandler @ 01117c78
                       catch(type#1 @ 00000000) { ... } // from try @ 01117c78 with catch @ 01117c78
                       catch(type#1 @ 00000000) { ... } // from try @ 01117ccc with catch @ 01117c78
                       catch(type#1 @ 00000000) { ... } // from try @ 01117d54 with catch @ 01117c78
                       catch(type#1 @ 00000000) { ... } // from try @ 01117da8 with catch @ 01117c78
                        */
          FUN_011148c0(param_1,puVar10,1);
          goto LAB_01117f2c;
        }
        local_68 = 0;
        if (*(long *)(puVar10 + 4) == 1) {
                    /* try { // try from 01117c08 to 01217c0f has its CatchHandler @ 01117c5c */
          if (puVar10[1] == 5) {
                    /* try { // try from 01117c10 to 01217c77 has its CatchHandler @ 01117bd8 */
            uVar8 = *(uint *)(param_1 + 2);
            if ((uVar8 >> 0x13 & 1) == 0) {
              local_74 = *(uint *)(puVar10 + 8);
              if ((uVar8 >> 7 & 1) != 0) {
                TIFFSwabLong(&local_74);
                uVar8 = *(uint *)(param_1 + 2);
              }
              uVar11 = (ulong)local_74;
              if ((uVar8 >> 0xb & 1) == 0) {
                uVar15 = (*(code *)param_1[0x7a])(param_1[0x77],uVar11,0);
                    /* catch() { ... } // from try @ 01117c08 with catch @ 01117c5c */
                if ((uVar15 != uVar11) ||
                   (lVar6 = (*(code *)param_1[0x78])(param_1[0x77],&local_68,8), lVar6 != 8)) {
LAB_01117cdc:
                  uVar7 = 3;
                  goto LAB_01117ce4;
                }
              }
              else {
                    /* try { // try from 01117ccc to 01217d43 has its CatchHandler @ 01117c78 */
                if ((ulong)param_1[0x74] < uVar11 + 8) goto LAB_01117cdc;
                _TIFFmemcpy(&local_68,(void *)(param_1[0x73] + uVar11),8);
              }
              uVar8 = *(uint *)(param_1 + 2);
                    /* try { // try from 01117d44 to 01217d53 has its CatchHandler @ 01117d88 */
            }
            else {
              local_68 = *(ulong *)(puVar10 + 8);
            }
            if ((uVar8 >> 7 & 1) != 0) {
              TIFFSwabArrayOfLong(&local_68,2);
            }
            if ((int)local_68 == 0) {
              dVar20 = 0.0;
            }
            else {
                    /* try { // try from 01117cc0 to 01217ccb has its CatchHandler @ 01117d9c */
              if ((int)local_68 == -1) {
                dVar20 = -1.0;
              }
              else {
                dVar20 = (double)NEON_ucvtf(local_68 >> 0x20);
                dVar20 = (double)(local_68 & 0xffffffff) / dVar20;
              }
            }
            TIFFSetField(dVar20,param_1,*puVar10);
            goto LAB_01117f2c;
          }
          uVar7 = 2;
        }
        else {
          uVar7 = 1;
        }
LAB_01117ce4:
        FUN_01116d2c(param_1,uVar7,"TIFFFetchSubjectDistance","SubjectDistance",1);
        goto LAB_01117f2c;
      }
      uVar12 = puVar10[1];
LAB_01117f10:
      TIFFWarningExt(param_1[0x77],"TIFFReadCustomDirectory",
                     "Wrong data type %d for \"%s\"; tag ignored",uVar12,
                     *(undefined8 *)(puVar18 + 8));
    }
LAB_01117f28:
    *puVar10 = 0;
  }
LAB_01117f2c:
  uVar19 = uVar19 + 1;
  puVar10 = puVar10 + 0xc;
                    /* try { // try from 01117f3c to 01217f5f has its CatchHandler @ 01117f90 */
  if (uVar4 <= uVar19) {
    if (local_80 != (ushort *)0x0) {
      _TIFFfree(local_80);
    }
    return 1;
  }
  goto LAB_01117d50;
LAB_01117eac:
                    /* try { // try from 01117eac to 01217f3b has its CatchHandler @ 01117eac
                       catch(type#1 @ 00000000) { ... } // from try @ 01117eac with catch @ 01117eac
                       catch(type#1 @ 00000000) { ... } // from try @ 01117f9c with catch @ 01117eac
                        */
  uVar16 = 0;
  goto joined_r0x01117ea4;
}

