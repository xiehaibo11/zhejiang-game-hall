
/* cocos2d::ActionEase::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::ActionEase::startWithTarget(ActionEase *this,Node *param_1)

{
  if ((param_1 != (Node *)0x0) && (*(long *)(this + 0x58) != 0)) {
    ActionInterval::startWithTarget((ActionInterval *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00eced24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x58) + 0x30))
              (*(long **)(this + 0x58),*(undefined8 *)(this + 0x38));
    return;
  }
                    /* try { // try from 00eced34 to 00fced4b has its CatchHandler @ 00eceeb8 */
  log("ActionEase::startWithTarget error: target or _inner is nullptr!");
  return;
}

