
/* ClipperLib::Area(ClipperLib::OutRec const&) */

undefined1  [16] ClipperLib::Area(OutRec *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    dVar6 = 0.0;
    lVar5 = lVar4;
    do {
      plVar1 = (long *)(lVar5 + 0x20);
      plVar2 = (long *)(lVar5 + 8);
      plVar3 = (long *)(lVar5 + 0x10);
      lVar5 = *(long *)(lVar5 + 0x18);
      dVar6 = dVar6 + (double)(*plVar2 + *(long *)(*plVar1 + 8)) *
                      (double)(*(long *)(*plVar1 + 0x10) - *plVar3);
    } while (lVar5 != lVar4);
    auVar7._0_8_ = dVar6 * 0.5;
    auVar7._8_8_ = 0;
    return auVar7;
  }
  return ZEXT816(0);
}

