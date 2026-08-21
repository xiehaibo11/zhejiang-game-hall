
/* fairygui::InputProcessor::setBegin(fairygui::TouchInfo*, fairygui::GObject*) */

void __thiscall
fairygui::InputProcessor::setBegin(InputProcessor *this,TouchInfo *param_1,GObject *param_2)

{
  long lVar1;
  WeakPtr *pWVar2;
  WeakPtr *pWVar3;
  WeakPtr aWStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pWVar3 = *(WeakPtr **)(param_1 + 0x40);
  pWVar2 = *(WeakPtr **)(param_1 + 0x48);
  *(undefined2 *)(param_1 + 0x28) = 1;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 00aae0cc to 00bae117 has its CatchHandler @ 00aae19c */
  while (pWVar2 != pWVar3) {
    pWVar2 = pWVar2 + -8;
    this = (InputProcessor *)WeakPtr::~WeakPtr(pWVar2);
  }
  *(WeakPtr **)(param_1 + 0x48) = pWVar3;
  while (param_2 != (GObject *)0x0) {
    WeakPtr::WeakPtr(aWStack_50,param_2);
    pWVar2 = *(WeakPtr **)(param_1 + 0x48);
    if (pWVar2 < *(WeakPtr **)(param_1 + 0x50)) {
      WeakPtr::WeakPtr(pWVar2,aWStack_50);
      *(WeakPtr **)(param_1 + 0x48) = pWVar2 + 8;
                    /* try { // try from 00aae148 to 00bae15b has its CatchHandler @ 00aae19c */
    }
    else {
      std::__ndk1::vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>>::
      __push_back_slow_path<fairygui::WeakPtr>
                ((vector<fairygui::WeakPtr,std::__ndk1::allocator<fairygui::WeakPtr>> *)
                 (param_1 + 0x40),aWStack_50);
    }
    WeakPtr::~WeakPtr(aWStack_50);
    param_2 = (GObject *)GObject::findParent(param_2);
                    /* try { // try from 00aae118 to 00bae147 has its CatchHandler @ 00aae07c */
    this = (InputProcessor *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
                    /* try { // try from 00aae15c to 00bae1b7 has its CatchHandler @ 00aae07c */
  return;
}

