
/* fairygui::GTweener::_to(float, float, float) */

void __thiscall fairygui::GTweener::_to(GTweener *this,float param_1,float param_2,float param_3)

{
  *(float *)(this + 0x28) = param_1;
  *(float *)(this + 0x40) = param_2;
  *(float *)(this + 0x58) = param_1;
  *(undefined4 *)(this + 0xd8) = 1;
  *(float *)(this + 0xa4) = param_3;
  return;
}

