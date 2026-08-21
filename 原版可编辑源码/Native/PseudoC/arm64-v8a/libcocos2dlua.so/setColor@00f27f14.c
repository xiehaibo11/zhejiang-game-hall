
/* non-virtual thunk to cocos2d::__NodeRGBA::setColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::__NodeRGBA::setColor(__NodeRGBA *this,Color3B *param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)param_1;
  this[-0xd9] = *(__NodeRGBA *)(param_1 + 2);
  *(undefined2 *)(this + -0xdb) = uVar1;
  uVar1 = *(undefined2 *)param_1;
  this[-0xdc] = *(__NodeRGBA *)(param_1 + 2);
  *(undefined2 *)(this + -0xde) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00f27f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(this + -0x2f8) + 0x518))(this + -0x2f8);
  return;
}

