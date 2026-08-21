
/* btConvexShape::getMarginNonVirtual() const */

undefined1  [16] __thiscall btConvexShape::getMarginNonVirtual(btConvexShape *this)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  switch(*(undefined4 *)(this + 8)) {
  case 0:
  case 1:
  case 4:
  case 5:
  case 10:
  case 0xb:
  case 0xd:
    return ZEXT416(*(uint *)(this + 0x38));
  default:
                    /* WARNING: Could not recover jumptable at 0x0122786c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x60))();
    auVar1._4_4_ = extraout_var;
    auVar1._0_4_ = extraout_s0;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  case 8:
    return ZEXT416((uint)(*(float *)(this + 0x28) * *(float *)(this + 0x18)));
  }
}

