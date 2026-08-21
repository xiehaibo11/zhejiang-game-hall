
undefined8 FT_Attach_File(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 local_50 [6];
  long local_38;
  undefined8 uStack_30;
  
  if (param_2 != 0) {
    uStack_30 = 0;
    local_50[0] = 4;
    local_38 = param_2;
    uVar1 = FT_Attach_Stream(param_1,local_50);
    return uVar1;
  }
  return 6;
}

