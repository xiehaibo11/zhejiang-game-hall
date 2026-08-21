
/* universe::MergeFileTask::~MergeFileTask() */

void __thiscall universe::MergeFileTask::~MergeFileTask(MergeFileTask *this)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  *(undefined ***)this = &PTR__MergeFileTask_016a11e0;
  if (((byte)this[0x38] & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
  pbVar4 = *(byte **)(this + 0x20);
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(this + 0x28);
    pbVar2 = pbVar4;
    if (pbVar3 != pbVar4) {
      bVar1 = pbVar3[-0x18];
      pbVar2 = pbVar3 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        if (pbVar4 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar3 = pbVar2;
        pbVar2 = pbVar2 + -0x18;
      }
      pbVar2 = *(byte **)(this + 0x20);
    }
    *(byte **)(this + 0x28) = pbVar4;
    operator_delete(pbVar2);
  }
  core::Provided::~Provided((Provided *)this);
  operator_delete(this);
  return;
}

