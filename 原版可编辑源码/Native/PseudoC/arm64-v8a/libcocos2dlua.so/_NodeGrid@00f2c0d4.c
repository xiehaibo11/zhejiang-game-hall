
/* cocos2d::NodeGrid::~NodeGrid() */

void __thiscall cocos2d::NodeGrid::~NodeGrid(NodeGrid *this)

{
                    /* try { // try from 00f2c0e0 to 0102c123 has its CatchHandler @ 00f2c0e0
                       catch() { ... } // from try @ 00f2c0e0 with catch @ 00f2c0e0
                       catch() { ... } // from try @ 00f2c12c with catch @ 00f2c0e0 */
  ~NodeGrid(this);
  operator_delete(this);
  return;
}

