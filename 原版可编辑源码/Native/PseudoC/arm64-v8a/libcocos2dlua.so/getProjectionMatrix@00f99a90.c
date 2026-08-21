
/* cocos2d::Director::getProjectionMatrix(unsigned long) const */

long __thiscall cocos2d::Director::getProjectionMatrix(Director *this,ulong param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(this + 0x58) + param_1 * 0x30;
  uVar2 = (*(long *)(lVar1 + 0x28) + *(long *)(lVar1 + 0x20)) - 1;
  return *(long *)(*(long *)(lVar1 + 8) + (uVar2 >> 3 & 0x1ffffffffffffff8)) + (uVar2 & 0x3f) * 0x40
  ;
}

