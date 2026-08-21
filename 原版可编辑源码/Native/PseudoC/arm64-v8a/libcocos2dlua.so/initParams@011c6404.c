
/* btSliderConstraint::initParams() */

void __thiscall btSliderConstraint::initParams(btSliderConstraint *this)

{
  this[0x460] = (btSliderConstraint)0x0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0xbf8000003f800000;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0x3f3333333f800000;
  *(undefined8 *)(this + 0x118) = 0x3f800000;
  *(undefined8 *)(this + 0x110) = 0x3f3333333f800000;
  *(undefined8 *)(this + 0x128) = 0x3f800000;
  *(undefined8 *)(this + 0x120) = 0x3f3333333f800000;
  *(undefined8 *)(this + 0x138) = 0x3f800000;
  *(undefined8 *)(this + 0x130) = 0x3f3333333f800000;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0x3f3333333f800000;
  *(undefined8 *)(this + 0x108) = 0x3f800000;
  *(undefined8 *)(this + 0x100) = 0x3f3333333f800000;
  *(undefined8 *)(this + 0x474) = 0;
  *(undefined4 *)(this + 0x47c) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined8 *)(this + 0x469) = 0;
  *(undefined8 *)(this + 0x464) = 0;
  this[0x49] = (btSliderConstraint)0x1;
  calculateTransforms(this,(btTransform *)(*(long *)(this + 0x28) + 8),
                      (btTransform *)(*(long *)(this + 0x30) + 8));
  return;
}

