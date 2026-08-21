
/* universe::MergeFileTask::~MergeFileTask() */

void __thiscall universe::MergeFileTask::~MergeFileTask(MergeFileTask *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
                    /* try { // try from 00a09074 to 00b0907b has its CatchHandler @ 00a095e0 */
  *(undefined ***)this = &PTR__MergeFileTask_01c6cd00;
  if (((byte)this[0x38] & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
  pbVar2 = *(byte **)(this + 0x20);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(this + 0x28);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar2 != pbVar3);
      pbVar3 = *(byte **)(this + 0x20);
    }
    *(byte **)(this + 0x28) = pbVar2;
                    /* try { // try from 00a090cc to 00b090e3 has its CatchHandler @ 00a096f8 */
    operator_delete(pbVar3);
  }
  core::Provided::~Provided((Provided *)this);
  operator_delete(this);
  return;
}

