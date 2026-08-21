
void TIFFWarning(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  local_c0 = param_3;
  uStack_b8 = param_4;
  local_b0 = param_5;
  uStack_a8 = param_6;
  local_a0 = param_7;
  uStack_98 = param_8;
  if (_TIFFwarningHandler != (undefined *)0x0) {
    uStack_58 = 0xffffff80ffffffd0;
    local_70 = (undefined1 *)register0x00000008;
    ppuStack_68 = &local_90;
    puStack_60 = &local_c0;
    (*(code *)_TIFFwarningHandler)(param_1,param_2,&local_70);
  }
  if (_TIFFwarningHandlerExt != (code *)0x0) {
    uStack_78 = 0xffffff80ffffffd0;
    local_90 = (undefined1 *)register0x00000008;
    ppuStack_88 = &local_90;
    puStack_80 = &local_c0;
    (*_TIFFwarningHandlerExt)(0,param_1,param_2,&local_90);
  }
  return;
}

