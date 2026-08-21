
void FUN_00c1f918(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *__src;
  long lVar4;
  void *pvVar5;
  int iVar6;
  ulong uVar7;
  size_t local_8;
  
  if ((param_2 < 0x7fffff01) && (-1 < *(int *)(param_1 + 0x30))) {
    uVar7 = *(ulong *)(param_1 + 0x28);
    __src = *(void **)(param_1 + 0x20);
    while( true ) {
      uVar7 = uVar7 - (long)__src;
      pvVar5 = *(void **)(param_1 + 0x50);
      iVar6 = (int)uVar7;
      lVar4 = (long)pvVar5 + (uVar7 & 0xffffffff);
      if (iVar6 != 0) {
        iVar3 = (int)*(undefined8 *)(param_1 + 0x40);
        if (iVar3 == (int)pvVar5) {
          if ((uint)((int)*(undefined8 *)(param_1 + 0x48) - iVar3) < param_2) {
            pvVar5 = (void *)FUN_00c1a418(param_1 + 0x40,param_2);
            __src = *(void **)(param_1 + 0x20);
          }
          pvVar5 = memcpy(pvVar5,__src,uVar7 & 0xffffffff);
        }
        else if (pvVar5 != __src) {
          pvVar5 = memmove(pvVar5,__src,uVar7 & 0xffffffff);
        }
        lVar4 = (long)pvVar5 + (uVar7 & 0xffffffff);
        *(void **)(param_1 + 0x20) = pvVar5;
        *(long *)(param_1 + 0x28) = lVar4;
      }
      *(long *)(param_1 + 0x40) = lVar4;
      pvVar5 = (void *)(**(code **)(param_1 + 0x60))
                                 (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x68),
                                  &local_8);
      if ((pvVar5 == (void *)0x0) || (local_8 == 0)) break;
      if (iVar6 == 0) {
        uVar7 = (long)pvVar5 + local_8;
        *(void **)(param_1 + 0x20) = pvVar5;
        *(ulong *)(param_1 + 0x28) = uVar7;
        __src = pvVar5;
        if ((long)pvVar5 + (ulong)param_2 <= uVar7) {
          return;
        }
      }
      else {
        uVar1 = iVar6 + (int)local_8;
        __src = *(void **)(param_1 + 0x50);
        uVar2 = uVar1;
        if (uVar1 < param_2) {
          uVar2 = param_2;
        }
        if ((uint)((int)*(undefined8 *)(param_1 + 0x48) - (int)__src) < uVar2) {
          __src = (void *)FUN_00c1a418(param_1 + 0x40);
        }
        uVar7 = (long)__src + (ulong)uVar1;
        memcpy(*(void **)(param_1 + 0x40),pvVar5,local_8);
        *(void **)(param_1 + 0x20) = __src;
        *(ulong *)(param_1 + 0x40) = uVar7;
        *(ulong *)(param_1 + 0x28) = uVar7;
        if ((long)__src + (ulong)param_2 <= uVar7) {
          return;
        }
      }
    }
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00c1f8a8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x80),0xb64);
}

