
void FUN_0015e480(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  void *pvVar3;
  ulong uVar4;
  long *plVar5;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    plVar5 = *(long **)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x1c) = 1;
    lVar1 = (**(code **)(*plVar5 + 0x18))(plVar5);
    while (*(char *)(lVar1 + 8) == '\f') {
      plVar5 = *(long **)(lVar1 + 0x10);
      lVar1 = (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
    }
    if ((((*(char *)((long)plVar5 + 10) == '\0') ||
         (((*(char *)((long)plVar5 + 10) == '\x02' &&
           (uVar2 = (**(code **)(*plVar5 + 8))(plVar5,param_2), (uVar2 & 1) != 0)) ||
          (*(char *)((long)plVar5 + 0xb) == '\0')))) ||
        ((*(char *)((long)plVar5 + 0xb) == '\x02' &&
         (uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,param_2), (uVar2 & 1) != 0)))) &&
       (__n = __strlen_chk(&DAT_0011aa2a,2), __n != 0)) {
      lVar1 = param_2[1];
      uVar2 = lVar1 + __n;
      if (uVar2 < (ulong)param_2[2]) {
        pvVar3 = (void *)*param_2;
      }
      else {
        uVar4 = param_2[2] << 1;
        if (uVar2 <= uVar4) {
          uVar2 = uVar4;
        }
        param_2[2] = uVar2;
        pvVar3 = realloc((void *)*param_2,uVar2);
        *param_2 = pvVar3;
        if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
        lVar1 = param_2[1];
      }
      memcpy((void *)((long)pvVar3 + lVar1),&DAT_0011aa2a,__n);
      param_2[1] = param_2[1] + __n;
    }
    (**(code **)(*plVar5 + 0x28))(plVar5,param_2);
    *(undefined1 *)(param_1 + 0x1c) = 0;
  }
  return;
}

