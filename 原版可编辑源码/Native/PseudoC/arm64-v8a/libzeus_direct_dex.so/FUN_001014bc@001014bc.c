
void * FUN_001014bc(char *param_1,int *param_2)

{
  int __fd;
  int iVar1;
  int *piVar2;
  ulong uVar3;
  void *pvVar4;
  char *pcVar5;
  
  do {
    __fd = open(param_1,0,0x100);
    if (__fd != -1) {
      uVar3 = lseek(__fd,0,2);
      LOG("mapping file size is %zu",(int)uVar3);
      pvVar4 = mmap((void *)0x0,uVar3 & 0xffffffff,1,1,__fd,0);
      goto LAB_00101550;
    }
    piVar2 = (int *)__errno();
  } while (*piVar2 == 4);
  pcVar5 = "fail to open %s";
  goto LAB_00101588;
  while (piVar2 = (int *)__errno(), *piVar2 == 4) {
LAB_00101550:
    iVar1 = close(__fd);
    if (iVar1 != -1) break;
  }
  if (pvVar4 != (void *)0xffffffffffffffff) {
    *param_2 = (int)uVar3;
    return pvVar4;
  }
  pcVar5 = "fail to map file %s";
LAB_00101588:
  LOG(pcVar5,param_1);
  return (void *)0x0;
}

