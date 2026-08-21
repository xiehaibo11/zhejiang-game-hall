
/* dtLocalBoundary::reset() */

void __thiscall dtLocalBoundary::reset(dtLocalBoundary *this)

{
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 8) = 0x7f7fffff;
  *(undefined8 *)this = 0x7f7fffff7f7fffff;
  *(undefined4 *)(this + 0xec) = 0;
  return;
}

