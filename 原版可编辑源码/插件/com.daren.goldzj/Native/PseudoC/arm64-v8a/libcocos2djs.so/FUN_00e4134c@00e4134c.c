
undefined8 FUN_00e4134c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(char *)**(undefined8 **)(param_1 + 0x20) == '\x1e') {
      FUN_00e41c10((char *)**(undefined8 **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),0,0);
    }
    *(undefined4 *)(lVar1 + 0x140) = 0x201;
    return 0;
  }
  return 3;
}

