
/* universe::FileSystemAndroid::~FileSystemAndroid() */

void __thiscall universe::FileSystemAndroid::~FileSystemAndroid(FileSystemAndroid *this)

{
  FileSystemAndroid *pFVar1;
  code *pcVar2;
  
  pFVar1 = *(FileSystemAndroid **)(this + 0x40);
  *(undefined ***)this = &PTR__TanGaoXiong_016a0090;
  if (this + 0x20 == pFVar1) {
    pcVar2 = *(code **)(*(long *)pFVar1 + 0x20);
  }
  else {
    if (pFVar1 == (FileSystemAndroid *)0x0) goto LAB_009de7b0;
                    /* try { // try from 009de798 to 00ade7e7 has its CatchHandler @ 009de798
                       catch() { ... } // from try @ 009de798 with catch @ 009de798
                       catch() { ... } // from try @ 009de830 with catch @ 009de798
                       catch() { ... } // from try @ 009de8b0 with catch @ 009de798 */
    pcVar2 = *(code **)(*(long *)pFVar1 + 0x28);
  }
  (*pcVar2)();
LAB_009de7b0:
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
  operator_delete(this);
  return;
}

