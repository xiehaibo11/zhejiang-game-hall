
void FUN_00e56b48(undefined8 *param_1)

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
      pvVar2 = (void *)((long)pvVar2 + -0x24);
      cocos2d::Vec4::~Vec4(this);
    } while (pvVar3 != pvVar2);
    pvVar1 = (void *)*param_1;
  }
  param_1[1] = pvVar3;
  operator_delete(pvVar1);
  return;
}

