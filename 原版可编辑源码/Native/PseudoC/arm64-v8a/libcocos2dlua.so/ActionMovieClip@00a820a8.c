
/* fairygui::ActionMovieClip::ActionMovieClip() */

void __thiscall fairygui::ActionMovieClip::ActionMovieClip(ActionMovieClip *this)

{
  cocos2d::Action::Action((Action *)this);
  *(undefined4 *)(this + 0xb0) = 0xffffffff;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x5d) = 0;
  this[0x70] = (ActionMovieClip)0x0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xbc) = 0;
  *(undefined8 *)(this + 0xb4) = 0;
  *(undefined ***)this = &PTR__ActionMovieClip_016a60d0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016a6130;
  *(undefined8 *)(this + 0x68) = 0x3f800000;
  *(undefined4 *)(this + 0xc4) = 0;
  return;
}

