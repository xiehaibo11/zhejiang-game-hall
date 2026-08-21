
/* cocos2d::renderer::State::setTexture(unsigned long, cocos2d::renderer::Texture*) */

void __thiscall cocos2d::renderer::State::setTexture(State *this,ulong param_1,Texture *param_2)

{
  ulong uVar1;
  Ref *this_00;
  long lVar2;
  ulong uVar3;
  vector<cocos2d::renderer::Texture*,std::__ndk1::allocator<cocos2d::renderer::Texture*>> *this_01;
  
  this_01 = (vector<cocos2d::renderer::Texture*,std::__ndk1::allocator<cocos2d::renderer::Texture*>>
             *)(this + 0x88);
  lVar2 = *(long *)this_01;
  uVar3 = *(long *)(this + 0x90) - lVar2 >> 3;
                    /* catch() { ... } // from try @ 009b831c with catch @ 009b84a0 */
                    /* catch() { ... } // from try @ 009b8310 with catch @ 009b84a4 */
  if (uVar3 <= param_1) {
                    /* catch() { ... } // from try @ 009b82f0 with catch @ 009b84a8 */
    uVar1 = param_1 + 1;
    if (uVar1 < uVar3 || uVar1 - uVar3 == 0) {
      if (uVar1 < uVar3) {
        *(ulong *)(this + 0x90) = lVar2 + uVar1 * 8;
      }
    }
    else {
                    /* catch() { ... } // from try @ 009b8328 with catch @ 009b84b8 */
      std::__ndk1::
      vector<cocos2d::renderer::Texture*,std::__ndk1::allocator<cocos2d::renderer::Texture*>>::
      __append(this_01,uVar1 - uVar3);
      lVar2 = *(long *)this_01;
    }
  }
  this_00 = *(Ref **)(lVar2 + param_1 * 8);
  if (this_00 != (Ref *)param_2) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Texture **)(*(long *)this_01 + param_1 * 8) = param_2;
    if (param_2 != (Texture *)0x0) {
      Ref::retain((Ref *)param_2);
      return;
    }
  }
                    /* try { // try from 009b8510 to 00ab8567 has its CatchHandler @ 009b8510
                       catch() { ... } // from try @ 009b8510 with catch @ 009b8510
                       catch() { ... } // from try @ 009b86f8 with catch @ 009b8510 */
  return;
}

