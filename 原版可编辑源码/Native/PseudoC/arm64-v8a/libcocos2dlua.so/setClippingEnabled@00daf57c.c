
/* cocos2d::ui::Layout::setClippingEnabled(bool) */

void __thiscall cocos2d::ui::Layout::setClippingEnabled(Layout *this,bool param_1)

{
  long lVar1;
  long *plVar2;
  Color4F aCStack_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00daf5a4 to 00eaf5af has its CatchHandler @ 00daf9a8 */
                    /* try { // try from 00daf5b0 to 00eaf5db has its CatchHandler @ 00daf4a4 */
  if (((Layout)param_1 != this[0x5a5]) &&
     (this[0x5a5] = (Layout)param_1, *(int *)(this + 0x5ac) == 0)) {
    if (param_1) {
      plVar2 = (long *)DrawNode::create(2.0);
      *(long **)(this + 0x5b0) = plVar2;
      (**(code **)(*plVar2 + 0x40))(*(undefined4 *)(this + 0x170));
                    /* try { // try from 00daf5dc to 00eaf5e7 has its CatchHandler @ 00daf9a8 */
      if (this[0x1f8] != (Layout)0x0) {
        (**(code **)(**(long **)(this + 0x5b0) + 800))();
      }
      Ref::retain(*(Ref **)(this + 0x5b0));
      if ((this[0x5a5] != (Layout)0x0) && (*(int *)(this + 0x5ac) == 0)) {
        local_48 = 0;
        local_40 = *(undefined4 *)(this + 0x80);
        uStack_34 = *(undefined4 *)(this + 0x84);
                    /* try { // try from 00daf61c to 00eaf667 has its CatchHandler @ 00daf96c */
        uStack_3c = 0;
        local_30 = 0;
        local_38 = local_40;
        uStack_2c = uStack_34;
        Color4F::Color4F(aCStack_58,0.0,1.0,0.0,1.0);
        DrawNode::clear(*(DrawNode **)(this + 0x5b0));
        DrawNode::drawPolygon
                  (*(DrawNode **)(this + 0x5b0),(Vec2 *)&local_48,4,aCStack_58,0.0,aCStack_58);
      }
    }
    else {
      if (this[0x1f8] != (Layout)0x0) {
        (**(code **)(**(long **)(this + 0x5b0) + 0x330))();
      }
      Ref::release(*(Ref **)(this + 0x5b0));
      *(undefined8 *)(this + 0x5b0) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00daf694 to 00eaf69f has its CatchHandler @ 00daf918 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00daf6a0 to 00eaf6eb has its CatchHandler @ 00daf91c */
  __stack_chk_fail();
}

