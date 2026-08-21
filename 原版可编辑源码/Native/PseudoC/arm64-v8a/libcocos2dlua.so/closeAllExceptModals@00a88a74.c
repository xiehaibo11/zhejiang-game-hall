
/* fairygui::GRoot::closeAllExceptModals() */

void __thiscall fairygui::GRoot::closeAllExceptModals(GRoot *this)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  GObject *pGVar8;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  local_70 = (undefined8 *)0x0;
  if ((GRoot *)&local_70 == this + 0x1e0) {
    puVar7 = (undefined8 *)0x0;
    puVar3 = (undefined8 *)0x0;
    puVar4 = local_68;
  }
  else {
    std::__ndk1::vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>>::
    assign<fairygui::GObject**>
              ((vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>> *)&local_70,
               *(GObject ***)(this + 0x1e0),*(GObject ***)(this + 0x1e8));
    puVar4 = local_68;
    puVar7 = local_70;
    puVar3 = local_70;
    if (local_70 != local_68) {
      do {
                    /* try { // try from 00a88ad4 to 00b88ae7 has its CatchHandler @ 00a89614 */
        cocos2d::Ref::retain((Ref *)*puVar7);
        puVar5 = local_68;
        puVar7 = puVar7 + 1;
      } while (puVar4 != puVar7);
                    /* try { // try from 00a88ae8 to 00b88b0b has its CatchHandler @ 00a881e4 */
      puVar7 = local_68;
      puVar3 = local_68;
      puVar4 = local_68;
      if (local_70 != local_68) {
        pGVar8 = (GObject *)*local_70;
        puVar1 = local_70;
        while( true ) {
          if (((pGVar8 != (GObject *)0x0) &&
              (lVar6 = __dynamic_cast(pGVar8,&GObject::typeinfo,&Window::typeinfo,0), lVar6 != 0))
             && (pGVar8[0x2b8] == (GObject)0x0)) {
            if (*(GRoot **)(pGVar8 + 0xa0) == this) {
              GComponent::removeChild((GComponent *)this,pGVar8);
            }
                    /* try { // try from 00a88b0c to 00b88b13 has its CatchHandler @ 00a89664 */
            adjustModalLayer(this);
          }
                    /* try { // try from 00a88b14 to 00b88b1b has its CatchHandler @ 00a89660 */
          puVar1 = puVar1 + 1;
          puVar7 = local_70;
          puVar3 = local_70;
          puVar4 = local_68;
                    /* try { // try from 00a88b1c to 00b88b23 has its CatchHandler @ 00a8965c */
          if (puVar5 == puVar1) break;
          pGVar8 = (GObject *)*puVar1;
                    /* try { // try from 00a88b24 to 00b88c8b has its CatchHandler @ 00a896c0 */
        }
      }
    }
  }
  for (; puVar5 = local_68, puVar7 != local_68; puVar7 = puVar7 + 1) {
    local_68 = puVar4;
    cocos2d::Ref::release((Ref *)*puVar7);
    puVar3 = local_70;
    puVar4 = local_68;
    local_68 = puVar5;
  }
  local_68 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    operator_delete(puVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

