
undefined8
FUN_010b5f4c(undefined8 *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
            undefined8 param_6,char param_7,undefined4 param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  memset(param_1,0,0xb98);
  lVar1 = ft_module_get_service(*(undefined8 *)(param_2 + 0xb0),"postscript-cmaps");
  if (lVar1 == 0) {
    uVar2 = 7;
  }
  else {
    param_1[0x150] = lVar1;
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
      uVar2 = *(undefined8 *)(param_3 + 0x50);
      param_1[0x11] = 0;
      param_1[0x12] = uVar2;
      if (param_7 != '\0') {
                    /* try { // try from 010b5ff8 to 011b5ffb has its CatchHandler @ 010b6094 */
                    /* try { // try from 010b5ffc to 011b607f has its CatchHandler @ 010b5cd4 */
        param_1[0x11] = *(undefined8 *)(*(long *)(param_4 + 0x128) + 0x40);
      }
    }
    uVar2 = 0;
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
    uVar3 = *(undefined8 *)(param_2 + 0x20);
    param_1[0x152] = param_5;
    *(undefined4 *)(param_1 + 0x16c) = param_8;
    param_1[0x16b] = param_6;
    param_1[0x16d] = param_9;
    param_1[0x170] = 0x10b60b0;
    *(int *)(param_1 + 0x151) = (int)uVar3;
    param_1[0x16f] = 0x10b6088;
    param_1[0x16e] = 0x10b5f4c;
  }
                    /* try { // try from 010b6080 to 011b6083 has its CatchHandler @ 010b6088 */
                    /* try { // try from 010b6084 to 011b60e3 has its CatchHandler @ 010b5cd4 */
  return uVar2;
}

