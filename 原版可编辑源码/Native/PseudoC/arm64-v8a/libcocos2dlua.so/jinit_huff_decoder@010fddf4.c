
void jinit_huff_decoder(long param_1)

{
  undefined8 *puVar1;
  void *__s;
  int iVar2;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x178);
  *(undefined8 **)(param_1 + 0x270) = puVar1;
  *puVar1 = FUN_010fdec8;
  puVar1[2] = FUN_010fe43c;
  if (*(int *)(param_1 + 0x13c) == 0) {
    puVar1[0x13] = 0;
    puVar1[0x12] = 0;
    puVar1[0x15] = 0;
    puVar1[0x14] = 0;
    puVar1[0xf] = 0;
    puVar1[0xe] = 0;
    puVar1[0x11] = 0;
    puVar1[0x10] = 0;
  }
  else {
    __s = (void *)(*(code *)**(undefined8 **)(param_1 + 8))
                            (param_1,1,(long)*(int *)(param_1 + 0x38) << 8);
    *(void **)(param_1 + 0xc0) = __s;
    if (0 < *(int *)(param_1 + 0x38)) {
      iVar2 = 0;
      do {
        memset(__s,0xff,0x100);
        iVar2 = iVar2 + 1;
                    /* try { // try from 010fde90 to 011fdf0b has its CatchHandler @ 010fde90
                       catch() { ... } // from try @ 010fde90 with catch @ 010fde90
                       catch() { ... } // from try @ 010fdf14 with catch @ 010fde90 */
        __s = (void *)((long)__s + 0x100);
      } while (iVar2 < *(int *)(param_1 + 0x38));
    }
    puVar1[0xc] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
  }
  return;
}

