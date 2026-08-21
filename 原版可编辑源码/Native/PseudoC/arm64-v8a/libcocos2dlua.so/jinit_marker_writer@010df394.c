
void jinit_marker_writer(long param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 010df39c to 011df413 has its CatchHandler @ 010defc8 */
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x40);
                    /* catch() { ... } // from try @ 010df38c with catch @ 010df3e0 */
  *(undefined8 **)(param_1 + 0x210) = puVar1;
                    /* catch() { ... } // from try @ 010df120 with catch @ 010df3e4 */
  puVar1[4] = FUN_010e17f4;
  puVar1[5] = FUN_010e1a70;
  puVar1[6] = FUN_010e1c08;
                    /* catch() { ... } // from try @ 010df02c with catch @ 010df3f8 */
  puVar1[1] = FUN_010dffb4;
  *puVar1 = FUN_010df420;
  puVar1[3] = FUN_010e1730;
  puVar1[2] = FUN_010e0bc4;
  *(undefined4 *)(puVar1 + 7) = 0;
                    /* try { // try from 010df414 to 011df577 has its CatchHandler @ 010df414
                       catch() { ... } // from try @ 010df414 with catch @ 010df414
                       catch() { ... } // from try @ 010df938 with catch @ 010df414 */
  return;
}

