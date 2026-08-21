
void FUN_0106c868(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x38);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = puVar1[2];
    *(undefined4 *)(puVar1 + 0x5f) = 0;
    ft_mem_free(uVar2,puVar1[6]);
    puVar1[6] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    ft_mem_free(uVar2,puVar1[0x5e]);
    puVar1[0x5e] = 0;
    puVar1[0x5d] = 0;
                    /* catch() { ... } // from try @ 0106c65c with catch @ 0106c8c0 */
    ft_mem_free(uVar2,puVar1[0x57]);
    puVar1[0x57] = 0;
                    /* try { // try from 0106c8d0 to 0116c96b has its CatchHandler @ 0106c8d0
                       catch() { ... } // from try @ 0106c8d0 with catch @ 0106c8d0
                       catch() { ... } // from try @ 0106c9f4 with catch @ 0106c8d0 */
    *(undefined4 *)(puVar1 + 0x56) = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    ft_mem_free(uVar2,puVar1);
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  return;
}

