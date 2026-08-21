
/* cocos2d::Camera::unprojectGL(cocos2d::Vec3 const&) const */

void __thiscall cocos2d::Camera::unprojectGL(Camera *this,Vec3 *param_1)

{
  long lVar1;
  Director *this_00;
  Size *pSVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Vec3::Vec3((Vec3 *)&local_48);
  this_00 = (Director *)Director::getInstance();
  pSVar2 = (Size *)Director::getWinSize(this_00);
  unprojectGL(this,pSVar2,param_1,(Vec3 *)&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_48,uStack_44,local_40);
}

