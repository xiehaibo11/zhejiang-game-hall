
/* ClipperLib::Clipper::Execute(ClipperLib::ClipType, ClipperLib::PolyTree&,
   ClipperLib::PolyFillType, ClipperLib::PolyFillType) */

uint __thiscall
ClipperLib::Clipper::Execute
          (Clipper *this,undefined4 param_2,PolyTree *param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  
  if (this[0x98] == (Clipper)0x0) {
    this[0x98] = (Clipper)0x1;
    *(undefined4 *)(this + 0x9c) = param_5;
    *(undefined4 *)(this + 0xa0) = param_4;
    *(undefined4 *)(this + 0x68) = param_2;
    this[0xa5] = (Clipper)0x1;
    uVar1 = (**(code **)(*(long *)this + 0x18))();
    if ((uVar1 & 1) != 0) {
      BuildResult2(this,param_3);
    }
    lVar3 = *(long *)(this + 0x10);
    if (lVar3 != *(long *)(this + 8)) {
      uVar5 = 0;
      lVar3 = *(long *)(this + 8);
      do {
        pvVar4 = *(void **)(lVar3 + uVar5 * 8);
        if (*(long *)((long)pvVar4 + 0x18) == 0) {
          if (pvVar4 != (void *)0x0) goto LAB_010338f4;
        }
        else {
          *(undefined8 *)(*(long *)(*(long *)((long)pvVar4 + 0x18) + 0x20) + 0x18) = 0;
          pvVar2 = *(void **)((long)pvVar4 + 0x18);
          while (pvVar2 != (void *)0x0) {
            *(undefined8 *)((long)pvVar4 + 0x18) = *(undefined8 *)((long)pvVar2 + 0x18);
            operator_delete(pvVar2);
            pvVar2 = *(void **)((long)pvVar4 + 0x18);
          }
LAB_010338f4:
          operator_delete(pvVar4);
          lVar3 = *(long *)(this + 8);
        }
        *(undefined8 *)(lVar3 + uVar5 * 8) = 0;
        lVar3 = *(long *)(this + 8);
        uVar5 = uVar5 + 1;
      } while (uVar5 < (ulong)(*(long *)(this + 0x10) - lVar3 >> 3));
    }
    *(long *)(this + 0x10) = lVar3;
    this[0x98] = (Clipper)0x0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}

