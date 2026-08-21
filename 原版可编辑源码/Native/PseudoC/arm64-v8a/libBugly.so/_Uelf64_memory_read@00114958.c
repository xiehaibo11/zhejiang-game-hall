
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Uelf64_memory_read(long param_1,ulong param_2,long *param_3,ulong param_4,char param_5)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  size_t __n;
  long lVar6;
  long *__dest;
  long local_10 [2];
  
  local_10[1] = ___stack_chk_guard;
  lVar6 = *(long *)(param_1 + 0x18);
  __n = 0;
  lVar3 = _Uaarch64_get_accessors(*(undefined8 *)(param_1 + 8));
  uVar4 = *(long *)(lVar6 + 8) - param_2;
  if (param_4 < uVar4) {
    uVar4 = param_4;
  }
  uVar1 = param_2 & 7;
  if (uVar1 != 0) {
    iVar2 = (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(param_1 + 8),param_2 & 0xfffffffffffffff8,local_10,0,
                       *(undefined8 *)(param_1 + 0x10));
    __n = 0;
    if (iVar2 != 0) goto LAB_00114a34;
    __n = 8 - uVar1;
    if (uVar4 < 8 - uVar1) {
      __n = uVar4;
    }
    memcpy(param_3,(void *)((long)local_10 + uVar1),__n);
    if ((param_5 != '\0') && (pvVar5 = memchr(param_3,0,__n), pvVar5 != (void *)0x0)) {
      __n = (long)pvVar5 - (long)param_3;
      goto LAB_00114a34;
    }
    param_2 = param_2 + __n;
    uVar4 = uVar4 - __n;
    param_3 = (long *)((long)param_3 + __n);
  }
  __dest = param_3;
  if (uVar4 >> 3 != 0) {
    __dest = param_3 + (uVar4 >> 3);
    do {
      iVar2 = (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(param_1 + 8),param_2,local_10,0,
                         *(undefined8 *)(param_1 + 0x10));
      if (iVar2 != 0) goto LAB_00114a34;
      *param_3 = local_10[0];
      if ((param_5 != '\0') && (pvVar5 = memchr(param_3,0,8), pvVar5 != (void *)0x0)) {
        __n = (long)pvVar5 + (__n - (long)param_3);
        goto LAB_00114a34;
      }
      param_3 = param_3 + 1;
      param_2 = param_2 + 8;
      __n = __n + 8;
    } while (param_3 != __dest);
  }
  uVar4 = uVar4 & 7;
  if (uVar4 != 0) {
    iVar2 = (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(param_1 + 8),param_2,local_10,0,
                       *(undefined8 *)(param_1 + 0x10));
    if (iVar2 == 0) {
      memcpy(__dest,local_10,uVar4);
      if ((param_5 == '\0') || (pvVar5 = memchr(__dest,0,8), pvVar5 == (void *)0x0)) {
        __n = __n + uVar4;
      }
      else {
        __n = (long)pvVar5 + (__n - (long)__dest);
      }
    }
  }
LAB_00114a34:
  if (local_10[1] != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(__n);
  }
  return;
}

