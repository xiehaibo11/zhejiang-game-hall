
/* cocos2d::Node::updateCascadeOpacity() */

void __thiscall cocos2d::Node::updateCascadeOpacity(Node *this)

{
  undefined4 uVar1;
  ulong uVar2;
  
  if ((*(long **)(this + 400) == (long *)0x0) ||
     (uVar2 = (**(code **)(**(long **)(this + 400) + 0x4a0))(), (uVar2 & 1) == 0)) {
    uVar1 = 0xff;
  }
  else {
    uVar1 = (**(code **)(**(long **)(this + 400) + 0x488))();
  }
                    /* WARNING: Could not recover jumptable at 0x00f277e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x498))(this,uVar1);
  return;
}

