
void FUN_0101d7fc(undefined8 *param_1)

{
  Vec4 *this;
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
      this = (Vec4 *)((long)pvVar2 + -0x10);
                    /* catch() { ... } // from try @ 0101d868 with catch @ 0101d828 */
      pvVar2 = (void *)((long)pvVar2 + -0x1c);
      cocos2d::Vec4::~Vec4(this);
    } while (pvVar3 != pvVar2);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar3;
                    /* try { // try from 0101d860 to 0111d867 has its CatchHandler @ 0101d8b8 */
                    /* try { // try from 0101d868 to 0111d8ef has its CatchHandler @ 0101d828 */
  operator_delete(pvVar1);
  return;
}

