
void FUN_00c2e61c(long param_1,FILE *param_2,int param_3)

{
  bool bVar1;
  void *__ptr;
  size_t sVar2;
  ulong uVar3;
  bool bVar4;
  uint local_4;
  
  bVar1 = true;
  uVar3 = *(long *)(param_1 + 0x20) + (long)param_3 * 8;
  bVar4 = bVar1;
  if (uVar3 < *(ulong *)(param_1 + 0x28)) {
    do {
      while( true ) {
        __ptr = (void *)FUN_00bff68c(param_1,uVar3,&local_4);
        if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00bfb554(param_1,(int)((long)(uVar3 - *(long *)(param_1 + 0x20)) >> 3) + 1,4);
        }
        if (bVar1 == false) break;
        uVar3 = uVar3 + 8;
        sVar2 = fwrite(__ptr,1,(ulong)local_4,param_2);
        bVar1 = sVar2 == local_4;
        bVar4 = bVar1;
        if (*(ulong *)(param_1 + 0x28) <= uVar3) goto LAB_00c2e6a8;
      }
      uVar3 = uVar3 + 8;
      bVar4 = false;
    } while (uVar3 < *(ulong *)(param_1 + 0x28));
  }
LAB_00c2e6a8:
  luaL_fileresult(param_1,bVar4,0);
  return;
}

