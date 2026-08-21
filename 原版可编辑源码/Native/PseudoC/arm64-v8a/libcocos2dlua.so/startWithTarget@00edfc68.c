
/* cocos2d::MoveTo::startWithTarget(cocos2d::Node*) */

void cocos2d::MoveTo::startWithTarget(Node *param_1)

{
  Node *in_x1;
  undefined4 uVar1;
  float fVar2;
  float in_s1;
  float in_s2;
  
                    /* try { // try from 00edfc74 to 00fdfc7b has its CatchHandler @ 00edfd94 */
  Action::startWithTarget((Action *)param_1,in_x1);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x54) = 1;
  uVar1 = (**(code **)(*(long *)in_x1 + 0x100))();
                    /* try { // try from 00edfc9c to 00fdfcc7 has its CatchHandler @ 00edfda4 */
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(float *)(param_1 + 0x68) = in_s1;
  *(float *)(param_1 + 0x6c) = in_s2;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x6c);
  fVar2 = (float)(**(code **)(*(long *)in_x1 + 0x100))();
  *(ulong *)(param_1 + 0x58) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20) - in_s1,
                (float)*(undefined8 *)(param_1 + 0x7c) - fVar2);
  *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0x84) - in_s2;
  return;
}

