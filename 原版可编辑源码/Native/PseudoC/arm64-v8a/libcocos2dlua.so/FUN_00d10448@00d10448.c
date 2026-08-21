
void FUN_00d10448(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar1 = (void *)*param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  pvVar3 = pvVar1;
  pvVar2 = (void *)param_1[1];
  if ((void *)param_1[1] != pvVar1) {
    do {
      pvVar3 = (void *)((long)pvVar2 + -0x70);
      cocos2d::Vec4::~Vec4((Vec4 *)((long)pvVar2 + -0x18));
      cocos2d::Mat4::~Mat4((Mat4 *)((long)pvVar2 + -0x60));
      pvVar2 = pvVar3;
    } while (pvVar1 != pvVar3);
    pvVar3 = (void *)*param_1;
  }
  param_1[1] = pvVar1;
  operator_delete(pvVar3);
  return;
}

