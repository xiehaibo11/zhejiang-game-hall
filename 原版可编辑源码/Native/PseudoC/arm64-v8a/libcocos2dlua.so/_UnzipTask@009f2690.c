
/* WARNING: Type propagation algorithm not settling */
/* universe::UnzipTask::~UnzipTask() */

void __thiscall universe::UnzipTask::~UnzipTask(UnzipTask *this)

{
  UnzipTask UVar1;
  
  *(undefined ***)this = &PTR__UnzipTask_016a1248;
  if (((byte)this[0x68] & 1) == 0) {
    UVar1 = this[0x50];
  }
  else {
    operator_delete(*(void **)(this + 0x78));
    UVar1 = this[0x50];
  }
  if (((byte)UVar1 & 1) == 0) {
    UVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    UVar1 = this[0x38];
  }
  if (((byte)UVar1 & 1) == 0) {
    UVar1 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    UVar1 = this[0x20];
  }
  if (((byte)UVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  core::Provided::~Provided((Provided *)this);
  return;
}

