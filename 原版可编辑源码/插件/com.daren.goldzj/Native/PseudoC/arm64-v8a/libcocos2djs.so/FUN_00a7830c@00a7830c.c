
void FUN_00a7830c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
                    /* catch() { ... } // from try @ 00a780ac with catch @ 00a78314 */
                    /* catch() { ... } // from try @ 00a780a0 with catch @ 00a78318 */
                    /* catch() { ... } // from try @ 00a78080 with catch @ 00a7831c */
  puVar1 = operator_new(0x18);
                    /* catch() { ... } // from try @ 00a780b8 with catch @ 00a7832c
                       catch() { ... } // from try @ 00a78138 with catch @ 00a7832c
                       catch() { ... } // from try @ 00a78248 with catch @ 00a7832c */
  *puVar1 = &PTR_FUN_01c6f278;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  return;
}

