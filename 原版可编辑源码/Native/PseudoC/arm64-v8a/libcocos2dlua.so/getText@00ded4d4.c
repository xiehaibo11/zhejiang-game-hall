
/* cocos2d::ui::EditBoxImplCommon::getText() */

EditBoxImplCommon * __thiscall cocos2d::ui::EditBoxImplCommon::getText(EditBoxImplCommon *this)

{
  if (((byte)this[0x38] & 1) == 0) {
    return this + 0x39;
  }
  return *(EditBoxImplCommon **)(this + 0x48);
}

