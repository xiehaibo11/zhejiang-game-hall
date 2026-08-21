
/* universe::DecompressTask::~DecompressTask() */

void __thiscall universe::DecompressTask::~DecompressTask(DecompressTask *this)

{
  DecompressTask DVar1;
  
                    /* try { // try from 009ee27c to 00aee2d3 has its CatchHandler @ 009ee200 */
  *(undefined ***)this = &PTR__DecompressTask_016a0de8;
  if (((byte)this[0x50] & 1) == 0) {
    DVar1 = this[0x38];
  }
  else {
                    /* try { // try from 009ee2d4 to 00aee2e7 has its CatchHandler @ 009ee2f0 */
    operator_delete(*(void **)(this + 0x60));
    DVar1 = this[0x38];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x20];
  }
  else {
                    /* try { // try from 009ee2e8 to 00aee30b has its CatchHandler @ 009ee200 */
    operator_delete(*(void **)(this + 0x48));
    DVar1 = this[0x20];
                    /* catch() { ... } // from try @ 009ee250 with catch @ 009ee2f0
                       catch() { ... } // from try @ 009ee2d4 with catch @ 009ee2f0 */
  }
  if (((byte)DVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  core::Provided::~Provided((Provided *)this);
  operator_delete(this);
  return;
}

