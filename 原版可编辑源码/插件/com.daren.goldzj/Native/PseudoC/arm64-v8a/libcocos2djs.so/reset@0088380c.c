
/* cocos2d::Value::reset(cocos2d::Value::Type) */

void __thiscall cocos2d::Value::reset(Value *this,int param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(this + 8) == param_2) {
    return;
  }
  clear(this);
  switch(param_2) {
  case 7:
  case 8:
    puVar1 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
    }
    break;
  case 9:
  case 10:
    puVar1 = operator_new(0x28,(nothrow_t *)&std::nothrow);
    if (puVar1 != (undefined8 *)0x0) {
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      *(undefined4 *)(puVar1 + 4) = 0x3f800000;
    }
    break;
  default:
    goto switchD_00883850_default;
  }
  *(undefined8 **)this = puVar1;
switchD_00883850_default:
  *(int *)(this + 8) = param_2;
  return;
}

