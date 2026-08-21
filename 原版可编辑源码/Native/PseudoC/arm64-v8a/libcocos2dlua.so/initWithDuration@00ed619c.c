
/* cocos2d::FlipX3D::initWithDuration(float) */

uint __thiscall cocos2d::FlipX3D::initWithDuration(FlipX3D *this,float param_1)

{
  long lVar1;
  uint uVar2;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Size::Size(aSStack_40,1.0,1.0);
  uVar2 = GridAction::initWithDuration((GridAction *)this,param_1,aSStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

