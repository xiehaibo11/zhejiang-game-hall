
undefined8 FUN_0116325c(long param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_2[2];
  if (((param_2[1] == *(long *)(param_1 + 0x28)) &&
      ((lVar1 == 0 || (lVar1 == *(long *)(param_1 + 0x18))))) ||
     ((param_2[1] == *(long *)(param_1 + 0x30) &&
      ((lVar1 == 0 || (lVar1 == *(long *)(param_1 + 0x20))))))) {
    if ((lVar1 != 0) && (*(int *)(param_1 + 0x90) != 3)) {
      *(undefined4 *)(param_1 + 0x90) = 4;
      (**(code **)(*(long *)(param_1 + 0x70) + 0x28))
                (param_1,*param_2,*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x30));
    }
    cpArbiterUnthread(param_1);
    cpArrayDeleteObj(*(undefined8 *)(*param_2 + 0x78),param_1);
    cpArrayPush(*(undefined8 *)(*param_2 + 0x90),param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

