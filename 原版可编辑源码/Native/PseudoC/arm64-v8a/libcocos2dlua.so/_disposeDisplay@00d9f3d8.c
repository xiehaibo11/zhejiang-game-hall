
/* dragonBones::CCSlot::_disposeDisplay(void*, bool) */

void dragonBones::CCSlot::_disposeDisplay(void *param_1,bool param_2)

{
                    /* try { // try from 00d9f3d8 to 00e9f41f has its CatchHandler @ 00d9f3d8
                       catch() { ... } // from try @ 00d9f3d8 with catch @ 00d9f3d8
                       catch() { ... } // from try @ 00d9f648 with catch @ 00d9f3d8 */
  cocos2d::Ref::release((Ref *)(ulong)param_2);
  return;
}

