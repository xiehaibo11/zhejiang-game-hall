
/* ClipperLib::Clipper::~Clipper() */

void __thiscall ClipperLib::Clipper::~Clipper(Clipper *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  ulong uVar7;
  
  ~Clipper(this);
  *(undefined ***)(this + 0xa8) = &PTR__ClipperBase_01727a98;
  pvVar3 = *(void **)(this + 0xb8);
  while (pvVar3 != (void *)0x0) {
    pvVar6 = *(void **)((long)pvVar3 + 0x18);
                    /* try { // try from 010330fc to 0113310b has its CatchHandler @ 010331c0 */
    operator_delete(pvVar3);
    *(void **)(this + 0xb8) = pvVar6;
    pvVar3 = pvVar6;
  }
                    /* try { // try from 0103310c to 01133163 has its CatchHandler @ 01031838 */
  puVar2 = *(undefined8 **)(this + 200);
  puVar5 = *(undefined8 **)(this + 0xd0);
  *(undefined8 *)(this + 0xb0) = 0;
  if (puVar5 != puVar2) {
    uVar7 = 0;
    pvVar3 = (void *)*puVar2;
    puVar1 = puVar2;
    puVar4 = puVar5;
    while( true ) {
      puVar5 = puVar1;
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
        puVar2 = *(undefined8 **)(this + 200);
        puVar4 = *(undefined8 **)(this + 0xd0);
        puVar5 = puVar2;
      }
      uVar7 = uVar7 + 1;
      if ((ulong)((long)puVar4 - (long)puVar5 >> 3) <= uVar7) break;
      pvVar3 = (void *)puVar5[uVar7];
      puVar1 = puVar5;
    }
  }
  *(undefined8 **)(this + 0xd0) = puVar5;
                    /* try { // try from 01033164 to 0113316f has its CatchHandler @ 01033224 */
  this[0xc0] = (Clipper)0x0;
  this[0xe1] = (Clipper)0x0;
  if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 01033170 to 0113317b has its CatchHandler @ 010331f8 */
    *(undefined8 **)(this + 0xd0) = puVar2;
                    /* try { // try from 0103317c to 01133183 has its CatchHandler @ 010331c4 */
    operator_delete(puVar2);
    return;
  }
                    /* try { // try from 01033184 to 01133193 has its CatchHandler @ 01033198 */
  return;
}

