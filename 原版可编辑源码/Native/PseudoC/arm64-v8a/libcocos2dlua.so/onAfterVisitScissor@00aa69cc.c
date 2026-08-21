
/* fairygui::FUIContainer::onAfterVisitScissor() */

void __thiscall fairygui::FUIContainer::onAfterVisitScissor(FUIContainer *this)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(*(long *)(this + 0x300) + 0x11) != '\0') {
    lVar1 = cocos2d::Director::getInstance();
    lVar2 = *(long *)(this + 0x300);
                    /* WARNING: Could not recover jumptable at 0x00aa6a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(lVar1 + 0x108) + 0xd8))
              (*(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0x18),
               *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20));
    return;
  }
  glDisable(0xc11);
  return;
}

