
/* cocos2d::ResizeTo::update(float) */

void __thiscall cocos2d::ResizeTo::update(ResizeTo *this,float param_1)

{
  long lVar1;
  Size aSStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x38) != 0) {
    Size::operator*((Size *)(this + 0x68),param_1);
                    /* try { // try from 00ee088c to 00fe089f has its CatchHandler @ 00ee08d4 */
    Size::operator+((Size *)(this + 0x58),aSStack_48);
                    /* try { // try from 00ee08a0 to 00fe08ef has its CatchHandler @ 00ee0824 */
    (**(code **)(**(long **)(this + 0x38) + 0x160))(*(long **)(this + 0x38),auStack_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

