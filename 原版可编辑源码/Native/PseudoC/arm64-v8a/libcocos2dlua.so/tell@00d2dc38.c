
/* cocos2d::BundleReader::tell() */

undefined8 __thiscall cocos2d::BundleReader::tell(BundleReader *this)

{
  if (*(long *)(this + 0x38) != 0) {
    return *(undefined8 *)(this + 0x28);
  }
  return 0xffffffffffffffff;
}

