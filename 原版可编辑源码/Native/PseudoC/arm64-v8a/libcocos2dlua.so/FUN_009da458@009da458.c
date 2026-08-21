
undefined8 FUN_009da458(undefined8 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)lua_touserdata(param_1,1);
  if ((*piVar1 == 0) && (*(DIR **)(piVar1 + 2) != (DIR *)0x0)) {
    closedir(*(DIR **)(piVar1 + 2));
  }
  *piVar1 = 1;
  return 0;
}

