
/* universe::CopyTask::~CopyTask() */

void __thiscall universe::CopyTask::~CopyTask(CopyTask *this)

{
  CopyTask CVar1;
  
  *(undefined ***)this = &PTR__CopyTask_016a0be8;
  if (((byte)this[0x50] & 1) == 0) {
    CVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    CVar1 = this[0x38];
  }
  if (((byte)CVar1 & 1) == 0) {
    CVar1 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    CVar1 = this[0x20];
  }
  if (((byte)CVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  core::Provided::~Provided((Provided *)this);
  return;
}

