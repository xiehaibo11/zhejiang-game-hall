
/* cocos2d::renderer::DeviceGraphics::Uniform::Uniform(cocos2d::renderer::DeviceGraphics::Uniform&&)
    */

void __thiscall cocos2d::renderer::DeviceGraphics::Uniform::Uniform(Uniform *this,Uniform *param_1)

{
                    /* try { // try from 009b5784 to 00ab578f has its CatchHandler @ 009b5958 */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 009b5790 to 00ab58e3 has its CatchHandler @ 009b5970 */
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)param_1 = 0;
    this[0x18] = param_1[0x18];
    this[0x19] = param_1[0x19];
  }
  return;
}

