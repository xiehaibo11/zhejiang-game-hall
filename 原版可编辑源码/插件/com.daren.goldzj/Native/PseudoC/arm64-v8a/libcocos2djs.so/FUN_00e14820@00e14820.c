
long FUN_00e14820(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 local_28;
  
  plVar6 = *(long **)(param_2 + 0x20);
  local_28 = param_1;
  uVar4 = (**(code **)(param_2 + 0x10))(&local_28);
  uVar5 = (ulong)*(uint *)(param_2 + 4);
  uVar2 = 0;
  if (uVar5 != 0) {
    uVar2 = uVar4 / uVar5;
  }
  plVar7 = plVar6 + (uVar4 - uVar2 * uVar5);
  while ((*plVar7 != 0 && (cVar3 = (**(code **)(param_2 + 0x18))(*plVar7,&local_28), cVar3 == '\0'))
        ) {
    plVar7 = plVar7 + -1;
    if (plVar7 < plVar6) {
      plVar7 = plVar6 + (*(int *)(param_2 + 4) - 1);
    }
  }
  lVar1 = 0;
  if (*plVar7 != 0) {
    lVar1 = *plVar7 + 8;
  }
  return lVar1;
}

