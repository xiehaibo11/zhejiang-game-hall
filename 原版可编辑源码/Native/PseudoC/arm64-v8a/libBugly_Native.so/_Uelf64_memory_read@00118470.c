
size_t _Uelf64_memory_read(long param_1,ulong param_2,undefined8 *param_3,ulong param_4,
                          ulong param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  size_t __n;
  long lVar6;
  ulong uVar7;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)(param_1 + 0x18);
  lVar3 = _Uaarch64_get_accessors(*(undefined8 *)(param_1 + 8));
  uVar5 = *(long *)(lVar6 + 8) - param_2;
  if (param_4 <= uVar5) {
    uVar5 = param_4;
  }
  uVar7 = param_2 & 7;
  if (uVar7 == 0) {
    __n = 0;
  }
  else {
    iVar2 = (**(code **)(lVar3 + 0x18))
                      (*(undefined8 *)(param_1 + 8),param_2 & 0xfffffffffffffff8,&local_70,0,
                       *(undefined8 *)(param_1 + 0x10));
    if (iVar2 != 0) {
      __n = 0;
      goto LAB_00118624;
    }
    __n = 8 - uVar7;
    if (uVar5 <= 8 - uVar7) {
      __n = uVar5;
    }
    memcpy(param_3,(void *)((ulong)&local_70 | uVar7),__n);
    if (((param_5 & 1) != 0) && (pvVar4 = memchr(param_3,0,__n), pvVar4 != (void *)0x0)) {
      __n = (long)pvVar4 - (long)param_3;
      goto LAB_00118624;
    }
    param_2 = __n + param_2;
    uVar5 = uVar5 - __n;
    param_3 = (undefined8 *)((long)param_3 + __n);
  }
  if (uVar5 >> 3 != 0) {
    uVar7 = 0;
    do {
      iVar2 = (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(param_1 + 8),param_2,&local_70,0,
                         *(undefined8 *)(param_1 + 0x10));
      if (iVar2 != 0) goto LAB_00118624;
      *param_3 = local_70;
      if (((param_5 & 1) != 0) && (pvVar4 = memchr(param_3,0,8), pvVar4 != (void *)0x0)) {
        __n = (long)pvVar4 + (__n - (long)param_3);
        goto LAB_00118624;
      }
      uVar7 = uVar7 + 1;
      param_2 = param_2 + 8;
      __n = __n + 8;
      param_3 = param_3 + 1;
    } while (uVar7 < uVar5 >> 3);
  }
  uVar5 = uVar5 & 7;
  if ((uVar5 != 0) &&
     (iVar2 = (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(param_1 + 8),param_2,&local_70,0,
                         *(undefined8 *)(param_1 + 0x10)), iVar2 == 0)) {
    memcpy(param_3,&local_70,uVar5);
    if (((param_5 & 1) == 0) || (pvVar4 = memchr(param_3,0,8), pvVar4 == (void *)0x0)) {
      __n = __n + uVar5;
    }
    else {
      __n = (__n - (long)param_3) + (long)pvVar4;
    }
  }
LAB_00118624:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return __n;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

