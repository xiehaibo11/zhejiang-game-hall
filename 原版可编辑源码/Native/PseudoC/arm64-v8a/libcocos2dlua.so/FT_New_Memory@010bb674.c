
void FT_New_Memory(void)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 010bb500 with catch @ 010bb67c */
  puVar1 = malloc(0x20);
  if (puVar1 != (undefined8 *)0x0) {
                    /* catch() { ... } // from try @ 010bb4d0 with catch @ 010bb69c */
    *puVar1 = 0;
    puVar1[1] = FUN_010bb6b0;
    puVar1[2] = FUN_010bb6c4;
    puVar1[3] = FUN_010bb6b8;
  }
  return;
}

