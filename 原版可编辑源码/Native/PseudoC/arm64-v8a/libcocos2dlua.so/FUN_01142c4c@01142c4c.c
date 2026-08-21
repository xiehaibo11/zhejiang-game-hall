
undefined4 FUN_01142c4c(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)*param_2;
  FUN_0115abe0(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x34),
               *(long *)(puVar1 + 4) + (long)(int)puVar1[6] * (long)*(int *)(param_1 + 8),
               (long)(int)puVar1[6],*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
               *(undefined8 *)(&DAT_017962d0 + (ulong)*puVar1 * 8));
  return *(undefined4 *)(param_1 + 0x10);
}

