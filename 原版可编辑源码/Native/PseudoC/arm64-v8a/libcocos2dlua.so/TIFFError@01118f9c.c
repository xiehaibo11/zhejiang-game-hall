
void TIFFError(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118ef0 with catch @ 01118fc0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118f34 with catch @ 01118fdc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118f40 with catch @ 01118fe0
                        */
                    /* try { // try from 01118fe4 to 01218feb has its CatchHandler @ 01118ff4 */
                    /* try { // try from 01118fec to 01218ff7 has its CatchHandler @ 01118e98 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01118fe4 with catch @ 01118ff4
                        */
  local_c0 = param_3;
  uStack_b8 = param_4;
  local_b0 = param_5;
  uStack_a8 = param_6;
  local_a0 = param_7;
  uStack_98 = param_8;
  if (_TIFFerrorHandler != (undefined *)0x0) {
    uStack_58 = 0xffffff80ffffffd0;
    local_70 = (undefined1 *)register0x00000008;
    ppuStack_68 = &local_90;
    puStack_60 = &local_c0;
    (*(code *)_TIFFerrorHandler)(param_1,param_2,&local_70);
  }
  if (_TIFFerrorHandlerExt != (code *)0x0) {
    uStack_78 = 0xffffff80ffffffd0;
    local_90 = (undefined1 *)register0x00000008;
    ppuStack_88 = &local_90;
    puStack_80 = &local_c0;
    (*_TIFFerrorHandlerExt)(0,param_1,param_2,&local_90);
  }
  return;
}

