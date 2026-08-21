
/* cocos2d::LuaStack::pushLuaValue(cocos2d::LuaValue const&) */

void __thiscall cocos2d::LuaStack::pushLuaValue(LuaStack *this,LuaValue *param_1)

{
  byte *pbVar1;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x007d2bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x60))(this,*(undefined4 *)param_1);
    return;
  case 1:
                    /* WARNING: Could not recover jumptable at 0x007d2c08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x68))(*(undefined4 *)param_1);
    return;
  case 2:
                    /* WARNING: Could not recover jumptable at 0x007d2c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x78))(this,*param_1);
    return;
  case 3:
    pbVar1 = *(byte **)param_1;
    if ((*pbVar1 & 1) == 0) {
      pbVar1 = pbVar1 + 1;
    }
    else {
      pbVar1 = *(byte **)(pbVar1 + 0x10);
    }
    break;
  case 4:
                    /* WARNING: Could not recover jumptable at 0x007d2c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0xa8))(this,*(undefined8 *)param_1);
    return;
  case 5:
                    /* WARNING: Could not recover jumptable at 0x007d2c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0xb0))(this,*(undefined8 *)param_1);
    return;
  case 6:
    pbVar1 = *(byte **)(param_1 + 0x10);
    if ((*pbVar1 & 1) == 0) {
      pbVar1 = pbVar1 + 1;
    }
    else {
      pbVar1 = *(byte **)(pbVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x007d2c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x98))(this,*(undefined8 *)param_1,pbVar1);
    return;
  default:
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007d2c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x80))(this,pbVar1);
  return;
}

