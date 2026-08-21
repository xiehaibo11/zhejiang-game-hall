
/* fairygui::GRoot::onExit() */

void __thiscall fairygui::GRoot::onExit(GRoot *this)

{
                    /* try { // try from 00a89e6c to 00b89e8b has its CatchHandler @ 00a89f78 */
  GComponent::onExit((GComponent *)this);
  if (_inst == this) {
    _inst = (GRoot *)0x0;
  }
                    /* try { // try from 00a89e8c to 00b89ec3 has its CatchHandler @ 00a89b60 */
  return;
}

