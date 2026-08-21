
/* v8::internal::Ticker::SampleStack(v8::RegisterState const&) */

void __thiscall v8::internal::Ticker::SampleStack(Ticker *this,RegisterState *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  undefined4 local_1058 [2];
  undefined8 local_1050;
  undefined8 uStack_1048;
  undefined8 local_50;
  undefined2 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (*(long *)(this + 0x30) != 0) {
    local_1058[0] = 5;
    local_48 = 0x200;
    local_50 = 0;
    uStack_1048 = 0;
    local_1050 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    TickSample::Init((TickSample *)local_1058,*(undefined8 *)(this + 0x18),param_1,0,1,1,0);
    lVar4 = *(long *)(this + 0x30);
    piVar2 = (int *)(lVar4 + 0x81438);
    iVar3 = *piVar2;
    uVar1 = iVar3 + 0x80;
    if (-1 < iVar3 + 1) {
      uVar1 = iVar3 + 1;
    }
    if ((iVar3 + 1) - (uVar1 & 0xffffff80) == *(int *)(lVar4 + 0x8143c)) {
      *(undefined1 *)(lVar4 + 0x81440) = 1;
    }
    else {
      memcpy((void *)(lVar4 + (long)iVar3 * 0x1028 + 0x38),local_1058,0x1028);
      iVar3 = *piVar2;
      uVar1 = iVar3 + 0x80;
      if (-1 < iVar3 + 1) {
        uVar1 = iVar3 + 1;
      }
      *piVar2 = (iVar3 + 1) - (uVar1 & 0xffffff80);
      base::Semaphore::Signal((Semaphore *)(lVar4 + 0x81444));
    }
  }
  return;
}

