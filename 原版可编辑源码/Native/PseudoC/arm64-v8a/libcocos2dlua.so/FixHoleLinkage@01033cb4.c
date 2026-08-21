
/* ClipperLib::Clipper::FixHoleLinkage(ClipperLib::OutRec&) */

void __thiscall ClipperLib::Clipper::FixHoleLinkage(Clipper *this,OutRec *param_1)

{
  long lVar1;
  OutRec OVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    OVar2 = *(OutRec *)(lVar1 + 4);
    if ((param_1[4] == OVar2) || (*(long *)(lVar1 + 0x18) == 0)) {
      while (((param_1[4] == OVar2 || (*(long *)(lVar1 + 0x18) == 0)) &&
             (lVar1 = *(long *)(lVar1 + 8), lVar1 != 0))) {
        OVar2 = *(OutRec *)(lVar1 + 4);
      }
      *(long *)(param_1 + 8) = lVar1;
      return;
    }
  }
  return;
}

