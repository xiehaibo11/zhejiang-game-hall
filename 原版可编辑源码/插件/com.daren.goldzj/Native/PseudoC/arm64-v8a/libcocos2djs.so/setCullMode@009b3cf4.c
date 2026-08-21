
/* cocos2d::renderer::DeviceGraphics::setCullMode(cocos2d::renderer::CullMode) */

void __thiscall
cocos2d::renderer::DeviceGraphics::setCullMode(DeviceGraphics *this,undefined2 param_2)

{
  *(undefined2 *)(*(long *)(this + 0xb8) + 0x48) = param_2;
                    /* try { // try from 009b3cfc to 00ab3d3f has its CatchHandler @ 009b3cfc
                       catch() { ... } // from try @ 009b3cfc with catch @ 009b3cfc
                       catch() { ... } // from try @ 009b3d5c with catch @ 009b3cfc */
  return;
}

