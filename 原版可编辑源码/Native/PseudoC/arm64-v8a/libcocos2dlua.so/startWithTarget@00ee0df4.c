
/* cocos2d::JumpBy::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::JumpBy::startWithTarget(JumpBy *this,Node *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  puVar1 = (undefined8 *)(**(code **)(*(long *)param_1 + 0xb0))(param_1);
                    /* try { // try from 00ee0e28 to 00fe0e2f has its CatchHandler @ 00ee0ef8 */
  uVar2 = *puVar1;
  *(undefined8 *)(this + 0x58) = uVar2;
                    /* try { // try from 00ee0e30 to 00fe0f0b has its CatchHandler @ 00ee0cec */
  *(undefined8 *)(this + 0x70) = uVar2;
  return;
}

