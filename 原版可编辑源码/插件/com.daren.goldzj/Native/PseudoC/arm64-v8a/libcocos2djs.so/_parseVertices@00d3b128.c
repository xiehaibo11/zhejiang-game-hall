
/* dragonBones::BinaryDataParser::_parseVertices(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, dragonBones::VerticesData&) */

void __thiscall
dragonBones::BinaryDataParser::_parseVertices
          (BinaryDataParser *this,GenericValue *param_1,VerticesData *param_2)

{
  int *__s2;
  short sVar1;
  short sVar2;
  short sVar3;
  undefined *__s1;
  int iVar4;
  WeightData *this_00;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  
  __s1 = DataParser::OFFSET;
  pcVar6 = DataParser::OFFSET + -1;
  do {
    pcVar6 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  uVar7 = *(uint *)param_1;
  piVar8 = *(int **)(param_1 + 8);
  piVar9 = piVar8;
  if (uVar7 == 0) {
LAB_00d3b1e0:
    if (piVar9 != piVar8 + (ulong)uVar7 * 0xc) {
      iVar4 = piVar9[6];
      goto LAB_00d3b20c;
    }
  }
  else {
    uVar10 = (long)pcVar6 - (long)DataParser::OFFSET;
    lVar11 = (ulong)uVar7 * 0x30;
    do {
      iVar4 = *piVar9;
      if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar9 + 0x15);
      }
      if (iVar4 == (int)uVar10) {
        __s2 = *(int **)(piVar9 + 2);
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          __s2 = piVar9;
        }
        if ((__s2 == (int *)__s1) || (iVar4 = memcmp(__s1,__s2,uVar10 & 0xffffffff), iVar4 == 0))
        goto LAB_00d3b1e0;
      }
      lVar11 = lVar11 + -0x30;
      piVar9 = piVar9 + 0xc;
    } while (lVar11 != 0);
  }
  iVar4 = 0;
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01d38c18 = 0;
  DAT_01d38c20 = 0;
LAB_00d3b20c:
  *(int *)(param_2 + 4) = iVar4;
  sVar1 = *(short *)(*(long *)(this + 0x250) + (ulong)(iVar4 + 3) * 2);
  if (-1 < sVar1) {
    this_00 = BaseObject::borrowObject<dragonBones::WeightData>();
    lVar11 = *(long *)(this + 0x250);
    sVar2 = *(short *)(lVar11 + (ulong)(uint)(int)sVar1 * 2);
    sVar3 = *(short *)(lVar11 + (ulong)*(uint *)(param_2 + 4) * 2);
    iVar4 = (int)sVar1;
    *(int *)(this_00 + 0x14) = iVar4;
    if (sVar2 != 0) {
      WeightData::addBone(this_00,*(BoneData **)
                                   (*(long *)(this + 0x10) +
                                   (long)*(short *)(lVar11 + (ulong)(iVar4 + 2) * 2) * 8));
      if (sVar2 != 1) {
        uVar10 = 1;
        do {
          WeightData::addBone(this_00,*(BoneData **)
                                       (*(long *)(this + 0x10) +
                                       (long)*(short *)(*(long *)(this + 0x250) +
                                                        (ulong)(iVar4 + 2) * 2 + uVar10 * 2) * 8));
          uVar10 = uVar10 + 1;
        } while (uVar10 < (ulong)(long)sVar2);
      }
    }
    if (sVar3 == 0) {
      iVar5 = 0;
    }
    else {
      uVar10 = 0;
      iVar5 = 0;
      uVar7 = iVar4 + sVar2 + 2;
      do {
        uVar10 = uVar10 + 1;
        iVar4 = (int)*(short *)(*(long *)(this + 0x250) + (ulong)uVar7 * 2);
        iVar5 = iVar5 + iVar4;
        uVar7 = uVar7 + iVar4 + 1;
      } while (uVar10 < (ulong)(long)sVar3);
    }
    *(int *)(this_00 + 0x10) = iVar5;
    *(WeightData **)(param_2 + 0x10) = this_00;
  }
  return;
}

