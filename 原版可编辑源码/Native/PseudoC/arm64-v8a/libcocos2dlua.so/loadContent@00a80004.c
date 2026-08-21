
/* fairygui::GLoader3D::loadContent() */

void __thiscall fairygui::GLoader3D::loadContent(GLoader3D *this)

{
  GLoader3D GVar1;
  int iVar2;
  GLoader3D *__s1;
  ulong __n;
  
                    /* try { // try from 00a80004 to 00b80033 has its CatchHandler @ 00a80210 */
  GVar1 = this[0x1d8];
  *(undefined8 *)(this + 0x208) = 0;
  if (((byte)GVar1 & 1) == 0) {
    if ((byte)GVar1 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(this + 0x1e0) == 0) {
    return;
  }
  if (((byte)GVar1 & 1) == 0) {
    __s1 = this + 0x1d9;
    if ((byte)GVar1 < 10) {
      __n = (ulong)((byte)GVar1 >> 1);
                    /* try { // try from 00a80040 to 00b80057 has its CatchHandler @ 00a80248 */
      goto joined_r0x00a80068;
    }
LAB_00a80070:
    __n = 5;
  }
  else {
    __n = *(ulong *)(this + 0x1e0);
    __s1 = *(GLoader3D **)(this + 0x1e8);
                    /* try { // try from 00a80064 to 00b8007b has its CatchHandler @ 00a80218 */
    if (4 < __n) goto LAB_00a80070;
joined_r0x00a80068:
    if (__n == 0) goto LAB_00a800a0;
  }
                    /* try { // try from 00a80080 to 00b80097 has its CatchHandler @ 00a8020c */
  iVar2 = memcmp(__s1,"ui://",__n);
  if ((4 < __n) && (iVar2 == 0)) {
    loadFromPackage(this);
    return;
  }
LAB_00a800a0:
                    /* try { // try from 00a800a0 to 00b800cb has its CatchHandler @ 00a80208 */
                    /* WARNING: Could not recover jumptable at 0x00a800b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0xb0))(this);
  return;
}

