
/* dragonBones::JSONDataParser::_getNumber(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*, float) */

undefined1  [16]
dragonBones::JSONDataParser::_getNumber(GenericValue *param_1,char *param_2,float param_3)

{
  int *__s2;
  uint uVar1;
  ushort uVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  int *piVar11;
  long lVar12;
  undefined4 in_register_00005004;
  double dVar13;
  undefined8 in_register_00005008;
  undefined1 auVar14 [16];
  
  uVar5 = CONCAT44(in_register_00005004,param_3);
  pcVar6 = param_2 + -1;
  pcVar4 = pcVar6;
  do {
    pcVar4 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  piVar7 = *(int **)(param_1 + 8);
  uVar1 = *(uint *)param_1;
  uVar10 = (ulong)uVar1;
  piVar8 = piVar7 + uVar10 * 0xc;
  piVar9 = piVar7;
  if (uVar1 != 0) {
    lVar12 = uVar10 * 0x30;
    piVar11 = piVar7;
    do {
      iVar3 = *piVar11;
      if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
        iVar3 = 0x15 - *(char *)((long)piVar11 + 0x15);
      }
      if (iVar3 == (int)((long)pcVar4 - (long)param_2)) {
        __s2 = *(int **)(piVar11 + 2);
        if ((*(ushort *)((long)piVar11 + 0x16) & 0x1000) != 0) {
          __s2 = piVar11;
        }
        piVar9 = piVar11;
        if ((__s2 == (int *)param_2) ||
           (iVar3 = memcmp(param_2,__s2,(long)pcVar4 - (long)param_2 & 0xffffffff), iVar3 == 0))
        break;
      }
      lVar12 = lVar12 + -0x30;
      piVar11 = piVar11 + 0xc;
      piVar9 = piVar8;
    } while (lVar12 != 0);
  }
  pcVar4 = pcVar6;
  if (piVar8 == piVar9) goto LAB_00d3c700;
  do {
    pcVar4 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  if (uVar1 == 0) {
LAB_00d3c5e4:
    if (piVar7 != piVar8) {
      if ((*(byte *)((long)piVar7 + 0x2e) >> 4 & 1) == 0) goto LAB_00d3c700;
      do {
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      uVar1 = *(uint *)param_1;
      piVar9 = *(int **)(param_1 + 8);
      piVar7 = piVar9;
      if (uVar1 == 0) {
LAB_00d3c690:
        if (piVar7 == piVar9 + (ulong)uVar1 * 0xc) goto LAB_00d3c6c0;
        uVar2 = *(ushort *)((long)piVar7 + 0x2e);
        if ((uVar2 >> 9 & 1) == 0) {
          if ((uVar2 >> 5 & 1) != 0) {
            dVar13 = (double)(long)piVar7[6];
            goto LAB_00d3c6fc;
          }
          if ((uVar2 >> 6 & 1) != 0) {
            dVar13 = (double)NEON_ucvtf((ulong)(uint)piVar7[6]);
            goto LAB_00d3c6fc;
          }
          uVar5 = *(ulong *)(piVar7 + 6);
          if ((uVar2 >> 7 & 1) != 0) {
            dVar13 = (double)(long)uVar5;
            goto LAB_00d3c6fc;
          }
          goto LAB_00d3c6d4;
        }
        dVar13 = *(double *)(piVar7 + 6);
      }
      else {
        lVar12 = (ulong)uVar1 * 0x30;
        do {
          iVar3 = *piVar7;
          if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
            iVar3 = 0x15 - *(char *)((long)piVar7 + 0x15);
          }
          if (iVar3 == (int)((long)pcVar6 - (long)param_2)) {
            piVar8 = *(int **)(piVar7 + 2);
            if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
              piVar8 = piVar7;
            }
            if ((piVar8 == (int *)param_2) ||
               (iVar3 = memcmp(param_2,piVar8,(long)pcVar6 - (long)param_2 & 0xffffffff), iVar3 == 0
               )) goto LAB_00d3c690;
          }
          lVar12 = lVar12 + -0x30;
          piVar7 = piVar7 + 0xc;
        } while (lVar12 != 0);
LAB_00d3c6c0:
        uVar5 = 0;
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01d38c18 = 0;
        DAT_01d38c20 = 0;
LAB_00d3c6d4:
        dVar13 = (double)uVar5;
      }
LAB_00d3c6fc:
      uVar5 = (ulong)(uint)(float)dVar13;
      in_register_00005008 = 0;
      goto LAB_00d3c700;
    }
  }
  else {
    lVar12 = uVar10 * 0x30;
    do {
      iVar3 = *piVar7;
      if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
        iVar3 = 0x15 - *(char *)((long)piVar7 + 0x15);
      }
      if (iVar3 == (int)((long)pcVar4 - (long)param_2)) {
        piVar9 = *(int **)(piVar7 + 2);
        if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
          piVar9 = piVar7;
        }
        if ((piVar9 == (int *)param_2) ||
           (iVar3 = memcmp(param_2,piVar9,(long)pcVar4 - (long)param_2 & 0xffffffff), iVar3 == 0))
        goto LAB_00d3c5e4;
      }
      lVar12 = lVar12 + -0x30;
      piVar7 = piVar7 + 0xc;
    } while (lVar12 != 0);
  }
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01d38c18 = 0;
  DAT_01d38c20 = 0;
LAB_00d3c700:
  auVar14._8_8_ = in_register_00005008;
  auVar14._0_8_ = uVar5;
  return auVar14;
}

