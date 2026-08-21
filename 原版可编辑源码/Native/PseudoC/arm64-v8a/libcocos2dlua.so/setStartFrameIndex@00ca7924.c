
/* cocostudio::timeline::InnerActionFrame::setStartFrameIndex(int) */

void __thiscall
cocostudio::timeline::InnerActionFrame::setStartFrameIndex(InnerActionFrame *this,int param_1)

{
  if (this[0x80] != (InnerActionFrame)0x0) {
    return;
  }
  *(int *)(this + 0x5c) = param_1;
  return;
}

