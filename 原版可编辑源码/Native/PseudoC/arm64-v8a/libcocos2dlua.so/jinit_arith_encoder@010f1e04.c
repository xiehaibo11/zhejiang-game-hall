
void jinit_arith_encoder(long param_1)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 010f1d9c with catch @ 010f1e04 */
                    /* catch() { ... } // from try @ 010f1dac with catch @ 010f1e10 */
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x170);
  *(undefined8 **)(param_1 + 0x230) = puVar1;
  *puVar1 = FUN_010f1e98;
                    /* try { // try from 010f1e40 to 011f1f3f has its CatchHandler @ 010f1e40
                       catch() { ... } // from try @ 010f1e40 with catch @ 010f1e40
                       catch() { ... } // from try @ 010f1f7c with catch @ 010f1e40 */
  puVar1[2] = FUN_010f2070;
  puVar1[0xe] = 0;
  puVar1[0xd] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x10] = 0;
  puVar1[0xf] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x12] = 0;
  puVar1[0x11] = 0;
  puVar1[0x22] = 0;
  puVar1[0x21] = 0;
  puVar1[0x13] = 0;
  puVar1[0x23] = 0;
  puVar1[0x15] = 0;
  puVar1[0x14] = 0;
  puVar1[0x17] = 0;
  puVar1[0x16] = 0;
  puVar1[0x25] = 0;
  puVar1[0x24] = 0;
  puVar1[0x27] = 0;
  puVar1[0x26] = 0;
  puVar1[0x19] = 0;
  puVar1[0x18] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x29] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x2c] = 0;
  *(undefined1 *)(puVar1 + 0x2d) = 0x71;
  return;
}

