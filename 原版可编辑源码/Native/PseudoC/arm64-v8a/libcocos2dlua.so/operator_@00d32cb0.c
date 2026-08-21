
/* std::__ndk1::function<void ()>& std::__ndk1::function<void
   ()>::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::__bind<void (cocos2d::MotionStreak3D::*)(cocos2d::Mat4
   const&, unsigned int), cocos2d::MotionStreak3D*, cocos2d::Mat4 const&, unsigned int&>&&) */

function * __thiscall
std::__ndk1::function<void()>::operator=(function<void()> *this,__bind *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  Mat4 aMStack_b8 [64];
  undefined4 local_78;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar6 = *(long *)(param_1 + 8);
  lVar5 = *(long *)param_1;
  lVar3 = *(long *)(param_1 + 0x10);
  cocos2d::Mat4::Mat4(aMStack_b8,(Mat4 *)(param_1 + 0x18));
  local_78 = *(undefined4 *)(param_1 + 0x58);
  local_50 = (long *)0x0;
  plVar2 = operator_new(0x68);
  *plVar2 = (long)&PTR____func_016d3c00;
  plVar2[2] = lVar6;
  plVar2[1] = lVar5;
  plVar2[3] = lVar3;
  cocos2d::Mat4::Mat4((Mat4 *)(plVar2 + 4),aMStack_b8);
  *(undefined4 *)(plVar2 + 0xc) = local_78;
  local_50 = plVar2;
  FUN_008820fc(alStack_70,this);
  if (alStack_70 == local_50) {
    pcVar4 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00d32d84;
    pcVar4 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar4)();
LAB_00d32d84:
  cocos2d::Mat4::~Mat4(aMStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

