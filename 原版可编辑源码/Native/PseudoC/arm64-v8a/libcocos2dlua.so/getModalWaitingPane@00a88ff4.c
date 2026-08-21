
/* fairygui::GRoot::getModalWaitingPane() */

undefined8 __thiscall fairygui::GRoot::getModalWaitingPane(GRoot *this)

{
  ulong uVar1;
  GObject *pGVar2;
  undefined8 uVar3;
  
  uVar1 = (ulong)(UIConfig::globalModalWaiting >> 1);
  if ((UIConfig::globalModalWaiting & 1) != 0) {
    uVar1 = DAT_01782740;
  }
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    pGVar2 = *(GObject **)(this + 0x298);
    if (pGVar2 == (GObject *)0x0) {
      pGVar2 = (GObject *)
               UIPackage::createObjectFromURL((basic_string *)&UIConfig::globalModalWaiting);
      *(GObject **)(this + 0x298) = pGVar2;
      GObject::setSortingOrder(pGVar2,0x7fffffff);
      cocos2d::Ref::retain(*(Ref **)(this + 0x298));
      pGVar2 = *(GObject **)(this + 0x298);
    }
    GObject::setSize(pGVar2,*(float *)(this + 200),*(float *)(this + 0xcc),false);
    GObject::addRelation(*(GObject **)(this + 0x298),this,0x18,0);
    uVar3 = *(undefined8 *)(this + 0x298);
  }
  return uVar3;
}

