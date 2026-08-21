
/* fairygui::GLoader::setPlaying(bool) */

void __thiscall fairygui::GLoader::setPlaying(GLoader *this,bool param_1)

{
  if (this[0x214] == (GLoader)param_1) {
    return;
  }
  this[0x214] = (GLoader)param_1;
  if (*(long *)(this + 0x230) != 0) {
    if (param_1) {
      (**(code **)(*(long *)*(Action **)(this + 0x220) + 0x3a8))();
    }
    else {
      cocos2d::Node::stopAction(*(Action **)(this + 0x220));
    }
  }
                    /* catch() { ... } // from try @ 00a7f004 with catch @ 00a7f09c */
  GObject::updateGear((GObject *)this,5);
  return;
}

