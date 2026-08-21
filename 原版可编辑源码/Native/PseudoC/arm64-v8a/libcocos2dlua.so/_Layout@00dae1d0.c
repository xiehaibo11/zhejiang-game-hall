
/* cocos2d::ui::Layout::~Layout() */

void __thiscall cocos2d::ui::Layout::~Layout(Layout *this)

{
  Layout *pLVar1;
  code *pcVar2;
  
                    /* try { // try from 00dae1d4 to 00eae1e3 has its CatchHandler @ 00dae2e4 */
                    /* try { // try from 00dae1e4 to 00eae25f has its CatchHandler @ 00dad6f4 */
  *(undefined ***)this = &PTR__Layout_016d9070;
  *(undefined ***)(this + 0x318) = &PTR__Layout_016d9750;
  *(undefined ***)(this + 0x4f0) = &PTR__Layout_016d9778;
  if (*(Ref **)(this + 0x5b0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x5b0));
  }
  if (*(void **)(this + 0x5f0) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x5f0));
  }
  *(undefined8 *)(this + 0x5f0) = 0;
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x760));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x710));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x6c0));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x670));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x620));
  GroupCommand::~GroupCommand((GroupCommand *)(this + 0x5f8));
  if (((byte)this[0x540] & 1) != 0) {
    operator_delete(*(void **)(this + 0x550));
  }
  pLVar1 = *(Layout **)(this + 0x520);
                    /* try { // try from 00dae260 to 00eae26b has its CatchHandler @ 00dae2d0 */
  if (this + 0x500 == pLVar1) {
    pcVar2 = *(code **)(*(long *)pLVar1 + 0x20);
  }
  else {
                    /* try { // try from 00dae26c to 00eae38f has its CatchHandler @ 00dad6f4 */
    if (pLVar1 == (Layout *)0x0) goto LAB_00dae288;
    pcVar2 = *(code **)(*(long *)pLVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00dae288:
  Widget::~Widget((Widget *)this);
  return;
}

