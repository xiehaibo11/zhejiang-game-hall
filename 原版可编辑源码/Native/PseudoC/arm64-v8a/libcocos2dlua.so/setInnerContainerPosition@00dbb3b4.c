
/* cocos2d::ui::ScrollView::setInnerContainerPosition(cocos2d::Vec2 const&) */

void __thiscall cocos2d::ui::ScrollView::setInnerContainerPosition(ScrollView *this,Vec2 *param_1)

{
  long lVar1;
  float *pfVar2;
  long *plVar3;
  float fVar4;
  undefined4 local_44;
  ScrollView *local_40;
  long local_38;
  
                    /* try { // try from 00dbb3c4 to 00ebb3ff has its CatchHandler @ 00dbb538 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pfVar2 = (float *)(**(code **)(**(long **)(this + 0x7b8) + 0xb0))();
  fVar4 = *pfVar2;
                    /* try { // try from 00dbb404 to 00ebb43f has its CatchHandler @ 00dbb534 */
  if ((*(float *)param_1 != fVar4) || (fVar4 = pfVar2[1], *(float *)(param_1 + 4) != fVar4)) {
    (**(code **)(**(long **)(this + 0x7b8) + 0x98))(*(long **)(this + 0x7b8),param_1);
    this[0x850] = (ScrollView)0x1;
    if (this[0x845] != (ScrollView)0x0) {
      (**(code **)(*(long *)this + 0x7b8))(this,&Vec2::ZERO);
      if (0.0 < fVar4) {
        dispatchEvent(this,5,5);
      }
      (**(code **)(*(long *)this + 0x7b8))(this,&Vec2::ZERO);
      if (fVar4 < 0.0) {
                    /* try { // try from 00dbb488 to 00ebb48b has its CatchHandler @ 00dbb4a4 */
        dispatchEvent(this,6,6);
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbb488 with catch @ 00dbb4a4
                        */
      fVar4 = (float)(**(code **)(*(long *)this + 0x7b8))(this,&Vec2::ZERO);
      if (fVar4 < 0.0) {
        dispatchEvent(this,7,7);
      }
    }
    Ref::retain((Ref *)this);
    plVar3 = *(long **)(this + 0x8a0);
    if (plVar3 != (long *)0x0) {
      local_44 = 9;
                    /* try { // try from 00dbb4e4 to 00ebb4e7 has its CatchHandler @ 00dbb520 */
                    /* try { // try from 00dbb4e8 to 00ebb553 has its CatchHandler @ 00dbb368 */
      local_40 = this;
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_40,&local_44);
    }
    plVar3 = *(long **)(this + 0x4b0);
    if (plVar3 != (long *)0x0) {
      local_44 = 9;
      local_40 = this;
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_40,&local_44);
    }
    Ref::release((Ref *)this);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbb4e4 with catch @ 00dbb520
                        */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbb404 with catch @ 00dbb534
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dbb3c4 with catch @ 00dbb538
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

