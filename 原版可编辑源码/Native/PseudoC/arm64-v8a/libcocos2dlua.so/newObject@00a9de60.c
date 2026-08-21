
/* fairygui::UIObjectFactory::newObject(fairygui::ObjectType) */

GObject * fairygui::UIObjectFactory::newObject(undefined4 param_1)

{
  GObject *pGVar1;
  ulong uVar2;
  GLoader3D *this;
  
  this = (GLoader3D *)0x0;
  switch(param_1) {
  case 0:
    this = operator_new(0x1e0,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GImage::GImage((GImage *)this);
    break;
  case 1:
    this = operator_new(0x1f0,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GMovieClip::GMovieClip((GMovieClip *)this);
    break;
  default:
    goto switchD_00a9de90_caseD_2;
  case 3:
    this = operator_new(0x230,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GGraph::GGraph((GGraph *)this);
    break;
  case 4:
    if (_loaderCreator._32_8_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x00a9df20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pGVar1 = (GObject *)(**(code **)(*(long *)_loaderCreator._32_8_ + 0x30))();
      return pGVar1;
    }
    this = operator_new(0x238,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GLoader::GLoader((GLoader *)this);
    break;
  case 5:
    this = operator_new(0x208,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GGroup::GGroup((GGroup *)this);
    break;
  case 6:
    this = operator_new(0x210,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GBasicTextField::GBasicTextField((GBasicTextField *)this);
    break;
  case 7:
    this = operator_new(0x210,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GRichTextField::GRichTextField((GRichTextField *)this);
    break;
  case 8:
    this = operator_new(0x210,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GTextInput::GTextInput((GTextInput *)this);
    break;
  case 9:
    this = operator_new(0x280,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GComponent::GComponent((GComponent *)this);
    break;
  case 10:
    this = operator_new(0x380,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GList::GList((GList *)this);
    break;
  case 0xb:
    this = operator_new(0x290,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GLabel::GLabel((GLabel *)this);
    break;
  case 0xc:
    this = operator_new(0x350,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GButton::GButton((GButton *)this);
    break;
  case 0xd:
    this = operator_new(0x310,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GComboBox::GComboBox((GComboBox *)this);
    break;
  case 0xe:
    this = operator_new(0x2d0,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GProgressBar::GProgressBar((GProgressBar *)this);
    break;
  case 0xf:
    this = operator_new(0x2f0,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GSlider::GSlider((GSlider *)this);
    break;
  case 0x10:
    this = operator_new(0x2c8,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GScrollBar::GScrollBar((GScrollBar *)this);
    break;
  case 0x11:
    this = operator_new(0x400,(nothrow_t *)&std::nothrow);
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GTree::GTree((GTree *)this);
    break;
  case 0x12:
    this = operator_new(0x268,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00a9e10c to 00b9e187 has its CatchHandler @ 00a9e10c
                       catch() { ... } // from try @ 00a9e10c with catch @ 00a9e10c
                       catch() { ... } // from try @ 00a9e18c with catch @ 00a9e10c
                       catch() { ... } // from try @ 00a9e1dc with catch @ 00a9e10c
                       catch() { ... } // from try @ 00a9e218 with catch @ 00a9e10c */
    if (this == (GLoader3D *)0x0) {
      return (GObject *)0x0;
    }
    GLoader3D::GLoader3D(this);
  }
  uVar2 = GObject::init((GObject *)this);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*(long *)this + 8))(this);
    this = (GLoader3D *)0x0;
  }
  else {
    cocos2d::Ref::autorelease((Ref *)this);
  }
switchD_00a9de90_caseD_2:
  return (GObject *)this;
}

