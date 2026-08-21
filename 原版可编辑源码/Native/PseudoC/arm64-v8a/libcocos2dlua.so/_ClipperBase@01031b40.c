
/* ClipperLib::ClipperBase::~ClipperBase() */

void __thiscall ClipperLib::ClipperBase::~ClipperBase(ClipperBase *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  
                    /* try { // try from 01031b40 to 01131b63 has its CatchHandler @ 0103332c */
  *(undefined ***)this = &PTR__ClipperBase_01727a98;
  pvVar3 = *(void **)(this + 0x10);
                    /* try { // try from 01031b64 to 01131b8f has its CatchHandler @ 01031838 */
  while (pvVar3 != (void *)0x0) {
    pvVar6 = *(void **)((long)pvVar3 + 0x18);
    operator_delete(pvVar3);
    *(void **)(this + 0x10) = pvVar6;
    pvVar3 = pvVar6;
  }
  puVar2 = *(undefined8 **)(this + 0x20);
  puVar5 = *(undefined8 **)(this + 0x28);
  *(undefined8 *)(this + 8) = 0;
  if (puVar5 != puVar2) {
    uVar7 = 0;
    pvVar3 = (void *)*puVar2;
    puVar1 = puVar2;
    puVar4 = puVar5;
    while( true ) {
      puVar5 = puVar1;
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
        puVar2 = *(undefined8 **)(this + 0x20);
        puVar4 = *(undefined8 **)(this + 0x28);
        puVar5 = puVar2;
      }
      uVar7 = uVar7 + 1;
      if ((ulong)((long)puVar4 - (long)puVar5 >> 3) <= uVar7) break;
                    /* try { // try from 01031bb4 to 01131bdf has its CatchHandler @ 01031838 */
      pvVar3 = (void *)puVar5[uVar7];
      puVar1 = puVar5;
    }
  }
  *(undefined8 **)(this + 0x28) = puVar5;
  this[0x18] = (ClipperBase)0x0;
  this[0x39] = (ClipperBase)0x0;
  if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 01031be0 to 01131c03 has its CatchHandler @ 01033324 */
    *(undefined8 **)(this + 0x28) = puVar2;
    operator_delete(puVar2);
    return;
  }
  return;
}

