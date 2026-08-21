
/* universe::MergeFile::~MergeFile() */

void __thiscall universe::MergeFile::~MergeFile(MergeFile *this)

{
  MergeFile *pMVar1;
  code *pcVar2;
  
  pMVar1 = *(MergeFile **)(this + 0x50);
  *(undefined ***)this = &PTR__MergeFile_016a0b00;
  if (this + 0x30 == pMVar1) {
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x20);
  }
  else {
    if (pMVar1 == (MergeFile *)0x0) goto LAB_009e77d4;
    pcVar2 = *(code **)(*(long *)pMVar1 + 0x28);
  }
  (*pcVar2)();
LAB_009e77d4:
  Example::~Example((Example *)this);
  operator_delete(this);
  return;
}

