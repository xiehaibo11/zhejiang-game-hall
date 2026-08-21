
/* fairygui::GLoader::setAutoSize(bool) */

void __thiscall fairygui::GLoader::setAutoSize(GLoader *this,bool param_1)

{
  if (this[0x1f8] == (GLoader)param_1) {
    return;
  }
                    /* try { // try from 00a7efb8 to 00b7f003 has its CatchHandler @ 00a7efb8
                       catch() { ... } // from try @ 00a7efb8 with catch @ 00a7efb8
                       catch() { ... } // from try @ 00a7f020 with catch @ 00a7efb8 */
  this[0x1f8] = (GLoader)param_1;
  updateLayout(this);
  return;
}

