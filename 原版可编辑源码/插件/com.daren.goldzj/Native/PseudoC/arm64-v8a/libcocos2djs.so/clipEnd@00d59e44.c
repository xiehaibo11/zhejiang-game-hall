
/* spine::SkeletonClipping::clipEnd(spine::Slot&) */

void __thiscall spine::SkeletonClipping::clipEnd(SkeletonClipping *this,Slot *param_1)

{
  if ((*(long *)(this + 0x1c0) != 0) &&
     (*(long *)(*(long *)(this + 0x1c0) + 0x80) == *(long *)(param_1 + 8))) {
    *(undefined8 *)(this + 0x148) = 0;
    *(undefined8 *)(this + 0x188) = 0;
    *(undefined8 *)(this + 0x168) = 0;
    *(undefined8 *)(this + 0x108) = 0;
    *(undefined8 *)(this + 0x1c0) = 0;
    *(undefined8 *)(this + 0x1c8) = 0;
    return;
  }
  return;
}

