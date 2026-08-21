
/* cocos2d::BundleReader::rewind() */

undefined8 __thiscall cocos2d::BundleReader::rewind(BundleReader *this)

{
  if (*(long *)(this + 0x38) != 0) {
    *(undefined8 *)(this + 0x28) = 0;
    return 1;
  }
  return 0;
}

