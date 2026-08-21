
/* fairygui::GComponent::onEnter() */

void __thiscall fairygui::GComponent::onEnter(GComponent *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  GObject::onEnter((GObject *)this);
  puVar1 = *(undefined8 **)(this + 0x218);
  for (puVar2 = *(undefined8 **)(this + 0x210); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    Transition::onOwnerAddedToStage((Transition *)*puVar2);
  }
  return;
}

