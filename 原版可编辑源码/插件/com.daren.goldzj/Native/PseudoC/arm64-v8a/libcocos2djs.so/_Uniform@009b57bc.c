
/* cocos2d::renderer::DeviceGraphics::Uniform::~Uniform() */

void __thiscall cocos2d::renderer::DeviceGraphics::Uniform::~Uniform(Uniform *this)

{
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
    *(undefined8 *)this = 0;
  }
  return;
}

