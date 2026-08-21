
void FUN_00a72d4c(undefined8 *param_1)

{
  long *plVar1;
  code *pcVar2;
  
  plVar1 = (long *)param_1[6];
  *param_1 = &PTR_FUN_01c6ed70;
  if (param_1 + 2 == plVar1) {
    pcVar2 = *(code **)(*plVar1 + 0x20);
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_00a72d94;
    pcVar2 = *(code **)(*plVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a72d94:
                    /* catch() { ... } // from try @ 00a72be0 with catch @ 00a72da0 */
  operator_delete(param_1);
  return;
}

