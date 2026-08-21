
void FUN_00e85180(void)

{
  undefined8 *puVar1;
  
  puVar1 = malloc(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = FUN_00e851bc;
    puVar1[2] = FUN_00e851d0;
    puVar1[3] = FUN_00e851c4;
  }
  return;
}

