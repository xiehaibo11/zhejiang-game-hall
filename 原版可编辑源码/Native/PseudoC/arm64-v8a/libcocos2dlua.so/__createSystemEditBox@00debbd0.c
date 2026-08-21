
/* cocos2d::ui::__createSystemEditBox(cocos2d::ui::EditBox*) */

EditBoxImplCommon * cocos2d::ui::__createSystemEditBox(EditBox *param_1)

{
  EditBoxImplCommon *this;
  
  this = operator_new(0xc0);
  EditBoxImplCommon::EditBoxImplCommon(this,param_1);
  *(undefined4 *)(this + 0xb8) = 0xffffffff;
  *(undefined ***)this = &PTR__EditBoxImplAndroid_016e6108;
                    /* try { // try from 00debc14 to 00eebc17 has its CatchHandler @ 00debc7c */
  return this;
}

