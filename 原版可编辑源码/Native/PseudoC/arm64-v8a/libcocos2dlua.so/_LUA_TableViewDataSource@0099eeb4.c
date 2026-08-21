
/* LUA_TableViewDataSource::~LUA_TableViewDataSource() */

void __thiscall LUA_TableViewDataSource::~LUA_TableViewDataSource(LUA_TableViewDataSource *this)

{
  cocos2d::Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

