
/* dragonBones::JSONDataParser::_getNumber(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*, int) */

int dragonBones::JSONDataParser::_getNumber(GenericValue *param_1,char *param_2,int param_3)

{
  int *__s2;
  uint uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  ulong uVar7;
  int *piVar8;
  int *piVar9;
  long lVar10;
  
  pcVar6 = param_2 + -1;
  pcVar3 = pcVar6;
  do {
    pcVar3 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  piVar5 = *(int **)(param_1 + 8);
  uVar1 = *(uint *)param_1;
  uVar7 = (ulong)uVar1;
  piVar4 = piVar5 + uVar7 * 0xc;
  piVar9 = piVar5;
  if (uVar1 != 0) {
    lVar10 = uVar7 * 0x30;
    piVar8 = piVar5;
    do {
      iVar2 = *piVar8;
      if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
        iVar2 = 0x15 - *(char *)((long)piVar8 + 0x15);
      }
      if (iVar2 == (int)((long)pcVar3 - (long)param_2)) {
        __s2 = *(int **)(piVar8 + 2);
        if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
          __s2 = piVar8;
        }
        piVar9 = piVar8;
        if ((__s2 == (int *)param_2) ||
           (iVar2 = memcmp(param_2,__s2,(long)pcVar3 - (long)param_2 & 0xffffffff), iVar2 == 0))
        break;
      }
      lVar10 = lVar10 + -0x30;
      piVar8 = piVar8 + 0xc;
      piVar9 = piVar4;
    } while (lVar10 != 0);
  }
  if (piVar4 != piVar9) {
    do {
      pcVar6 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    if (uVar1 == 0) {
LAB_00d3c460:
      if (piVar5 != piVar4) {
        return piVar5[6];
      }
    }
    else {
      lVar10 = uVar7 * 0x30;
      do {
        iVar2 = *piVar5;
        if ((*(ushort *)((long)piVar5 + 0x16) & 0x1000) != 0) {
          iVar2 = 0x15 - *(char *)((long)piVar5 + 0x15);
        }
        if (iVar2 == (int)((long)pcVar6 - (long)param_2)) {
          piVar9 = *(int **)(piVar5 + 2);
          if ((*(ushort *)((long)piVar5 + 0x16) & 0x1000) != 0) {
            piVar9 = piVar5;
          }
          if ((piVar9 == (int *)param_2) ||
             (iVar2 = memcmp(param_2,piVar9,(long)pcVar6 - (long)param_2 & 0xffffffff), iVar2 == 0))
          goto LAB_00d3c460;
        }
        lVar10 = lVar10 + -0x30;
        piVar5 = piVar5 + 0xc;
      } while (lVar10 != 0);
    }
    param_3 = 0;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
  return param_3;
}

