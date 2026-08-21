
/* fairygui::ScrollPane::setScrollStep(float) */

void __thiscall fairygui::ScrollPane::setScrollStep(ScrollPane *this,float param_1)

{
  *(float *)(this + 0x28) = param_1;
  if (param_1 == 0.0) {
    param_1 = (float)UIConfig::defaultScrollStep;
    *(float *)(this + 0x28) = param_1;
  }
  *(float *)(this + 0x2c) = param_1 + param_1;
  return;
}

