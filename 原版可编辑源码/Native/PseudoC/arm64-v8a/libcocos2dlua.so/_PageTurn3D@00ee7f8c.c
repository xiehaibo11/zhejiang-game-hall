
/* cocos2d::PageTurn3D::~PageTurn3D() */

void __thiscall cocos2d::PageTurn3D::~PageTurn3D(PageTurn3D *this)

{
                    /* catch() { ... } // from try @ 00ee7e98 with catch @ 00ee7f94 */
  Action::~Action((Action *)this);
  operator_delete(this);
  return;
}

