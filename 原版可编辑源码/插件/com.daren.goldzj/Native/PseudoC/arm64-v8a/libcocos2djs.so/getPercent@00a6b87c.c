
/* cocos2d::extension::EventAssetsManagerEx::getPercent() const */

float __thiscall cocos2d::extension::EventAssetsManagerEx::getPercent(EventAssetsManagerEx *this)

{
                    /* try { // try from 00a6b884 to 00b6b8d3 has its CatchHandler @ 00a6b884
                       catch() { ... } // from try @ 00a6b884 with catch @ 00a6b884
                       catch() { ... } // from try @ 00a6b994 with catch @ 00a6b884 */
  return (float)(*(double *)(*(long *)(this + 0x10) + 400) /
                *(double *)(*(long *)(this + 0x10) + 0x188));
}

