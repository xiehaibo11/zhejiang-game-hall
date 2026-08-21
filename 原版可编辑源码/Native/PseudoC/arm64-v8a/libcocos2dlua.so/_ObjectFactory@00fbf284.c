
/* cocos2d::ObjectFactory::~ObjectFactory() */

void __thiscall cocos2d::ObjectFactory::~ObjectFactory(ObjectFactory *this)

{
  ~ObjectFactory(this);
  operator_delete(this);
  return;
}

