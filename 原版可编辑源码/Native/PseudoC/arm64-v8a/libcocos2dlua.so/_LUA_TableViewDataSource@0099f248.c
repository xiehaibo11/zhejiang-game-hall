
/* non-virtual thunk to LUA_TableViewDataSource::~LUA_TableViewDataSource() */

void __thiscall LUA_TableViewDataSource::~LUA_TableViewDataSource(LUA_TableViewDataSource *this)

{
  cocos2d::Ref::~Ref((Ref *)(this + -0x28));
                    /* try { // try from 0099f264 to 00a9f2eb has its CatchHandler @ 0099f264
                       catch() { ... } // from try @ 0099f264 with catch @ 0099f264
                       catch() { ... } // from try @ 0099f2f4 with catch @ 0099f264 */
  operator_delete((Ref *)(this + -0x28));
  return;
}

