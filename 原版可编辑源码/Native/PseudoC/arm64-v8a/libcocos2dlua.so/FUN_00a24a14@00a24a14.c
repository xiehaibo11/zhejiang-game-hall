
undefined8
FUN_00a24a14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  undefined1 **ppuStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  if (param_1 == 0) {
    uVar1 = 0x2b;
  }
  else {
    puStack_50 = &local_90;
    ppuStack_58 = &local_60;
    uStack_48 = 0xffffff80ffffffd0;
    local_90 = param_3;
    uStack_88 = param_4;
    local_80 = param_5;
    uStack_78 = param_6;
    local_70 = param_7;
    uStack_68 = param_8;
    local_60 = (undefined1 *)register0x00000008;
    uVar1 = FUN_00a39d10(param_1,param_2,&local_60);
  }
  return uVar1;
}

