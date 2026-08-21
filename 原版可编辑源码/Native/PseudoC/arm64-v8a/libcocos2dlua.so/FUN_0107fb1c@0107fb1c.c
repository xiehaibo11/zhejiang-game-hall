
uint FUN_0107fb1c(long param_1,char *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  char *__s2;
  uint uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x428);
  lVar4 = ft_module_get_service(*(undefined8 *)(param_1 + 0xb0),"postscript-cmaps");
  if ((lVar4 != 0) && (*(int *)(lVar6 + 0x14) != 0)) {
    uVar5 = 0;
    do {
      uVar2 = (uint)*(ushort *)(*(long *)(lVar6 + 0x4f0) + (ulong)uVar5 * 2);
      uVar1 = uVar2 - 0x187;
      if (uVar2 < 0x187) {
        __s2 = (char *)(**(code **)(lVar4 + 0x28))();
joined_r0x0107fb90:
        if ((__s2 != (char *)0x0) && (iVar3 = strcmp(param_2,__s2), iVar3 == 0)) {
          return uVar5;
        }
      }
      else if (uVar1 < *(uint *)(lVar6 + 0x5f8)) {
        __s2 = *(char **)(*(long *)(lVar6 + 0x600) + (ulong)uVar1 * 8);
        goto joined_r0x0107fb90;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(lVar6 + 0x14));
  }
  return 0;
}

