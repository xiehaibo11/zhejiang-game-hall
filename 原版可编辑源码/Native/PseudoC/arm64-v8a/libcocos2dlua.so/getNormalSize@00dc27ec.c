
/* cocos2d::ui::Button::getNormalSize() const */

void cocos2d::ui::Button::getNormalSize(void)

{
  long lVar1;
  long in_x0;
  Size *pSVar2;
  Size *in_x8;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Size::Size((Size *)&local_40);
  if (*(long **)(in_x0 + 0x508) != (long *)0x0) {
                    /* try { // try from 00dc2828 to 00ec2837 has its CatchHandler @ 00dc29d8 */
    pSVar2 = (Size *)(**(code **)(**(long **)(in_x0 + 0x508) + 0x168))();
                    /* try { // try from 00dc2838 to 00ec29f3 has its CatchHandler @ 00dc27a0 */
    Size::operator=((Size *)&local_40,pSVar2);
  }
  Size::Size((Size *)&local_48);
  if (*(long **)(in_x0 + 0x4f0) != (long *)0x0) {
    pSVar2 = (Size *)(**(code **)(**(long **)(in_x0 + 0x4f0) + 0x168))();
    Size::operator=((Size *)&local_48,pSVar2);
  }
  if (local_40 <= local_48) {
    local_40 = local_48;
  }
  if (fStack_3c <= fStack_44) {
    fStack_3c = fStack_44;
  }
  Size::Size(in_x8,local_40,fStack_3c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

