
/* cocos2d::CanvasRenderingContext2D::CanvasRenderingContext2D(float, float) */

void __thiscall
cocos2d::CanvasRenderingContext2D::CanvasRenderingContext2D
          (CanvasRenderingContext2D *this,float param_1,float param_2)

{
  CanvasRenderingContext2DImpl *this_00;
  long *plVar1;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  this[0x10] = (CanvasRenderingContext2D)0xa;
  this[0x58] = (CanvasRenderingContext2D)0xa;
  *(undefined4 *)(this + 0x11) = 0x6574696d;
  *(undefined4 *)(this + 0x59) = 0x72617473;
  *(undefined4 *)(this + 8) = 0x3f800000;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  this[0x40] = (CanvasRenderingContext2D)0x1e;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined2 *)(this + 0x79) = 0x6369;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined2 *)(this + 0x5d) = 0x74;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  this[0x28] = (CanvasRenderingContext2D)0x8;
  this[0x88] = (CanvasRenderingContext2D)0x8;
  this[0xa0] = (CanvasRenderingContext2D)0x8;
  *(undefined4 *)(this + 0x29) = 0x74747562;
  this[0x70] = (CanvasRenderingContext2D)0x14;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0x89) = 0x30303023;
  *(undefined4 *)(this + 0xa1) = 0x30303023;
  this[0xb8] = (CanvasRenderingContext2D)0x16;
  *(float *)this = param_1;
  *(float *)(this + 4) = param_2;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  this[0x2d] = (CanvasRenderingContext2D)0x0;
  this[0x50] = (CanvasRenderingContext2D)0x0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x7b] = (CanvasRenderingContext2D)0x0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  this[0x8d] = (CanvasRenderingContext2D)0x0;
  this[0xa5] = (CanvasRenderingContext2D)0x0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 200) = 0;
  this[0xc4] = (CanvasRenderingContext2D)0x0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined2 *)(this + 0x15) = 0x72;
  this[0xc3] = (CanvasRenderingContext2D)0x72;
  *(undefined2 *)(this + 0xc1) = 0x6576;
  this[0x108] = (CanvasRenderingContext2D)0x1;
  *(undefined8 *)(this + 0x48) = 0x66697265732d736e;
  *(undefined8 *)(this + 0x41) = 0x6e61732078703031;
  *(undefined8 *)(this + 0x71) = 0x7465626168706c61;
  *(undefined8 *)(this + 0xb9) = 0x6f2d656372756f73;
  this[0x109] = (CanvasRenderingContext2D)0x0;
  this_00 = operator_new(0x28);
  CanvasRenderingContext2DImpl::CanvasRenderingContext2DImpl(this_00);
  *(CanvasRenderingContext2DImpl **)(this + 0x100) = this_00;
  if (this[0x108] != (CanvasRenderingContext2D)0x0) {
    this[0x108] = (CanvasRenderingContext2D)0x0;
    CanvasRenderingContext2DImpl::recreateBuffer(this_00,*(float *)this,*(float *)(this + 4));
    plVar1 = *(long **)(this + 0xf0);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0085cc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1,*(long *)(this + 0x100) + 8);
      return;
    }
  }
  return;
}

