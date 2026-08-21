
/* cocos2d::Director::setClearColor(cocos2d::Color4F const&) */

void __thiscall cocos2d::Director::setClearColor(Director *this,Color4F *param_1)

{
                    /* try { // try from 00f99bb8 to 01099c3b has its CatchHandler @ 00f99bb8
                       catch(type#1 @ 00000000) { ... } // from try @ 00f99bb8 with catch @ 00f99bb8
                       catch(type#1 @ 00000000) { ... } // from try @ 00f99c60 with catch @ 00f99bb8
                        */
  Renderer::setClearColor(*(Renderer **)(this + 0x1b0),param_1);
  return;
}

