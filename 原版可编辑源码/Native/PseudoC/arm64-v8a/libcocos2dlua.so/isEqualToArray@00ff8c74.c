
/* cocos2d::__Array::isEqualToArray(cocos2d::__Array*) */

undefined8 __thiscall cocos2d::__Array::isEqualToArray(__Array *this,__Array *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(this + 0x30);
  if (0 < lVar1) {
    lVar2 = 0;
    do {
      if (*(long *)((*(long **)(this + 0x30))[2] + lVar2 * 8) !=
          *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 0x10) + lVar2 * 8)) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < lVar1);
  }
  return 1;
}

