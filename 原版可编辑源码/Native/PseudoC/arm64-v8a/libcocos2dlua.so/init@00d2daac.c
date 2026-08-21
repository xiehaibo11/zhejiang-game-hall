
/* cocos2d::BundleReader::init(char*, long) */

void __thiscall cocos2d::BundleReader::init(BundleReader *this,char *param_1,long param_2)

{
  *(long *)(this + 0x30) = param_2;
  *(char **)(this + 0x38) = param_1;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}

