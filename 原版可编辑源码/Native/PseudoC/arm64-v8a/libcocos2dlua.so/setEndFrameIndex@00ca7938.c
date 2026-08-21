
/* cocostudio::timeline::InnerActionFrame::setEndFrameIndex(int) */

void __thiscall
cocostudio::timeline::InnerActionFrame::setEndFrameIndex(InnerActionFrame *this,int param_1)

{
  if (this[0x80] != (InnerActionFrame)0x0) {
    return;
  }
  *(int *)(this + 0x60) = param_1;
  return;
}

