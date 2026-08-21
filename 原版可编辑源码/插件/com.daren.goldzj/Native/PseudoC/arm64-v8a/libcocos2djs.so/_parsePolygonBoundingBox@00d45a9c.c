
/* dragonBones::JSONDataParser::_parsePolygonBoundingBox(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

PolygonBoundingBoxData * __thiscall
dragonBones::JSONDataParser::_parsePolygonBoundingBox(JSONDataParser *this,GenericValue *param_1)

{
  PolygonBoundingBoxData *pPVar1;
  PolygonBoundingBoxData *pPVar2;
  PolygonBoundingBoxData *pPVar3;
  PolygonBoundingBoxData *pPVar4;
  float *pfVar5;
  int *__s2;
  uint uVar6;
  ushort uVar7;
  undefined *__s1;
  int iVar8;
  PolygonBoundingBoxData *pPVar9;
  char *pcVar10;
  long lVar11;
  PolygonBoundingBoxData *pPVar12;
  vector<float,std::__ndk1::allocator<float>> *this_00;
  int *piVar13;
  uint *puVar14;
  int *piVar15;
  char *pcVar16;
  ulong uVar17;
  ulong uVar18;
  int *piVar19;
  int *piVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  double dVar28;
  
  pPVar9 = BaseObject::borrowObject<dragonBones::PolygonBoundingBoxData>();
  __s1 = DataParser::VERTICES;
  pcVar16 = DataParser::VERTICES + -1;
  pcVar10 = pcVar16;
  do {
    pcVar10 = pcVar10 + 1;
  } while (*pcVar10 != '\0');
  piVar13 = *(int **)(param_1 + 8);
  uVar6 = *(uint *)param_1;
  uVar17 = (ulong)uVar6;
  piVar15 = piVar13 + uVar17 * 0xc;
  piVar20 = piVar13;
  if (uVar6 != 0) {
    uVar18 = (long)pcVar10 - (long)DataParser::VERTICES;
    lVar21 = uVar17 * 0x30;
    piVar19 = piVar13;
    do {
      iVar8 = *piVar19;
      if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
        iVar8 = 0x15 - *(char *)((long)piVar19 + 0x15);
      }
      if (iVar8 == (int)uVar18) {
        __s2 = *(int **)(piVar19 + 2);
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          __s2 = piVar19;
        }
        piVar20 = piVar19;
        if ((__s2 == (int *)__s1) || (iVar8 = memcmp(__s1,__s2,uVar18 & 0xffffffff), iVar8 == 0))
        break;
      }
      lVar21 = lVar21 + -0x30;
      piVar19 = piVar19 + 0xc;
      piVar20 = piVar15;
    } while (lVar21 != 0);
  }
  if (piVar15 == piVar20) {
    return pPVar9;
  }
  do {
    pcVar16 = pcVar16 + 1;
  } while (*pcVar16 != '\0');
  if (uVar6 == 0) {
LAB_00d45be8:
    if (piVar13 != piVar15) {
      puVar14 = (uint *)(piVar13 + 6);
      uVar17 = (ulong)*puVar14;
      goto LAB_00d45c0c;
    }
  }
  else {
    lVar21 = uVar17 * 0x30;
    do {
      iVar8 = *piVar13;
      if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
        iVar8 = 0x15 - *(char *)((long)piVar13 + 0x15);
      }
      if (iVar8 == (int)((long)pcVar16 - (long)__s1)) {
        piVar20 = *(int **)(piVar13 + 2);
        if ((*(ushort *)((long)piVar13 + 0x16) & 0x1000) != 0) {
          piVar20 = piVar13;
        }
        if ((piVar20 == (int *)__s1) ||
           (iVar8 = memcmp(__s1,piVar20,(long)pcVar16 - (long)__s1 & 0xffffffff), iVar8 == 0))
        goto LAB_00d45be8;
      }
      lVar21 = lVar21 + -0x30;
      piVar13 = piVar13 + 0xc;
    } while (lVar21 != 0);
  }
  puVar14 = (uint *)&rapidjson::
                     GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                     ::
                     operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                     ::buffer;
  uVar17 = 0;
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01d38c18 = 0;
  DAT_01d38c20 = 0;
LAB_00d45c0c:
  this_00 = (vector<float,std::__ndk1::allocator<float>> *)(pPVar9 + 0x28);
  uVar18 = *(long *)(pPVar9 + 0x30) - *(long *)this_00 >> 2;
  if (uVar17 < uVar18 || uVar17 - uVar18 == 0) {
    if (uVar17 < uVar18) {
      *(ulong *)(pPVar9 + 0x30) = *(long *)this_00 + uVar17 * 4;
    }
    uVar6 = *puVar14;
  }
  else {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(this_00,uVar17 - uVar18);
    uVar6 = *puVar14;
  }
  if (uVar6 == 0) {
    fVar23 = *(float *)(pPVar9 + 0x20);
    fVar25 = *(float *)(pPVar9 + 0x24);
  }
  else {
    lVar21 = 0;
    uVar17 = 0;
    pPVar1 = pPVar9 + 0x20;
    pPVar2 = pPVar9 + 0x24;
    pPVar3 = pPVar9 + 0x18;
    pPVar4 = pPVar9 + 0x1c;
    do {
      lVar11 = *(long *)(puVar14 + 2);
      uVar7 = *(ushort *)(lVar11 + lVar21 + 0x16);
      if ((uVar7 >> 9 & 1) == 0) {
        if ((uVar7 >> 5 & 1) == 0) {
          if ((uVar7 >> 6 & 1) == 0) {
            if ((uVar7 >> 7 & 1) == 0) {
              dVar26 = (double)*(ulong *)(lVar11 + lVar21);
            }
            else {
              dVar26 = (double)(long)*(ulong *)(lVar11 + lVar21);
            }
          }
          else {
            dVar26 = (double)NEON_ucvtf((ulong)*(uint *)(lVar11 + lVar21));
          }
        }
        else {
          dVar26 = (double)(long)*(int *)(lVar11 + lVar21);
        }
      }
      else {
        dVar26 = *(double *)(lVar11 + lVar21);
      }
      uVar7 = *(ushort *)(lVar11 + lVar21 + 0x2e);
      if ((uVar7 >> 9 & 1) == 0) {
        lVar11 = lVar11 + lVar21;
        if ((uVar7 >> 5 & 1) == 0) {
          if ((uVar7 >> 6 & 1) == 0) {
            if ((uVar7 >> 7 & 1) == 0) {
              dVar28 = (double)*(ulong *)(lVar11 + 0x18);
            }
            else {
              dVar28 = (double)(long)*(ulong *)(lVar11 + 0x18);
            }
          }
          else {
            dVar28 = (double)NEON_ucvtf((ulong)*(uint *)(lVar11 + 0x18));
          }
        }
        else {
          dVar28 = (double)(long)*(int *)(lVar11 + 0x18);
        }
      }
      else {
        dVar28 = *(double *)(lVar11 + lVar21 + 0x18);
      }
      fVar25 = (float)dVar26;
      fVar27 = (float)dVar28;
      pfVar5 = (float *)(*(long *)this_00 + uVar17 * 4);
      *pfVar5 = fVar25;
      pfVar5[1] = fVar27;
      fVar23 = fVar25;
      fVar24 = fVar27;
      if (lVar21 == 0) {
        *(float *)pPVar1 = fVar25;
        *(float *)pPVar2 = fVar27;
        *(float *)pPVar3 = fVar25;
        pPVar12 = pPVar4;
LAB_00d45da4:
        *(float *)pPVar12 = fVar27;
        fVar25 = fVar24;
      }
      else {
        fVar22 = *(float *)pPVar1;
        pPVar12 = pPVar1;
        if ((dVar26 < (double)fVar22) ||
           (pPVar12 = pPVar3, fVar23 = fVar22, (double)*(float *)pPVar3 < dVar26)) {
          *(float *)pPVar12 = fVar25;
        }
        fVar25 = *(float *)pPVar2;
        pPVar12 = pPVar2;
        if ((dVar28 < (double)fVar25) ||
           (pPVar12 = pPVar4, fVar24 = fVar25, (double)*(float *)pPVar4 < dVar28))
        goto LAB_00d45da4;
      }
      uVar17 = uVar17 + 2;
      lVar21 = lVar21 + 0x30;
    } while (uVar17 < uVar6);
  }
  *(float *)(pPVar9 + 0x18) = *(float *)(pPVar9 + 0x18) - fVar23;
  *(float *)(pPVar9 + 0x1c) = *(float *)(pPVar9 + 0x1c) - fVar25;
  return pPVar9;
}

