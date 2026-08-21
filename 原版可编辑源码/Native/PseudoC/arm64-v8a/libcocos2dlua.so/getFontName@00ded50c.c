
/* cocos2d::ui::EditBoxImplCommon::getFontName() */

EditBoxImplCommon * __thiscall cocos2d::ui::EditBoxImplCommon::getFontName(EditBoxImplCommon *this)

{
  if (((byte)this[0x68] & 1) == 0) {
    return this + 0x69;
  }
  return *(EditBoxImplCommon **)(this + 0x78);
}

