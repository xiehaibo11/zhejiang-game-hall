
/* cocos2d::RotateTo::startWithTarget(cocos2d::Node*) */

void cocos2d::RotateTo::startWithTarget(Node *param_1)

{
  Node *in_x1;
  float fVar1;
  undefined4 uVar2;
  float in_s1;
  float fVar3;
  float __y;
  undefined4 in_s2;
  float fVar4;
  
  Action::startWithTarget((Action *)param_1,in_x1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00edecb0 with catch @ 00edec3c
                        */
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x54) = 1;
  if (param_1[0x56] == (Node)0x0) {
                    /* try { // try from 00edec7c to 00fdec8b has its CatchHandler @ 00eded48 */
    uVar2 = (**(code **)(**(long **)(param_1 + 0x38) + 0x1c0))();
    *(undefined4 *)(param_1 + 100) = uVar2;
                    /* try { // try from 00edec8c to 00fdec9b has its CatchHandler @ 00eded44 */
    in_s1 = (float)(**(code **)(**(long **)(param_1 + 0x38) + 0x1e0))();
    fVar1 = *(float *)(param_1 + 100);
  }
  else {
    fVar1 = (float)(**(code **)(**(long **)(param_1 + 0x38) + 0x198))();
    *(float *)(param_1 + 100) = fVar1;
    *(undefined4 *)(param_1 + 0x6c) = in_s2;
  }
  fVar4 = *(float *)(param_1 + 0x58);
                    /* try { // try from 00edeca0 to 00fdecaf has its CatchHandler @ 00eded2c */
                    /* try { // try from 00edecb0 to 00fded6b has its CatchHandler @ 00edec3c */
  __y = 360.0;
  fVar3 = __y;
  if (fVar1 <= 0.0) {
    fVar3 = -360.0;
  }
  fVar1 = fmodf(fVar1,fVar3);
  *(float *)(param_1 + 100) = fVar1;
  fVar4 = fVar4 - fVar1;
  fVar1 = fVar4 + -360.0;
  if (fVar4 <= 180.0) {
    fVar1 = fVar4;
  }
  fVar4 = *(float *)(param_1 + 0x5c);
  fVar3 = fVar1 + 360.0;
  if (-180.0 <= fVar1) {
    fVar3 = fVar1;
  }
  *(float *)(param_1 + 0x70) = fVar3;
  fVar1 = __y;
  if (in_s1 <= 0.0) {
    fVar1 = -360.0;
  }
  fVar1 = fmodf(in_s1,fVar1);
  *(float *)(param_1 + 0x68) = fVar1;
  fVar4 = fVar4 - fVar1;
  fVar1 = fVar4 + -360.0;
  if (fVar4 <= 180.0) {
    fVar1 = fVar4;
  }
  fVar4 = *(float *)(param_1 + 0x60);
  fVar3 = fVar1 + 360.0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00edeca0 with catch @ 00eded2c
                        */
  if (-180.0 <= fVar1) {
    fVar3 = fVar1;
  }
  *(float *)(param_1 + 0x74) = fVar3;
  if (*(float *)(param_1 + 0x6c) <= 0.0) {
    __y = -360.0;
  }
  fVar1 = fmodf(*(float *)(param_1 + 0x6c),__y);
  *(float *)(param_1 + 0x6c) = fVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00edec8c with catch @ 00eded44
                        */
  fVar4 = fVar4 - fVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00edec7c with catch @ 00eded48
                        */
  fVar1 = fVar4 + -360.0;
  if (fVar4 <= 180.0) {
    fVar1 = fVar4;
  }
  fVar3 = fVar1 + 360.0;
  if (-180.0 <= fVar1) {
    fVar3 = fVar1;
  }
  *(float *)(param_1 + 0x78) = fVar3;
                    /* try { // try from 00eded6c to 00fdeda7 has its CatchHandler @ 00eded6c
                       catch() { ... } // from try @ 00eded6c with catch @ 00eded6c
                       catch() { ... } // from try @ 00edeee8 with catch @ 00eded6c */
  return;
}

