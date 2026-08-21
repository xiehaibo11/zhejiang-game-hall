
void FUN_00fdc1e8(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  void *pvVar3;
  long *plVar4;
  
  pvVar3 = (void *)*param_1;
  *param_1 = 0;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(char *)(param_1 + 2) == '\0') goto LAB_00fdc278;
  if ((*(int *)((long)pvVar3 + 0x28) == 2) &&
     (plVar4 = *(long **)((long)pvVar3 + 0x30), plVar4 != (long *)0x0)) {
    plVar1 = (long *)plVar4[4];
    if (plVar4 == plVar1) {
      pcVar2 = *(code **)(*plVar1 + 0x20);
LAB_00fdc24c:
      (*pcVar2)();
    }
    else if (plVar1 != (long *)0x0) {
      pcVar2 = *(code **)(*plVar1 + 0x28);
      goto LAB_00fdc24c;
    }
    operator_delete(plVar4);
  }
  if ((*(int *)(*(long *)((long)pvVar3 + 0x18) + 8) == 0x8b5e) &&
     (*(Ref **)((long)pvVar3 + 0x38) != (Ref *)0x0)) {
    cocos2d::Ref::release(*(Ref **)((long)pvVar3 + 0x38));
  }
LAB_00fdc278:
                    /* catch() { ... } // from try @ 00fdc2b8 with catch @ 00fdc280 */
  operator_delete(pvVar3);
  return;
}

