
/* cocos2d::BundleReader::eof() */

bool __thiscall cocos2d::BundleReader::eof(BundleReader *this)

{
  if (*(long *)(this + 0x38) != 0) {
    return *(long *)(this + 0x30) <= *(long *)(this + 0x28);
  }
  return true;
}

