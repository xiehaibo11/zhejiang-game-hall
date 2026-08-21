
/* ClipperLib::ClipperBase::Reset() */

void __thiscall ClipperLib::ClipperBase::Reset(ClipperBase *this)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(this + 0x10);
  *(long *)(this + 8) = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)(lVar1 + 8);
    while( true ) {
      if (puVar2 != (undefined8 *)0x0) {
        *(undefined4 *)((long)puVar2 + 0x4c) = 1;
                    /* try { // try from 01032d14 to 01132d23 has its CatchHandler @ 010331f4 */
        *(undefined4 *)((long)puVar2 + 0x5c) = 0xffffffff;
        puVar2[3] = puVar2[1];
        puVar2[2] = *puVar2;
      }
      puVar2 = *(undefined8 **)(lVar1 + 0x10);
      if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 01032d24 to 01132d2f has its CatchHandler @ 010331e4 */
        *(undefined4 *)((long)puVar2 + 0x4c) = 2;
        *(undefined4 *)((long)puVar2 + 0x5c) = 0xffffffff;
        puVar2[3] = puVar2[1];
        puVar2[2] = *puVar2;
      }
      lVar1 = *(long *)(lVar1 + 0x18);
      if (lVar1 == 0) break;
                    /* try { // try from 01032d04 to 01132d0f has its CatchHandler @ 010331d8 */
      puVar2 = *(undefined8 **)(lVar1 + 8);
    }
  }
  return;
}

