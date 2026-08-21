
/* universe::MergeFile::~MergeFile() */

void __thiscall universe::MergeFile::~MergeFile(MergeFile *this)

{
  MergeFile *pMVar1;
  code *pcVar2;
  
  pMVar1 = *(MergeFile **)(this + 0x50);
                    /* try { // try from 00a09104 to 00b0910b has its CatchHandler @ 00a095cc */
  *(undefined ***)this = &PTR__MergeFile_01c6cce0;
  if (this + 0x30 == pMVar1) {
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x20);
  }
  else {
    if (pMVar1 == (MergeFile *)0x0) goto LAB_00a09138;
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x28);
  }
                    /* try { // try from 00a09134 to 00b09143 has its CatchHandler @ 00a096e8 */
  (*pcVar2)();
LAB_00a09138:
  Example::~Example((Example *)this);
  return;
}

