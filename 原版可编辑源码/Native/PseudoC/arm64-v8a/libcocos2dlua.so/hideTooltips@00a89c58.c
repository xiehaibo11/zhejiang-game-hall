
/* fairygui::GRoot::hideTooltips() */

void __thiscall fairygui::GRoot::hideTooltips(GRoot *this)

{
  GObject *pGVar1;
  
                    /* try { // try from 00a89c60 to 00b89c7f has its CatchHandler @ 00a89f70 */
  pGVar1 = *(GObject **)(this + 0x2d0);
  if (pGVar1 != (GObject *)0x0) {
    if (*(long *)(pGVar1 + 0xa0) != 0) {
      GComponent::removeChild((GComponent *)this,pGVar1);
    }
    *(undefined8 *)(this + 0x2d0) = 0;
  }
  return;
}

