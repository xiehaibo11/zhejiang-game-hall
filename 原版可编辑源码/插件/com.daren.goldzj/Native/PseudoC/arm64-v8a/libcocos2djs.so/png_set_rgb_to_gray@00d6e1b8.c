
void png_set_rgb_to_gray(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,
                        undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = png_fixed(param_3,"rgb to gray red coefficient");
  uVar2 = png_fixed(param_2,param_3,"rgb to gray green coefficient");
  png_set_rgb_to_gray_fixed(param_3,param_4,uVar1,uVar2);
  return;
}

