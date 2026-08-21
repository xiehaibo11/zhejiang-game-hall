
void TIFFErrorExt(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 *local_90;
  undefined1 **ppuStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  local_b8 = param_4;
  local_b0 = param_5;
  uStack_a8 = param_6;
  local_a0 = param_7;
  uStack_98 = param_8;
  if (_TIFFerrorHandler != (undefined *)0x0) {
    uStack_58 = 0xffffff80ffffffd8;
    local_70 = (undefined1 *)register0x00000008;
    ppuStack_68 = &local_90;
    puStack_60 = auStack_c0;
    (*(code *)_TIFFerrorHandler)(param_2,param_3,&local_70);
  }
  if (_TIFFerrorHandlerExt != (code *)0x0) {
    uStack_78 = 0xffffff80ffffffd8;
    local_90 = (undefined1 *)register0x00000008;
    ppuStack_88 = &local_90;
    puStack_80 = auStack_c0;
    (*_TIFFerrorHandlerExt)(param_1,param_2,param_3,&local_90);
  }
  return;
}

