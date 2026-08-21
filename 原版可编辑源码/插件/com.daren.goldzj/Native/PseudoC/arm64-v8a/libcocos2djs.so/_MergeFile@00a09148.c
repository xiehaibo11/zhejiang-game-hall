
/* universe::MergeFile::~MergeFile() */

void __thiscall universe::MergeFile::~MergeFile(MergeFile *this)

{
  MergeFile *pMVar1;
  code *pcVar2;
  
                    /* try { // try from 00a0915c to 00b0917b has its CatchHandler @ 00a09728 */
  pMVar1 = *(MergeFile **)(this + 0x50);
  *(undefined ***)this = &PTR__MergeFile_01c6cce0;
  if (this + 0x30 == pMVar1) {
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x20);
  }
  else {
    if (pMVar1 == (MergeFile *)0x0) goto LAB_00a09194;
                    /* try { // try from 00a0917c to 00b09193 has its CatchHandler @ 00a095c8 */
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a09194:
  Example::~Example((Example *)this);
  operator_delete(this);
  return;
}

