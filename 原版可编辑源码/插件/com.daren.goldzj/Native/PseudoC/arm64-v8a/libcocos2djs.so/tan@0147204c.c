
/* v8::base::ieee754::tan(double) */

undefined1  [16] v8::base::ieee754::tan(double param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  double local_20;
  undefined8 uStack_18;
  
  uVar3 = (ulong)param_1 >> 0x20 & 0x7fffffff;
  if ((uint)uVar3 < 0x3fe921fc) {
    uStack_18 = 0;
    iVar2 = 1;
  }
  else {
    if (0x7fe < (uint)(uVar3 >> 0x14)) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_1 - param_1;
      return auVar4;
    }
    uVar1 = FUN_014705ec(&local_20);
    iVar2 = (uVar1 & 1) * -2 + 1;
    param_1 = local_20;
  }
  auVar4 = FUN_014720b8(param_1,uStack_18,iVar2);
  return auVar4;
}

