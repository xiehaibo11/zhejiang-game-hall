
/* cocos2d::fopen_mem_func(void*, char const*, int) */

ulonglong * cocos2d::fopen_mem_func(void *param_1,char *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulong uVar4;
  char *local_28;
  
  puVar2 = malloc(0x20);
  if (puVar2 != (ulonglong *)0x0) {
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    local_28 = (char *)0x0;
    uVar3 = strtoull(param_2,&local_28,0x10);
    if ((uVar3 == 0) || (uVar4 = strtoul(local_28,&local_28,0x10), uVar4 == 0)) {
      puVar2 = (ulonglong *)0x0;
    }
    else {
      uVar1 = uVar4;
      if ((param_3 & 8U) != 0) {
        uVar1 = 0;
      }
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar1;
      puVar2[3] = 0;
    }
  }
  return puVar2;
}

