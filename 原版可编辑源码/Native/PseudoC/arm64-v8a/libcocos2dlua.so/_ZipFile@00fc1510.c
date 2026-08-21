
/* cocos2d::ZipFile::~ZipFile() */

void __thiscall cocos2d::ZipFile::~ZipFile(ZipFile *this)

{
  ~ZipFile(this);
  operator_delete(this);
  return;
}

