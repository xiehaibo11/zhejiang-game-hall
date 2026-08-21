
/* cocos2d::NodeGrid::onGridBeginDraw() */

void __thiscall cocos2d::NodeGrid::onGridBeginDraw(NodeGrid *this)

{
  GridBase *this_00;
  
  this_00 = *(GridBase **)(this + 0x300);
  if ((this_00 != (GridBase *)0x0) && (this_00[0x21] != (GridBase)0x0)) {
    GridBase::beforeDraw(this_00);
    return;
  }
  return;
}

