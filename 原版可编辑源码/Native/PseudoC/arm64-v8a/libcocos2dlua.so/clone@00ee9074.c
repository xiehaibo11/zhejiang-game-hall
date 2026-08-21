
/* cocos2d::ShuffleTiles::clone() const */

void __thiscall cocos2d::ShuffleTiles::clone(ShuffleTiles *this)

{
                    /* try { // try from 00ee9080 to 00fe90bb has its CatchHandler @ 00ee9080
                       catch() { ... } // from try @ 00ee9080 with catch @ 00ee9080
                       catch() { ... } // from try @ 00ee910c with catch @ 00ee9080 */
  create(*(float *)(this + 0x4c),(Size *)(this + 0x58),*(uint *)(this + 0x68));
  return;
}

