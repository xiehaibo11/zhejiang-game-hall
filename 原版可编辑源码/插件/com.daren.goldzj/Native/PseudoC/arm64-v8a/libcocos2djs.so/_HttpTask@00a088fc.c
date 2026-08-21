
/* WARNING: Type propagation algorithm not settling */
/* universe::HttpTask::~HttpTask() */

void __thiscall universe::HttpTask::~HttpTask(HttpTask *this)

{
  HttpTask HVar1;
  
  *(undefined ***)this = &PTR__HttpTask_01c6cbe8;
  if (((byte)this[0x80] & 1) == 0) {
    HVar1 = this[0x50];
  }
  else {
    operator_delete(*(void **)(this + 0x90));
    HVar1 = this[0x50];
  }
  if (((byte)HVar1 & 1) == 0) {
    HVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    HVar1 = this[0x38];
  }
  if (((byte)HVar1 & 1) == 0) {
    HVar1 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    HVar1 = this[0x20];
  }
  if (((byte)HVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  core::Provided::~Provided((Provided *)this);
  operator_delete(this);
  return;
}

