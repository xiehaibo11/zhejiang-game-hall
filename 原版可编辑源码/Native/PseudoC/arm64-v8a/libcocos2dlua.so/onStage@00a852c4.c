
/* fairygui::GObject::onStage() const */

bool __thiscall fairygui::GObject::onStage(GObject *this)

{
  long lVar1;
  
                    /* try { // try from 00a852c4 to 00b852d7 has its CatchHandler @ 00a85330 */
  lVar1 = (**(code **)(**(long **)(this + 0xa8) + 0x368))();
                    /* try { // try from 00a852dc to 00b852ef has its CatchHandler @ 00a85334 */
  return lVar1 != 0;
}

