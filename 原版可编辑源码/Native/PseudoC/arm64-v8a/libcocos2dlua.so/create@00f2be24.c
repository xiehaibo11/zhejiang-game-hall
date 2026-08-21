
/* cocos2d::NodeGrid::create() */

NodeGrid * cocos2d::NodeGrid::create(void)

{
  NodeGrid *this;
  ulong uVar1;
  
  this = operator_new(0x3e0,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00f2be44 to 0102be93 has its CatchHandler @ 00f2bd38 */
  if (this != (NodeGrid *)0x0) {
    NodeGrid(this);
                    /* catch() { ... } // from try @ 00f2bde8 with catch @ 00f2be58 */
                    /* catch() { ... } // from try @ 00f2bdc4 with catch @ 00f2be5c */
    uVar1 = (**(code **)(*(long *)this + 0x500))(this);
                    /* catch() { ... } // from try @ 00f2bda0 with catch @ 00f2be60 */
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
                    /* catch() { ... } // from try @ 00f2be00 with catch @ 00f2be80 */
      this = (NodeGrid *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 00f2bd7c with catch @ 00f2be64 */
      Ref::autorelease((Ref *)this);
    }
  }
  return this;
}

