
/* fairygui::GGroup::setup_afterAdd(fairygui::ByteBuffer*, int) */

void __thiscall fairygui::GGroup::setup_afterAdd(GGroup *this,ByteBuffer *param_1,int param_2)

{
  GObject::setup_afterAdd((GObject *)this,param_1,param_2);
  if (this[0xf4] != (GGroup)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a763bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 00a76324 with catch @ 00a763bc */
  (**(code **)(*(long *)this + 0x88))(this);
  return;
}

