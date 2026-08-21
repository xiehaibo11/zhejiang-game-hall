
/* cocos2d::ui::Layout::onSizeChanged() */

void __thiscall cocos2d::ui::Layout::onSizeChanged(Layout *this)

{
  long lVar1;
  long *plVar2;
  Color4F aCStack_68 [16];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
                    /* try { // try from 00daf7d8 to 00eaf7ef has its CatchHandler @ 00daf99c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Widget::onSizeChanged((Widget *)this);
                    /* try { // try from 00daf7f4 to 00eaf87f has its CatchHandler @ 00daf9bc */
  if ((this[0x5a5] != (Layout)0x0) && (*(int *)(this + 0x5ac) == 0)) {
    local_58 = 0;
    local_50 = *(undefined4 *)(this + 0x80);
    uStack_44 = *(undefined4 *)(this + 0x84);
    uStack_4c = 0;
    local_40 = 0;
    local_48 = local_50;
    uStack_3c = uStack_44;
    Color4F::Color4F(aCStack_68,0.0,1.0,0.0,1.0);
    DrawNode::clear(*(DrawNode **)(this + 0x5b0));
    DrawNode::drawPolygon
              (*(DrawNode **)(this + 0x5b0),(Vec2 *)&local_58,4,aCStack_68,0.0,aCStack_68);
  }
  this[0x7b0] = (Layout)0x1;
  this[0x5e8] = (Layout)0x1;
  if (*(long **)(this + 0x538) != (long *)0x0) {
                    /* try { // try from 00daf880 to 00eaf8af has its CatchHandler @ 00daf9ac */
    (**(code **)(**(long **)(this + 0x538) + 200))
              (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
    Scale9Sprite::setPreferredSize(*(Size **)(this + 0x538));
  }
  plVar2 = *(long **)(this + 0x580);
  if (plVar2 != (long *)0x0) {
                    /* try { // try from 00daf8b0 to 00eaf9d7 has its CatchHandler @ 00daf4a4 */
    (**(code **)(*plVar2 + 0x160))(plVar2,this + 0x80);
  }
  plVar2 = *(long **)(this + 0x588);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x160))(plVar2,this + 0x80);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

