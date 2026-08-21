
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
  int *piVar6;
  uint uVar7;
  ushort uVar8;
  undefined *__s1;
  int iVar9;
  PolygonBoundingBoxData *pPVar10;
  char *pcVar11;
  PolygonBoundingBoxData *pPVar12;
  long lVar13;
  int *piVar14;
  vector<float,std::__ndk1::allocator<float>> *this_00;
  int *piVar15;
  uint *puVar16;
  char *pcVar17;
  ulong uVar18;
  ulong uVar19;
  int *piVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  
  pPVar10 = BaseObject::borrowObject<dragonBones::PolygonBoundingBoxData>();
  __s1 = DataParser::VERTICES;
  pcVar17 = DataParser::VERTICES + -1;
  pcVar11 = pcVar17;
  do {
    pcVar11 = pcVar11 + 1;
  } while (*pcVar11 != '\0');
  piVar15 = *(int **)(param_1 + 8);
  uVar7 = *(uint *)param_1;
  uVar18 = (ulong)uVar7;
  piVar14 = piVar15 + uVar18 * 0xc;
  piVar20 = piVar15;
  if (uVar7 != 0) {
    uVar19 = (long)pcVar11 - (long)DataParser::VERTICES;
    lVar21 = uVar18 * 0x30;
    piVar6 = piVar15;
    do {
      piVar20 = piVar6;
      iVar9 = *piVar20;
      if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar20 + 0x15);
      }
      if (iVar9 == (int)uVar19) {
        piVar6 = *(int **)(piVar20 + 2);
        if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
          piVar6 = piVar20;
        }
        if ((piVar6 == (int *)__s1) || (iVar9 = memcmp(__s1,piVar6,uVar19 & 0xffffffff), iVar9 == 0)
           ) break;
      }
      lVar21 = lVar21 + -0x30;
      piVar6 = piVar20 + 0xc;
      piVar20 = piVar14;
    } while (lVar21 != 0);
  }
  if (piVar14 == piVar20) {
    return pPVar10;
  }
  do {
    pcVar17 = pcVar17 + 1;
  } while (*pcVar17 != '\0');
  if (uVar7 == 0) {
LAB_00d93ff4:
    if (piVar15 != piVar14) {
      puVar16 = (uint *)(piVar15 + 6);
      uVar18 = (ulong)*puVar16;
      goto LAB_00d94018;
    }
  }
  else {
    lVar21 = uVar18 * 0x30;
    do {
      iVar9 = *piVar15;
      if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar15 + 0x15);
      }
      if (iVar9 == (int)((long)pcVar17 - (long)__s1)) {
        piVar20 = *(int **)(piVar15 + 2);
        if ((*(ushort *)((long)piVar15 + 0x16) & 0x1000) != 0) {
          piVar20 = piVar15;
        }
        if ((piVar20 == (int *)__s1) ||
           (iVar9 = memcmp(__s1,piVar20,(long)pcVar17 - (long)__s1 & 0xffffffff), iVar9 == 0))
        goto LAB_00d93ff4;
      }
      lVar21 = lVar21 + -0x30;
      piVar15 = piVar15 + 0xc;
    } while (lVar21 != 0);
  }
  puVar16 = (uint *)&rapidjson::
                     GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                     ::
                     operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                     ::buffer;
  uVar18 = 0;
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
LAB_00d94018:
  this_00 = (vector<float,std::__ndk1::allocator<float>> *)(pPVar10 + 0x28);
  uVar19 = *(long *)(pPVar10 + 0x30) - *(long *)this_00 >> 2;
  if (uVar18 < uVar19 || uVar18 - uVar19 == 0) {
    if (uVar18 < uVar19) {
      *(ulong *)(pPVar10 + 0x30) = *(long *)this_00 + uVar18 * 4;
    }
    uVar7 = *puVar16;
  }
  else {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(this_00,uVar18 - uVar19);
    uVar7 = *puVar16;
  }
  if (uVar7 == 0) {
    fVar25 = *(float *)(pPVar10 + 0x20);
    fVar23 = *(float *)(pPVar10 + 0x24);
  }
  else {
    lVar21 = 0;
    uVar18 = 0;
    pPVar1 = pPVar10 + 0x20;
    pPVar2 = pPVar10 + 0x18;
    pPVar3 = pPVar10 + 0x24;
    pPVar4 = pPVar10 + 0x1c;
    do {
      lVar13 = *(long *)(puVar16 + 2);
      uVar8 = *(ushort *)(lVar13 + lVar21 + 0x16);
      if ((uVar8 >> 9 & 1) == 0) {
        if ((uVar8 >> 5 & 1) == 0) {
          if ((uVar8 >> 6 & 1) == 0) {
            if ((uVar8 >> 7 & 1) == 0) {
              dVar24 = (double)*(ulong *)(lVar13 + lVar21);
            }
            else {
              dVar24 = (double)(long)*(ulong *)(lVar13 + lVar21);
            }
          }
          else {
            dVar24 = (double)NEON_ucvtf((ulong)*(uint *)(lVar13 + lVar21));
          }
        }
        else {
          dVar24 = (double)(long)*(int *)(lVar13 + lVar21);
        }
      }
      else {
        dVar24 = *(double *)(lVar13 + lVar21);
      }
      uVar8 = *(ushort *)(lVar13 + lVar21 + 0x2e);
      if ((uVar8 >> 9 & 1) == 0) {
        lVar13 = lVar13 + lVar21;
        if ((uVar8 >> 5 & 1) == 0) {
          if ((uVar8 >> 6 & 1) == 0) {
            if ((uVar8 >> 7 & 1) == 0) {
              dVar27 = (double)*(ulong *)(lVar13 + 0x18);
            }
            else {
              dVar27 = (double)(long)*(ulong *)(lVar13 + 0x18);
            }
          }
          else {
            dVar27 = (double)NEON_ucvtf((ulong)*(uint *)(lVar13 + 0x18));
          }
        }
        else {
          dVar27 = (double)(long)*(int *)(lVar13 + 0x18);
        }
      }
      else {
        dVar27 = *(double *)(lVar13 + lVar21 + 0x18);
      }
      fVar25 = (float)dVar24;
      fVar26 = (float)dVar27;
      pfVar5 = (float *)(*(long *)this_00 + uVar18 * 4);
      *pfVar5 = fVar25;
      pfVar5[1] = fVar26;
      fVar22 = fVar26;
      if (lVar21 == 0) {
        *(float *)pPVar1 = fVar25;
        *(float *)pPVar3 = fVar26;
        *(float *)pPVar2 = fVar25;
        pPVar12 = pPVar4;
LAB_00d94090:
        *(float *)pPVar12 = fVar26;
        fVar23 = fVar22;
      }
      else {
        fVar23 = *(float *)pPVar1;
        pPVar12 = pPVar1;
        fVar28 = fVar25;
        if ((dVar24 < (double)fVar23) ||
           (pPVar12 = pPVar2, fVar28 = fVar23, (double)*(float *)pPVar2 < dVar24)) {
          *(float *)pPVar12 = fVar25;
          fVar23 = fVar28;
        }
        fVar25 = fVar23;
        fVar23 = *(float *)pPVar3;
        pPVar12 = pPVar3;
        if ((dVar27 < (double)fVar23) ||
           (pPVar12 = pPVar4, fVar22 = fVar23, (double)*(float *)pPVar4 < dVar27))
        goto LAB_00d94090;
      }
      uVar18 = uVar18 + 2;
      lVar21 = lVar21 + 0x30;
    } while (uVar18 < uVar7);
  }
  *(float *)(pPVar10 + 0x18) = *(float *)(pPVar10 + 0x18) - fVar25;
  *(float *)(pPVar10 + 0x1c) = *(float *)(pPVar10 + 0x1c) - fVar23;
  return pPVar10;
}

