
/* cocos2d::renderer::InputAssembler::init(cocos2d::renderer::VertexBuffer*,
   cocos2d::renderer::IndexBuffer*, cocos2d::renderer::PrimitiveType) */

undefined8 __thiscall
cocos2d::renderer::InputAssembler::init
          (InputAssembler *this,Ref *param_1,Ref *param_2,undefined2 param_4)

{
                    /* catch() { ... } // from try @ 009bfe10 with catch @ 009bffc0 */
                    /* catch() { ... } // from try @ 009bfdf0 with catch @ 009bffc4 */
                    /* catch() { ... } // from try @ 009bfe28 with catch @ 009bffd4 */
  if (*(Ref **)this != (Ref *)0x0) {
    Ref::release(*(Ref **)this);
  }
  *(Ref **)this = param_1;
  if (param_1 != (Ref *)0x0) {
    Ref::retain(param_1);
  }
  if (*(Ref **)(this + 8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 8));
  }
  *(Ref **)(this + 8) = param_2;
  if (param_2 != (Ref *)0x0) {
    Ref::retain(param_2);
  }
  *(undefined2 *)(this + 0x10) = param_4;
                    /* try { // try from 009c002c to 00ac007f has its CatchHandler @ 009c002c
                       catch() { ... } // from try @ 009c002c with catch @ 009c002c
                       catch() { ... } // from try @ 009c02e4 with catch @ 009c002c */
  return 1;
}

