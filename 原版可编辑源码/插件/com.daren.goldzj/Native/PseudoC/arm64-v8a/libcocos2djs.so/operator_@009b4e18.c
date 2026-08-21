
/* cocos2d::renderer::DeviceGraphics::Uniform::TEMPNAMEPLACEHOLDERVALUE(cocos2d::renderer::DeviceGraphics::Uniform&&)
    */

Uniform * __thiscall
cocos2d::renderer::DeviceGraphics::Uniform::operator=(Uniform *this,Uniform *param_1)

{
  if (this != param_1) {
    this[0x18] = param_1[0x18];
    if (*(void **)this != (void *)0x0) {
      free(*(void **)this);
    }
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 009b4e58 to 00ab4eab has its CatchHandler @ 009b4e58
                       catch() { ... } // from try @ 009b4e58 with catch @ 009b4e58
                       catch() { ... } // from try @ 009b4fe8 with catch @ 009b4e58 */
    *(undefined8 *)param_1 = 0;
    this[0x19] = param_1[0x19];
  }
  return this;
}

