
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
  
                    /* try { // try from 01031c04 to 01131c2f has its CatchHandler @ 01031838 */
  *(undefined ***)this = &PTR__ClipperBase_01727a98;
  pvVar3 = *(void **)(this + 0x10);
  while (pvVar3 != (void *)0x0) {
    pvVar6 = *(void **)((long)pvVar3 + 0x18);
    operator_delete(pvVar3);
                    /* try { // try from 01031c30 to 01131c53 has its CatchHandler @ 01033320 */
    *(void **)(this + 0x10) = pvVar6;
    pvVar3 = pvVar6;
  }
  puVar2 = *(undefined8 **)(this + 0x20);
  puVar5 = *(undefined8 **)(this + 0x28);
  *(undefined8 *)(this + 8) = 0;
  if (puVar5 != puVar2) {
    uVar7 = 0;
                    /* try { // try from 01031c54 to 01131c7f has its CatchHandler @ 01031838 */
    pvVar3 = (void *)*puVar2;
    puVar1 = puVar2;
    puVar4 = puVar5;
    while( true ) {
      puVar5 = puVar1;
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
                    /* try { // try from 01031c80 to 01131ca3 has its CatchHandler @ 0103331c */
        puVar2 = *(undefined8 **)(this + 0x20);
        puVar4 = *(undefined8 **)(this + 0x28);
        puVar5 = puVar2;
      }
      uVar7 = uVar7 + 1;
      if ((ulong)((long)puVar4 - (long)puVar5 >> 3) <= uVar7) break;
      pvVar3 = (void *)puVar5[uVar7];
      puVar1 = puVar5;
    }
  }
  *(undefined8 **)(this + 0x28) = puVar5;
  this[0x18] = (ClipperBase)0x0;
  this[0x39] = (ClipperBase)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x28) = puVar2;
    operator_delete(puVar2);
  }
                    /* try { // try from 01031ca4 to 01131ccf has its CatchHandler @ 01031838 */
  operator_delete(this);
  return;
}

