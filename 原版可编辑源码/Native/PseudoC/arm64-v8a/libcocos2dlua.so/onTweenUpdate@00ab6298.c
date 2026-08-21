
/* fairygui::GearXY::onTweenUpdate(fairygui::GTweener*) */

void fairygui::GearXY::onTweenUpdate(GTweener *param_1)

{
  GObject *this;
  
  this = *(GObject **)(param_1 + 8);
                    /* try { // try from 00ab62ac to 00bb62fb has its CatchHandler @ 00ab6564 */
  this[0x99] = (GObject)0x1;
  GObject::setPosition
            (this,*(float *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) + 0x58),
             *(float *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) + 0x5c));
  *(undefined1 *)(*(long *)(param_1 + 8) + 0x99) = 0;
  return;
}

