
undefined1  [16] FUN_00c1e3cc(undefined1 param_1 [16],double param_2,undefined4 param_3)

{
  double __x;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 extraout_var;
  
  auVar1._8_8_ = param_1._8_8_;
  __x = param_1._0_8_;
  switch(param_3) {
  case 0:
    auVar4._0_8_ = __x + param_2;
    auVar4._8_8_ = 0;
    return auVar4;
  case 1:
    auVar5._0_8_ = __x - param_2;
    auVar5._8_8_ = 0;
    return auVar5;
  case 2:
    auVar6._0_8_ = __x * param_2;
    auVar6._8_8_ = 0;
    return auVar6;
  case 3:
    auVar7._0_8_ = __x / param_2;
    auVar7._8_8_ = 0;
    return auVar7;
  case 4:
    __x = __x - param_2 * (double)(long)(__x / param_2);
    break;
  case 5:
    auVar8._0_8_ = pow(__x,param_2);
    auVar8._8_8_ = extraout_var;
    return auVar8;
  case 6:
    auVar2._0_8_ = -__x;
    auVar2._8_8_ = 0;
    return auVar2;
  case 7:
    auVar3._0_8_ = ABS(__x);
    auVar3._8_8_ = 0;
    return auVar3;
  }
  auVar1._0_8_ = __x;
  return auVar1;
}

