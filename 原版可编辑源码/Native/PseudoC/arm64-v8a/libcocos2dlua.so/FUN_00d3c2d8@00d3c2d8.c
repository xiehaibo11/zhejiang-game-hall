
void FUN_00d3c2d8(undefined8 *param_1)

{
  Quaternion *this;
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  if (pvVar3 == (void *)0x0) {
    return;
  }
  pvVar2 = (void *)param_1[1];
  pvVar1 = pvVar3;
  if (pvVar2 != pvVar3) {
    do {
      this = (Quaternion *)((long)pvVar2 + -0x2c);
      pvVar2 = (void *)((long)pvVar2 + -0x38);
      cocos2d::Quaternion::~Quaternion(this);
                    /* try { // try from 00d3c310 to 00e3c317 has its CatchHandler @ 00d3c48c */
    } while (pvVar3 != pvVar2);
                    /* try { // try from 00d3c318 to 00e3c48f has its CatchHandler @ 00d3c2c4 */
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar3;
  operator_delete(pvVar1);
  return;
}

