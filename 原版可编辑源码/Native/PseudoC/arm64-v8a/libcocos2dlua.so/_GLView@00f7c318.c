
/* cocos2d::GLView::~GLView() */

void __thiscall cocos2d::GLView::~GLView(GLView *this)

{
  *(undefined ***)this = &PTR__GLView_01721e88;
  if (((byte)this[0x48] & 1) != 0) {
    operator_delete(*(void **)(this + 0x58));
  }
  Ref::~Ref((Ref *)this);
  return;
}

