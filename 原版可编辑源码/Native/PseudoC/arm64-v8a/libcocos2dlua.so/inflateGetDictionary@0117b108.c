
undefined8 inflateGetDictionary(long param_1,void *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((param_1 == 0) || (lVar2 = *(long *)(param_1 + 0x38), lVar2 == 0)) {
    uVar1 = 0xfffffffe;
  }
  else {
    if ((param_2 != (void *)0x0) && (*(int *)(lVar2 + 0x38) != 0)) {
      memcpy(param_2,(void *)(*(long *)(lVar2 + 0x40) + (ulong)*(uint *)(lVar2 + 0x3c)),
             (ulong)(*(int *)(lVar2 + 0x38) - *(uint *)(lVar2 + 0x3c)));
      memcpy((void *)((long)param_2 +
                     ((ulong)*(uint *)(lVar2 + 0x38) - (ulong)*(uint *)(lVar2 + 0x3c))),
             *(void **)(lVar2 + 0x40),(ulong)*(uint *)(lVar2 + 0x3c));
    }
    if (param_3 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      *param_3 = *(undefined4 *)(lVar2 + 0x38);
    }
  }
  return uVar1;
}

