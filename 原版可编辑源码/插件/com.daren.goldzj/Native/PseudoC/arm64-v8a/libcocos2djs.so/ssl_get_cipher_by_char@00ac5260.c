
int * ssl_get_cipher_by_char(long param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)(**(code **)(*(long *)(param_1 + 8) + 0x90))(param_2);
  piVar2 = piVar1;
  if ((piVar1 != (int *)0x0) && (piVar2 = (int *)0x0, *piVar1 != 0)) {
    piVar2 = piVar1;
  }
  return piVar2;
}

