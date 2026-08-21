
/* cocos2d::Sprite3DMaterial::createWithGLStateProgram(cocos2d::GLProgramState*) */

Material * cocos2d::Sprite3DMaterial::createWithGLStateProgram(GLProgramState *param_1)

{
  Material *this;
  ulong uVar1;
  
  this = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this != (Material *)0x0) {
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    Material::Material(this);
    *(undefined ***)this = &PTR__Material_016d3c98;
    uVar1 = Material::initWithGLProgramState(this,param_1);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Material *)0x0;
    }
    else {
      *(undefined4 *)(this + 0xa4) = 6;
      Ref::autorelease((Ref *)this);
    }
  }
                    /* catch() { ... } // from try @ 00d33e30 with catch @ 00d33df8 */
  return this;
}

