
/* fairygui::GMovieClip::~GMovieClip() */

void __thiscall fairygui::GMovieClip::~GMovieClip(GMovieClip *this)

{
  *(undefined ***)this = &PTR__GMovieClip_016a6010;
  if (*(Ref **)(this + 0x1e0) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x1e0));
  }
  GObject::~GObject((GObject *)this);
  operator_delete(this);
  return;
}

