
/* ClipperLib::Clipper::Execute(ClipperLib::ClipType,
   std::__ndk1::vector<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> >,
   std::__ndk1::allocator<std::__ndk1::vector<ClipperLib::IntPoint,
   std::__ndk1::allocator<ClipperLib::IntPoint> > > >&, ClipperLib::PolyFillType,
   ClipperLib::PolyFillType) */

uint __thiscall
ClipperLib::Clipper::Execute
          (Clipper *this,undefined4 param_2,vector *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  clipperException *this_00;
  long lVar7;
  ulong uVar8;
  
  if (this[0x98] == (Clipper)0x0) {
    lVar7 = *(long *)this;
    if (this[*(long *)(lVar7 + -0x18) + 0x39] != (Clipper)0x0) {
      this_00 = (clipperException *)__cxa_allocate_exception(0x20);
      clipperException::clipperException
                (this_00,"Error: PolyTree struct is need for open path clipping.");
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&clipperException::typeinfo,clipperException::~clipperException);
    }
    this[0x98] = (Clipper)0x1;
    puVar1 = *(undefined8 **)param_3;
    puVar2 = *(undefined8 **)(param_3 + 8);
    if (puVar2 != puVar1) {
      if (puVar1 != puVar2) {
        pvVar5 = (void *)puVar2[-3];
        puVar3 = puVar2 + -3;
        while( true ) {
          if (pvVar5 != (void *)0x0) {
            puVar2[-2] = pvVar5;
            operator_delete(pvVar5);
          }
          if (puVar1 == puVar3) break;
          pvVar5 = (void *)puVar3[-3];
          puVar2 = puVar3;
          puVar3 = puVar3 + -3;
        }
                    /* try { // try from 01033510 to 01133513 has its CatchHandler @ 01033544 */
        lVar7 = *(long *)this;
      }
      *(undefined8 **)(param_3 + 8) = puVar1;
    }
    *(undefined4 *)(this + 0x9c) = param_5;
    *(undefined4 *)(this + 0xa0) = param_4;
    *(undefined4 *)(this + 0x68) = param_2;
    this[0xa5] = (Clipper)0x0;
    uVar4 = (**(code **)(lVar7 + 0x18))(this);
    if ((uVar4 & 1) != 0) {
      BuildResult(this,param_3);
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01033510 with catch @ 01033544
                        */
    lVar7 = *(long *)(this + 0x10);
    if (lVar7 != *(long *)(this + 8)) {
      uVar8 = 0;
      lVar7 = *(long *)(this + 8);
      do {
        pvVar5 = *(void **)(lVar7 + uVar8 * 8);
        if (*(long *)((long)pvVar5 + 0x18) == 0) {
          if (pvVar5 != (void *)0x0) goto LAB_01033560;
        }
        else {
          *(undefined8 *)(*(long *)(*(long *)((long)pvVar5 + 0x18) + 0x20) + 0x18) = 0;
          pvVar6 = *(void **)((long)pvVar5 + 0x18);
          while (pvVar6 != (void *)0x0) {
            *(undefined8 *)((long)pvVar5 + 0x18) = *(undefined8 *)((long)pvVar6 + 0x18);
            operator_delete(pvVar6);
            pvVar6 = *(void **)((long)pvVar5 + 0x18);
          }
LAB_01033560:
          operator_delete(pvVar5);
          lVar7 = *(long *)(this + 8);
        }
        *(undefined8 *)(lVar7 + uVar8 * 8) = 0;
        lVar7 = *(long *)(this + 8);
        uVar8 = uVar8 + 1;
      } while (uVar8 < (ulong)(*(long *)(this + 0x10) - lVar7 >> 3));
    }
    *(long *)(this + 0x10) = lVar7;
    this[0x98] = (Clipper)0x0;
  }
  else {
    uVar4 = 0;
  }
  return uVar4 & 1;
}

