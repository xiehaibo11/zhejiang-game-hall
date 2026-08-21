
/* cocos2d::RotateBy::startWithTarget(cocos2d::Node*) */

void cocos2d::RotateBy::startWithTarget(Node *param_1)

{
  Node *in_x1;
  undefined4 uVar1;
  undefined4 in_s1;
  undefined4 in_s2;
  
                    /* catch() { ... } // from try @ 00edf210 with catch @ 00edf3bc */
  Action::startWithTarget((Action *)param_1,in_x1);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x54) = 1;
  if (param_1[0x56] == (Node)0x0) {
    uVar1 = (**(code **)(*(long *)in_x1 + 0x1c0))();
                    /* catch() { ... } // from try @ 00edf1cc with catch @ 00edf410 */
    *(undefined4 *)(param_1 + 100) = uVar1;
    in_s1 = (**(code **)(*(long *)in_x1 + 0x1e0))();
                    /* catch() { ... } // from try @ 00edf294 with catch @ 00edf424
                       catch() { ... } // from try @ 00edf358 with catch @ 00edf424 */
  }
  else {
                    /* catch() { ... } // from try @ 00edf1e0 with catch @ 00edf3f0 */
    uVar1 = (**(code **)(*(long *)in_x1 + 0x198))();
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined4 *)(param_1 + 0x6c) = in_s2;
  }
  *(undefined4 *)(param_1 + 0x68) = in_s1;
                    /* catch() { ... } // from try @ 00edf2b8 with catch @ 00edf434 */
  return;
}

