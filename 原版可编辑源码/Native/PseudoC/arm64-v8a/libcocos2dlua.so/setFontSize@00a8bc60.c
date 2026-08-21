
/* fairygui::GTextField::setFontSize(float) */

void __thiscall fairygui::GTextField::setFontSize(GTextField *this,float param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0xd0))();
  if (*(float *)(lVar1 + 0x18) != param_1) {
    *(float *)(lVar1 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00a8bcac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0xd8))(this);
    return;
  }
  return;
}

