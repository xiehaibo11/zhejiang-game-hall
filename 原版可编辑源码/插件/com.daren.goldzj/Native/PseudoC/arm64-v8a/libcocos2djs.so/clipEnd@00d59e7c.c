
/* spine::SkeletonClipping::clipEnd() */

void __thiscall spine::SkeletonClipping::clipEnd(SkeletonClipping *this)

{
  if (*(long *)(this + 0x1c0) != 0) {
    *(undefined8 *)(this + 0x148) = 0;
    *(undefined8 *)(this + 0x188) = 0;
    *(undefined8 *)(this + 0x168) = 0;
    *(undefined8 *)(this + 0x108) = 0;
    *(undefined8 *)(this + 0x1c0) = 0;
    *(undefined8 *)(this + 0x1c8) = 0;
  }
  return;
}

