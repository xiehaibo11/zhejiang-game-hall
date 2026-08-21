
/* cocostudio::ProcessBase::play(int, int, int, int) */

void __thiscall
cocostudio::ProcessBase::play(ProcessBase *this,int param_1,int param_2,int param_3,int param_4)

{
  *(undefined2 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(int *)(this + 0x4c) = param_1;
  this[0x2a] = (ProcessBase)0x1;
  *(int *)(this + 0x38) = param_4;
  return;
}

