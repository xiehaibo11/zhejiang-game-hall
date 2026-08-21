
/* cocos2d::GLViewImpl::~GLViewImpl() */

void __thiscall cocos2d::GLViewImpl::~GLViewImpl(GLViewImpl *this)

{
  GLView::~GLView((GLView *)this);
  operator_delete(this);
  return;
}

