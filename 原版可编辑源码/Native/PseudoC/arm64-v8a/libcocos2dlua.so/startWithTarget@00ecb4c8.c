
/* cocos2d::Speed::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::Speed::startWithTarget(Speed *this,Node *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x50);
  if ((param_1 != (Node *)0x0) && (plVar1 != (long *)0x0)) {
    *(Node **)(this + 0x30) = param_1;
    *(Node **)(this + 0x38) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00ecb4e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1);
    return;
  }
                    /* catch() { ... } // from try @ 00ecb550 with catch @ 00ecb4e8 */
  log("Speed::startWithTarget error: target(%p) or _innerAction(%p) is nullptr!");
  return;
}

