
/* cocostudio::DisplayManager::removeDisplay(int) */

void __thiscall cocostudio::DisplayManager::removeDisplay(DisplayManager *this,int param_1)

{
  undefined8 *__dest;
  size_t __n;
  
  if (*(int *)(this + 0x58) == param_1) {
    (**(code **)(*(long *)this + 0x18))(this,0);
    *(undefined4 *)(this + 0x58) = 0xffffffff;
  }
  __dest = (undefined8 *)(*(long *)(this + 0x28) + (long)param_1 * 8);
  cocos2d::Ref::release((Ref *)*__dest);
  __n = *(long *)(this + 0x30) - (long)(__dest + 1);
  if (__n != 0) {
    memmove(__dest,__dest + 1,__n);
  }
  *(undefined8 **)(this + 0x30) = __dest + ((long)__n >> 3);
  return;
}

