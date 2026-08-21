
/* cocos2d::Image::~Image() */

void __thiscall cocos2d::Image::~Image(Image *this)

{
  ~Image(this);
  operator_delete(this);
  return;
}

