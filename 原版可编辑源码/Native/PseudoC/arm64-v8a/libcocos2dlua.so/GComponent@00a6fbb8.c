
/* fairygui::GComponent::GComponent() */

void __thiscall fairygui::GComponent::GComponent(GComponent *this)

{
  GObject::GObject((GObject *)this);
  this[0x1d8] = (GComponent)0x0;
  *(undefined ***)this = &PTR__GComponent_016a51c0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  Margin::Margin((Margin *)(this + 0x238));
  *(undefined4 *)(this + 0x274) = 0;
                    /* try { // try from 00a6fc20 to 00b6fca7 has its CatchHandler @ 00a6ff14 */
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined2 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  this[0x270] = (GComponent)0x0;
  return;
}

