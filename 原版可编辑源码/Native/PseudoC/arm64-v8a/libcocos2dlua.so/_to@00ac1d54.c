
/* fairygui::GTweener::_to(double, double, float) */

void __thiscall fairygui::GTweener::_to(GTweener *this,double param_1,double param_2,float param_3)

{
  *(double *)(this + 0x38) = param_1;
  *(double *)(this + 0x50) = param_2;
  *(double *)(this + 0x68) = param_1;
  *(undefined4 *)(this + 0xd8) = 5;
  *(float *)(this + 0xa4) = param_3;
  return;
}

