
/* dragonBones::JSONDataParser::_parseSlotDisplayFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int) */

int dragonBones::JSONDataParser::_parseSlotDisplayFrame
              (GenericValue *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined *__s1;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  GenericValue *pGVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  
  pGVar6 = (GenericValue *)(ulong)param_2;
  iVar4 = (**(code **)(*(long *)param_1 + 0x90))();
  if (*(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x168) == -2) {
    *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x168);
  }
  else {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
              ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x168),1);
  }
  __s1 = DataParser::VALUE;
  pcVar7 = DataParser::VALUE + -1;
  do {
    pcVar7 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  piVar8 = *(int **)(pGVar6 + 8);
  uVar2 = *(uint *)pGVar6;
  piVar9 = piVar8;
  if (uVar2 != 0) {
    uVar10 = (long)pcVar7 - (long)DataParser::VALUE;
    lVar11 = (ulong)uVar2 * 0x30;
    piVar1 = piVar8;
                    /* try { // try from 00d97858 to 00e9786f has its CatchHandler @ 00d98fb0 */
    do {
      piVar9 = piVar1;
      iVar5 = *piVar9;
      if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar9 + 0x15);
      }
      if (iVar5 == (int)uVar10) {
        piVar1 = *(int **)(piVar9 + 2);
        if ((*(ushort *)((long)piVar9 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar9;
        }
        if ((piVar1 == (int *)__s1) || (iVar5 = memcmp(__s1,piVar1,uVar10 & 0xffffffff), iVar5 == 0)
           ) break;
      }
      lVar11 = lVar11 + -0x30;
      piVar1 = piVar9 + 0xc;
      piVar9 = piVar8 + (ulong)uVar2 * 0xc;
    } while (lVar11 != 0);
  }
  pcVar7 = DataParser::DISPLAY_INDEX;
  if (piVar8 + (ulong)uVar2 * 0xc != piVar9) {
    pcVar7 = __s1;
  }
  uVar3 = _getNumber(pGVar6,pcVar7,0);
  *(undefined2 *)(*(long *)(param_1 + 0x168) + (ulong)(iVar4 + 1) * 2) = uVar3;
  _parseActionDataInFrame
            ((JSONDataParser *)param_1,pGVar6,param_3,
             *(BoneData **)(*(SlotData **)(param_1 + 0x40) + 0x48),*(SlotData **)(param_1 + 0x40));
  return iVar4;
}

