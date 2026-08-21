
/* spine::MathUtil::sign(float) */

undefined4 spine::MathUtil::sign(float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0x3f800000;
  if (param_1 == 0.0 || 0.0 > param_1) {
    uVar1 = 0;
  }
  uVar2 = 0xbf800000;
  if (0.0 <= param_1) {
    uVar2 = uVar1;
  }
  return uVar2;
}

