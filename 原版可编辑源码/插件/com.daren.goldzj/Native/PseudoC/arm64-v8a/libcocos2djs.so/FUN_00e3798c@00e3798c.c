
undefined8 FUN_00e3798c(long *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(*param_1 + 0x370);
  lVar1 = FT_Get_Module(*(undefined8 *)(*(long *)(*param_1 + 0xb0) + 8),"pshinter");
  if (((puVar3 == (undefined8 *)0x0) || (lVar1 == 0)) ||
     (pcVar2 = (code *)*puVar3, pcVar2 == (code *)0x0)) {
    FUN_00e16f28(*param_1,param_2);
  }
  else {
    lVar1 = (*pcVar2)();
    FUN_00e16f28(*param_1,param_2);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 8))(*(undefined8 *)param_1[10],param_1[4],param_1[5],0,0);
    }
  }
  return 0;
}

