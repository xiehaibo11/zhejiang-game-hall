
/* WARNING: Type propagation algorithm not settling */
/* universe::DownloadTask::~DownloadTask() */

void __thiscall universe::DownloadTask::~DownloadTask(DownloadTask *this)

{
  DownloadTask DVar1;
  
  *(undefined ***)this = &PTR__DownloadTask_016a0ef8;
                    /* try { // try from 009ee558 to 00aee593 has its CatchHandler @ 009ee558
                       catch() { ... } // from try @ 009ee558 with catch @ 009ee558
                       catch() { ... } // from try @ 009ee5fc with catch @ 009ee558 */
  if (*(FILE **)(this + 0xe8) != (FILE *)0x0) {
    fclose(*(FILE **)(this + 0xe8));
  }
  if (((byte)this[0xf0] & 1) == 0) {
    DVar1 = this[200];
  }
  else {
    operator_delete(*(void **)(this + 0x100));
    DVar1 = this[200];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0xa8];
  }
  else {
    operator_delete(*(void **)(this + 0xd8));
    DVar1 = this[0xa8];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x90];
  }
  else {
    operator_delete(*(void **)(this + 0xb8));
    DVar1 = this[0x90];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x78];
  }
  else {
    operator_delete(*(void **)(this + 0xa0));
                    /* try { // try from 009ee5f0 to 00aee5fb has its CatchHandler @ 009ee680 */
    DVar1 = this[0x78];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x50];
  }
  else {
                    /* try { // try from 009ee5fc to 00aee6e7 has its CatchHandler @ 009ee558 */
    operator_delete(*(void **)(this + 0x88));
    DVar1 = this[0x50];
  }
  if (((byte)DVar1 & 1) == 0) {
    DVar1 = this[0x38];
                    /* try { // try from 009ee594 to 00aee5d3 has its CatchHandler @ 009ee6cc */
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
  core::Provided::~Provided((Provided *)this);
  return;
}

