
void FUN_018363b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)__emutls_get_address(&DAT_01d359b8);
  puVar1 = (undefined8 *)*puVar1;
  while (puVar1 != (undefined8 *)0x0) {
    uVar4 = puVar1[2];
    puVar2 = (undefined8 *)__emutls_get_address(&DAT_01d359b8);
    *puVar2 = uVar4;
    (*(code *)*puVar1)(puVar1[1]);
    free(puVar1);
    puVar1 = (undefined8 *)*puVar2;
  }
  puVar3 = (undefined1 *)__emutls_get_address(&DAT_01d35998);
  *puVar3 = 0;
  return;
}

