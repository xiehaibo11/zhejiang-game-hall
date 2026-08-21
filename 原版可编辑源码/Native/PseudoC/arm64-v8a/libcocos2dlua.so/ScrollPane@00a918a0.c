
/* fairygui::ScrollPane::ScrollPane(fairygui::GComponent*) */

void __thiscall fairygui::ScrollPane::ScrollPane(ScrollPane *this,GComponent *param_1)

{
  long lVar1;
  FUIContainer *this_00;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  float fVar7;
  undefined **local_70;
  ScrollPane *local_68;
  undefined8 uStack_60;
  ScrollPane *local_58;
  long *local_50;
  long local_38;
  
                    /* try { // try from 00a918b4 to 00b91923 has its CatchHandler @ 00a915f0 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined ***)this = &PTR__ScrollPane_016a7300;
  Margin::Margin((Margin *)(this + 0x30));
  *(undefined2 *)(this + 0x43) = 0;
  this[0x45] = (ScrollPane)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined2 *)(this + 0x59) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  this[0x4f] = (ScrollPane)0x1;
  cocos2d::Size::Size((Size *)(this + 100));
  cocos2d::Size::Size((Size *)(this + 0x6c));
  cocos2d::Size::Size((Size *)(this + 0x74));
  cocos2d::Size::Size((Size *)(this + 0x7c));
                    /* try { // try from 00a91924 to 00b9192b has its CatchHandler @ 00a91998 */
  *(undefined8 *)(this + 0xa4) = 0;
  *(undefined8 *)(this + 0xbc) = 0;
  this[0xc4] = (ScrollPane)0x0;
                    /* try { // try from 00a91930 to 00b91937 has its CatchHandler @ 00a91984 */
  *(undefined8 *)(this + 0x130) = 0;
  *(GComponent **)(this + 0xf8) = param_1;
  *(undefined8 *)(this + 0x9c) = 0;
  *(undefined8 *)(this + 0x94) = 0;
                    /* try { // try from 00a91948 to 00b9194f has its CatchHandler @ 00a91980 */
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined8 *)(this + 0x84) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xec) = 0;
  *(undefined8 *)(this + 0xe4) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
                    /* try { // try from 00a91960 to 00b91967 has its CatchHandler @ 00a9197c */
                    /* try { // try from 00a91968 to 00b919bf has its CatchHandler @ 00a915f0 */
  fVar7 = (float)UIConfig::defaultScrollStep;
  *(float *)(this + 0x28) = fVar7;
  *(float *)(this + 0x2c) = fVar7 + fVar7;
  *(undefined4 *)(this + 0x54) = UIConfig::defaultScrollDecelerationRate;
                    /* catch() { ... } // from try @ 00a917ac with catch @ 00a9197c
                       catch() { ... } // from try @ 00a91960 with catch @ 00a9197c */
                    /* catch() { ... } // from try @ 00a91888 with catch @ 00a91980
                       catch() { ... } // from try @ 00a91948 with catch @ 00a91980 */
                    /* catch() { ... } // from try @ 00a916b0 with catch @ 00a91984
                       catch() { ... } // from try @ 00a91930 with catch @ 00a91984 */
                    /* catch() { ... } // from try @ 00a91788 with catch @ 00a91988 */
  this[0x41] = UIConfig::defaultScrollTouchEffect;
                    /* catch() { ... } // from try @ 00a91694 with catch @ 00a9198c */
                    /* catch() { ... } // from try @ 00a91864 with catch @ 00a91990 */
                    /* catch() { ... } // from try @ 00a91848 with catch @ 00a91994 */
                    /* catch() { ... } // from try @ 00a91704 with catch @ 00a91998
                       catch() { ... } // from try @ 00a91924 with catch @ 00a91998 */
  this[0x40] = UIConfig::defaultScrollBounceEffect;
                    /* catch() { ... } // from try @ 00a91764 with catch @ 00a9199c */
                    /* catch() { ... } // from try @ 00a91748 with catch @ 00a919a0 */
                    /* catch() { ... } // from try @ 00a916e8 with catch @ 00a919a4 */
  cocos2d::Size::operator=((Size *)(this + 0x7c),(Vec2 *)&cocos2d::Vec2::ONE);
  this_00 = operator_new(0x310,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00a919c0 to 00b91a03 has its CatchHandler @ 00a919c0
                       catch() { ... } // from try @ 00a919c0 with catch @ 00a919c0
                       catch() { ... } // from try @ 00a91ac0 with catch @ 00a919c0
                       catch() { ... } // from try @ 00a91b64 with catch @ 00a919c0 */
  if (this_00 != (FUIContainer *)0x0) {
    FUIContainer::FUIContainer(this_00);
    uVar2 = (**(code **)(*(long *)this_00 + 0x500))(this_00);
    if ((uVar2 & 1) == 0) {
      (**(code **)(*(long *)this_00 + 8))(this_00);
      this_00 = (FUIContainer *)0x0;
    }
    else {
      cocos2d::Ref::autorelease((Ref *)this_00);
    }
  }
  *(FUIContainer **)(this + 0x100) = this_00;
                    /* try { // try from 00a91a04 to 00b91a1b has its CatchHandler @ 00a91b88 */
  (**(code **)(*(long *)this_00 + 0x4a8))(this_00,1);
                    /* try { // try from 00a91a20 to 00b91a3f has its CatchHandler @ 00a91b84 */
  (**(code **)(**(long **)(*(long *)(this + 0xf8) + 0xa8) + 0x208))
            (*(long **)(*(long *)(this + 0xf8) + 0xa8),*(undefined8 *)(this + 0x100));
  puVar3 = (undefined8 *)(**(code **)(**(long **)(*(long *)(this + 0xf8) + 0xa8) + 0x240))();
                    /* try { // try from 00a91a44 to 00b91a6f has its CatchHandler @ 00a91b78 */
  plVar6 = *(long **)*puVar3;
  *(long **)(this + 0x108) = plVar6;
  lVar4 = (**(code **)(*(long *)plVar6[0x32] + 0x168))();
  (**(code **)(*plVar6 + 200))(0,*(undefined4 *)(lVar4 + 4),plVar6);
                    /* try { // try from 00a91a7c to 00b91a93 has its CatchHandler @ 00a91b80 */
  (**(code **)(**(long **)(this + 0x108) + 0x270))();
  (**(code **)(**(long **)(this + 0x100) + 0x210))
            (*(long **)(this + 0x100),*(undefined8 *)(this + 0x108),1);
                    /* try { // try from 00a91a98 to 00b91abf has its CatchHandler @ 00a91b7c */
  local_70 = &PTR_FUN_016a7338;
                    /* try { // try from 00a91ac0 to 00b91b4f has its CatchHandler @ 00a919c0 */
  uStack_60 = 0;
  local_68 = (ScrollPane *)onMouseWheel;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            (*(UIEventDispatcher **)(this + 0xf8),0x10,(function *)&local_70,
             (EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_00a91b00:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_00a91b00;
  }
  local_70 = &PTR_FUN_016a7338;
  uStack_60 = 0;
  local_68 = (ScrollPane *)onTouchBegin;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            (*(UIEventDispatcher **)(this + 0xf8),10,(function *)&local_70,
             (EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
                    /* try { // try from 00a91b5c to 00b91b63 has its CatchHandler @ 00a91b78 */
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_00a91b64:
                    /* try { // try from 00a91b64 to 00b91ba3 has its CatchHandler @ 00a919c0 */
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
                    /* try { // try from 00a91b50 to 00b91b57 has its CatchHandler @ 00a91b7c */
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_00a91b64;
  }
                    /* catch() { ... } // from try @ 00a91a44 with catch @ 00a91b78
                       catch() { ... } // from try @ 00a91b5c with catch @ 00a91b78 */
  local_70 = &PTR_FUN_016a7338;
                    /* catch() { ... } // from try @ 00a91a98 with catch @ 00a91b7c
                       catch() { ... } // from try @ 00a91b50 with catch @ 00a91b7c */
                    /* catch() { ... } // from try @ 00a91a7c with catch @ 00a91b80 */
                    /* catch() { ... } // from try @ 00a91a20 with catch @ 00a91b84 */
                    /* catch() { ... } // from try @ 00a91a04 with catch @ 00a91b88 */
  uStack_60 = 0;
  local_68 = (ScrollPane *)onTouchMove;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            (*(UIEventDispatcher **)(this + 0xf8),0xb,(function *)&local_70,
             (EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_00a91bc8:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_00a91bc8;
  }
  local_70 = &PTR_FUN_016a7338;
  uStack_60 = 0;
  local_68 = (ScrollPane *)onTouchEnd;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            (*(UIEventDispatcher **)(this + 0xf8),0xc,(function *)&local_70,
             (EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
LAB_00a91c2c:
    (*pcVar5)();
  }
  else if (local_50 != (long *)0x0) {
    pcVar5 = *(code **)(*local_50 + 0x28);
    goto LAB_00a91c2c;
  }
  local_70 = &PTR_FUN_016a73e8;
  local_68 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            (*(UIEventDispatcher **)(this + 0xf8),1,(function *)&local_70,
             (EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar5 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00a91c84;
    pcVar5 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar5)();
LAB_00a91c84:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

