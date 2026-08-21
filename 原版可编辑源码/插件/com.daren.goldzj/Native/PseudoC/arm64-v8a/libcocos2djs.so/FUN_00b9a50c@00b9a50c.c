
bool FUN_00b9a50c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = CRYPTO_malloc(0x20,"crypto/dsa/dsa_pmeth.c",0x23);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0xa000000400;
    puVar1[1] = 0;
    puVar1[3] = 0;
    *(undefined8 **)(param_1 + 0x40) = puVar1 + 2;
    *(undefined8 **)(param_1 + 0x28) = puVar1;
    *(undefined4 *)(param_1 + 0x48) = 2;
    puVar2 = *(undefined4 **)(param_2 + 0x28);
    *(undefined4 *)puVar1 = *puVar2;
    *(undefined4 *)((long)puVar1 + 4) = puVar2[1];
    puVar1[1] = *(undefined8 *)(puVar2 + 2);
    puVar1[3] = *(undefined8 *)(puVar2 + 6);
  }
  return puVar1 != (undefined8 *)0x0;
}

