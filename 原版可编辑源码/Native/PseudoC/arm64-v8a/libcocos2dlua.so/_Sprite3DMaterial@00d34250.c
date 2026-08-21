
/* cocos2d::Sprite3DMaterial::~Sprite3DMaterial() */

void __thiscall cocos2d::Sprite3DMaterial::~Sprite3DMaterial(Sprite3DMaterial *this)

{
  Material::~Material((Material *)this);
                    /* try { // try from 00d34264 to 00e3433f has its CatchHandler @ 00d34264
                       catch(type#1 @ 00000000) { ... } // from try @ 00d34264 with catch @ 00d34264
                       catch(type#1 @ 00000000) { ... } // from try @ 00d34348 with catch @ 00d34264
                       catch(type#1 @ 00000000) { ... } // from try @ 00d34554 with catch @ 00d34264
                       catch(type#1 @ 00000000) { ... } // from try @ 00d345b0 with catch @ 00d34264
                        */
  operator_delete(this);
  return;
}

