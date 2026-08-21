
/* cocos2d::middleware::IOTypedArray::~IOTypedArray() */

void __thiscall cocos2d::middleware::IOTypedArray::~IOTypedArray(IOTypedArray *this)

{
  ~IOTypedArray(this);
  operator_delete(this);
  return;
}

