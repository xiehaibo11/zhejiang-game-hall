
/* fairygui::GObject::center(bool) */

void __thiscall fairygui::GObject::center(GObject *this,bool param_1)

{
  long lVar1;
  
                    /* try { // try from 00a83d04 to 00b83d9f has its CatchHandler @ 00a83b24 */
  lVar1 = GRoot::_inst;
  if (*(long *)(this + 0xa0) != 0) {
    lVar1 = *(long *)(this + 0xa0);
  }
                    /* catch() { ... } // from try @ 00a83cb8 with catch @ 00a83d50 */
                    /* catch() { ... } // from try @ 00a83cd0 with catch @ 00a83d54 */
  setPosition(this,(float)(int)((*(float *)(lVar1 + 200) - *(float *)(this + 200)) * 0.5),
              (float)(int)((*(float *)(lVar1 + 0xcc) - *(float *)(this + 0xcc)) * 0.5));
  if (param_1) {
    Relations::add(*(Relations **)(this + 0x138),lVar1,3,0);
                    /* catch() { ... } // from try @ 00a83c84 with catch @ 00a83d84 */
    Relations::add(*(Relations **)(this + 0x138),lVar1,10,0);
    return;
  }
  return;
}

