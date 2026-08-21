
/* cocos2d::Director::popToSceneStackLevel(int) */

void __thiscall cocos2d::Director::popToSceneStackLevel(Director *this,int param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  Ref *this_00;
  long lVar3;
  
  if (param_1 == 0) {
                    /* try { // try from 00f9a3bc to 0109a3bf has its CatchHandler @ 00f9a400 */
    this[0x21] = (Director)0x1;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f9a340 with catch @ 00f9a384
                        */
    lVar3 = *(long *)(this + 0x178) - *(long *)(this + 0x170) >> 3;
    if (param_1 < lVar3) {
      puVar2 = (undefined8 *)(*(long *)(this + 0x178) + -8);
      this_00 = (Ref *)*puVar2;
      if (this_00 != *(Ref **)(this + 0x158)) goto LAB_00f9a3d4;
      *(undefined8 **)(this + 0x178) = puVar2;
      while( true ) {
        Ref::release(this_00);
        lVar3 = lVar3 + -1;
        this_00 = *(Ref **)(*(long *)(this + 0x178) + -8);
LAB_00f9a3d4:
        if (lVar3 <= param_1) break;
        uVar1 = (**(code **)(*(long *)this_00 + 0x318))(this_00);
        if ((uVar1 & 1) != 0) {
          (**(code **)(*(long *)this_00 + 0x330))(this_00);
        }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f9a3bc with catch @ 00f9a400
                        */
        (**(code **)(*(long *)this_00 + 0x340))(this_00);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f9a444 with catch @ 00f9a414
                        */
        this_00 = *(Ref **)(*(long *)(this + 0x178) + -8);
        *(undefined8 **)(this + 0x178) = (undefined8 *)(*(long *)(this + 0x178) + -8);
      }
      *(Ref **)(this + 0x160) = this_00;
      this[0x168] = (Director)0x1;
    }
  }
  return;
}

