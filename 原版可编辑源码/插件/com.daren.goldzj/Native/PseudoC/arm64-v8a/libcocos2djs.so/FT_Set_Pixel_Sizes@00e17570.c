
void FT_Set_Pixel_Sizes(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 local_30 [2];
  ulong local_28;
  ulong uStack_20;
  undefined8 local_18;
  
  uVar1 = param_2;
  if (param_3 != 0) {
    uVar1 = param_3;
  }
  uVar2 = param_3;
  if (param_2 != 0) {
    param_3 = uVar1;
    uVar2 = param_2;
  }
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  if (param_3 == 0) {
    param_3 = 1;
  }
  if (0xfffe < uVar2) {
    uVar2 = 0xffff;
  }
  if (0xfffe < param_3) {
    param_3 = 0xffff;
  }
  local_28 = (ulong)(uVar2 << 6);
  uStack_20 = (ulong)(param_3 << 6);
  local_30[0] = 0;
  local_18 = 0;
  FT_Request_Size(param_1,local_30);
  return;
}

