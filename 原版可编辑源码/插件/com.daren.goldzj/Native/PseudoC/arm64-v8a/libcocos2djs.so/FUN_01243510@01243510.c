
void FUN_01243510(undefined8 param_1,void *param_2)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  void *pvVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_2 == (void *)0x0) {
    return;
  }
  pvVar6 = *(void **)((long)param_2 + 0x50);
  if (pvVar6 != (void *)0x0) {
    pvVar3 = pvVar6;
    pvVar4 = *(void **)((long)param_2 + 0x58);
    if (*(void **)((long)param_2 + 0x58) != pvVar6) {
      do {
        if (*(long *)((long)pvVar4 + -0x20) != 0) {
          *(long *)((long)pvVar4 + -0x18) = *(long *)((long)pvVar4 + -0x20);
        }
        if (*(long *)((long)pvVar4 + -0x60) != 0) {
          *(long *)((long)pvVar4 + -0x58) = *(long *)((long)pvVar4 + -0x60);
        }
        pvVar3 = *(void **)((long)pvVar4 + -0x80);
        pvVar7 = (void *)((long)pvVar4 + -0x98);
        *(undefined8 *)((long)pvVar4 + -0x80) = 0;
        if (pvVar3 != (void *)0x0) {
          operator_delete__(pvVar3);
        }
        pvVar4 = pvVar7;
      } while (pvVar6 != pvVar7);
      pvVar3 = *(void **)((long)param_2 + 0x50);
    }
    *(void **)((long)param_2 + 0x58) = pvVar6;
    operator_delete(pvVar3);
  }
  lVar5 = *(long *)((long)param_2 + 0x30);
  if (lVar5 != 0) {
    lVar2 = *(long *)((long)param_2 + 0x38);
    while (lVar1 = lVar2, lVar1 != lVar5) {
      lVar2 = lVar1 + -0x58;
      if (*(long *)(lVar1 + -0x48) != 0) {
        *(long *)(lVar1 + -0x40) = *(long *)(lVar1 + -0x48);
      }
    }
    *(long *)((long)param_2 + 0x38) = lVar5;
  }
  operator_delete(param_2);
  return;
}

