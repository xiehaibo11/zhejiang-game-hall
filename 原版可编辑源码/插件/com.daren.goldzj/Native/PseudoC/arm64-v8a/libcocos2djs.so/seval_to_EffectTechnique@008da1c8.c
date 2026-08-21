
/* seval_to_EffectTechnique(se::Value const&, cocos2d::renderer::Technique**) */

undefined4 seval_to_EffectTechnique(Value *param_1,Technique **param_2)

{
  byte *pbVar1;
  long lVar2;
  byte *pbVar3;
  Object *pOVar4;
  ulong uVar5;
  ulong *puVar6;
  Technique *this;
  undefined4 uVar7;
  undefined8 *puVar8;
  byte *pbVar9;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  byte *local_60;
  byte *local_58;
  undefined8 local_50;
  Value aVStack_48 [8];
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1[8] == (Value)0x5) {
    pOVar4 = (Object *)se::Value::toObject(param_1);
    local_60 = (byte *)0x0;
    local_58 = (byte *)0x0;
    local_50 = 0;
    se::Object::getAllKeys(pOVar4,(vector *)&local_60);
    se::Value::Value(aVStack_48);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = (void *)0x0;
    uVar5 = se::Object::getProperty(pOVar4,"_name",aVStack_48);
    if ((((uVar5 & 1) != 0) && (local_40 == '\x05')) &&
       (puVar6 = (ulong *)se::Value::toString(aVStack_48), &local_78 != puVar6)) {
      uVar5 = puVar6[1];
      pbVar1 = (byte *)puVar6[2];
      if (((byte)*puVar6 & 1) == 0) {
        pbVar1 = (byte *)((long)puVar6 + 1);
        uVar5 = (ulong)(byte)((byte)*puVar6 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_78,(char *)pbVar1,uVar5);
    }
    local_90 = (undefined8 *)0x0;
    local_88 = (undefined8 *)0x0;
    local_80 = 0;
    uVar5 = se::Object::getProperty(pOVar4,"_passes",aVStack_48);
    if (((uVar5 & 1) == 0) || (local_40 != '\x05')) {
      uVar7 = 0;
    }
    else {
      pOVar4 = (Object *)se::Value::toObject(aVStack_48);
      ccvaluevector_to_EffectPass(pOVar4,(Vector *)&local_90);
      this = operator_new(0x30,(nothrow_t *)&std::nothrow);
      if (this != (Technique *)0x0) {
        cocos2d::renderer::Technique::Technique(this,(basic_string *)&local_78,(Vector *)&local_90);
      }
      *param_2 = this;
      cocos2d::Ref::autorelease((Ref *)this);
      uVar7 = 1;
    }
    puVar8 = local_90;
    if (local_90 != local_88) {
      do {
        cocos2d::Ref::release((Ref *)*puVar8);
        puVar8 = puVar8 + 1;
      } while (puVar8 != local_88);
    }
    local_88 = local_90;
    if (local_90 != (undefined8 *)0x0) {
      operator_delete(local_90);
    }
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
    se::Value::~Value(aVStack_48);
    pbVar1 = local_60;
    pbVar9 = local_58;
    if (local_60 != (byte *)0x0) {
      while (pbVar3 = pbVar9, pbVar3 != pbVar1) {
        pbVar9 = pbVar3 + -0x18;
        if ((*pbVar9 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
      }
      local_58 = pbVar1;
      operator_delete(local_60);
    }
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x690,"seval_to_EffectTechnique");
    __android_log_print(6,"jswrapper","Convert Effect Technique failed!");
    uVar7 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

