
int FUN_012883cc(char *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
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
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_7;
  uStack_58 = param_8;
  local_50 = (undefined1 *)register0x00000008;
  iVar1 = vsnprintf(param_1,0x37,param_4,&local_50);
  return iVar1;
}

