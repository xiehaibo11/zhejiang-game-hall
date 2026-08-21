
void FUN_00922134(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_2 = &PTR_FUN_0169cc38;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  if (param_1 != param_2) {
    std::__ndk1::vector<LuaArmatureWrapper*,std::__ndk1::allocator<LuaArmatureWrapper*>>::
    assign<LuaArmatureWrapper**>
              ((vector<LuaArmatureWrapper*,std::__ndk1::allocator<LuaArmatureWrapper*>> *)
               (param_2 + 2),(LuaArmatureWrapper **)param_1[2],(LuaArmatureWrapper **)param_1[3]);
    puVar2 = (undefined8 *)param_2[3];
    for (puVar1 = (undefined8 *)param_2[2]; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      cocos2d::Ref::retain((Ref *)*puVar1);
    }
  }
  return;
}

