
/* non-virtual thunk to cocos2d::ui::ListView::doLayout() */

void __thiscall cocos2d::ui::ListView::doLayout(ListView *this)

{
  ListView *this_00;
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  if (this[0x410] != (ListView)0x0) {
                    /* try { // try from 00db6810 to 00eb684f has its CatchHandler @ 00db6780 */
    this_00 = this + -0x4f0;
    lVar3 = *(long *)(this + 0x3d0) - (long)*(undefined8 **)(this + 0x3c8);
    if (0 < lVar3) {
      plVar1 = (long *)**(undefined8 **)(this + 0x3c8);
      (**(code **)(*plVar1 + 0x18))(plVar1,0);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db67cc with catch @ 00db683c
                        */
      (**(code **)(*(long *)this_00 + 0x800))(this_00,plVar1);
                    /* try { // try from 00db6850 to 00eb6853 has its CatchHandler @ 00db6880 */
      if (8 < lVar3) {
                    /* try { // try from 00db6854 to 00eb6893 has its CatchHandler @ 00db6780 */
        uVar2 = 1;
        do {
          plVar1 = *(long **)(*(long *)(this + 0x3c8) + uVar2 * 8);
          (**(code **)(*plVar1 + 0x18))(plVar1,uVar2 & 0xffffffff);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db6850 with catch @ 00db6880
                        */
          (**(code **)(*(long *)this_00 + 0x800))(this_00,plVar1);
          uVar2 = uVar2 + 1;
        } while ((long)uVar2 < lVar3 >> 3);
      }
    }
    updateInnerContainerSize(this_00);
    (**(code **)(**(long **)(this + 0x2c8) + 0x6a0))();
    this[0x410] = (ListView)0x0;
  }
  return;
}

