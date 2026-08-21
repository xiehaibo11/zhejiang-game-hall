
undefined8 FT_New_Face(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 local_50 [6];
  long local_38;
  undefined8 uStack_30;
  
  if (param_2 != 0) {
                    /* try { // try from 0105c794 to 0115c7a3 has its CatchHandler @ 0105c7bc */
    uStack_30 = 0;
    local_50[0] = 4;
    local_38 = param_2;
    uVar1 = FT_Open_Face(param_1,local_50);
    return uVar1;
  }
  return 6;
}

