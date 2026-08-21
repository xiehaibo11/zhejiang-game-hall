
/* ClipperLib::Clipper::Clipper(int) */

void __thiscall ClipperLib::Clipper::Clipper(Clipper *this,int param_1)

{
  byte in_w2;
  long lVar1;
  
  lVar1 = *(long *)(ulong)(uint)param_1;
  *(long *)this = lVar1;
  *(long *)(this + *(long *)(lVar1 + -0x18)) = ((long *)(ulong)(uint)param_1)[1];
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
                    /* try { // try from 01032e94 to 01132ea3 has its CatchHandler @ 01033220 */
  *(undefined8 *)(this + 0x78) = 0;
  lVar1 = *(long *)this;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
                    /* try { // try from 01032ea4 to 01132eaf has its CatchHandler @ 01033210 */
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
                    /* try { // try from 01032eb4 to 01132ec3 has its CatchHandler @ 010331e0 */
  *(undefined8 *)(this + 0x90) = 0;
  this[0x98] = (Clipper)0x0;
  *(Clipper **)(this + 0x70) = this + 0x78;
                    /* try { // try from 01032ec4 to 01132edb has its CatchHandler @ 01033224 */
  this[*(long *)(lVar1 + -0x18) + 0x18] = (Clipper)0x0;
  this[0xa4] = (Clipper)(in_w2 & 1);
  this[0xa6] = (Clipper)(in_w2 >> 1 & 1);
  this[*(long *)(lVar1 + -0x18) + 0x38] = (Clipper)(in_w2 >> 2 & 1);
  this[*(long *)(lVar1 + -0x18) + 0x39] = (Clipper)0x0;
  return;
}

