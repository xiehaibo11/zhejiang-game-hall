
/* ClipperLib::Clipper::FixupFirstLefts2(ClipperLib::OutRec*, ClipperLib::OutRec*) */

void __thiscall ClipperLib::Clipper::FixupFirstLefts2(Clipper *this,OutRec *param_1,OutRec *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar1 = *(long *)(this + 8);
  lVar2 = *(long *)(this + 0x10) - lVar1;
  if (lVar2 != 0) {
    uVar3 = 0;
    do {
      lVar4 = *(long *)(lVar1 + uVar3 * 8);
      if (*(OutRec **)(lVar4 + 8) == param_1) {
        *(OutRec **)(lVar4 + 8) = param_2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(lVar2 >> 3));
  }
  return;
}

