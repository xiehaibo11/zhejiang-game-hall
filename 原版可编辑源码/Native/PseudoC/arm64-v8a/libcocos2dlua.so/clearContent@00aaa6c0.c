
/* fairygui::FUISprite::clearContent() */

void __thiscall fairygui::FUISprite::clearContent(FUISprite *this)

{
  long lVar1;
  Rect aRStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00aaa650 with catch @ 00aaa6e8 */
                    /* catch() { ... } // from try @ 00aaa668 with catch @ 00aaa6ec */
  (**(code **)(*(long *)this + 0x548))(this,0);
  if (*(Ref **)(this + 0x370) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x370));
    *(undefined8 *)(this + 0x370) = 0;
  }
  cocos2d::Rect::Rect(aRStack_38,0.0,0.0,1.0,1.0);
                    /* catch() { ... } // from try @ 00aaa61c with catch @ 00aaa71c */
  (**(code **)(*(long *)this + 0x570))(this,aRStack_38);
  _empty = *(undefined8 *)(this + 0x368);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

