
/* seval_to_EffectAsset(se::Value const&, cocos2d::Vector<cocos2d::renderer::Technique*>*) */

void seval_to_EffectAsset(Value *param_1,Vector *param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  Object *this;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  Technique *local_90;
  uint local_84;
  Ref *local_80;
  Value aVStack_78 [8];
  char local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (Object *)se::Value::toObject(param_1);
  uVar4 = se::Object::isArray(this);
  if ((uVar4 & 1) == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x6af,"seval_to_EffectAsset");
    __android_log_print(6,"jswrapper","Convert Effect Asset Failed!");
LAB_008da6b0:
    uVar5 = 0;
  }
  else {
    local_84 = 0;
    se::Object::getArrayLength(this,&local_84);
    if (local_84 != 0) {
      uVar6 = 0;
      uVar7 = 1;
      do {
        se::Value::Value(aVStack_78);
        uVar3 = se::Object::getArrayElement(this,uVar6,aVStack_78);
        if (local_70 == '\x05' && ((uVar3 ^ 0xffffffff) & 1) == 0) {
          local_90 = (Technique *)0x0;
          uVar3 = seval_to_EffectTechnique(aVStack_78,&local_90);
          if ((uVar7 & uVar3) != 0) {
            local_80 = (Ref *)local_90;
            if (*(undefined8 **)(param_2 + 8) == *(undefined8 **)(param_2 + 0x10)) {
              std::__ndk1::
              vector<cocos2d::renderer::Technique*,std::__ndk1::allocator<cocos2d::renderer::Technique*>>
              ::__push_back_slow_path<cocos2d::renderer::Technique*const&>
                        ((vector<cocos2d::renderer::Technique*,std::__ndk1::allocator<cocos2d::renderer::Technique*>>
                          *)param_2,(Technique **)&local_80);
            }
            else {
              **(undefined8 **)(param_2 + 8) = local_90;
              *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 8;
            }
            cocos2d::Ref::retain(local_80);
            uVar7 = 1;
            goto LAB_008da644;
          }
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                              ,0x6ba,"seval_to_EffectAsset");
          __android_log_print(6,"jswrapper","Effect Technique Create Failed!");
          uVar7 = 0;
          bVar2 = false;
        }
        else {
LAB_008da644:
          bVar2 = true;
        }
        se::Value::~Value(aVStack_78);
        if (!bVar2) goto LAB_008da6b0;
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_84);
    }
    uVar5 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

