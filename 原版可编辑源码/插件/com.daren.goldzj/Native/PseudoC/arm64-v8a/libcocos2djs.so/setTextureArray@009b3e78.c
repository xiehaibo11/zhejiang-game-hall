
/* cocos2d::renderer::DeviceGraphics::setTextureArray(unsigned long,
   std::__ndk1::vector<cocos2d::renderer::Texture*,
   std::__ndk1::allocator<cocos2d::renderer::Texture*> > const&, std::__ndk1::vector<int,
   std::__ndk1::allocator<int> > const&) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setTextureArray
          (DeviceGraphics *this,ulong param_1,vector *param_2,vector *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(long *)(param_2 + 8) - (long)*(undefined8 **)param_2;
                    /* try { // try from 009b3e9c to 00ab3f9b has its CatchHandler @ 009b3da0 */
  uVar3 = (long)uVar2 >> 3;
  if (uVar3 < (ulong)(long)*(int *)(this + 0x3c)) {
    if ((uVar2 != 0) &&
       (State::setTexture(*(State **)(this + 0xb8),(long)**(int **)param_3,
                          (Texture *)**(undefined8 **)param_2), 1 < uVar3)) {
      uVar2 = 1;
      do {
        State::setTexture(*(State **)(this + 0xb8),(long)*(int *)(*(long *)param_3 + uVar2 * 4),
                          *(Texture **)(*(long *)param_2 + uVar2 * 8));
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    lVar1 = *(long *)(param_3 + 8) - *(long *)param_3;
                    /* catch() { ... } // from try @ 009b3e64 with catch @ 009b3f18 */
                    /* catch() { ... } // from try @ 009b3e30 with catch @ 009b3f1c */
                    /* catch() { ... } // from try @ 009b3e6c with catch @ 009b3f20 */
    setUniform(this,param_1,*(long *)param_3,lVar1,1,lVar1 >> 2);
    return;
  }
                    /* catch() { ... } // from try @ 009b3e54 with catch @ 009b3f30 */
                    /* catch() { ... } // from try @ 009b3e1c with catch @ 009b3f48 */
                    /* catch() { ... } // from try @ 009b3df0 with catch @ 009b3f4c */
  __android_log_print(5,"renderer",
                      " (356): Can not set %d textures for %zu, max texture exceed: %d\n",uVar2 >> 3
                      ,param_1);
  return;
}

