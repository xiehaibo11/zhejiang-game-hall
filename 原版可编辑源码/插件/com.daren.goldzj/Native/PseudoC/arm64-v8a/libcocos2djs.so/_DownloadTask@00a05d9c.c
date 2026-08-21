
/* WARNING: Type propagation algorithm not settling */
/* universe::DownloadTask::~DownloadTask() */

void __thiscall universe::DownloadTask::~DownloadTask(DownloadTask *this)

{
  DownloadTask DVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a05df0 with catch @ 00a05da8
                        */
  *(undefined ***)this = &PTR__DownloadTask_01c6c9e8;
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
                    /* try { // try from 00a05de8 to 00b05def has its CatchHandler @ 00a05f18 */
    DVar1 = this[0x78];
  }
  else {
    operator_delete(*(void **)(this + 0xa0));
    DVar1 = this[0x78];
  }
  if (((byte)DVar1 & 1) == 0) {
                    /* try { // try from 00a05df0 to 00b05f33 has its CatchHandler @ 00a05da8 */
    DVar1 = this[0x50];
  }
  else {
    operator_delete(*(void **)(this + 0x88));
    DVar1 = this[0x50];
  }
  if (((byte)DVar1 & 1) == 0) {
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
  core::Provided::~Provided((Provided *)this);
  return;
}

