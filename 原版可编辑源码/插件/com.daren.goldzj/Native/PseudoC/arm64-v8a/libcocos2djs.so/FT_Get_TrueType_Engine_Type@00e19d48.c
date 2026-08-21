
undefined4 FT_Get_TrueType_Engine_Type(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0x14), uVar1 != 0)) {
    plVar5 = (long *)(param_1 + 0x18);
    do {
      plVar6 = plVar5 + 1;
      plVar5 = (long *)*plVar5;
      lVar7 = *plVar5;
      iVar2 = strcmp(*(char **)(lVar7 + 0x10),"truetype");
      if (iVar2 == 0) {
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        pcVar4 = *(code **)(lVar7 + 0x40);
        if (pcVar4 == (code *)0x0) {
          return 0;
        }
        puVar3 = (undefined4 *)(*pcVar4)(plVar5,"truetype-engine");
        if (puVar3 == (undefined4 *)0x0) {
          return 0;
        }
        return *puVar3;
      }
      plVar5 = plVar6;
    } while (plVar6 < (long *)(param_1 + (ulong)uVar1 * 8 + 0x18));
  }
  return 0;
}

