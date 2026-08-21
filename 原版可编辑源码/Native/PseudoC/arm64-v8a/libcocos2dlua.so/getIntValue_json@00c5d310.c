
/* cocostudio::DictionaryHelper::getIntValue_json(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*, int) */

int __thiscall
cocostudio::DictionaryHelper::getIntValue_json
          (DictionaryHelper *this,GenericValue *param_1,char *param_2,int param_3)

{
  int *__s2;
  uint uVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  
  if (*(short *)(param_1 + 0x16) != 0) {
    pcVar6 = param_2 + -1;
    pcVar3 = pcVar6;
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    piVar8 = *(int **)(param_1 + 8);
    uVar1 = *(uint *)param_1;
    uVar9 = (ulong)uVar1;
    piVar5 = piVar8 + uVar9 * 0xc;
    piVar7 = piVar8;
    if (uVar1 == 0) {
LAB_00c5d3dc:
      pcVar3 = pcVar6;
      if (piVar5 != piVar7) {
        do {
          pcVar3 = pcVar3 + 1;
        } while (*pcVar3 != '\0');
        if (uVar1 == 0) {
LAB_00c5d45c:
          if (piVar8 != piVar5) {
            if (*(short *)((long)piVar8 + 0x2e) == 0) {
              return param_3;
            }
            do {
              pcVar6 = pcVar6 + 1;
            } while (*pcVar6 != '\0');
            uVar1 = *(uint *)param_1;
            piVar8 = *(int **)(param_1 + 8);
            piVar7 = piVar8;
            if (uVar1 == 0) {
LAB_00c5d520:
              if (piVar7 != piVar8 + (ulong)uVar1 * 0xc) {
                return piVar7[6];
              }
            }
            else {
              lVar4 = (ulong)uVar1 * 0x30;
              do {
                iVar2 = *piVar7;
                if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
                  iVar2 = 0x15 - *(char *)((long)piVar7 + 0x15);
                }
                if (iVar2 == (int)((long)pcVar6 - (long)param_2)) {
                  piVar5 = *(int **)(piVar7 + 2);
                  if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
                    piVar5 = piVar7;
                  }
                  if ((piVar5 == (int *)param_2) ||
                     (iVar2 = memcmp(param_2,piVar5,(long)pcVar6 - (long)param_2 & 0xffffffff),
                     iVar2 == 0)) goto LAB_00c5d520;
                }
                lVar4 = lVar4 + -0x30;
                piVar7 = piVar7 + 0xc;
              } while (lVar4 != 0);
            }
            param_3 = 0;
          }
        }
        else {
          lVar4 = uVar9 * 0x30;
          do {
            iVar2 = *piVar8;
            if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
              iVar2 = 0x15 - *(char *)((long)piVar8 + 0x15);
            }
            if (iVar2 == (int)((long)pcVar3 - (long)param_2)) {
              piVar7 = *(int **)(piVar8 + 2);
              if ((*(ushort *)((long)piVar8 + 0x16) & 0x1000) != 0) {
                piVar7 = piVar8;
              }
              if ((piVar7 == (int *)param_2) ||
                 (iVar2 = memcmp(param_2,piVar7,(long)pcVar3 - (long)param_2 & 0xffffffff),
                 iVar2 == 0)) goto LAB_00c5d45c;
            }
            lVar4 = lVar4 + -0x30;
            piVar8 = piVar8 + 0xc;
          } while (lVar4 != 0);
        }
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
        DAT_01785a60 = 0;
      }
    }
    else {
      lVar4 = uVar9 * 0x30;
      do {
        iVar2 = *piVar7;
        if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
          iVar2 = 0x15 - *(char *)((long)piVar7 + 0x15);
        }
        if (iVar2 == (int)((long)pcVar3 - (long)param_2)) {
          __s2 = *(int **)(piVar7 + 2);
          if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
            __s2 = piVar7;
          }
          if ((__s2 == (int *)param_2) ||
             (iVar2 = memcmp(param_2,__s2,(long)pcVar3 - (long)param_2 & 0xffffffff), iVar2 == 0))
          goto LAB_00c5d3dc;
        }
        lVar4 = lVar4 + -0x30;
        piVar7 = piVar7 + 0xc;
      } while (lVar4 != 0);
    }
  }
  return param_3;
}

