
undefined8 FT_GlyphLoader_New(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
                    /* try { // try from 0105aeb8 to 0115aec7 has its CatchHandler @ 0105aee0 */
  plVar1 = (long *)(**(code **)(param_1 + 8))(param_1,0xb0);
  if (plVar1 == (long *)0x0) {
    uVar2 = 0x40;
  }
  else {
    memset(plVar1 + 1,0,0xa8);
    uVar2 = 0;
    *plVar1 = param_1;
    *param_2 = plVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105aeb8 with catch @ 0105aee0
                        */
  }
  return uVar2;
}

