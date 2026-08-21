
/* ClipperLib::Clipper::CopyAELToSEL() */

void __thiscall ClipperLib::Clipper::CopyAELToSEL(Clipper *this)

{
  long lVar1;
  
  *(long *)(this + 0x90) = *(long *)(this + 0x88);
  lVar1 = *(long *)(this + 0x88);
  while (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x90) = *(undefined8 *)(lVar1 + 0x80);
    *(long *)(lVar1 + 0x88) = *(long *)(lVar1 + 0x78);
    lVar1 = *(long *)(lVar1 + 0x78);
  }
  return;
}

