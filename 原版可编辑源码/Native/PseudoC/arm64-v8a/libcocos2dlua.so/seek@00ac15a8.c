
/* fairygui::GTweener::seek(float) */

void __thiscall fairygui::GTweener::seek(GTweener *this,float param_1)

{
  if (this[0x9c] != (GTweener)0x0) {
    return;
  }
  *(float *)(this + 0x1b8) = param_1;
  if (param_1 < *(float *)(this + 0xa0)) {
    if (this[0x1b0] == (GTweener)0x0) {
      return;
    }
    *(float *)(this + 0x1b8) = *(float *)(this + 0xa0);
  }
  update(this);
  return;
}

