
/* cocos2d::GridAction::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::GridAction::startWithTarget(GridAction *this,Node *param_1)

{
  long lVar1;
  GridBase *pGVar2;
  
                    /* try { // try from 00ed4904 to 00fd4907 has its CatchHandler @ 00ed49ec */
  ActionInterval::startWithTarget((ActionInterval *)this,param_1);
  lVar1 = 0;
  if (*(long *)(this + 0x38) != 0) {
    lVar1 = __dynamic_cast(*(long *)(this + 0x38),&Node::typeinfo,&NodeGrid::typeinfo,0);
  }
  *(long *)(this + 0x60) = lVar1;
  pGVar2 = *(GridBase **)(lVar1 + 0x300);
  if (pGVar2 != (GridBase *)0x0) {
    if (0 < *(int *)(pGVar2 + 0x24)) {
                    /* try { // try from 00ed4958 to 00fd495b has its CatchHandler @ 00ed499c */
      if (((pGVar2[0x21] != (GridBase)0x0) && (*(float *)(pGVar2 + 0x28) == *(float *)(this + 0x58))
          ) && (*(float *)(pGVar2 + 0x2c) == *(float *)(this + 0x5c))) {
                    /* WARNING: Could not recover jumptable at 0x00ed4984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)pGVar2 + 0x28))();
        return;
      }
      return;
    }
    if (pGVar2[0x21] != (GridBase)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ed4958 with catch @ 00ed499c
                        */
      GridBase::setActive(pGVar2,false);
    }
  }
  pGVar2 = (GridBase *)(**(code **)(*(long *)this + 0x50))(this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ed4828 with catch @ 00ed49b0
                        */
  NodeGrid::setGrid(*(NodeGrid **)(this + 0x60),pGVar2);
  GridBase::setActive(*(GridBase **)(*(long *)(this + 0x60) + 0x300),true);
  return;
}

