
/* dragonBones::JSONDataParser::_parsePivot(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, dragonBones::ImageDisplayData&)
    */

JSONDataParser * __thiscall
dragonBones::JSONDataParser::_parsePivot
          (JSONDataParser *this,GenericValue *param_1,ImageDisplayData *param_2)

{
  int *__s2;
  uint uVar1;
  undefined *__s1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  GenericValue *pGVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  undefined4 uVar14;
  undefined4 extraout_s0;
  
  __s1 = DataParser::PIVOT;
  pcVar8 = DataParser::PIVOT + -1;
  pcVar4 = pcVar8;
  do {
    pcVar4 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  piVar6 = *(int **)(param_1 + 8);
  uVar1 = *(uint *)param_1;
  uVar9 = (ulong)uVar1;
  piVar7 = piVar6 + uVar9 * 0xc;
  piVar12 = piVar6;
  if (uVar1 != 0) {
    uVar10 = (long)pcVar4 - (long)DataParser::PIVOT;
    lVar13 = uVar9 * 0x30;
    piVar11 = piVar6;
    do {
      iVar3 = *piVar11;
      if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
        iVar3 = 0x15 - *(char *)((long)piVar11 + 0x15);
      }
      if (iVar3 == (int)uVar10) {
        __s2 = *(int **)(piVar11 + 2);
        if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
          __s2 = piVar11;
        }
        piVar12 = piVar11;
        if (__s2 == (int *)__s1) break;
        uVar2 = memcmp(__s1,__s2,uVar10 & 0xffffffff);
        this = (JSONDataParser *)(ulong)uVar2;
        if (uVar2 == 0) break;
      }
      lVar13 = lVar13 + -0x30;
      piVar11 = piVar11 + 0xc;
      piVar12 = piVar7;
    } while (lVar13 != 0);
  }
  if (piVar7 == piVar12) {
    uVar14 = 0x3f000000;
    *(undefined4 *)(param_2 + 0x68) = 0x3f000000;
    goto LAB_00d442dc;
  }
  do {
    pcVar8 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  if (uVar1 == 0) {
LAB_00d44270:
    if (piVar6 == piVar7) goto LAB_00d44294;
    pGVar5 = (GenericValue *)(piVar6 + 6);
  }
  else {
    lVar13 = uVar9 * 0x30;
    do {
      iVar3 = *piVar6;
      if ((*(ushort *)((long)piVar6 + 0x16) & 0x1000) != 0) {
        iVar3 = 0x15 - *(char *)((long)piVar6 + 0x15);
      }
      if (iVar3 == (int)((long)pcVar8 - (long)__s1)) {
        piVar12 = *(int **)(piVar6 + 2);
        if ((*(ushort *)((long)piVar6 + 0x16) & 0x1000) != 0) {
          piVar12 = piVar6;
        }
        if ((piVar12 == (int *)__s1) ||
           (iVar3 = memcmp(__s1,piVar12,(long)pcVar8 - (long)__s1 & 0xffffffff), iVar3 == 0))
        goto LAB_00d44270;
      }
      lVar13 = lVar13 + -0x30;
      piVar6 = piVar6 + 0xc;
    } while (lVar13 != 0);
LAB_00d44294:
    pGVar5 = (GenericValue *)
             &rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::
              operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
              ::buffer;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
  uVar14 = _getNumber(pGVar5,DataParser::X,0.0);
  *(undefined4 *)(param_2 + 0x68) = uVar14;
  this = (JSONDataParser *)_getNumber(pGVar5,DataParser::Y,0.0);
  uVar14 = extraout_s0;
LAB_00d442dc:
  *(undefined4 *)(param_2 + 0x6c) = uVar14;
  return this;
}

