
undefined8 FT_Get_CMap_Language_ID(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 local_30 [2];
  
  if (param_1 != (long *)0x0) {
    if (*param_1 == 0) {
      return 0;
    }
    plVar2 = *(long **)(*param_1 + 0xb0);
    pcVar4 = *(code **)(*plVar2 + 0x40);
    if (pcVar4 == (code *)0x0) {
      return 0;
    }
    puVar3 = (undefined8 *)(*pcVar4)(plVar2,"tt-cmaps");
    if ((puVar3 != (undefined8 *)0x0) && (iVar1 = (*(code *)*puVar3)(param_1,local_30), iVar1 == 0))
    {
      return local_30[0];
    }
  }
  return 0;
}

