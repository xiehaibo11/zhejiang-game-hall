
uint _TIFFMergeFields(long param_1,uint *param_2,uint param_3)

{
  void *__base;
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 *local_48;
  
  *(undefined8 *)(param_1 + 0x400) = 0;
  if ((*(long *)(param_1 + 0x3f0) == 0) || (*(long *)(param_1 + 0x3f8) == 0)) {
    __base = (void *)_TIFFCheckMalloc(param_1,param_3,8,"for fields array");
    *(void **)(param_1 + 0x3f0) = __base;
  }
  else {
    __base = (void *)_TIFFCheckRealloc(param_1,*(long *)(param_1 + 0x3f0),
                                       *(long *)(param_1 + 0x3f8) + (ulong)param_3,8,
                                       "for fields array");
    *(void **)(param_1 + 0x3f0) = __base;
  }
  if (__base == (void *)0x0) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"_TIFFMergeFields",
                 "Failed to allocate fields array");
    param_3 = 0;
  }
  else {
    if (param_3 != 0) {
      uVar3 = (ulong)param_3;
      do {
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        local_80 = 0;
        if ((*(uint **)(param_1 + 0x400) == (uint *)0x0) ||
           (local_48 = (undefined1 *)&local_80, **(uint **)(param_1 + 0x400) != *param_2)) {
          local_48 = (undefined1 *)&local_80;
          if (*(void **)(param_1 + 0x3f0) != (void *)0x0) {
            local_80 = (ulong)*param_2;
            uStack_78 = 0;
            local_48 = (undefined1 *)&local_80;
            plVar1 = bsearch(&local_48,*(void **)(param_1 + 0x3f0),*(size_t *)(param_1 + 0x3f8),8,
                             FUN_00db66a4);
            if (plVar1 == (long *)0x0) {
              *(undefined8 *)(param_1 + 0x400) = 0;
            }
            else {
              lVar2 = *plVar1;
              *(long *)(param_1 + 0x400) = lVar2;
              if (lVar2 != 0) goto LAB_00db65bc;
            }
          }
          lVar2 = *(long *)(param_1 + 0x3f8);
          *(uint **)(*(long *)(param_1 + 0x3f0) + lVar2 * 8) = param_2;
          *(long *)(param_1 + 0x3f8) = lVar2 + 1;
        }
LAB_00db65bc:
        uVar3 = uVar3 - 1;
        param_2 = param_2 + 0xc;
      } while (uVar3 != 0);
      __base = *(void **)(param_1 + 0x3f0);
    }
    qsort(__base,*(size_t *)(param_1 + 0x3f8),8,FUN_00db66a4);
  }
  return param_3;
}

