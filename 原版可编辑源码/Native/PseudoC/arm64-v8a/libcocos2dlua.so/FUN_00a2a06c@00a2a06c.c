
undefined8 FUN_00a2a06c(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  *param_2 = 0;
  if (((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) ||
     (lVar2 = FUN_00a4ac00(param_1[4]), lVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    puVar3 = *(undefined8 **)param_1[4];
    uVar4 = *puVar3;
    FUN_00a4aa5c((undefined8 *)param_1[4],puVar3,0);
    FUN_00a4ac00(param_1[4]);
    uVar1 = FUN_00a2c6d4();
    *param_2 = uVar1;
  }
  return uVar4;
}

