
/* cocostudio::ProcessBase::getCurrentFrameIndex() */

int __thiscall cocostudio::ProcessBase::getCurrentFrameIndex(ProcessBase *this)

{
  int iVar1;
  
  iVar1 = (int)(*(float *)(this + 0x2c) * (float)(*(int *)(this + 0x30) + -1));
  *(int *)(this + 0x48) = iVar1;
  return iVar1;
}

