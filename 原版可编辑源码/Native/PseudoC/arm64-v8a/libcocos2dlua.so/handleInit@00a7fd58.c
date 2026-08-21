
/* fairygui::GLoader3D::handleInit() */

void __thiscall fairygui::GLoader3D::handleInit(GLoader3D *this)

{
  long lVar1;
  FUIContainer *pFVar2;
  ulong uVar3;
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 00a7fd6c to 00b7fd7f has its CatchHandler @ 00a7fdd8 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a7fd84 to 00b7fd97 has its CatchHandler @ 00a7fddc */
  pFVar2 = operator_new(0x310,(nothrow_t *)&std::nothrow);
  if (pFVar2 != (FUIContainer *)0x0) {
                    /* try { // try from 00a7fd98 to 00b7fdf7 has its CatchHandler @ 00a7fc40 */
    FUIContainer::FUIContainer(pFVar2);
    uVar3 = (**(code **)(*(long *)pFVar2 + 0x500))(pFVar2);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*(long *)pFVar2 + 8))(pFVar2);
      pFVar2 = (FUIContainer *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)pFVar2);
    }
  }
  cocos2d::Ref::retain((Ref *)pFVar2);
                    /* catch() { ... } // from try @ 00a7fc94 with catch @ 00a7fdd8
                       catch() { ... } // from try @ 00a7fd6c with catch @ 00a7fdd8 */
  *(GLoader3D **)(pFVar2 + 0x2f8) = this;
                    /* catch() { ... } // from try @ 00a7fcdc with catch @ 00a7fddc
                       catch() { ... } // from try @ 00a7fd84 with catch @ 00a7fddc */
  *(FUIContainer **)(this + 0xa8) = pFVar2;
  pFVar2 = operator_new(0x310,(nothrow_t *)&std::nothrow);
  if (pFVar2 != (FUIContainer *)0x0) {
    FUIContainer::FUIContainer(pFVar2);
    uVar3 = (**(code **)(*(long *)pFVar2 + 0x500))(pFVar2);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*(long *)pFVar2 + 8))(pFVar2);
      pFVar2 = (FUIContainer *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)pFVar2);
    }
  }
  *(FUIContainer **)(this + 600) = pFVar2;
  cocos2d::Ref::retain((Ref *)pFVar2);
  local_40 = 0x3f80000000000000;
  (**(code **)(**(long **)(this + 600) + 0x148))(*(long **)(this + 600),&local_40);
  (**(code **)(**(long **)(this + 0xa8) + 0x208))
            (*(long **)(this + 0xa8),*(undefined8 *)(this + 600));
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

