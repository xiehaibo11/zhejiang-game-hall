
/* cocos2d::BundleReader::seek(long, int) */

undefined8 __thiscall cocos2d::BundleReader::seek(BundleReader *this,long param_1,int param_2)

{
  long lVar1;
  
  if (*(long *)(this + 0x38) == 0) {
    return 0;
  }
  if (param_2 != 0) {
    if (param_2 == 2) {
      lVar1 = *(long *)(this + 0x30);
    }
    else {
      if (param_2 != 1) {
        return 0;
      }
      lVar1 = *(long *)(this + 0x28);
    }
    *(long *)(this + 0x28) = lVar1 + param_1;
    return 1;
  }
  *(long *)(this + 0x28) = param_1;
  return 1;
}

