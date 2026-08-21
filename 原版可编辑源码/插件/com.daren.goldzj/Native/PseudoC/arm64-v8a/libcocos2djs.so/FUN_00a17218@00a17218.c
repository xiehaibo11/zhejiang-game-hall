
undefined8 FUN_00a17218(undefined8 param_1)

{
  long *plVar1;
  undefined1 auStack_28 [24];
  
  FUN_00a34954(param_1,auStack_28);
  do {
    plVar1 = (long *)FUN_00a34964(auStack_28);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
  } while ((undefined8 *)**(undefined8 **)(*plVar1 + 0x10) == (undefined8 *)0x0);
  return *(undefined8 *)**(undefined8 **)(*plVar1 + 0x10);
}

