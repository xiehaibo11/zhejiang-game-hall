
/* fairygui::GObject::removeFromParent() */

void __thiscall fairygui::GObject::removeFromParent(GObject *this)

{
  if (*(GComponent **)(this + 0xa0) != (GComponent *)0x0) {
    GComponent::removeChild(*(GComponent **)(this + 0xa0),this);
    return;
  }
                    /* try { // try from 00a8352c to 00b8355b has its CatchHandler @ 00a834a4 */
  return;
}

