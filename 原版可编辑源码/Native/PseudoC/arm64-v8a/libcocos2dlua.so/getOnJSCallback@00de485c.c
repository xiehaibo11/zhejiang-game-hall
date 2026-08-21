
/* cocos2d::experimental::ui::WebView::getOnJSCallback() const */

void cocos2d::experimental::ui::WebView::getOnJSCallback(void)

{
  long in_x0;
  long *plVar1;
  undefined8 uVar2;
  long in_x8;
  
                    /* try { // try from 00de485c to 00ee4863 has its CatchHandler @ 00de4868 */
                    /* try { // try from 00de4864 to 00ee4be7 has its CatchHandler @ 00de2ff0 */
                    /* catch() { ... } // from try @ 00de485c with catch @ 00de4868 */
                    /* catch() { ... } // from try @ 00de4854 with catch @ 00de486c */
  plVar1 = *(long **)(in_x0 + 0x5a0);
                    /* catch() { ... } // from try @ 00de484c with catch @ 00de4870 */
                    /* catch() { ... } // from try @ 00de4844 with catch @ 00de4874 */
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(in_x8 + 0x20) = 0;
  }
  else {
                    /* catch() { ... } // from try @ 00de483c with catch @ 00de4878 */
                    /* catch() { ... } // from try @ 00de4834 with catch @ 00de487c */
                    /* catch() { ... } // from try @ 00de42f8 with catch @ 00de4880 */
    if ((long *)(in_x0 + 0x580) == plVar1) {
                    /* catch() { ... } // from try @ 00de4068 with catch @ 00de48a8
                       catch() { ... } // from try @ 00de4374 with catch @ 00de48a8 */
      *(long *)(in_x8 + 0x20) = in_x8;
                    /* catch() { ... } // from try @ 00de3e20 with catch @ 00de48ac */
                    /* catch() { ... } // from try @ 00de35b0 with catch @ 00de48b0 */
                    /* catch() { ... } // from try @ 00de37ec with catch @ 00de48b4 */
                    /* catch() { ... } // from try @ 00de4218 with catch @ 00de48b8 */
                    /* WARNING: Could not recover jumptable at 0x00de48c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))();
      return;
    }
                    /* catch() { ... } // from try @ 00de4324 with catch @ 00de4884
                       catch() { ... } // from try @ 00de43a4 with catch @ 00de4884 */
                    /* catch() { ... } // from try @ 00de4258 with catch @ 00de4888 */
                    /* catch() { ... } // from try @ 00de4288 with catch @ 00de488c
                       catch() { ... } // from try @ 00de438c with catch @ 00de488c */
    uVar2 = (**(code **)(*plVar1 + 0x10))();
                    /* catch() { ... } // from try @ 00de403c with catch @ 00de4890 */
    *(undefined8 *)(in_x8 + 0x20) = uVar2;
                    /* catch() { ... } // from try @ 00de3bec with catch @ 00de4894 */
  }
  return;
}

