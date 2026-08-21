
/* cocos2d::ZipFile::initWithBuffer(void const*, unsigned long) */

undefined8 __thiscall cocos2d::ZipFile::initWithBuffer(ZipFile *this,void *param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    lVar2 = unzOpenBuffer(param_1,(void *)param_2,param_2);
    **(long **)(this + 8) = lVar2;
    uVar1 = 0;
    if (lVar2 != 0) {
      setFilter(this,(basic_string *)&DAT_01790e60);
      uVar1 = 1;
    }
  }
  return uVar1;
}

