
/* cocos2d::renderer::DeviceGraphics::Uniform::Uniform(void const*, unsigned long,
   cocos2d::renderer::UniformElementType, unsigned long) */

void __thiscall
cocos2d::renderer::DeviceGraphics::Uniform::Uniform
          (Uniform *this,void *param_1,size_t param_2,Uniform param_4,undefined8 param_5)

{
  void *__dest;
  
  this[0x18] = (Uniform)0x1;
  this[0x19] = param_4;
                    /* try { // try from 009b5758 to 00ab576f has its CatchHandler @ 009b5960 */
  __dest = malloc(param_2);
  *(void **)this = __dest;
  *(size_t *)(this + 8) = param_2;
  *(undefined8 *)(this + 0x10) = param_5;
                    /* try { // try from 009b5778 to 00ab5783 has its CatchHandler @ 009b595c */
  memcpy(__dest,param_1,param_2);
  return;
}

