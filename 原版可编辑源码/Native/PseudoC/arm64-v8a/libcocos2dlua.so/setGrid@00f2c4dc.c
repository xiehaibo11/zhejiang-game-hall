
/* cocos2d::NodeGrid::setGrid(cocos2d::GridBase*) */

void __thiscall cocos2d::NodeGrid::setGrid(NodeGrid *this,GridBase *param_1)

{
  if (*(Ref **)(this + 0x300) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x300));
  }
  if (param_1 != (GridBase *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  *(GridBase **)(this + 0x300) = param_1;
  return;
}

