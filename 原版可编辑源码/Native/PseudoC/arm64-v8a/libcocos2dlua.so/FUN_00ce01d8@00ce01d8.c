
float FUN_00ce01d8(undefined8 param_1,byte *param_2)

{
  double dVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
  }
  dVar1 = (double)cocos2d::utils::atof((char *)pbVar2);
  return (float)dVar1;
}

