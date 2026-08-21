
/* fairygui::GLoader3D::setAutoSize(bool) */

void __thiscall fairygui::GLoader3D::setAutoSize(GLoader3D *this,bool param_1)

{
  if (this[0x1f8] == (GLoader3D)param_1) {
                    /* try { // try from 00a80380 to 00b8071f has its CatchHandler @ 00a80380
                       catch() { ... } // from try @ 00a80380 with catch @ 00a80380
                       catch() { ... } // from try @ 00a807a0 with catch @ 00a80380 */
    return;
  }
  this[0x1f8] = (GLoader3D)param_1;
  updateLayout(this);
  return;
}

