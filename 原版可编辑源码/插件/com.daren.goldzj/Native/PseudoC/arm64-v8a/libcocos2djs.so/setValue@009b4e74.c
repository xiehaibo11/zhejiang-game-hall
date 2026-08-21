
/* cocos2d::renderer::DeviceGraphics::Uniform::setValue(void const*, unsigned long, unsigned long)
    */

void __thiscall
cocos2d::renderer::DeviceGraphics::Uniform::setValue
          (Uniform *this,void *param_1,ulong param_2,ulong param_3)

{
  void *__ptr;
  
  __ptr = *(void **)this;
  if (*(ulong *)(this + 8) == param_2) {
    if (__ptr != (void *)0x0) goto LAB_009b4ec0;
  }
  else if (__ptr != (void *)0x0) {
                    /* try { // try from 009b4eac to 00ab4ec3 has its CatchHandler @ 009b5064 */
    free(__ptr);
  }
  __ptr = malloc(param_2);
  *(void **)this = __ptr;
  *(ulong *)(this + 8) = param_2;
  *(ulong *)(this + 0x10) = param_3;
LAB_009b4ec0:
                    /* try { // try from 009b4ecc to 00ab4ed7 has its CatchHandler @ 009b5060 */
  memcpy(__ptr,param_1,param_2);
  return;
}

