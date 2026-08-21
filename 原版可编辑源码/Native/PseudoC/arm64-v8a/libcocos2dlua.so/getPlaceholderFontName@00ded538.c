
/* cocos2d::ui::EditBoxImplCommon::getPlaceholderFontName() */

EditBoxImplCommon * __thiscall
cocos2d::ui::EditBoxImplCommon::getPlaceholderFontName(EditBoxImplCommon *this)

{
                    /* try { // try from 00ded538 to 00eed563 has its CatchHandler @ 00ded4a4 */
  if (((byte)this[0x80] & 1) == 0) {
    return this + 0x81;
  }
  return *(EditBoxImplCommon **)(this + 0x90);
}

