
/* cocostudio::ProcessBase::gotoFrame(int) */

void __thiscall cocostudio::ProcessBase::gotoFrame(ProcessBase *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x34) == -3) {
    uVar1 = 2;
  }
  else {
    if (*(int *)(this + 0x34) != -2) goto LAB_00c3daa0;
    uVar1 = 0;
  }
  *(undefined4 *)(this + 0x34) = uVar1;
LAB_00c3daa0:
  *(int *)(this + 0x48) = param_1;
  *(undefined4 *)(this + 0x4c) = *(undefined4 *)(this + 0x40);
  return;
}

