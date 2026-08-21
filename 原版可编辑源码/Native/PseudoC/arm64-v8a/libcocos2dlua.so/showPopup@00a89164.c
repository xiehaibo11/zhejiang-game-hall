
/* fairygui::GRoot::showPopup(fairygui::GObject*, fairygui::GObject*, fairygui::PopupDirection) */

void fairygui::GRoot::showPopup
               (undefined1 param_1_00 [16],float param_2_00,GRoot *param_1,GObject *param_2,
               GRoot *param_5,int param_6)

{
  long lVar1;
  GRoot *pGVar2;
  GRoot *pGVar3;
  long lVar4;
  WeakPtr *this;
  float fVar5;
  WeakPtr aWStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a89188 to 00b891ab has its CatchHandler @ 00a881e4 */
  if (*(long *)(param_1 + 0x2a0) != *(long *)(param_1 + 0x2a8)) {
                    /* try { // try from 00a891ac to 00b891b3 has its CatchHandler @ 00a8963c */
    hidePopup(param_1,param_2);
  }
                    /* try { // try from 00a891b4 to 00b891bb has its CatchHandler @ 00a89638 */
                    /* try { // try from 00a891bc to 00b891c3 has its CatchHandler @ 00a89634 */
  WeakPtr::WeakPtr(aWStack_50,param_2);
  this = *(WeakPtr **)(param_1 + 0x2a8);
                    /* try { // try from 00a891c4 to 00b8934f has its CatchHandler @ 00a896dc */
  if (this < *(WeakPtr **)(param_1 + 0x2b0)) {
    WeakPtr::WeakPtr(this,aWStack_50);
    *(WeakPtr **)(param_1 + 0x2a8) = this + 8;
  }
  else {
    std::__ndk1::vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>>::
    __push_back_slow_path<fairygui::WeakPtr>
              ((vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>> *)
               (param_1 + 0x2a0),aWStack_50);
  }
  WeakPtr::~WeakPtr(aWStack_50);
  pGVar3 = param_5;
  do {
    pGVar2 = pGVar3;
    if (pGVar2 == (GRoot *)0x0) goto LAB_00a89234;
    pGVar3 = *(GRoot **)(pGVar2 + 0xa0);
  } while (*(GRoot **)(pGVar2 + 0xa0) != param_1);
  if (*(int *)(param_2 + 0xfc) < *(int *)(pGVar2 + 0xfc)) {
    GObject::setSortingOrder(param_2,*(int *)(pGVar2 + 0xfc));
  }
LAB_00a89234:
  GComponent::addChild((GComponent *)param_1,param_2);
  adjustModalLayer(param_1);
  if ((((param_2 == (GObject *)0x0) ||
       (lVar4 = __dynamic_cast(param_2,&GObject::typeinfo,&Window::typeinfo,0), param_6 != 0)) ||
      (param_5 != (GRoot *)0x0)) || (lVar4 == 0)) {
    fVar5 = (float)getPoupPosition(param_1,param_2,param_5,param_6);
    GObject::setPosition(param_2,fVar5,param_2_00);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

