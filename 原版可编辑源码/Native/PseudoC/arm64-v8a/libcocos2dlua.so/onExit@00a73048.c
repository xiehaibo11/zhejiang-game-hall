
/* fairygui::GComponent::onExit() */

void __thiscall fairygui::GComponent::onExit(GComponent *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  GObject::onExit((GObject *)this);
                    /* try { // try from 00a7305c to 00b7308f has its CatchHandler @ 00a7315c */
  puVar1 = *(undefined8 **)(this + 0x218);
  for (puVar2 = *(undefined8 **)(this + 0x210); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    Transition::onOwnerRemovedFromStage((Transition *)*puVar2);
  }
  return;
}

