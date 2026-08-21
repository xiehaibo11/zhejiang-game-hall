
undefined8
FT_New_Memory_Face(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 local_50 [2];
  long local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  
  if (param_2 != 0) {
    local_50[0] = 1;
    local_30 = 0;
    local_48 = param_2;
    uStack_40 = param_3;
    uVar1 = FT_Open_Face(param_1,local_50,param_4,param_5);
    return uVar1;
  }
  return 6;
}

