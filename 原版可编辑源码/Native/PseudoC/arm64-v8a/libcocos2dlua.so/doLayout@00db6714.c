
/* cocos2d::ui::ListView::doLayout() */

void __thiscall cocos2d::ui::ListView::doLayout(ListView *this)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  if (this[0x900] != (ListView)0x0) {
    lVar3 = *(long *)(this + 0x8c0) - (long)*(undefined8 **)(this + 0x8b8);
    if (0 < lVar3) {
      plVar1 = (long *)**(undefined8 **)(this + 0x8b8);
      (**(code **)(*plVar1 + 0x18))(plVar1,0);
      (**(code **)(*(long *)this + 0x800))(this,plVar1);
      if (8 < lVar3) {
        uVar2 = 1;
        do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db6810 with catch @ 00db6780
                       catch(type#1 @ 00000000) { ... } // from try @ 00db6854 with catch @ 00db6780
                        */
          plVar1 = *(long **)(*(long *)(this + 0x8b8) + uVar2 * 8);
          (**(code **)(*plVar1 + 0x18))(plVar1,uVar2 & 0xffffffff);
          (**(code **)(*(long *)this + 0x800))(this,plVar1);
          uVar2 = uVar2 + 1;
        } while ((long)uVar2 < lVar3 >> 3);
      }
    }
    updateInnerContainerSize(this);
                    /* try { // try from 00db67cc to 00eb680f has its CatchHandler @ 00db683c */
    (**(code **)(**(long **)(this + 0x7b8) + 0x6a0))();
    this[0x900] = (ListView)0x0;
  }
  return;
}

