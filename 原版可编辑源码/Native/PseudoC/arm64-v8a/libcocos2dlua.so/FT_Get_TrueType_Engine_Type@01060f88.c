
undefined4 FT_Get_TrueType_Engine_Type(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  long *plVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar9;
  long lVar10;
  undefined8 *puVar8;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 != 0) {
    puVar7 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar8 = puVar7 + 1;
      plVar6 = (long *)*puVar7;
      lVar10 = *plVar6;
      iVar2 = strcmp(*(char **)(lVar10 + 0x10),"truetype");
      if (iVar2 == 0) {
        if (plVar6 == (long *)0x0) {
          return 0;
        }
        pcVar5 = *(code **)(lVar10 + 0x40);
        if ((pcVar5 == (code *)0x0) ||
           (puVar3 = (undefined4 *)(*pcVar5)(plVar6,"truetype-engine"), puVar3 == (undefined4 *)0x0)
           ) {
          lVar10 = plVar6[1];
          uVar1 = *(uint *)(lVar10 + 0x14);
          if (uVar1 == 0) {
            return 0;
          }
          plVar9 = (long *)(lVar10 + 0x18);
          while (((plVar4 = (long *)*plVar9, plVar4 == plVar6 ||
                  (*(code **)(*plVar4 + 0x40) == (code *)0x0)) ||
                 (puVar3 = (undefined4 *)(**(code **)(*plVar4 + 0x40))(plVar4,"truetype-engine"),
                 puVar3 == (undefined4 *)0x0))) {
            plVar9 = plVar9 + 1;
            if ((long *)(lVar10 + (ulong)uVar1 * 8 + 0x18) <= plVar9) {
              return 0;
            }
          }
        }
        return *puVar3;
      }
      puVar7 = puVar8;
    } while (puVar8 < (undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0x18));
  }
  return 0;
}

