
undefined8 FUN_00a15770(undefined8 param_1,uint *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *param_3;
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
    if (bVar1 == 0x24) {
      uVar2 = 0xa5;
    }
    else {
                    /* try { // try from 00a15784 to 00b15843 has its CatchHandler @ 00a15784
                       catch(type#1 @ 00000000) { ... } // from try @ 00a15784 with catch @ 00a15784
                       catch(type#1 @ 00000000) { ... } // from try @ 00a158bc with catch @ 00a15784
                       catch(type#1 @ 00000000) { ... } // from try @ 00a15990 with catch @ 00a15784
                        */
      if (bVar1 == 0x7e) {
        uVar2 = 0x203e;
      }
    }
    *param_2 = uVar2;
    return 1;
  }
  return 0xffffffff;
}

