
/* cocos2d::TiledGrid3D::create(cocos2d::Size const&) */

Ref * cocos2d::TiledGrid3D::create(Size *param_1)

{
  Ref *this;
  ulong uVar1;
  
  this = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
    *(undefined ***)this = &PTR__GridBase_016fd210;
    Size::Size((Size *)(this + 0x28));
    *(undefined8 *)(this + 0x38) = 0;
    Rect::Rect((Rect *)(this + 0x5c));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f08820 with catch @ 00f087b0
                       catch(type#1 @ 00000000) { ... } // from try @ 00f08850 with catch @ 00f087b0
                       catch(type#1 @ 00000000) { ... } // from try @ 00f08880 with catch @ 00f087b0
                       catch(type#1 @ 00000000) { ... } // from try @ 00f088a8 with catch @ 00f087b0
                       catch(type#1 @ 00000000) { ... } // from try @ 00f088d4 with catch @ 00f087b0
                        */
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined ***)this = &PTR__TiledGrid3D_016fd2a0;
    uVar1 = GridBase::initWithSize((GridBase *)this,param_1,Rect::ZERO);
    if ((uVar1 & 1) == 0) {
      (**(code **)(*(long *)this + 8))(this);
      this = (Ref *)0x0;
    }
    else {
      Ref::autorelease(this);
    }
  }
  return this;
}

