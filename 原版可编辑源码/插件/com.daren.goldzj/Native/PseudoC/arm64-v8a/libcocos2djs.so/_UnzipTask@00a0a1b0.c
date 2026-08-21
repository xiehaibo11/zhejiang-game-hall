
/* WARNING: Type propagation algorithm not settling */
/* universe::UnzipTask::~UnzipTask() */

void __thiscall universe::UnzipTask::~UnzipTask(UnzipTask *this)

{
  UnzipTask UVar1;
  
                    /* try { // try from 00a0a1b0 to 00b0a1f7 has its CatchHandler @ 00a0a280 */
  *(undefined ***)this = &PTR__UnzipTask_01c6cd80;
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
                    /* catch() { ... } // from try @ 00a0a1f8 with catch @ 00a0a234 */
    operator_delete(*(void **)(this + 0x48));
                    /* catch() { ... } // from try @ 00a0a1a4 with catch @ 00a0a238 */
    UVar1 = this[0x20];
  }
  if (((byte)UVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
                    /* try { // try from 00a0a1f8 to 00b0a1fb has its CatchHandler @ 00a0a234 */
                    /* try { // try from 00a0a1fc to 00b0a55b has its CatchHandler @ 00a0a0e4 */
  core::Provided::~Provided((Provided *)this);
  operator_delete(this);
  return;
}

