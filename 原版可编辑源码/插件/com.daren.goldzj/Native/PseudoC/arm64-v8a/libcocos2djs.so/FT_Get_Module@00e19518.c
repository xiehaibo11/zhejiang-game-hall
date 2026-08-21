
long * FT_Get_Module(long param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (((param_1 != 0) && (param_2 != (char *)0x0)) &&
     (uVar1 = *(uint *)(param_1 + 0x14), uVar1 != 0)) {
    puVar4 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5 = puVar4 + 1;
      plVar3 = (long *)*puVar4;
      iVar2 = strcmp(*(char **)(*plVar3 + 0x10),param_2);
      if (iVar2 == 0) {
        return plVar3;
      }
      puVar4 = puVar5;
    } while (puVar5 < (undefined8 *)(param_1 + (ulong)uVar1 * 8 + 0x18));
  }
  return (long *)0x0;
}

