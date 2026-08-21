
/* v8::internal::wasm::Decoder::errorf(unsigned char const*, char const*, ...) */

void v8::internal::wasm::Decoder::errorf(uchar *param_1,char *param_2,...)

{
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 **ppuStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = auStack_80;
  ppuStack_48 = &local_50;
  uStack_38 = 0xffffff80ffffffd8;
  local_78 = in_x3;
  uStack_70 = in_x4;
  local_68 = in_x5;
  uStack_60 = in_x6;
  local_58 = in_x7;
  local_50 = (undefined1 *)register0x00000008;
  verrorf((Decoder *)param_1,*(int *)(param_1 + 0x20) + ((int)param_2 - *(int *)(param_1 + 8)),in_x2
          ,&local_50);
  return;
}

