
/* cocos2d::Value::Value(cocos2d::Value&&) */

void __thiscall cocos2d::Value::Value(Value *this,Value *param_1)

{
  *(undefined4 *)(this + 8) = 0;
  if (this != param_1) {
    clear(this);
    switch(*(undefined4 *)(param_1 + 8)) {
    case 1:
    case 6:
      *this = *param_1;
      break;
    case 2:
    case 3:
    case 4:
      *(undefined4 *)this = *(undefined4 *)param_1;
      break;
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}

