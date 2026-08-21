
/* fairygui::GMovieClip::setPlaying(bool) */

void __thiscall fairygui::GMovieClip::setPlaying(GMovieClip *this,bool param_1)

{
  Action *pAVar1;
  
  if (this[0x1e8] == (GMovieClip)param_1) {
    return;
  }
  pAVar1 = *(Action **)(this + 0x1d8);
  this[0x1e8] = (GMovieClip)param_1;
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00a814d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pAVar1 + 0x3a8))(pAVar1,*(undefined8 *)(this + 0x1e0));
    return;
  }
  cocos2d::Node::stopAction(pAVar1);
  return;
}

