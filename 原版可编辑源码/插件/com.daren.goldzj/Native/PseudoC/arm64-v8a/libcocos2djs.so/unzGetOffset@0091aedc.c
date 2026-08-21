
/* cocos2d::unzGetOffset(void*) */

undefined8 cocos2d::unzGetOffset(void *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x90) == 0) {
      return 0;
    }
    lVar2 = *(long *)((long)param_1 + 0x68);
    if (((lVar2 != 0) && (lVar2 != 0xffff)) && (*(long *)((long)param_1 + 0x80) == lVar2)) {
      return 0;
    }
    uVar1 = *(undefined8 *)((long)param_1 + 0x88);
  }
  return uVar1;
}

