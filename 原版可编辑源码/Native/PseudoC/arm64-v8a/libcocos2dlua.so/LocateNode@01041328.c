
/* p2t::AdvancingFront::LocateNode(double) */

void __thiscall p2t::AdvancingFront::LocateNode(AdvancingFront *this,double param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  if (*(double *)(lVar1 + 0x20) <= param_1) {
    do {
      lVar1 = *(long *)(lVar1 + 0x10);
      if (lVar1 == 0) {
        return;
      }
    } while (*(double *)(lVar1 + 0x20) <= param_1);
    lVar1 = *(long *)(lVar1 + 0x18);
  }
  else {
    do {
      lVar1 = *(long *)(lVar1 + 0x18);
      if (lVar1 == 0) {
        return;
      }
    } while (param_1 < *(double *)(lVar1 + 0x20));
  }
  *(long *)(this + 0x10) = lVar1;
  return;
}

