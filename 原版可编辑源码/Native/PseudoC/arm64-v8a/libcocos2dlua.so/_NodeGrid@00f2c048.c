
/* cocos2d::NodeGrid::~NodeGrid() */

void __thiscall cocos2d::NodeGrid::~NodeGrid(NodeGrid *this)

{
                    /* try { // try from 00f2c04c to 0102c09b has its CatchHandler @ 00f2c000 */
  *(undefined ***)this = &PTR__NodeGrid_017078b8;
  if (*(Ref **)(this + 0x300) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x300));
  }
  if (*(Ref **)(this + 0x2f8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x2f8));
  }
                    /* catch() { ... } // from try @ 00f2c044 with catch @ 00f2c080 */
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x380));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x330));
  GroupCommand::~GroupCommand((GroupCommand *)(this + 0x308));
  Node::~Node((Node *)this);
  return;
}

