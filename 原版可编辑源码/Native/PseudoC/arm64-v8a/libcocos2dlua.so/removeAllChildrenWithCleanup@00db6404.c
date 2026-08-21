
/* cocos2d::ui::ListView::removeAllChildrenWithCleanup(bool) */

void __thiscall cocos2d::ui::ListView::removeAllChildrenWithCleanup(ListView *this,bool param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db6314 with catch @ 00db6410
                        */
  ScrollView::removeAllChildrenWithCleanup((ScrollView *)this,param_1);
  puVar1 = *(undefined8 **)(this + 0x8b8);
                    /* try { // try from 00db6424 to 00eb6427 has its CatchHandler @ 00db6454 */
  puVar3 = *(undefined8 **)(this + 0x8c0);
                    /* try { // try from 00db6428 to 00eb6467 has its CatchHandler @ 00db61d4 */
  *(undefined8 *)(this + 0x8f8) = 0xffffffffffffffff;
  if (puVar1 != puVar3) {
    do {
      puVar2 = puVar1 + 1;
      Ref::release((Ref *)*puVar1);
      puVar1 = puVar2;
    } while (puVar3 != puVar2);
    puVar1 = *(undefined8 **)(this + 0x8b8);
  }
  *(undefined8 **)(this + 0x8c0) = puVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db6424 with catch @ 00db6454
                        */
                    /* WARNING: Could not recover jumptable at 0x00db6468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x7f8))(this);
  return;
}

