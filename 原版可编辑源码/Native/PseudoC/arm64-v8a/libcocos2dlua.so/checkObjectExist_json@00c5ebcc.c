
/* cocostudio::DictionaryHelper::checkObjectExist_json(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, char const*) */

bool __thiscall
cocostudio::DictionaryHelper::checkObjectExist_json
          (DictionaryHelper *this,GenericValue *param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  
  if (*(short *)(param_1 + 0x16) == 0) {
    bVar3 = false;
  }
  else {
    pcVar5 = param_2 + -1;
    do {
      pcVar5 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    piVar6 = *(int **)(param_1 + 8);
    uVar2 = *(uint *)param_1;
    piVar7 = piVar6;
    if (uVar2 != 0) {
      lVar8 = (ulong)uVar2 * 0x30;
      piVar1 = piVar6;
      do {
        piVar7 = piVar1;
        iVar4 = *piVar7;
        if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
          iVar4 = 0x15 - *(char *)((long)piVar7 + 0x15);
        }
        if (iVar4 == (int)((long)pcVar5 - (long)param_2)) {
          piVar1 = *(int **)(piVar7 + 2);
          if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
            piVar1 = piVar7;
          }
          if ((piVar1 == (int *)param_2) ||
             (iVar4 = memcmp(param_2,piVar1,(long)pcVar5 - (long)param_2 & 0xffffffff), iVar4 == 0))
          break;
        }
        lVar8 = lVar8 + -0x30;
        piVar1 = piVar7 + 0xc;
        piVar7 = piVar6 + (ulong)uVar2 * 0xc;
      } while (lVar8 != 0);
    }
    bVar3 = piVar6 + (ulong)uVar2 * 0xc != piVar7;
  }
  return bVar3;
}

