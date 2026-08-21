
/* cocos2d::renderer::State::State() */

void __thiscall cocos2d::renderer::State::State(State *this)

{
  ulong uVar1;
  long lVar2;
  
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
                    /* catch() { ... } // from try @ 009b7de4 with catch @ 009b7fb8 */
                    /* catch() { ... } // from try @ 009b7dd8 with catch @ 009b7fbc */
  std::__ndk1::
  vector<cocos2d::renderer::Texture*,std::__ndk1::allocator<cocos2d::renderer::Texture*>>::__append
            ((vector<cocos2d::renderer::Texture*,std::__ndk1::allocator<cocos2d::renderer::Texture*>>
              *)(this + 0x88),10);
                    /* catch() { ... } // from try @ 009b7db8 with catch @ 009b7fc0 */
  lVar2 = *(long *)(this + 0x58) - *(long *)(this + 0x50);
  uVar1 = lVar2 >> 3;
                    /* catch() { ... } // from try @ 009b7df0 with catch @ 009b7fd0 */
  if (uVar1 < 10) {
    std::__ndk1::
    vector<cocos2d::renderer::VertexBuffer*,std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*>>
    ::__append((vector<cocos2d::renderer::VertexBuffer*,std::__ndk1::allocator<cocos2d::renderer::VertexBuffer*>>
                *)(this + 0x50),10 - uVar1);
  }
  else if (lVar2 != 0x50) {
    *(long *)(this + 0x58) = *(long *)(this + 0x50) + 0x50;
  }
  lVar2 = *(long *)(this + 0x70) - *(long *)(this + 0x68);
  uVar1 = lVar2 >> 2;
  if (uVar1 < 10) {
    std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__append
              ((vector<int,std::__ndk1::allocator<int>> *)(this + 0x68),10 - uVar1);
  }
  else if (lVar2 != 0x28) {
                    /* try { // try from 009b8028 to 00ab807b has its CatchHandler @ 009b8028
                       catch() { ... } // from try @ 009b8028 with catch @ 009b8028
                       catch() { ... } // from try @ 009b81b8 with catch @ 009b8028 */
    *(long *)(this + 0x70) = *(long *)(this + 0x68) + 0x28;
  }
  reset(this);
  return;
}

