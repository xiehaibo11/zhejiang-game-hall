
undefined8 * FUN_00922084(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
                    /* catch() { ... } // from try @ 00921ffc with catch @ 00922094 */
                    /* catch() { ... } // from try @ 00922014 with catch @ 00922098 */
  puVar3 = operator_new(0x28);
  *puVar3 = &PTR_FUN_0169cc38;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_1 + 1);
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
                    /* catch() { ... } // from try @ 00921fc8 with catch @ 009220c8 */
  if (param_1 != puVar3) {
    std::__ndk1::vector<LuaArmatureWrapper*,std::__ndk1::allocator<LuaArmatureWrapper*>>::
    assign<LuaArmatureWrapper**>
              ((vector<LuaArmatureWrapper*,std::__ndk1::allocator<LuaArmatureWrapper*>> *)
               (puVar3 + 2),(LuaArmatureWrapper **)param_1[2],(LuaArmatureWrapper **)param_1[3]);
    puVar2 = (undefined8 *)puVar3[3];
    for (puVar1 = (undefined8 *)puVar3[2]; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      cocos2d::Ref::retain((Ref *)*puVar1);
    }
  }
  return puVar3;
}

