
/* cocos2d::renderer::State::setVertexBuffer(unsigned long, cocos2d::renderer::VertexBuffer*) */

void __thiscall
cocos2d::renderer::State::setVertexBuffer(State *this,ulong param_1,VertexBuffer *param_2)

{
  ulong uVar1;
  Ref *this_00;
  long lVar2;
  ulong uVar3;
  vector<cocos2d::renderer::VertexBuffer*,std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*>>
  *this_01;
  
                    /* try { // try from 009b82f0 to 00ab8307 has its CatchHandler @ 009b84a8 */
  this_01 = (vector<cocos2d::renderer::VertexBuffer*,std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*>>
             *)(this + 0x50);
  lVar2 = *(long *)this_01;
                    /* try { // try from 009b8310 to 00ab831b has its CatchHandler @ 009b84a4 */
  uVar3 = *(long *)(this + 0x58) - lVar2 >> 3;
  if (uVar3 <= param_1) {
                    /* try { // try from 009b831c to 00ab8327 has its CatchHandler @ 009b84a0 */
    uVar1 = param_1 + 1;
    if (uVar1 < uVar3 || uVar1 - uVar3 == 0) {
      if (uVar1 < uVar3) {
        *(ulong *)(this + 0x58) = lVar2 + uVar1 * 8;
      }
    }
    else {
                    /* try { // try from 009b8328 to 00ab842b has its CatchHandler @ 009b84b8 */
      std::__ndk1::
      vector<cocos2d::renderer::VertexBuffer*,std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*>>
      ::__append(this_01,uVar1 - uVar3);
      lVar2 = *(long *)this_01;
    }
  }
  this_00 = *(Ref **)(lVar2 + param_1 * 8);
  if (this_00 != (Ref *)param_2) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(VertexBuffer **)(*(long *)this_01 + param_1 * 8) = param_2;
    if (param_2 != (VertexBuffer *)0x0) {
      Ref::retain((Ref *)param_2);
      return;
    }
  }
  return;
}

