
undefined8 FT_Get_CMap_Format(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 auStack_30 [8];
  undefined8 local_28;
  
  if (param_1 == (long *)0x0) {
    return 0xffffffffffffffff;
  }
  if (*param_1 == 0) {
    return 0xffffffffffffffff;
  }
  plVar2 = *(long **)(*param_1 + 0xb0);
  pcVar4 = *(code **)(*plVar2 + 0x40);
  if (pcVar4 == (code *)0x0) {
    return 0xffffffffffffffff;
  }
  puVar3 = (undefined8 *)(*pcVar4)(plVar2,"tt-cmaps");
  if (puVar3 != (undefined8 *)0x0) {
    iVar1 = (*(code *)*puVar3)(param_1,auStack_30);
    if (iVar1 != 0) {
      return 0xffffffffffffffff;
    }
    return local_28;
  }
  return 0xffffffffffffffff;
}

