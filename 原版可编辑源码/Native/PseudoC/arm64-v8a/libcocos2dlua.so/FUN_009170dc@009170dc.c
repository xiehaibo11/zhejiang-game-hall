
ulong FUN_009170dc(byte param_1,byte *param_2,long param_3,long *param_4)

{
  ulong uVar1;
  byte bVar2;
  undefined8 uVar3;
  byte bVar4;
  long *plVar5;
  byte *pbVar6;
  
  param_2[param_3] = param_1;
  bVar4 = *param_2;
                    /* catch() { ... } // from try @ 00917038 with catch @ 009170f4 */
                    /* catch() { ... } // from try @ 00916fe8 with catch @ 009170f8
                       catch() { ... } // from try @ 009170c4 with catch @ 009170f8 */
  if (bVar4 == 9) {
LAB_00917194:
    pbVar6 = (byte *)*param_4;
    if (param_4 + 0x83 <= pbVar6) {
      luaL_prepbuffer(param_4);
      bVar4 = *param_2;
      pbVar6 = (byte *)*param_4;
    }
    *param_4 = (long)(pbVar6 + 1);
    *pbVar6 = bVar4;
    return 0;
  }
  uVar1 = param_3 + 1;
  if (bVar4 == 0xd) {
    if (uVar1 < 2) {
      return uVar1;
    }
    if (param_2[1] != 10) {
      return 0;
    }
    uVar3 = 2;
  }
  else {
    if (bVar4 != 0x3d) {
      if (0x5e < bVar4 - 0x20) {
        return 0;
      }
      goto LAB_00917194;
    }
    if (uVar1 < 3) {
      return uVar1;
    }
    if (((ulong)param_2[1] == 0xd) && (param_2[2] == 10)) {
      return 0;
    }
    bVar4 = (&DAT_01781f95)[param_2[1]];
    bVar2 = (&DAT_01781f95)[param_2[2]];
    if ((bVar2 | bVar4) < 0x10) {
      plVar5 = (long *)*param_4;
      if (param_4 + 0x83 <= plVar5) {
        luaL_prepbuffer(param_4);
        plVar5 = (long *)*param_4;
      }
      *param_4 = (long)plVar5 + 1;
      *(byte *)plVar5 = bVar2 + bVar4 * '\x10';
      return 0;
    }
    uVar3 = 3;
  }
  luaL_addlstring(param_4,param_2,uVar3);
  return 0;
}

