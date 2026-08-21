
/* universe::DecompressTask::~DecompressTask() */

void __thiscall universe::DecompressTask::~DecompressTask(DecompressTask *this)

{
  DecompressTask DVar1;
  
  *(undefined ***)this = &PTR__DecompressTask_016a0de8;
  if (((byte)this[0x50] & 1) == 0) {
    DVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    DVar1 = this[0x38];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    DVar1 = this[0x20];
  }
  if (((byte)DVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
                    /* try { // try from 009ee250 to 00aee27b has its CatchHandler @ 009ee2f0 */
  core::Provided::~Provided((Provided *)this);
  return;
}

