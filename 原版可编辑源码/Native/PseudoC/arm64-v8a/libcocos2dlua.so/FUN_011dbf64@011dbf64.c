
void FUN_011dbf64(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  FILE *__s;
  size_t __n;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_64 [4];
  undefined1 auStack_60 [8];
  long local_58;
  undefined1 *__ptr;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 != -1) {
    local_64[0] = (undefined1)param_2;
    if (*(char *)(param_1 + 0x58) == '\0') {
      __ptr = local_64;
      local_70 = auStack_60;
      do {
        uVar2 = (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
                          (*(long **)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),__ptr,
                           (ulong)local_64 | 1,&local_78,auStack_60,&local_58,&local_70);
        if (local_78 == __ptr) goto LAB_011dc060;
        if (uVar2 == 3) {
          __s = *(FILE **)(param_1 + 0x40);
          goto LAB_011dbfb8;
        }
        if ((1 < uVar2) ||
           (__n = (long)local_70 - (long)auStack_60,
           sVar4 = fwrite(auStack_60,1,__n,*(FILE **)(param_1 + 0x40)), sVar4 != __n))
        goto LAB_011dc060;
        __ptr = local_78;
      } while (uVar2 == 1);
    }
    else {
      __s = *(FILE **)(param_1 + 0x40);
      __ptr = local_64;
LAB_011dbfb8:
      sVar4 = fwrite(__ptr,1,1,__s);
      if (sVar4 != 1) {
LAB_011dc060:
        iVar3 = -1;
        goto LAB_011dc064;
      }
    }
  }
  iVar3 = 0;
  if (param_2 != -1) {
    iVar3 = param_2;
  }
LAB_011dc064:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}

