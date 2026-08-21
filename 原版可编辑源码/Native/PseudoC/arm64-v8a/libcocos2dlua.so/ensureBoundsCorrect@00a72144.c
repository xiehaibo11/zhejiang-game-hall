
/* fairygui::GComponent::ensureBoundsCorrect() */

void __thiscall fairygui::GComponent::ensureBoundsCorrect(GComponent *this)

{
  if (this[600] != (GComponent)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00a72154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0xe8))();
    return;
  }
  return;
}

