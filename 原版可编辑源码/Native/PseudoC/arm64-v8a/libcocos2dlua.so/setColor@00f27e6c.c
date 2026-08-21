
/* cocos2d::__NodeRGBA::setColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::__NodeRGBA::setColor(__NodeRGBA *this,Color3B *param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)param_1;
                    /* try { // try from 00f27e74 to 01027e7b has its CatchHandler @ 00f27eac */
  this[0x21f] = *(__NodeRGBA *)(param_1 + 2);
                    /* try { // try from 00f27e7c to 01027ec7 has its CatchHandler @ 00f27e50 */
  *(undefined2 *)(this + 0x21d) = uVar1;
  uVar1 = *(undefined2 *)param_1;
  this[0x21c] = *(__NodeRGBA *)(param_1 + 2);
  *(undefined2 *)(this + 0x21a) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00f27e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x518))();
  return;
}

