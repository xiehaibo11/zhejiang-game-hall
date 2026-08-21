
undefined8
lws_set_extension_option(long param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
                    /* catch() { ... } // from try @ 01056cb8 with catch @ 01056a90 */
  bVar2 = *(byte *)(param_1 + 0x2fc);
  if (bVar2 != 0) {
    uVar6 = 0;
    do {
      iVar3 = strcmp((char *)**(undefined8 **)(param_1 + 0x290 + uVar6 * 8),param_2);
      if (iVar3 == 0) break;
      uVar6 = uVar6 + 1;
    } while (uVar6 < bVar2);
    if ((uint)uVar6 != (uint)bVar2) {
                    /* try { // try from 01056af0 to 01156bab has its CatchHandler @ 01056cf8 */
      local_68 = 0;
      local_58 = 0;
      lVar1 = param_1 + (long)(int)(uint)uVar6 * 8;
      lVar5 = *(long *)(lVar1 + 0x290);
      local_70 = param_3;
      local_60 = param_4;
      uVar4 = (**(code **)(lVar5 + 8))
                        (*(undefined8 *)(param_1 + 0x220),lVar5,param_1,0x1a,
                         *(undefined8 *)(lVar1 + 0x2a0),&local_70,0);
      return uVar4;
    }
  }
  return 0xffffffff;
}

