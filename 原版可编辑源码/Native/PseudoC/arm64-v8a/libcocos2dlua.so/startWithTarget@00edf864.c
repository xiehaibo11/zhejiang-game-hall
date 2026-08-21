
/* cocos2d::MoveBy::startWithTarget(cocos2d::Node*) */

void cocos2d::MoveBy::startWithTarget(Node *param_1)

{
  Node *in_x1;
  undefined4 uVar1;
  undefined4 in_s1;
  undefined4 in_s2;
  
                    /* try { // try from 00edf878 to 00fdf88b has its CatchHandler @ 00edf9ec */
  Action::startWithTarget((Action *)param_1,in_x1);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x54) = 1;
  uVar1 = (**(code **)(*(long *)in_x1 + 0x100))();
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = in_s1;
  *(undefined4 *)(param_1 + 0x6c) = in_s2;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x6c);
  return;
}

