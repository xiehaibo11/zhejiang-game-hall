
/* fairygui::GRoot::initWithScene(cocos2d::Scene*, int) */

void __thiscall fairygui::GRoot::initWithScene(GRoot *this,Scene *param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  InputProcessor *this_00;
  long lVar3;
  float *pfVar4;
  undefined8 uVar5;
  code *pcVar6;
  float fVar7;
  undefined **local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  GRoot *local_98;
  long *local_90;
  undefined **local_80;
  code *local_78;
  undefined8 uStack_70;
  GRoot *local_68;
  undefined ***local_60;
  long local_48;
  
                    /* try { // try from 00a883f0 to 00b88503 has its CatchHandler @ 00a896b4 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = GObject::init((GObject *)this);
  if ((uVar2 & 1) == 0) {
    uVar5 = 0;
    goto LAB_00a88584;
  }
  if (_inst == (GRoot *)0x0) {
    _inst = this;
  }
  this_00 = operator_new(0xb0);
  InputProcessor::InputProcessor(this_00,(GComponent *)this);
  *(InputProcessor **)(this + 0x288) = this_00;
  uStack_a0 = 0;
  local_a8 = onTouchEvent;
  local_b0 = &PTR_FUN_016a6710;
  uStack_70 = 0;
  local_78 = onTouchEvent;
  local_98 = this;
  local_90 = (long *)&local_b0;
  local_80 = local_b0;
  local_68 = this;
  local_60 = &local_80;
  FUN_00a89f74(&local_80,this_00 + 0x40);
  if (&local_80 == local_60) {
    pcVar6 = (code *)(*local_60)[4];
LAB_00a884cc:
    (*pcVar6)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_60)[5];
    goto LAB_00a884cc;
  }
  if (&local_b0 == (undefined ***)local_90) {
    pcVar6 = *(code **)(*local_90 + 0x20);
LAB_00a884f8:
    (*pcVar6)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar6 = *(code **)(*local_90 + 0x28);
    goto LAB_00a884f8;
  }
  lVar3 = cocos2d::Director::getInstance();
  pfVar4 = (float *)(**(code **)(**(long **)(lVar3 + 0x108) + 200))();
  GObject::setSize((GObject *)this,*pfVar4,pfVar4[1],false);
  lVar3 = cocos2d::Director::getInstance();
  fVar7 = *(float *)(lVar3 + 0x1a0);
  if (3.5 <= fVar7) {
    contentScaleLevel = 3;
  }
  else if (2.5 <= fVar7) {
    contentScaleLevel = 2;
  }
  else {
                    /* try { // try from 00a88540 to 00b8859b has its CatchHandler @ 00a89674 */
    contentScaleLevel = (uint)(1.5 <= fVar7);
  }
  (**(code **)(*(long *)param_1 + 0x210))(param_1,*(undefined8 *)(this + 0xa8),param_2);
  uVar5 = 1;
LAB_00a88584:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a885ac to 00b885bb has its CatchHandler @ 00a8960c */
  __stack_chk_fail(uVar5);
}

