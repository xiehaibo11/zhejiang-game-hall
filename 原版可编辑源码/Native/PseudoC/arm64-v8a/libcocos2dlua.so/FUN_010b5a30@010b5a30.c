
void FUN_010b5a30(undefined8 *param_1,long param_2,long param_3,long param_4,char param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x84) = 1;
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined8 *)(param_2 + 0xb8);
  if (param_4 != 0) {
    lVar1 = **(long **)(param_4 + 0x128);
    param_1[3] = lVar1;
    param_1[4] = lVar1 + 0x18;
    param_1[5] = lVar1 + 0x60;
    FT_GlyphLoader_Rewind();
                    /* try { // try from 010b5a88 to 011b5a93 has its CatchHandler @ 010b5af4 */
    uVar2 = *(undefined8 *)(param_3 + 0x50);
    param_1[0x11] = 0;
    param_1[0x12] = uVar2;
                    /* try { // try from 010b5a94 to 011b5b0f has its CatchHandler @ 010b56f8 */
    if (param_5 != '\0') {
      param_1[0x11] = *(undefined8 *)(*(long *)(param_4 + 0x128) + 0x40);
    }
  }
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0x1a] = 0x10b5e88;
  param_1[0x19] = 0x10b5d30;
  param_1[0x18] = 0x10b5c8c;
  param_1[0x17] = 0x10b5bcc;
  param_1[0x16] = 0x10b5b3c;
  param_1[0x15] = 0x10b5b08;
  param_1[0x14] = 0x10b5ae0;
  param_1[0x13] = 0x10b5a30;
  return;
}

