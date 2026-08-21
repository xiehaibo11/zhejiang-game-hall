
/* cocos2d::BundleReader::~BundleReader() */

void __thiscall cocos2d::BundleReader::~BundleReader(BundleReader *this)

{
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

