
void FUN_011fce2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined1 **ppuStack_48;
  undefined8 *puStack_40;
  undefined8 uStack_38;
  
  puStack_40 = &local_70;
  ppuStack_48 = &local_50;
  uStack_38 = 0xffffff80ffffffe0;
  local_70 = param_6;
  uStack_68 = param_7;
  local_60 = param_8;
  uStack_58 = param_9;
  local_50 = (undefined1 *)register0x00000008;
  __vsnprintf_chk(param_2,param_4,0,param_3,param_5,&local_50,param_8,param_9,param_1);
  return;
}

