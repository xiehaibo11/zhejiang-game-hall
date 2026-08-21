
/* fairygui::GLoader::loadContent() */

void __thiscall fairygui::GLoader::loadContent(GLoader *this)

{
  GLoader GVar1;
  int iVar2;
  GLoader *__s1;
  ulong __n;
  
  clearContent(this);
  GVar1 = this[0x1d8];
  if (((byte)GVar1 & 1) == 0) {
    if ((byte)GVar1 >> 1 == 0) {
      return;
    }
  }
  else {
                    /* try { // try from 00a7eaac to 00b7eb17 has its CatchHandler @ 00a7eaac
                       catch() { ... } // from try @ 00a7eaac with catch @ 00a7eaac
                       catch() { ... } // from try @ 00a7ed90 with catch @ 00a7eaac
                       catch() { ... } // from try @ 00a7ee30 with catch @ 00a7eaac */
    if (*(long *)(this + 0x1e0) == 0) {
      return;
    }
  }
  if (((byte)GVar1 & 1) == 0) {
    __s1 = this + 0x1d9;
    if ((byte)GVar1 < 10) {
      __n = (ulong)((byte)GVar1 >> 1);
      goto joined_r0x00a7eac8;
    }
LAB_00a7ead0:
    __n = 5;
  }
  else {
    __n = *(ulong *)(this + 0x1e0);
    __s1 = *(GLoader **)(this + 0x1e8);
    if (4 < __n) goto LAB_00a7ead0;
joined_r0x00a7eac8:
    if (__n == 0) goto LAB_00a7eb00;
  }
  iVar2 = memcmp(__s1,"ui://",__n);
  if ((4 < __n) && (iVar2 == 0)) {
    loadFromPackage(this);
    return;
  }
LAB_00a7eb00:
  *(undefined4 *)(this + 0x210) = 3;
                    /* try { // try from 00a7eb18 to 00b7eb2f has its CatchHandler @ 00a7eea8 */
                    /* WARNING: Could not recover jumptable at 0x00a7eb1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))(this);
  return;
}

