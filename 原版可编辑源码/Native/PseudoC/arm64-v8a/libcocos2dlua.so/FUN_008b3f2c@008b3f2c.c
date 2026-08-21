
void FUN_008b3f2c(long param_1,vector *param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 local_80;
  void **ppvStack_78;
  void *local_70;
  void *local_68;
  void *local_58;
  void *local_50;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = *param_3;
  std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>::vector
            ((vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>> *)&local_70,param_2);
  std::__ndk1::vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>>::vector
            ((vector<cocos2d::Touch*,std::__ndk1::allocator<cocos2d::Touch*>> *)&local_58,
             (vector *)&local_70);
  local_40 = uVar3;
  if (local_70 != (void *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
  local_80 = *(undefined8 *)(param_1 + 8);
  ppvStack_78 = &local_58;
  plVar2 = (long *)cocos2d::LuaEngine::getInstance();
  (**(code **)(*plVar2 + 0x128))(plVar2,*(undefined4 *)(param_1 + 0x10),&local_80);
  if (local_58 != (void *)0x0) {
    local_50 = local_58;
    operator_delete(local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

