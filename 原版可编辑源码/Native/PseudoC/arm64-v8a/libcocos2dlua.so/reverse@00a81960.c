
/* fairygui::GMovieClip::reverse() */

void __thiscall fairygui::GMovieClip::reverse(GMovieClip *this)

{
  undefined8 uVar1;
  Ref *this_00;
  
  this_00 = *(Ref **)(this + 0x1e0);
  if (this[0x1e8] == (GMovieClip)0x0) {
    uVar1 = (**(code **)(*(long *)this_00 + 0x20))(this_00);
    *(undefined8 *)(this + 0x1e0) = uVar1;
  }
  else {
    this[0x1e8] = (GMovieClip)0x0;
    cocos2d::Node::stopAction(*(Action **)(this + 0x1d8));
    uVar1 = (**(code **)(**(long **)(this + 0x1e0) + 0x20))();
    *(undefined8 *)(this + 0x1e0) = uVar1;
    if (this[0x1e8] != (GMovieClip)0x1) {
      this[0x1e8] = (GMovieClip)0x1;
      (**(code **)(**(long **)(this + 0x1d8) + 0x3a8))(*(long **)(this + 0x1d8),uVar1);
    }
  }
  cocos2d::Ref::release(this_00);
  return;
}

