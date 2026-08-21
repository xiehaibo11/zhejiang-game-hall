
/* cocos2d::Ref::release() */

void __thiscall cocos2d::Ref::release(Ref *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 8);
  *(int *)(this + 8) = iVar1 + -1;
  if ((this != (Ref *)0x0) && (iVar1 + -1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00882e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 8))();
    return;
  }
  return;
}

