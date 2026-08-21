
/* cocostudio::DictionaryHelper::getFloatValue_json(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*, float) */

DictionaryHelper * __thiscall
cocostudio::DictionaryHelper::getFloatValue_json
          (DictionaryHelper *this,GenericValue *param_1,char *param_2,float param_3)

{
  int iVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  
  if (*(short *)(param_1 + 0x16) != 0) {
    pcVar8 = param_2 + -1;
    pcVar6 = pcVar8;
    do {
      pcVar6 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    piVar9 = *(int **)(param_1 + 8);
    uVar5 = *(uint *)param_1;
    uVar11 = (ulong)uVar5;
    piVar7 = piVar9 + uVar11 * 0xc;
    piVar10 = piVar9;
    if (uVar5 != 0) {
      lVar12 = uVar11 * 0x30;
      piVar2 = piVar9;
      do {
        piVar10 = piVar2;
        iVar1 = *piVar10;
        if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
          iVar1 = 0x15 - *(char *)((long)piVar10 + 0x15);
        }
        if (iVar1 == (int)((long)pcVar6 - (long)param_2)) {
          piVar2 = *(int **)(piVar10 + 2);
          if ((*(ushort *)((long)piVar10 + 0x16) & 0x1000) != 0) {
            piVar2 = piVar10;
          }
          if (piVar2 == (int *)param_2) break;
          uVar4 = memcmp(param_2,piVar2,(long)pcVar6 - (long)param_2 & 0xffffffff);
          this = (DictionaryHelper *)(ulong)uVar4;
          if (uVar4 == 0) break;
        }
        lVar12 = lVar12 + -0x30;
        piVar2 = piVar10 + 0xc;
        piVar10 = piVar7;
      } while (lVar12 != 0);
    }
    pcVar6 = pcVar8;
    if (piVar7 != piVar10) {
      do {
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      if (uVar5 == 0) {
LAB_00c5d6bc:
        if (piVar9 != piVar7) {
          if (*(short *)((long)piVar9 + 0x2e) == 0) {
            return this;
          }
          do {
            pcVar8 = pcVar8 + 1;
          } while (*pcVar8 != '\0');
          uVar5 = *(uint *)param_1;
          piVar10 = *(int **)(param_1 + 8);
          piVar9 = piVar10;
          if (uVar5 == 0) {
LAB_00c5d76c:
            if (piVar9 != piVar10 + (ulong)uVar5 * 0xc) {
              uVar3 = *(ushort *)((long)piVar9 + 0x2e);
              if ((uVar3 >> 9 & 1) != 0) {
                return this;
              }
              if ((uVar3 >> 5 & 1) != 0) {
                return this;
              }
              if ((uVar3 >> 6 & 1) == 0) {
                return this;
              }
              NEON_ucvtf((ulong)(uint)piVar9[6]);
              return this;
            }
          }
          else {
            lVar12 = (ulong)uVar5 * 0x30;
            do {
              iVar1 = *piVar9;
              if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
                iVar1 = 0x15 - *(char *)((long)piVar9 + 0x15);
              }
              if (iVar1 == (int)((long)pcVar8 - (long)param_2)) {
                piVar7 = *(int **)(piVar9 + 2);
                if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
                  piVar7 = piVar9;
                }
                if (piVar7 == (int *)param_2) goto LAB_00c5d76c;
                uVar4 = memcmp(param_2,piVar7,(long)pcVar8 - (long)param_2 & 0xffffffff);
                this = (DictionaryHelper *)(ulong)uVar4;
                if (uVar4 == 0) goto LAB_00c5d76c;
              }
              lVar12 = lVar12 + -0x30;
              piVar9 = piVar9 + 0xc;
            } while (lVar12 != 0);
          }
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01785a58 = 0;
          DAT_01785a60 = 0;
          return this;
        }
      }
      else {
        lVar12 = uVar11 * 0x30;
        do {
          iVar1 = *piVar9;
          if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
            iVar1 = 0x15 - *(char *)((long)piVar9 + 0x15);
          }
          if (iVar1 == (int)((long)pcVar6 - (long)param_2)) {
            piVar10 = *(int **)(piVar9 + 2);
            if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
              piVar10 = piVar9;
            }
            if (piVar10 == (int *)param_2) goto LAB_00c5d6bc;
            uVar5 = memcmp(param_2,piVar10,(long)pcVar6 - (long)param_2 & 0xffffffff);
            this = (DictionaryHelper *)(ulong)uVar5;
            if (uVar5 == 0) goto LAB_00c5d6bc;
          }
          lVar12 = lVar12 + -0x30;
          piVar9 = piVar9 + 0xc;
        } while (lVar12 != 0);
      }
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
    }
  }
  return this;
}

