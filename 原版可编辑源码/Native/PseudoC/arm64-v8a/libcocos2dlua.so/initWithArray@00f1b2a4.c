
/* cocos2d::Menu::initWithArray(cocos2d::Vector<cocos2d::MenuItem*> const&) */

void __thiscall cocos2d::Menu::initWithArray(Menu *this,Vector *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  Director *this_00;
  Size *pSVar4;
  EventListenerTouchOneByOne *this_01;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  undefined8 *puVar8;
  float local_88;
  float fStack_84;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  Menu *local_68;
  undefined ***local_60;
  long local_48;
  undefined8 *puVar9;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = Layer::init((Layer *)this);
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
    goto LAB_00f1b538;
  }
  this[0x31d] = (Menu)0x1;
  this_00 = (Director *)Director::getInstance();
  pSVar4 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)&local_88,pSVar4);
  (**(code **)(*(long *)this + 0x1f0))(this,1);
  local_80 = (undefined **)0x3f0000003f000000;
  (**(code **)(*(long *)this + 0x148))(this,&local_80);
  (**(code **)(*(long *)this + 0x160))(this,&local_88);
  (**(code **)(*(long *)this + 200))(local_88 * 0.5,fStack_84 * 0.5,this);
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(undefined8 **)param_1 != puVar1) {
    iVar7 = 0;
    puVar8 = *(undefined8 **)param_1;
    do {
      puVar9 = puVar8 + 1;
      (**(code **)(*(long *)this + 0x210))(this,*puVar8,iVar7);
      iVar7 = iVar7 + 1;
      puVar8 = puVar9;
    } while (puVar1 != puVar9);
  }
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined4 *)(this + 800) = 0;
  (**(code **)(*(long *)this + 0x4d8))(this,1);
  (**(code **)(*(long *)this + 0x4a8))(this,1);
  this_01 = (EventListenerTouchOneByOne *)EventListenerTouchOneByOne::create();
  EventListenerTouchOneByOne::setSwallowTouches(this_01,true);
  local_80 = &PTR_FUN_017043f8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f1b970 with catch @ 00f1b3e8
                        */
  uStack_70 = 1;
  local_78 = 0x570;
  local_68 = this;
  local_60 = &local_80;
  FUN_008aeb48(&local_80,this_01 + 0xa0);
  if (&local_80 == local_60) {
    pcVar6 = (code *)(*local_60)[4];
LAB_00f1b428:
    (*pcVar6)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_60)[5];
    goto LAB_00f1b428;
  }
  local_80 = &PTR_FUN_01704490;
  uStack_70 = 1;
  local_78 = 0x578;
  local_68 = this;
  local_60 = &local_80;
  FUN_008aedb8(&local_80,this_01 + 0xd0);
  if (&local_80 == local_60) {
    pcVar6 = (code *)(*local_60)[4];
LAB_00f1b480:
    (*pcVar6)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_60)[5];
    goto LAB_00f1b480;
  }
  local_80 = &PTR_FUN_01704490;
                    /* try { // try from 00f1b494 to 0101b497 has its CatchHandler @ 00f1baa0 */
                    /* try { // try from 00f1b49c to 0101b4ab has its CatchHandler @ 00f1ba9c */
  uStack_70 = 1;
  local_78 = 0x580;
  local_68 = this;
  local_60 = &local_80;
  FUN_008aedb8(&local_80,this_01 + 0x100);
  if (&local_80 == local_60) {
    pcVar6 = (code *)(*local_60)[4];
LAB_00f1b4d0:
    (*pcVar6)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_60)[5];
    goto LAB_00f1b4d0;
  }
  local_80 = &PTR_FUN_01704490;
                    /* try { // try from 00f1b4e8 to 0101b4ef has its CatchHandler @ 00f1bb08 */
                    /* try { // try from 00f1b4f4 to 0101b4fb has its CatchHandler @ 00f1baec */
  uStack_70 = 1;
  local_78 = 0x588;
  local_68 = this;
  local_60 = &local_80;
  FUN_008aedb8(&local_80,this_01 + 0x130);
                    /* try { // try from 00f1b4fc to 0101b507 has its CatchHandler @ 00f1bad8 */
  if (&local_80 == local_60) {
    pcVar6 = (code *)(*local_60)[4];
LAB_00f1b520:
    (*pcVar6)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_60)[5];
    goto LAB_00f1b520;
  }
                    /* try { // try from 00f1b528 to 0101b52f has its CatchHandler @ 00f1bd04 */
  EventDispatcher::addEventListenerWithSceneGraphPriority
            (*(EventDispatcher **)(this + 0x1f0),(EventListener *)this_01,(Node *)this);
  uVar5 = 1;
LAB_00f1b538:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

