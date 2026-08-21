
/* ClipperLib::ClipperBase::PopLocalMinima() */

void __thiscall ClipperLib::ClipperBase::PopLocalMinima(ClipperBase *this)

{
  if (*(long *)(this + 8) != 0) {
                    /* try { // try from 01032d48 to 01132d57 has its CatchHandler @ 010331d4 */
    *(undefined8 *)(this + 8) = *(undefined8 *)(*(long *)(this + 8) + 0x18);
  }
  return;
}

