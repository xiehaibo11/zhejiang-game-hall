
/* fairygui::GObject::handleAlphaChanged() */

void __thiscall fairygui::GObject::handleAlphaChanged(GObject *this)

{
                    /* WARNING: Could not recover jumptable at 0x00a857d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0xa8) + 0x490))
            (*(long **)(this + 0xa8),(int)(*(float *)(this + 0xec) * 255.0));
  return;
}

