
/* cocos2d::experimental::ui::WebView::copySpecialProperties(cocos2d::ui::Widget*) */

void __thiscall
cocos2d::experimental::ui::WebView::copySpecialProperties(WebView *this,Widget *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
                    /* try { // try from 00de4188 to 00ee41f3 has its CatchHandler @ 00de49f4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((param_1 == (Widget *)0x0) ||
     (lVar2 = __dynamic_cast(param_1,&cocos2d::ui::Widget::typeinfo,&typeinfo,0), lVar2 == 0))
  goto LAB_00de43dc;
  *(undefined8 *)(this + 0x5b0) = *(undefined8 *)(lVar2 + 0x5b0);
  plVar3 = *(long **)(lVar2 + 0x510);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)(lVar2 + 0x4f0) == plVar3) {
                    /* try { // try from 00de4218 to 00ee4223 has its CatchHandler @ 00de48b8 */
    local_50 = alStack_70;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
                    /* try { // try from 00de41f4 to 00ee4217 has its CatchHandler @ 00de2ff0 */
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
  FUN_00de48c4(alStack_70,this + 0x4f0);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00de4258:
                    /* try { // try from 00de4258 to 00ee425b has its CatchHandler @ 00de4888 */
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00de4258;
  }
  plVar3 = *(long **)(lVar2 + 0x540);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
                    /* try { // try from 00de4288 to 00ee428f has its CatchHandler @ 00de488c */
  }
  else if ((long *)(lVar2 + 0x520) == plVar3) {
    local_50 = alStack_70;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
                    /* try { // try from 00de42ac to 00ee42b7 has its CatchHandler @ 00de4984 */
  FUN_00de4a2c(alStack_70,this + 0x520);
  if (alStack_70 == local_50) {
                    /* try { // try from 00de42d4 to 00ee42df has its CatchHandler @ 00de498c */
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00de42d8:
    (*pcVar4)();
  }
  else {
                    /* try { // try from 00de42c0 to 00ee42cb has its CatchHandler @ 00de4988 */
    if (local_50 != (long *)0x0) {
      pcVar4 = *(code **)(*local_50 + 0x28);
      goto LAB_00de42d8;
    }
  }
  plVar3 = *(long **)(lVar2 + 0x570);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)(lVar2 + 0x550) == plVar3) {
    local_50 = alStack_70;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
                    /* try { // try from 00de42f8 to 00ee42fb has its CatchHandler @ 00de4880 */
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
                    /* try { // try from 00de4324 to 00ee432b has its CatchHandler @ 00de4884 */
  FUN_00de4a2c(alStack_70,this + 0x550);
  if (alStack_70 == local_50) {
                    /* try { // try from 00de4350 to 00ee435b has its CatchHandler @ 00de4ab0 */
    pcVar4 = *(code **)(*local_50 + 0x20);
LAB_00de4358:
    (*pcVar4)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar4 = *(code **)(*local_50 + 0x28);
    goto LAB_00de4358;
  }
  plVar3 = *(long **)(lVar2 + 0x5a0);
  if (plVar3 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if ((long *)(lVar2 + 0x580) == plVar3) {
                    /* try { // try from 00de438c to 00ee4397 has its CatchHandler @ 00de488c */
    local_50 = alStack_70;
    (**(code **)(*plVar3 + 0x18))(plVar3,alStack_70);
  }
  else {
                    /* try { // try from 00de4374 to 00ee437f has its CatchHandler @ 00de48a8 */
    local_50 = (long *)(**(code **)(*plVar3 + 0x10))();
  }
                    /* try { // try from 00de43a4 to 00ee43af has its CatchHandler @ 00de4884 */
  FUN_00de4a2c(alStack_70,this + 0x580);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00de43dc;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_00de43dc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00de43fc to 00ee46bb has its CatchHandler @ 00de4aac */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

