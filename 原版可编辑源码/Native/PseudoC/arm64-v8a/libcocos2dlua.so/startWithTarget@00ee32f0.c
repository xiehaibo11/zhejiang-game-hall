
/* cocos2d::TintTo::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::TintTo::startWithTarget(TintTo *this,Node *param_1)

{
  TintTo TVar1;
  undefined2 *puVar2;
  
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
  if (*(long **)(this + 0x38) != (long *)0x0) {
    puVar2 = (undefined2 *)(**(code **)(**(long **)(this + 0x38) + 0x4b0))();
                    /* catch() { ... } // from try @ 00ee335c with catch @ 00ee3324 */
    TVar1 = *(TintTo *)(puVar2 + 1);
    *(undefined2 *)(this + 0x59) = *puVar2;
    this[0x5b] = TVar1;
  }
  return;
}

