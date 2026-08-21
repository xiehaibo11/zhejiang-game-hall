
uint FT_Face_GetCharVariantIsDefault(long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  undefined1 auStack_50 [8];
  long local_48;
  
  if (((param_1 != 0) && (plVar9 = *(long **)(param_1 + 0x50), plVar9 != (long *)0x0)) &&
     (0 < *(int *)(param_1 + 0x48))) {
    plVar1 = plVar9 + *(int *)(param_1 + 0x48);
    do {
      plVar8 = (long *)*plVar9;
      if (((*(short *)((long)plVar8 + 0xc) == 0) && (*(short *)((long)plVar8 + 0xe) == 5)) &&
         (*plVar8 != 0)) {
        plVar4 = *(long **)(*plVar8 + 0xb0);
        pcVar7 = *(code **)(*plVar4 + 0x40);
        if (((pcVar7 != (code *)0x0) &&
            (puVar5 = (undefined8 *)(*pcVar7)(plVar4,"tt-cmaps"), puVar5 != (undefined8 *)0x0)) &&
           ((iVar2 = (*(code *)*puVar5)(plVar8,auStack_50), iVar2 == 0 && (local_48 == 0xe)))) {
          lVar6 = *plVar9;
          if (lVar6 == 0) {
            return 0xffffffff;
          }
          uVar3 = (**(code **)(*(long *)(lVar6 + 0x10) + 0x30))(lVar6,param_2,param_3);
          return uVar3 & 0xff;
        }
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 < plVar1);
  }
  return 0xffffffff;
}

