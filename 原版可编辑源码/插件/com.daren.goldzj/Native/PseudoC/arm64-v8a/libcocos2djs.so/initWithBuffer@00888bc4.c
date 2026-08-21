
/* cocos2d::ZipFile::initWithBuffer(void const*, unsigned long) */

undefined8 __thiscall cocos2d::ZipFile::initWithBuffer(ZipFile *this,void *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    std::__ndk1::mutex::lock((mutex *)(this + 0x10));
    uVar1 = unzOpenBuffer(param_1,param_2);
    **(undefined8 **)(this + 8) = uVar1;
    std::__ndk1::mutex::unlock((mutex *)(this + 0x10));
    if (**(long **)(this + 8) == 0) {
      uVar1 = 0;
    }
    else {
      setFilter(this,(basic_string *)&DAT_01d36ce8);
      uVar1 = 1;
    }
  }
  return uVar1;
}

