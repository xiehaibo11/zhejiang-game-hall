
ulong FUN_00916eac(byte param_1,byte *param_2,long param_3,undefined8 param_4,long *param_5)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  ulong uVar5;
  byte bVar6;
  
  uVar5 = param_3 + 1;
  param_2[param_3] = param_1;
  if (param_3 != -1) {
    bVar6 = *param_2;
    pbVar1 = (byte *)(param_5 + 0x83);
    do {
      cVar2 = (&DAT_01781e95)[bVar6];
      if (cVar2 == '\x01') {
LAB_00916f60:
        pbVar4 = (byte *)*param_5;
        if (pbVar1 <= pbVar4) {
          luaL_prepbuffer(param_5);
          pbVar4 = (byte *)*param_5;
        }
        *param_5 = (long)(pbVar4 + 1);
        *pbVar4 = 0x3d;
        pbVar4 = (byte *)*param_5;
        if (pbVar1 <= pbVar4) {
                    /* try { // try from 00916f94 to 00a16fe7 has its CatchHandler @ 00916f94
                       catch() { ... } // from try @ 00916f94 with catch @ 00916f94
                       catch() { ... } // from try @ 00917064 with catch @ 00916f94
                       catch() { ... } // from try @ 009170d8 with catch @ 00916f94 */
          luaL_prepbuffer(param_5);
          pbVar4 = (byte *)*param_5;
        }
        bVar3 = "0123456789ABCDEF"[bVar6 >> 4];
        *param_5 = (long)(pbVar4 + 1);
        *pbVar4 = bVar3;
        pbVar4 = (byte *)*param_5;
        if (pbVar1 <= pbVar4) {
          luaL_prepbuffer(param_5);
          pbVar4 = (byte *)*param_5;
        }
        bVar6 = "0123456789ABCDEF"[(ulong)bVar6 & 0xf];
        *param_5 = (long)(pbVar4 + 1);
        *pbVar4 = bVar6;
      }
      else {
        if (cVar2 == '\x03') {
                    /* try { // try from 00916fe8 to 00a17023 has its CatchHandler @ 009170f8 */
          if (uVar5 < 3) {
            return uVar5;
          }
          if ((param_2[1] == 0xd) && (param_2[2] == 10)) {
            pbVar4 = (byte *)*param_5;
            if (pbVar1 <= pbVar4) {
              luaL_prepbuffer(param_5);
              pbVar4 = (byte *)*param_5;
            }
                    /* try { // try from 00917064 to 00a170c3 has its CatchHandler @ 00916f94 */
            *param_5 = (long)(pbVar4 + 1);
            *pbVar4 = 0x3d;
            pbVar4 = (byte *)*param_5;
            if (pbVar1 <= pbVar4) {
              luaL_prepbuffer(param_5);
              pbVar4 = (byte *)*param_5;
            }
            bVar3 = "0123456789ABCDEF"[bVar6 >> 4];
            *param_5 = (long)(pbVar4 + 1);
            *pbVar4 = bVar3;
            pbVar4 = (byte *)*param_5;
            if (pbVar1 <= pbVar4) {
              luaL_prepbuffer(param_5);
              pbVar4 = (byte *)*param_5;
            }
            bVar6 = "0123456789ABCDEF"[(ulong)bVar6 & 0xf];
                    /* try { // try from 009170c4 to 00a170d7 has its CatchHandler @ 009170f8 */
            *param_5 = (long)(pbVar4 + 1);
            *pbVar4 = bVar6;
LAB_009170cc:
            luaL_addstring(param_5,param_4);
            return 0;
                    /* try { // try from 009170d8 to 00a17113 has its CatchHandler @ 00916f94 */
          }
        }
        else if (cVar2 == '\x02') {
          if (uVar5 < 2) {
            return 1;
          }
          if (param_2[1] == 10) goto LAB_009170cc;
          goto LAB_00916f60;
        }
        pbVar4 = (byte *)*param_5;
        if (pbVar1 <= pbVar4) {
          luaL_prepbuffer(param_5);
          bVar6 = *param_2;
          pbVar4 = (byte *)*param_5;
        }
        *param_5 = (long)(pbVar4 + 1);
        *pbVar4 = bVar6;
      }
      bVar6 = param_2[1];
      uVar5 = uVar5 - 1;
      *param_2 = bVar6;
      param_2[1] = param_2[2];
    } while (uVar5 != 0);
  }
                    /* try { // try from 00917038 to 00a17063 has its CatchHandler @ 009170f4 */
  return 0;
}

