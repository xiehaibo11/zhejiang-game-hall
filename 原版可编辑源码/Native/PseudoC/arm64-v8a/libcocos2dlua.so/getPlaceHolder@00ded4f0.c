
/* cocos2d::ui::EditBoxImplCommon::getPlaceHolder() */

EditBoxImplCommon * __thiscall
cocos2d::ui::EditBoxImplCommon::getPlaceHolder(EditBoxImplCommon *this)

{
  if (((byte)this[0x50] & 1) == 0) {
    return this + 0x51;
  }
                    /* try { // try from 00ded508 to 00eed537 has its CatchHandler @ 00ded6a0 */
  return *(EditBoxImplCommon **)(this + 0x60);
}

