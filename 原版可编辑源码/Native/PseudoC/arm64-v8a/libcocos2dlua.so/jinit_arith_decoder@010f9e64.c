
void jinit_arith_decoder(long param_1)

{
  undefined8 *puVar1;
  void *__s;
  int iVar2;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x158);
                    /* catch() { ... } // from try @ 010f9e48 with catch @ 010f9e90 */
  *(undefined8 **)(param_1 + 0x270) = puVar1;
  *puVar1 = FUN_010f9f74;
  puVar1[2] = FUN_010fa2f0;
  puVar1[0x10] = 0;
  puVar1[0x20] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xc] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0;
  puVar1[0xf] = 0;
  puVar1[0xe] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1[0x14] = 0;
  puVar1[0x13] = 0;
  puVar1[0x24] = 0;
  puVar1[0x23] = 0;
  puVar1[0x16] = 0;
  puVar1[0x15] = 0;
  puVar1[0x26] = 0;
  puVar1[0x25] = 0;
  puVar1[0x18] = 0;
  puVar1[0x17] = 0;
  puVar1[0x28] = 0;
  puVar1[0x27] = 0;
  puVar1[0x19] = 0;
  puVar1[0x29] = 0;
  *(undefined1 *)(puVar1 + 0x2a) = 0x71;
  if (*(int *)(param_1 + 0x13c) != 0) {
    __s = (void *)(*(code *)**(undefined8 **)(param_1 + 8))
                            (param_1,1,(long)*(int *)(param_1 + 0x38) << 8);
    *(void **)(param_1 + 0xc0) = __s;
    if (0 < *(int *)(param_1 + 0x38)) {
      iVar2 = 0;
      do {
        memset(__s,0xff,0x100);
        iVar2 = iVar2 + 1;
        __s = (void *)((long)__s + 0x100);
      } while (iVar2 < *(int *)(param_1 + 0x38));
    }
  }
  return;
}

