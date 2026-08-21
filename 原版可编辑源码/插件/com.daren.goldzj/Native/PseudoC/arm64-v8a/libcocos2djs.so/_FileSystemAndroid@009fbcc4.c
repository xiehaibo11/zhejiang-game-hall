
/* universe::FileSystemAndroid::~FileSystemAndroid() */

void __thiscall universe::FileSystemAndroid::~FileSystemAndroid(FileSystemAndroid *this)

{
  FileSystemAndroid *pFVar1;
  code *pcVar2;
  
                    /* try { // try from 009fbcd8 to 00afbce3 has its CatchHandler @ 009fbf50 */
  pFVar1 = *(FileSystemAndroid **)(this + 0x40);
                    /* try { // try from 009fbce4 to 00afbcef has its CatchHandler @ 009fbf4c */
  *(undefined ***)this = &PTR__CustomFileManager_01c6c4f8;
                    /* try { // try from 009fbcf0 to 00afbd17 has its CatchHandler @ 009fbf64 */
  if (this + 0x20 == pFVar1) {
    pcVar2 = *(code **)(*(long *)pFVar1 + 0x20);
  }
  else {
    if (pFVar1 == (FileSystemAndroid *)0x0) goto LAB_009fbd10;
    pcVar2 = *(code **)(*(long *)pFVar1 + 0x28);
  }
  (*pcVar2)();
LAB_009fbd10:
  if (((byte)this[8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
  }
                    /* try { // try from 009fbd28 to 00afbd2f has its CatchHandler @ 009fbf34 */
  operator_delete(this);
  return;
}

