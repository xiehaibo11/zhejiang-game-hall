
/* fairygui::UIEventDispatcher::doBubble(int, fairygui::EventContext*) */

void __thiscall
fairygui::UIEventDispatcher::doBubble(UIEventDispatcher *this,int param_1,EventContext *param_2)

{
  long lVar1;
  GObject *pGVar2;
  UIEventDispatcher *this_00;
  WeakPtr aWStack_40 [8];
  long local_38;
  
                    /* try { // try from 00aafe14 to 00bafe1b has its CatchHandler @ 00ab03e4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00aafe24 to 00bafe37 has its CatchHandler @ 00ab0300 */
  pGVar2 = (GObject *)GObject::findParent((GObject *)this);
  WeakPtr::WeakPtr(aWStack_40,pGVar2);
  if (*(long *)(this + 0x28) != *(long *)(this + 0x30)) {
    param_2[0x28] = (EventContext)0x0;
                    /* try { // try from 00aafe4c to 00bafe97 has its CatchHandler @ 00ab03d0 */
    doDispatch(this,param_1,param_2);
    if (param_2[0x28] != (EventContext)0x0) goto LAB_00aafe7c;
  }
  this_00 = (UIEventDispatcher *)WeakPtr::ptr(aWStack_40);
  if (this_00 != (UIEventDispatcher *)0x0) {
    doBubble(this_00,param_1,param_2);
  }
LAB_00aafe7c:
  WeakPtr::~WeakPtr(aWStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00aafea0 to 00bafeaf has its CatchHandler @ 00ab034c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

