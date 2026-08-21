
undefined8 * FUN_0010d588(long param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  
  puVar1 = (undefined8 *)(*(code *)PTR_malloc_00113048)(0x40);
  if (puVar1 == (undefined8 *)0x0) {
    DAT_00113188 = (byte *)0x0;
  }
  else {
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    DAT_00113188 = (byte *)0x0;
    if (param_1 == 0) {
      pbVar2 = (byte *)0x0;
    }
    else {
      pbVar2 = (byte *)(param_1 + -1);
      do {
        pbVar2 = pbVar2 + 1;
      } while (*pbVar2 - 1 < 0x20);
    }
    pbVar2 = (byte *)FUN_0010d664(puVar1,pbVar2);
    if (pbVar2 == (byte *)0x0) {
      FUN_0010d514(puVar1);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      if (param_3 != 0) {
        pbVar2 = pbVar2 + -1;
        do {
          pbVar2 = pbVar2 + 1;
        } while (*pbVar2 - 1 < 0x20);
        if (*pbVar2 != 0) {
          FUN_0010d514(puVar1);
          DAT_00113188 = pbVar2;
          return (undefined8 *)0x0;
        }
      }
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = pbVar2;
      }
    }
  }
  return puVar1;
}

