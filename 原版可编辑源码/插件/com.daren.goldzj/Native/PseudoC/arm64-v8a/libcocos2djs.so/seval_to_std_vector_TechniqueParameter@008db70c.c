
/* seval_to_std_vector_TechniqueParameter(se::Value const&,
   std::__ndk1::vector<cocos2d::renderer::Technique::Parameter,
   std::__ndk1::allocator<cocos2d::renderer::Technique::Parameter> >*) */

void seval_to_std_vector_TechniqueParameter(Value *param_1,vector *param_2)

{
  Parameter *pPVar1;
  long lVar2;
  undefined8 uVar3;
  Object *this;
  ulong uVar4;
  Parameter *this_00;
  uint uVar5;
  uint local_94;
  Parameter aPStack_90 [72];
  Value aVStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((byte)param_1[8] < 2) {
    pPVar1 = *(Parameter **)param_2;
    this_00 = *(Parameter **)(param_2 + 8);
    while (this_00 != pPVar1) {
      this_00 = this_00 + -0x48;
      cocos2d::renderer::Technique::Parameter::~Parameter(this_00);
    }
    *(Parameter **)(param_2 + 8) = pPVar1;
    uVar3 = 1;
  }
  else if (param_1[8] == (Value)0x5) {
    this = (Object *)se::Value::toObject(param_1);
    local_94 = 0;
    se::Object::getArrayLength(this,&local_94);
    std::__ndk1::
    vector<cocos2d::renderer::Technique::Parameter,std::__ndk1::allocator<cocos2d::renderer::Technique::Parameter>>
    ::reserve((vector<cocos2d::renderer::Technique::Parameter,std::__ndk1::allocator<cocos2d::renderer::Technique::Parameter>>
               *)param_2,(ulong)local_94);
    if (local_94 != 0) {
      uVar5 = 0;
      do {
        se::Value::Value(aVStack_48);
        uVar4 = se::Object::getArrayElement(this,uVar5,aVStack_48);
        if ((uVar4 & 1) != 0) {
          cocos2d::renderer::Technique::Parameter::Parameter(aPStack_90);
          seval_to_TechniqueParameter(aVStack_48,aPStack_90);
          if (*(Parameter **)(param_2 + 8) < *(Parameter **)(param_2 + 0x10)) {
            cocos2d::renderer::Technique::Parameter::Parameter
                      (*(Parameter **)(param_2 + 8),aPStack_90);
            *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x48;
          }
          else {
            std::__ndk1::
            vector<cocos2d::renderer::Technique::Parameter,std::__ndk1::allocator<cocos2d::renderer::Technique::Parameter>>
            ::__push_back_slow_path<cocos2d::renderer::Technique::Parameter>
                      ((vector<cocos2d::renderer::Technique::Parameter,std::__ndk1::allocator<cocos2d::renderer::Technique::Parameter>>
                        *)param_2,aPStack_90);
          }
          cocos2d::renderer::Technique::Parameter::~Parameter(aPStack_90);
        }
        se::Value::~Value(aVStack_48);
        uVar5 = uVar5 + 1;
      } while (uVar5 < local_94);
    }
    uVar3 = 1;
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x847,"seval_to_std_vector_TechniqueParameter");
    __android_log_print(6,"jswrapper","Convert parameter to vector of TechniqueParameter failed!");
    uVar3 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

