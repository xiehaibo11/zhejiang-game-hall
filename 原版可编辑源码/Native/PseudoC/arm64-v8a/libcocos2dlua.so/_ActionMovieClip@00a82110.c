
/* fairygui::ActionMovieClip::~ActionMovieClip() */

void __thiscall fairygui::ActionMovieClip::~ActionMovieClip(ActionMovieClip *this)

{
  ActionMovieClip *pAVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__ActionMovieClip_016a60d0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016a6130;
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x50));
  }
  pAVar1 = *(ActionMovieClip **)(this + 0xa0);
  if (this + 0x80 == pAVar1) {
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x20);
  }
  else {
    if (pAVar1 == (ActionMovieClip *)0x0) goto LAB_00a82170;
    pcVar2 = *(code **)(*(long *)pAVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a82170:
  cocos2d::Action::~Action((Action *)this);
  return;
}

