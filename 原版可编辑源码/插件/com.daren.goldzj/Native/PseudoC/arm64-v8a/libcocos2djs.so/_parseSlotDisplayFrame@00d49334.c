
/* dragonBones::JSONDataParser::_parseSlotDisplayFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int) */

int dragonBones::JSONDataParser::_parseSlotDisplayFrame
              (GenericValue *param_1,uint param_2,uint param_3)

{
  int *__s2;
  uint uVar1;
  undefined *__s1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  GenericValue *pGVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  
  pGVar5 = (GenericValue *)(ulong)param_2;
  iVar3 = (**(code **)(*(long *)param_1 + 0x90))();
  if (*(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x168) == -2) {
    *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x168);
  }
  else {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
              ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x168),1);
  }
  __s1 = DataParser::VALUE;
  pcVar6 = DataParser::VALUE + -1;
  do {
    pcVar6 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  piVar7 = *(int **)(pGVar5 + 8);
  uVar1 = *(uint *)pGVar5;
  piVar9 = piVar7 + (ulong)uVar1 * 0xc;
  piVar8 = piVar7;
  if (uVar1 != 0) {
    uVar10 = (long)pcVar6 - (long)DataParser::VALUE;
    lVar11 = (ulong)uVar1 * 0x30;
    do {
      iVar4 = *piVar7;
      if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
        iVar4 = 0x15 - *(char *)((long)piVar7 + 0x15);
      }
      if (iVar4 == (int)uVar10) {
        __s2 = *(int **)(piVar7 + 2);
        if ((*(ushort *)((long)piVar7 + 0x16) & 0x1000) != 0) {
          __s2 = piVar7;
        }
        piVar8 = piVar7;
        if ((__s2 == (int *)__s1) || (iVar4 = memcmp(__s1,__s2,uVar10 & 0xffffffff), iVar4 == 0))
        break;
      }
      lVar11 = lVar11 + -0x30;
      piVar7 = piVar7 + 0xc;
      piVar8 = piVar9;
    } while (lVar11 != 0);
  }
  pcVar6 = DataParser::DISPLAY_INDEX;
  if (piVar9 != piVar8) {
    pcVar6 = __s1;
  }
  uVar2 = _getNumber(pGVar5,pcVar6,0);
  *(undefined2 *)(*(long *)(param_1 + 0x168) + (ulong)(iVar3 + 1) * 2) = uVar2;
  _parseActionDataInFrame
            ((JSONDataParser *)param_1,pGVar5,param_3,
             *(BoneData **)(*(SlotData **)(param_1 + 0x40) + 0x48),*(SlotData **)(param_1 + 0x40));
  return iVar3;
}

