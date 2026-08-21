
/* WARNING: Type propagation algorithm not settling */
/* universe::UnzipTask::~UnzipTask() */

void __thiscall universe::UnzipTask::~UnzipTask(UnzipTask *this)

{
  UnzipTask UVar1;
  
                    /* try { // try from 00a0a128 to 00b0a12f has its CatchHandler @ 00a0a270 */
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
                    /* try { // try from 00a0a160 to 00b0a177 has its CatchHandler @ 00a0a248 */
  }
  else {
    operator_delete(*(void **)(this + 0x48));
                    /* try { // try from 00a0a1a4 to 00b0a1a7 has its CatchHandler @ 00a0a238 */
    UVar1 = this[0x20];
  }
  if (((byte)UVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
                    /* try { // try from 00a0a178 to 00b0a1a3 has its CatchHandler @ 00a0a0e4 */
  core::Provided::~Provided((Provided *)this);
  return;
}

