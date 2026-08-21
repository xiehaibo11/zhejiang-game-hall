
/* fairygui::HtmlObject::~HtmlObject() */

void __thiscall fairygui::HtmlObject::~HtmlObject(HtmlObject *this)

{
  long lVar1;
  long lVar2;
  GObject *pGVar3;
  Ref *local_50;
  long local_48;
  void *pvStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR__HtmlObject_016aa9b8;
  if (*(GLoader **)(this + 0x18) == (GLoader *)0x0) goto LAB_00abb1c8;
  if (*(int *)(*(long *)(this + 8) + 8) == 1) {
    GLoader::setURL(*(GLoader **)(this + 0x18),(basic_string *)&cocos2d::STD_STRING_EMPTY);
  }
  if (usePool != '\0') {
    GObject::getResourceURL();
    if (((ulong)local_50 & 1) == 0) {
                    /* try { // try from 00abb148 to 00bbb197 has its CatchHandler @ 00abb148
                       catch() { ... } // from try @ 00abb148 with catch @ 00abb148
                       catch() { ... } // from try @ 00abb1d0 with catch @ 00abb148
                       catch() { ... } // from try @ 00abb20c with catch @ 00abb148 */
      pGVar3 = *(GObject **)(this + 0x18);
      if (1 < (byte)local_50) {
LAB_00abb1ac:
        GObjectPool::returnObject((GObjectPool *)objectPool,pGVar3);
        goto LAB_00abb1bc;
      }
    }
    else {
      operator_delete(pvStack_40);
      pGVar3 = *(GObject **)(this + 0x18);
      if (local_48 != 0) goto LAB_00abb1ac;
    }
    if ((pGVar3 != (GObject *)0x0) &&
       (lVar2 = __dynamic_cast(pGVar3,&GObject::typeinfo,&GLoader::typeinfo,0), lVar2 != 0)) {
      local_50 = (Ref *)pGVar3;
      if (DAT_01782a98 == DAT_01782aa0) {
                    /* try { // try from 00abb1f8 to 00bbb20b has its CatchHandler @ 00abb244 */
        std::__ndk1::vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>>::
        __push_back_slow_path<fairygui::GObject*const&>
                  ((vector<fairygui::GObject*,std::__ndk1::allocator<fairygui::GObject*>> *)
                   &loaderPool,(GObject **)&local_50);
      }
      else {
        *DAT_01782a98 = (long)pGVar3;
        DAT_01782a98 = DAT_01782a98 + 1;
                    /* try { // try from 00abb198 to 00bbb1cf has its CatchHandler @ 00abb244 */
      }
      cocos2d::Ref::retain(local_50);
    }
  }
LAB_00abb1bc:
  if (*(Ref **)(this + 0x18) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x18));
  }
LAB_00abb1c8:
                    /* try { // try from 00abb1d0 to 00bbb1f7 has its CatchHandler @ 00abb148 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

