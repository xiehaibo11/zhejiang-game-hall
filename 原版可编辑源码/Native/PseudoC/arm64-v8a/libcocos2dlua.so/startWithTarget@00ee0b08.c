
/* cocos2d::ResizeBy::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::ResizeBy::startWithTarget(ResizeBy *this,Node *param_1)

{
  Size *pSVar1;
  
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  pSVar1 = (Size *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
  pSVar1 = (Size *)Size::operator=((Size *)(this + 0x60),pSVar1);
                    /* catch() { ... } // from try @ 00ee0afc with catch @ 00ee0b48 */
  Size::operator=((Size *)(this + 0x68),pSVar1);
  return;
}

