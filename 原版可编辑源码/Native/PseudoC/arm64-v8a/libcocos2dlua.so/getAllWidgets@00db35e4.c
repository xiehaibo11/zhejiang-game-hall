
/* cocos2d::ui::RelativeLayoutManager::getAllWidgets(cocos2d::ui::LayoutProtocol*) */

void cocos2d::ui::RelativeLayoutManager::getAllWidgets(LayoutProtocol *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long **pplVar6;
  long lVar7;
  Ref *pRVar8;
  undefined8 uVar9;
  long *in_x1;
  vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>> *in_x8;
  long *plVar10;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  Ref *local_70;
  long local_68;
  
                    /* try { // try from 00db35f0 to 00eb35ff has its CatchHandler @ 00db3664 */
                    /* try { // try from 00db3600 to 00eb369f has its CatchHandler @ 00db347c */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pplVar6 = (long **)(**(code **)(*in_x1 + 0x20))();
  local_88 = (long *)0x0;
  local_80 = (long *)0x0;
  local_78 = 0;
  if ((&local_88 == pplVar6) ||
     (std::__ndk1::vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>>::
      assign<cocos2d::Node**>
                ((vector<cocos2d::Node*,std::__ndk1::allocator<cocos2d::Node*>> *)&local_88,
                 (Node **)*pplVar6,(Node **)pplVar6[1]), plVar3 = local_80, plVar10 = local_88,
     local_88 == local_80)) {
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
    plVar10 = local_88;
    plVar3 = local_88;
    plVar4 = local_80;
                    /* catch() { ... } // from try @ 00db36f4 with catch @ 00db373c */
  }
  else {
    do {
      Ref::retain((Ref *)*plVar10);
      plVar5 = local_80;
      plVar10 = plVar10 + 1;
                    /* catch() { ... } // from try @ 00db3588 with catch @ 00db3660 */
                    /* catch() { ... } // from try @ 00db35f0 with catch @ 00db3664 */
    } while (plVar3 != plVar10);
                    /* catch() { ... } // from try @ 00db35bc with catch @ 00db3668 */
    *(undefined8 *)in_x8 = 0;
    *(undefined8 *)(in_x8 + 8) = 0;
    *(undefined8 *)(in_x8 + 0x10) = 0;
    plVar10 = local_80;
    plVar3 = local_80;
    plVar4 = local_80;
    if (local_88 != local_80) {
      lVar7 = *local_88;
      plVar1 = local_88;
      while( true ) {
                    /* try { // try from 00db36a0 to 00eb36f3 has its CatchHandler @ 00db36a0
                       catch() { ... } // from try @ 00db36a0 with catch @ 00db36a0
                       catch() { ... } // from try @ 00db370c with catch @ 00db36a0 */
        if ((lVar7 != 0) &&
           (pRVar8 = (Ref *)__dynamic_cast(lVar7,&Node::typeinfo,&Widget::typeinfo,0),
           pRVar8 != (Ref *)0x0)) {
          uVar9 = (**(code **)(*(long *)pRVar8 + 0x5f8))();
                    /* try { // try from 00db36f4 to 00eb370b has its CatchHandler @ 00db373c */
          lVar7 = __dynamic_cast(uVar9,&LayoutParameter::typeinfo,&RelativeLayoutParameter::typeinfo
                                 ,0);
          *(undefined1 *)(lVar7 + 0x70) = 0;
                    /* try { // try from 00db370c to 00eb374f has its CatchHandler @ 00db36a0 */
          *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
          plVar10 = *(long **)(in_x8 + 8);
          local_70 = pRVar8;
          if (plVar10 == *(long **)(in_x8 + 0x10)) {
            std::__ndk1::vector<cocos2d::ui::Widget*,std::__ndk1::allocator<cocos2d::ui::Widget*>>::
            __push_back_slow_path<cocos2d::ui::Widget*const&>(in_x8,(Widget **)&local_70);
          }
          else {
            *plVar10 = (long)pRVar8;
            *(long **)(in_x8 + 8) = plVar10 + 1;
          }
          Ref::retain(local_70);
        }
        plVar1 = plVar1 + 1;
        plVar10 = local_88;
        plVar3 = local_88;
        plVar4 = local_80;
        if (plVar5 == plVar1) break;
        lVar7 = *plVar1;
      }
    }
  }
  for (; plVar5 = local_80, plVar10 != local_80; plVar10 = plVar10 + 1) {
                    /* try { // try from 00db3750 to 00eb37fb has its CatchHandler @ 00db3750
                       catch() { ... } // from try @ 00db3750 with catch @ 00db3750
                       catch() { ... } // from try @ 00db3808 with catch @ 00db3750 */
    local_80 = plVar4;
    Ref::release((Ref *)*plVar10);
    plVar3 = local_88;
    plVar4 = local_80;
    local_80 = plVar5;
  }
  local_80 = plVar3;
  if (plVar3 != (long *)0x0) {
    operator_delete(plVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

