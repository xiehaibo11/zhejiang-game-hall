
/* cocos2d::TransitionCrossFade::onEnter() */

void __thiscall cocos2d::TransitionCrossFade::onEnter(TransitionCrossFade *this)

{
  long lVar1;
  ulong uVar2;
  Director *this_00;
  Size *pSVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  FiniteTimeAction *pFVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  float local_e0;
  float fStack_dc;
  Color4B aCStack_d8 [8];
  undefined **local_d0;
  code *local_c8;
  undefined8 uStack_c0;
  TransitionCrossFade *local_b8;
  undefined ***local_b0;
  undefined **local_a0;
  code *local_98;
  undefined8 uStack_90;
  TransitionCrossFade *local_88;
  undefined ***local_80;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar2 & 1) == 0)) {
    Scene::onEnter((Scene *)this);
    EventDispatcher::setEnabled(*(EventDispatcher **)(this + 0x1f0),false);
    (**(code **)(**(long **)(this + 0x378) + 0x338))();
    (**(code **)(**(long **)(this + 0x370) + 800))();
  }
  Color4B::Color4B(aCStack_d8,'\0','\0','\0','\0');
  this_00 = (Director *)Director::getInstance();
  pSVar3 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)&local_e0,pSVar3);
  plVar4 = (long *)LayerColor::create(aCStack_d8);
  plVar5 = (long *)RenderTexture::create((int)local_e0,(int)fStack_dc,2,0x88f0);
  if (plVar5 == (long *)0x0) goto LAB_00f5daec;
  local_a0 = (undefined **)0x3f0000003f000000;
  (**(code **)(*(long *)plVar5[0x70] + 0x148))((long *)plVar5[0x70],&local_a0);
  (**(code **)(*plVar5 + 200))(local_e0 * 0.5,fStack_dc * 0.5,plVar5);
  local_a0 = (undefined **)0x3f0000003f000000;
  (**(code **)(*plVar5 + 0x148))(plVar5,&local_a0);
  (**(code **)(*plVar5 + 0x530))(plVar5);
  Node::visit(*(Node **)(this + 0x370));
  (**(code **)(*plVar5 + 0x550))(plVar5);
  plVar6 = (long *)RenderTexture::create((int)local_e0,(int)fStack_dc,2,0x88f0);
  local_a0 = (undefined **)0x3f0000003f000000;
  (**(code **)(*(long *)plVar6[0x70] + 0x148))((long *)plVar6[0x70],&local_a0);
  (**(code **)(*plVar6 + 200))(local_e0 * 0.5,fStack_dc * 0.5,plVar6);
  local_a0 = (undefined **)0x3f0000003f000000;
  (**(code **)(*plVar6 + 0x148))(plVar6,&local_a0);
  (**(code **)(*plVar6 + 0x530))(plVar6);
  Node::visit(*(Node **)(this + 0x378));
  (**(code **)(*plVar6 + 0x550))(plVar6);
  (**(code **)(*(long *)plVar5[0x70] + 0x5e0))((long *)plVar5[0x70],&BlendFunc::DISABLE);
                    /* try { // try from 00f5d988 to 0105d9a7 has its CatchHandler @ 00f5d988
                       catch() { ... } // from try @ 00f5d988 with catch @ 00f5d988
                       catch() { ... } // from try @ 00f5d9e8 with catch @ 00f5d988 */
  (**(code **)(*(long *)plVar6[0x70] + 0x5e0))((long *)plVar6[0x70],&BlendFunc::ALPHA_PREMULTIPLIED)
  ;
  (**(code **)(*plVar4 + 0x208))(plVar4,plVar5);
                    /* try { // try from 00f5d9a8 to 0105d9af has its CatchHandler @ 00f5da5c */
  (**(code **)(*plVar4 + 0x208))(plVar4,plVar6);
                    /* try { // try from 00f5d9b4 to 0105d9bb has its CatchHandler @ 00f5da40 */
                    /* try { // try from 00f5d9c0 to 0105d9c7 has its CatchHandler @ 00f5da30 */
  (**(code **)(*(long *)plVar5[0x70] + 0x490))((long *)plVar5[0x70],0xff);
                    /* try { // try from 00f5d9cc to 0105d9d3 has its CatchHandler @ 00f5da20 */
                    /* try { // try from 00f5d9d8 to 0105d9df has its CatchHandler @ 00f5da10 */
  (**(code **)(*(long *)plVar6[0x70] + 0x490))((long *)plVar6[0x70],0xff);
                    /* try { // try from 00f5d9e4 to 0105d9e7 has its CatchHandler @ 00f5d9fc */
  pFVar7 = (FiniteTimeAction *)FadeTo::create(*(float *)(this + 0x380),'\0');
                    /* try { // try from 00f5d9e8 to 0105da63 has its CatchHandler @ 00f5d988 */
                    /* catch() { ... } // from try @ 00f5d9e4 with catch @ 00f5d9fc */
  uStack_90 = 0;
  local_98 = TransitionScene::hideOutShowIn;
                    /* catch() { ... } // from try @ 00f5d9d8 with catch @ 00f5da10 */
  local_a0 = &PTR_FUN_0171cf58;
  local_88 = this;
  local_80 = &local_a0;
  uVar8 = CallFunc::create((function *)&local_a0);
                    /* catch() { ... } // from try @ 00f5d9cc with catch @ 00f5da20 */
                    /* catch() { ... } // from try @ 00f5d9c0 with catch @ 00f5da30 */
  local_b0 = &local_d0;
  uStack_c0 = 0;
  local_c8 = TransitionScene::finish;
                    /* catch() { ... } // from try @ 00f5d9b4 with catch @ 00f5da40 */
  local_d0 = &PTR_FUN_0171cf58;
  local_b8 = this;
  uVar9 = CallFunc::create((function *)&local_d0);
  uVar8 = Sequence::create(pFVar7,uVar8,uVar9,0);
                    /* catch() { ... } // from try @ 00f5d9a8 with catch @ 00f5da5c */
  if (&local_d0 == local_b0) {
    pcVar10 = (code *)(*local_b0)[4];
LAB_00f5da88:
    (*pcVar10)();
  }
  else if (local_b0 != (undefined ***)0x0) {
    pcVar10 = (code *)(*local_b0)[5];
    goto LAB_00f5da88;
  }
  if (&local_a0 == local_80) {
    pcVar10 = (code *)(*local_80)[4];
LAB_00f5dab4:
                    /* catch() { ... } // from try @ 00f5db00 with catch @ 00f5dab4 */
    (*pcVar10)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar10 = (code *)(*local_80)[5];
    goto LAB_00f5dab4;
  }
  (**(code **)(*(long *)plVar6[0x70] + 0x3a8))((long *)plVar6[0x70],uVar8);
  (**(code **)(*(long *)this + 0x218))(this,plVar4,2,0xfadefade);
LAB_00f5daec:
                    /* try { // try from 00f5daf4 to 0105daff has its CatchHandler @ 00f5db2c */
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* try { // try from 00f5db00 to 0105db43 has its CatchHandler @ 00f5dab4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

