
/* cocos2d::ui::Button::setTitleColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::ui::Button::setTitleColor(Button *this,Color3B *param_1)

{
  long lVar1;
  long *plVar2;
  Color4B aCStack_40 [8];
  long local_38;
  
                    /* catch() { ... } // from try @ 00dc1ae0 with catch @ 00dc1da8 */
                    /* catch() { ... } // from try @ 00dc1c4c with catch @ 00dc1dac */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(this + 0x508);
                    /* try { // try from 00dc1dc8 to 00ec1e0f has its CatchHandler @ 00dc1dc8
                       catch() { ... } // from try @ 00dc1dc8 with catch @ 00dc1dc8
                       catch() { ... } // from try @ 00dc218c with catch @ 00dc1dc8
                       catch() { ... } // from try @ 00dc2398 with catch @ 00dc1dc8 */
  if (plVar2 == (long *)0x0) {
    (**(code **)(*(long *)this + 0x6a0))();
    plVar2 = *(long **)(this + 0x508);
  }
  Color4B::Color4B(aCStack_40,param_1,0xff);
  (**(code **)(*plVar2 + 0x598))(plVar2,aCStack_40);
                    /* try { // try from 00dc1e10 to 00ec1e1b has its CatchHandler @ 00dc23c0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00dc1e1c to 00ec1e2b has its CatchHandler @ 00dc23b0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

