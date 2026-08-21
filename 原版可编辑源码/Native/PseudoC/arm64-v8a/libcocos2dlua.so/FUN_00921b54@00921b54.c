
undefined8 * FUN_00921b54(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = operator_new(0x28);
  *puVar3 = &PTR_FUN_0169cba8;
  *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(param_1 + 1);
                    /* catch() { ... } // from try @ 00921b38 with catch @ 00921b90 */
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  if (param_1 != puVar3) {
                    /* try { // try from 00921ba4 to 00a21c5b has its CatchHandler @ 00921ba4
                       catch() { ... } // from try @ 00921ba4 with catch @ 00921ba4
                       catch() { ... } // from try @ 00921cdc with catch @ 00921ba4 */
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

