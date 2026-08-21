
undefined8 inflateCopy(void *param_1,void *param_2)

{
  ulong uVar1;
  void *__dest;
  void *__dest_00;
  undefined8 uVar2;
  ulong uVar3;
  void *__src;
  
  if (param_1 == (void *)0x0) {
    return 0xfffffffe;
  }
  if (param_2 == (void *)0x0) {
    return 0xfffffffe;
  }
  __src = *(void **)((long)param_2 + 0x38);
  if (((__src == (void *)0x0) || (*(code **)((long)param_2 + 0x40) == (code *)0x0)) ||
     (*(long *)((long)param_2 + 0x48) == 0)) {
    return 0xfffffffe;
  }
  __dest = (void *)(**(code **)((long)param_2 + 0x40))
                             (*(undefined8 *)((long)param_2 + 0x50),1,0x1bf0);
  if (__dest == (void *)0x0) {
LAB_00e0c768:
    uVar2 = 0xfffffffc;
  }
  else {
    if (*(long *)((long)__src + 0x40) == 0) {
      __dest_00 = (void *)0x0;
    }
    else {
      __dest_00 = (void *)(**(code **)((long)param_2 + 0x40))
                                    (*(undefined8 *)((long)param_2 + 0x50),
                                     1 << (ulong)(*(uint *)((long)__src + 0x30) & 0x1f),1);
      if (__dest_00 == (void *)0x0) {
        (**(code **)((long)param_2 + 0x48))(*(undefined8 *)((long)param_2 + 0x50),__dest);
        goto LAB_00e0c768;
      }
    }
    memcpy(param_1,param_2,0x70);
    memcpy(__dest,__src,0x1bf0);
    uVar3 = *(ulong *)((long)__src + 0x60);
    uVar1 = (long)__src + 0x550;
    if ((uVar1 <= uVar3) && (uVar3 <= (long)__src + 0x1bdcU)) {
      *(ulong *)((long)__dest + 0x60) = (long)__dest + (uVar3 - uVar1) + 0x550;
      *(ulong *)((long)__dest + 0x68) =
           (long)__dest + (*(long *)((long)__src + 0x68) - uVar1) + 0x550;
    }
    *(ulong *)((long)__dest + 0x88) = (long)__dest + (*(long *)((long)__src + 0x88) - uVar1) + 0x550
    ;
    if (__dest_00 != (void *)0x0) {
      memcpy(__dest_00,*(void **)((long)__src + 0x40),
             (ulong)(uint)(1 << (ulong)(*(uint *)((long)__src + 0x30) & 0x1f)));
    }
    uVar2 = 0;
    *(void **)((long)__dest + 0x40) = __dest_00;
    *(void **)((long)param_1 + 0x38) = __dest;
  }
  return uVar2;
}

