
/* fairygui::GObject::setPosition(float, float) */

void __thiscall fairygui::GObject::setPosition(GObject *this,float param_1,float param_2)

{
  long lVar1;
  GGroup *this_00;
  long lVar2;
  long *plVar3;
  GComponent *this_01;
  float fVar4;
  float fVar5;
  Rect aRStack_78 [16];
  Rect aRStack_68 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a83744 to 00b83757 has its CatchHandler @ 00a83798 */
  fVar4 = *(float *)(this + 0xc0);
  fVar5 = *(float *)(this + 0xc4);
                    /* try { // try from 00a83758 to 00b837b3 has its CatchHandler @ 00a8368c */
  if ((fVar4 != param_1) || (fVar5 != param_2)) {
    *(float *)(this + 0xc0) = param_1;
    *(float *)(this + 0xc4) = param_2;
    (**(code **)(*(long *)this + 0x70))(this);
    this_00 = (GGroup *)__dynamic_cast(this,&typeinfo,&GGroup::typeinfo,0);
                    /* catch() { ... } // from try @ 00a836dc with catch @ 00a83798
                       catch() { ... } // from try @ 00a83744 with catch @ 00a83798 */
    if (this_00 != (GGroup *)0x0) {
      GGroup::moveChildren(this_00,param_1 - fVar4,param_2 - fVar5);
    }
                    /* try { // try from 00a83894 to 00b838ab has its CatchHandler @ 00a839c0 */
    if ((((this[0x98] == (GObject)0x0) && (this[0x99] == (GObject)0x0)) &&
        (plVar3 = *(long **)(this + 0x148), plVar3 != (long *)0x0)) && (plVar3[2] != 0)) {
      (**(code **)(*plVar3 + 0x20))();
      this_01 = *(GComponent **)(this + 0xa0);
                    /* try { // try from 00a838b0 to 00b838db has its CatchHandler @ 00a839bc */
    }
    else {
      this_01 = *(GComponent **)(this + 0xa0);
    }
    if ((this_01 != (GComponent *)0x0) &&
       (lVar2 = __dynamic_cast(this_01,&GComponent::typeinfo,&GList::typeinfo,0), lVar2 == 0)) {
      GComponent::setBoundsChangedFlag(this_01);
      if (*(GGroup **)(this + 0x128) != (GGroup *)0x0) {
        GGroup::setBoundsChangedFlag(*(GGroup **)(this + 0x128),true);
      }
      UIEventDispatcher::dispatchEvent
                ((UIEventDispatcher *)this,0x14,(void *)0x0,(Value *)&cocos2d::Value::Null);
    }
    if ((_draggingObject == this) && ((DAT_01782600 & 1) == 0)) {
                    /* try { // try from 00a83830 to 00b8386f has its CatchHandler @ 00a83830
                       catch() { ... } // from try @ 00a83830 with catch @ 00a83830
                       catch() { ... } // from try @ 00a838dc with catch @ 00a83830
                       catch() { ... } // from try @ 00a839a8 with catch @ 00a83830 */
      cocos2d::Rect::Rect(aRStack_78,(Vec2 *)&cocos2d::Vec2::ZERO,(Size *)(this + 200));
      localToGlobal(this);
      cocos2d::Rect::operator=((Rect *)&DAT_017825f0,aRStack_68);
    }
  }
                    /* try { // try from 00a83870 to 00b83887 has its CatchHandler @ 00a839f0 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

