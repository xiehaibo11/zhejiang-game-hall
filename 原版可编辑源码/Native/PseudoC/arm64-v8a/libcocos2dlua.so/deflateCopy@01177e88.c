
undefined8 deflateCopy(void *param_1,void *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *__dest;
  long lVar3;
  long lVar4;
  long lVar5;
  void *__src;
  
  uVar2 = 0xfffffffe;
  if ((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) {
    __src = *(void **)((long)param_2 + 0x38);
    if (__src == (void *)0x0) {
      uVar2 = 0xfffffffe;
    }
    else {
      memcpy(param_1,param_2,0x70);
      __dest = (undefined8 *)
               (**(code **)((long)param_1 + 0x40))(*(undefined8 *)((long)param_1 + 0x50),1,0x1730);
      if (__dest != (undefined8 *)0x0) {
        *(undefined8 **)((long)param_1 + 0x38) = __dest;
        memcpy(__dest,__src,0x1730);
        *__dest = param_1;
        uVar2 = (**(code **)((long)param_1 + 0x40))
                          (*(undefined8 *)((long)param_1 + 0x50),
                           *(undefined4 *)((long)__dest + 0x44),2);
        __dest[10] = uVar2;
        uVar2 = (**(code **)((long)param_1 + 0x40))
                          (*(undefined8 *)((long)param_1 + 0x50),
                           *(undefined4 *)((long)__dest + 0x44),2);
        __dest[0xc] = uVar2;
        uVar2 = (**(code **)((long)param_1 + 0x40))
                          (*(undefined8 *)((long)param_1 + 0x50),
                           *(undefined4 *)((long)__dest + 0x74),2);
        __dest[0xd] = uVar2;
        lVar3 = (**(code **)((long)param_1 + 0x40))
                          (*(undefined8 *)((long)param_1 + 0x50),*(undefined4 *)(__dest + 0x2df),4);
        __dest[2] = lVar3;
        if (((((void *)__dest[10] != (void *)0x0) && (__dest[0xc] != 0)) && (lVar3 != 0)) &&
           (__dest[0xd] != 0)) {
          memcpy((void *)__dest[10],*(void **)((long)__src + 0x50),
                 (ulong)(uint)(*(int *)((long)__dest + 0x44) << 1));
          memcpy((void *)__dest[0xc],*(void **)((long)__src + 0x60),
                 (ulong)*(uint *)((long)__dest + 0x44) << 1);
          memcpy((void *)__dest[0xd],*(void **)((long)__src + 0x68),
                 (ulong)*(uint *)((long)__dest + 0x74) << 1);
          memcpy((void *)__dest[2],*(void **)((long)__src + 0x10),(ulong)*(uint *)(__dest + 3));
          lVar4 = *(long *)((long)__src + 0x20);
          lVar5 = *(long *)((long)__src + 0x10);
          __dest[0x169] = (long)__dest + 0xc4;
          __dest[0x16c] = __dest + 0x137;
          __dest[4] = __dest[2] + (lVar4 - lVar5);
          __dest[0x2e0] = lVar3 + (ulong)(*(uint *)(__dest + 0x2df) & 0xfffffffe);
          __dest[0x2de] = __dest[2] + (ulong)*(uint *)(__dest + 0x2df) * 3;
          __dest[0x16f] = (long)__dest + 0xaac;
          return 0;
        }
        lVar3 = *(long *)((long)param_1 + 0x38);
        if (lVar3 != 0) {
          iVar1 = *(int *)(lVar3 + 8);
          if (((iVar1 - 0x45U < 0x2d) &&
              ((1L << ((ulong)(iVar1 - 0x45U) & 0x3f) & 0x100400400011U) != 0)) ||
             ((iVar1 == 0x29a || (iVar1 == 0x2a)))) {
            if (*(long *)(lVar3 + 0x10) != 0) {
              (**(code **)((long)param_1 + 0x48))
                        (*(undefined8 *)((long)param_1 + 0x50),*(long *)(lVar3 + 0x10));
              lVar3 = *(long *)((long)param_1 + 0x38);
            }
            if (*(long *)(lVar3 + 0x68) != 0) {
              (**(code **)((long)param_1 + 0x48))
                        (*(undefined8 *)((long)param_1 + 0x50),*(long *)(lVar3 + 0x68));
              lVar3 = *(long *)((long)param_1 + 0x38);
            }
            if (*(long *)(lVar3 + 0x60) != 0) {
              (**(code **)((long)param_1 + 0x48))
                        (*(undefined8 *)((long)param_1 + 0x50),*(long *)(lVar3 + 0x60));
              lVar3 = *(long *)((long)param_1 + 0x38);
            }
            if (*(long *)(lVar3 + 0x50) != 0) {
              (**(code **)((long)param_1 + 0x48))
                        (*(undefined8 *)((long)param_1 + 0x50),*(long *)(lVar3 + 0x50));
              lVar3 = *(long *)((long)param_1 + 0x38);
            }
            (**(code **)((long)param_1 + 0x48))(*(undefined8 *)((long)param_1 + 0x50),lVar3);
            *(undefined8 *)((long)param_1 + 0x38) = 0;
          }
        }
      }
      uVar2 = 0xfffffffc;
    }
  }
  return uVar2;
}

