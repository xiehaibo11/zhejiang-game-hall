
undefined4 FUN_00a110d4(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long local_40;
  char local_38;
  
  lVar3 = *(long *)(param_1 + 0xaf0);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x68);
    if ((lVar2 != 0) || (*(long *)(param_1 + 0x60) != 0)) {
      local_38 = '\0';
      plVar1 = (long *)(param_1 + 0x68);
      if (lVar2 == 0) {
        plVar1 = (long *)(param_1 + 0x60);
      }
      local_40 = lVar3;
      FUN_00a17198(*plVar1 + 200,&local_40,FUN_00a1116c);
      if (local_38 != '\0') {
        if (param_2 != (long *)0x0) {
          *param_2 = lVar3;
        }
        return *(undefined4 *)(lVar3 + 0x260);
      }
      *(undefined8 *)(param_1 + 0xaf0) = 0;
    }
  }
  return 0xffffffff;
}

