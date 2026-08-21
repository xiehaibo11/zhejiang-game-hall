
ulong FUN_00e76d14(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  char *__s2;
  char *__s1;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *param_2;
  do {
    uVar4 = uVar4 + 1;
    if (0xff < uVar4) {
      uVar3 = 0;
      uVar4 = 0;
      break;
    }
    __s2 = (char *)(**(code **)(param_1 + 0x20))
                             (*(undefined2 *)(*(long *)(param_1 + 0x18) + (ulong)uVar4 * 2));
    uVar1 = *(uint *)(param_1 + 0x28);
    if (uVar1 != 0) {
      lVar5 = *(long *)(param_1 + 0x30);
      uVar3 = 0;
      do {
        __s1 = *(char **)(lVar5 + uVar3 * 8);
        if (((__s1 != (char *)0x0) && (*__s1 == *__s2)) && (iVar2 = strcmp(__s1,__s2), iVar2 == 0))
        goto LAB_00e76d98;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    uVar3 = 0;
LAB_00e76d98:
  } while ((int)uVar3 == 0);
  *param_2 = uVar4;
  return uVar3 & 0xffffffff;
}

