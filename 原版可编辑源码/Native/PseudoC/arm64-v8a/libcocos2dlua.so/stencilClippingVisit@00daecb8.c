
/* cocos2d::ui::Layout::stencilClippingVisit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int)
    */

void __thiscall
cocos2d::ui::Layout::stencilClippingVisit(Layout *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  Layout *pLVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  Director *pDVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **local_a0;
  code *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined ***local_80;
  long local_68;
  
                    /* catch() { ... } // from try @ 00daec70 with catch @ 00daeccc */
                    /* catch() { ... } // from try @ 00daec60 with catch @ 00daecd0 */
                    /* catch() { ... } // from try @ 00daec34 with catch @ 00daecd4 */
                    /* catch() { ... } // from try @ 00daec24 with catch @ 00daecd8 */
  lVar2 = tpidr_el0;
                    /* catch() { ... } // from try @ 00daebf8 with catch @ 00daecdc */
  local_68 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00daebe8 with catch @ 00daece0 */
                    /* catch() { ... } // from try @ 00daebbc with catch @ 00daece4 */
                    /* catch() { ... } // from try @ 00daebac with catch @ 00daece8 */
  if (this[0x1f9] == (Layout)0x0) goto LAB_00daf0b4;
                    /* catch() { ... } // from try @ 00daeb80 with catch @ 00daecec */
                    /* catch() { ... } // from try @ 00daeb70 with catch @ 00daecf0 */
                    /* catch() { ... } // from try @ 00daeb44 with catch @ 00daecf4 */
                    /* catch() { ... } // from try @ 00daeb34 with catch @ 00daecf8 */
                    /* catch() { ... } // from try @ 00daeb08 with catch @ 00daecfc */
  uVar3 = Node::processParentFlags((Node *)this,param_2,param_3);
                    /* catch() { ... } // from try @ 00daeaf8 with catch @ 00daed00 */
                    /* catch() { ... } // from try @ 00daeacc with catch @ 00daed04 */
  pDVar5 = (Director *)Director::getInstance();
                    /* catch() { ... } // from try @ 00daeabc with catch @ 00daed08 */
                    /* catch() { ... } // from try @ 00daea90 with catch @ 00daed0c */
                    /* catch() { ... } // from try @ 00daea80 with catch @ 00daed10 */
  Director::pushMatrix(pDVar5,0);
                    /* catch() { ... } // from try @ 00daea54 with catch @ 00daed14 */
  pLVar1 = this + 0x8c;
                    /* catch() { ... } // from try @ 00daea44 with catch @ 00daed18 */
                    /* catch() { ... } // from try @ 00daea18 with catch @ 00daed1c */
                    /* catch() { ... } // from try @ 00daea08 with catch @ 00daed20 */
                    /* catch() { ... } // from try @ 00dae9dc with catch @ 00daed24 */
  Director::loadMatrix(pDVar5,0,pLVar1);
                    /* catch() { ... } // from try @ 00dae9cc with catch @ 00daed28 */
                    /* catch() { ... } // from try @ 00dae9a0 with catch @ 00daed2c */
                    /* catch() { ... } // from try @ 00dae990 with catch @ 00daed30 */
                    /* catch() { ... } // from try @ 00dae964 with catch @ 00daed34 */
  GroupCommand::init((GroupCommand *)(this + 0x5f8),*(float *)(this + 0x170));
                    /* catch() { ... } // from try @ 00dae954 with catch @ 00daed38 */
                    /* catch() { ... } // from try @ 00dae928 with catch @ 00daed3c */
                    /* catch() { ... } // from try @ 00dae918 with catch @ 00daed40 */
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x5f8));
                    /* catch() { ... } // from try @ 00dae8ec with catch @ 00daed44 */
                    /* catch() { ... } // from try @ 00dae8dc with catch @ 00daed48 */
                    /* catch() { ... } // from try @ 00dae8b0 with catch @ 00daed4c */
  Renderer::pushGroup(param_1,*(int *)(this + 0x610));
                    /* catch() { ... } // from try @ 00dae8a0 with catch @ 00daed50 */
                    /* catch() { ... } // from try @ 00dae874 with catch @ 00daed54 */
                    /* catch() { ... } // from try @ 00dae864 with catch @ 00daed58 */
                    /* catch() { ... } // from try @ 00dae838 with catch @ 00daed5c */
  CustomCommand::init((CustomCommand *)(this + 0x620),*(float *)(this + 0x170));
                    /* catch() { ... } // from try @ 00dae828 with catch @ 00daed60 */
                    /* catch() { ... } // from try @ 00dae7fc with catch @ 00daed64 */
                    /* catch() { ... } // from try @ 00dae7ec with catch @ 00daed68 */
  local_88 = *(undefined8 *)(this + 0x5f0);
                    /* catch() { ... } // from try @ 00dae7c0 with catch @ 00daed6c */
                    /* catch() { ... } // from try @ 00dae7b0 with catch @ 00daed70 */
                    /* catch() { ... } // from try @ 00dae784 with catch @ 00daed74 */
                    /* catch() { ... } // from try @ 00dae774 with catch @ 00daed78 */
                    /* catch() { ... } // from try @ 00dae748 with catch @ 00daed7c */
  local_a0 = &PTR_FUN_016a8020;
                    /* catch() { ... } // from try @ 00dae738 with catch @ 00daed80 */
                    /* catch() { ... } // from try @ 00dae70c with catch @ 00daed84 */
                    /* catch() { ... } // from try @ 00dae6fc with catch @ 00daed88 */
                    /* catch() { ... } // from try @ 00dae6d0 with catch @ 00daed8c */
                    /* catch() { ... } // from try @ 00dae6c0 with catch @ 00daed90 */
  uStack_90 = 0;
  local_98 = StencilStateManager::onBeforeVisit;
  local_80 = &local_a0;
                    /* catch() { ... } // from try @ 00dae694 with catch @ 00daed94 */
                    /* catch() { ... } // from try @ 00dae684 with catch @ 00daed98 */
  FUN_008820fc(&local_a0,this + 0x640);
                    /* catch() { ... } // from try @ 00dae658 with catch @ 00daed9c */
                    /* catch() { ... } // from try @ 00dae648 with catch @ 00daeda0 */
                    /* catch() { ... } // from try @ 00dae61c with catch @ 00daeda4 */
  if (&local_a0 == local_80) {
    pcVar6 = (code *)(*local_80)[4];
LAB_00daedc0:
    (*pcVar6)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_80)[5];
    goto LAB_00daedc0;
  }
                    /* catch() { ... } // from try @ 00dae60c with catch @ 00daedc8 */
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x620));
  (**(code **)(**(long **)(this + 0x5b0) + 0x358))(*(long **)(this + 0x5b0),param_1,pLVar1,uVar3);
                    /* try { // try from 00daedf4 to 00eaedf7 has its CatchHandler @ 00daee5c */
                    /* try { // try from 00daedf8 to 00eaef83 has its CatchHandler @ 00dae570 */
  CustomCommand::init((CustomCommand *)(this + 0x670),*(float *)(this + 0x170));
  local_88 = *(undefined8 *)(this + 0x5f0);
  local_a0 = &PTR_FUN_016a8020;
  uStack_90 = 0;
  local_98 = StencilStateManager::onAfterDrawStencil;
  local_80 = &local_a0;
  FUN_008820fc(&local_a0,this + 0x690);
  if (&local_a0 == local_80) {
    pcVar6 = (code *)(*local_80)[4];
LAB_00daee54:
    (*pcVar6)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_80)[5];
    goto LAB_00daee54;
  }
                    /* catch() { ... } // from try @ 00daedf4 with catch @ 00daee5c */
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x670));
                    /* catch() { ... } // from try @ 00dae5fc with catch @ 00daee70 */
  (**(code **)(*(long *)this + 0x2b0))(this);
                    /* catch() { ... } // from try @ 00dae5dc with catch @ 00daee7c */
  (**(code **)(*(long *)this + 0x578))(this);
  lVar7 = *(long *)(this + 0x180) - (long)*(undefined8 **)(this + 0x178);
                    /* catch() { ... } // from try @ 00dae5c8 with catch @ 00daee90 */
  if ((lVar7 < 1) || (plVar8 = (long *)**(undefined8 **)(this + 0x178), plVar8 == (long *)0x0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
    do {
      iVar4 = (**(code **)(*plVar8 + 0x30))(plVar8);
      if (-1 < iVar4) break;
      (**(code **)(*plVar8 + 0x358))(plVar8,param_1,pLVar1,uVar3);
      if (lVar7 >> 3 <= (long)uVar11) {
        uVar11 = uVar11 & 0xffffffff;
        goto LAB_00daef08;
      }
      plVar8 = *(long **)(*(long *)(this + 0x178) + uVar11 * 8);
      uVar11 = uVar11 + 1;
    } while (plVar8 != (long *)0x0);
    uVar11 = uVar11 - 1;
  }
LAB_00daef08:
  lVar7 = *(long *)(this + 0x300) - (long)*(undefined8 **)(this + 0x2f8);
  if (lVar7 < 1) {
    uVar12 = 0;
  }
  else {
    plVar8 = (long *)**(undefined8 **)(this + 0x2f8);
    uVar12 = 0;
    if (plVar8 != (long *)0x0) {
      uVar12 = 1;
      do {
        iVar4 = (**(code **)(*plVar8 + 0x30))(plVar8);
        if (-1 < iVar4) break;
        (**(code **)(*plVar8 + 0x358))(plVar8,param_1,pLVar1,uVar3);
        if (lVar7 >> 3 <= (long)uVar12) {
          uVar12 = uVar12 & 0xffffffff;
          goto LAB_00daefa0;
        }
        plVar8 = *(long **)(*(long *)(this + 0x2f8) + uVar12 * 8);
        uVar12 = uVar12 + 1;
      } while (plVar8 != (long *)0x0);
      uVar12 = uVar12 - 1;
    }
  }
LAB_00daefa0:
  (**(code **)(*(long *)this + 0x348))(this,param_1,pLVar1,uVar3);
                    /* try { // try from 00daefbc to 00eaf00f has its CatchHandler @ 00daefbc
                       catch() { ... } // from try @ 00daefbc with catch @ 00daefbc
                       catch() { ... } // from try @ 00daf018 with catch @ 00daefbc */
  puVar10 = *(undefined8 **)(this + 0x300);
  for (puVar9 = (undefined8 *)(*(long *)(this + 0x2f8) + uVar12 * 8); puVar9 != puVar10;
      puVar9 = puVar9 + 1) {
    (**(code **)(*(long *)*puVar9 + 0x358))((long *)*puVar9,param_1,pLVar1,uVar3);
  }
  puVar10 = *(undefined8 **)(this + 0x180);
  for (puVar9 = (undefined8 *)(*(long *)(this + 0x178) + uVar11 * 8); puVar9 != puVar10;
      puVar9 = puVar9 + 1) {
                    /* try { // try from 00daf010 to 00eaf017 has its CatchHandler @ 00daf070 */
                    /* try { // try from 00daf018 to 00eaf08b has its CatchHandler @ 00daefbc */
    (**(code **)(*(long *)*puVar9 + 0x358))((long *)*puVar9,param_1,pLVar1,uVar3);
  }
  CustomCommand::init((CustomCommand *)(this + 0x6c0),*(float *)(this + 0x170));
  local_88 = *(undefined8 *)(this + 0x5f0);
  local_a0 = &PTR_FUN_016a8020;
  uStack_90 = 0;
  local_98 = StencilStateManager::onAfterVisit;
  local_80 = &local_a0;
  FUN_008820fc(&local_a0,this + 0x6e0);
                    /* catch() { ... } // from try @ 00daf010 with catch @ 00daf070 */
  if (&local_a0 == local_80) {
                    /* try { // try from 00daf08c to 00eaf0db has its CatchHandler @ 00daf08c
                       catch() { ... } // from try @ 00daf08c with catch @ 00daf08c
                       catch() { ... } // from try @ 00daf0f0 with catch @ 00daf08c
                       catch() { ... } // from try @ 00daf134 with catch @ 00daf08c
                       catch() { ... } // from try @ 00daf20c with catch @ 00daf08c */
    pcVar6 = (code *)(*local_80)[4];
LAB_00daf090:
    (*pcVar6)();
  }
  else if (local_80 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_80)[5];
    goto LAB_00daf090;
  }
  Renderer::addCommand(param_1,(RenderCommand *)(this + 0x6c0));
  Renderer::popGroup(param_1);
  Director::popMatrix(pDVar5,0);
LAB_00daf0b4:
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* try { // try from 00daf0dc to 00eaf0ef has its CatchHandler @ 00daf218 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

