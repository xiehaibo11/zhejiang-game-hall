
/* cocos2d::Repeat::startWithTarget(cocos2d::Node*) */

void __thiscall cocos2d::Repeat::startWithTarget(Repeat *this,Node *param_1)

{
                    /* try { // try from 00edd1e4 to 00fdd277 has its CatchHandler @ 00edd1e4
                       catch() { ... } // from try @ 00edd1e4 with catch @ 00edd1e4
                       catch() { ... } // from try @ 00edd44c with catch @ 00edd1e4
                       catch() { ... } // from try @ 00edd5b4 with catch @ 00edd1e4 */
  *(undefined4 *)(this + 0x5c) = 0;
  *(float *)(this + 0x60) = *(float *)(*(long *)(this + 0x68) + 0x4c) / *(float *)(this + 0x4c);
  Action::startWithTarget((Action *)this,param_1);
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined2 *)(this + 0x54) = 1;
                    /* WARNING: Could not recover jumptable at 0x00edd234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x68) + 0x30))(*(long **)(this + 0x68),param_1);
  return;
}

