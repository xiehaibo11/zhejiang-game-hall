
/* cocos2d::experimental::ui::WebView::getOnDidFinishLoading() const */

void cocos2d::experimental::ui::WebView::getOnDidFinishLoading(void)

{
  long in_x0;
  long *plVar1;
  undefined8 uVar2;
  long in_x8;
  
  plVar1 = *(long **)(in_x0 + 0x540);
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(in_x8 + 0x20) = 0;
  }
  else {
    if ((long *)(in_x0 + 0x520) == plVar1) {
      *(long *)(in_x8 + 0x20) = in_x8;
                    /* try { // try from 00de4844 to 00ee484b has its CatchHandler @ 00de4874 */
                    /* try { // try from 00de484c to 00ee4853 has its CatchHandler @ 00de4870 */
                    /* try { // try from 00de4854 to 00ee485b has its CatchHandler @ 00de486c */
                    /* WARNING: Could not recover jumptable at 0x00de4858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))();
      return;
    }
    uVar2 = (**(code **)(*plVar1 + 0x10))();
    *(undefined8 *)(in_x8 + 0x20) = uVar2;
  }
                    /* try { // try from 00de4834 to 00ee483b has its CatchHandler @ 00de487c */
                    /* try { // try from 00de483c to 00ee4843 has its CatchHandler @ 00de4878 */
  return;
}

