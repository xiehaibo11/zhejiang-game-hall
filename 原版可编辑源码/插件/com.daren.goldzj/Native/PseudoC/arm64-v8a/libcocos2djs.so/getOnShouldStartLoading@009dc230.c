
/* cocos2d::WebView::getOnShouldStartLoading() const */

void cocos2d::WebView::getOnShouldStartLoading(void)

{
  long in_x0;
  long *plVar1;
  undefined8 uVar2;
  long in_x8;
  
  plVar1 = *(long **)(in_x0 + 0x30);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(in_x8 + 0x20) = 0;
  }
  else {
    if ((long *)(in_x0 + 0x10) == plVar1) {
      *(long *)(in_x8 + 0x20) = in_x8;
                    /* WARNING: Could not recover jumptable at 0x009dc294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))();
      return;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    *(undefined8 *)(in_x8 + 0x20) = uVar2;
  }
  return;
}

