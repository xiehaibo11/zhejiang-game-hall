
/* seval_to_std_vector_Texture(se::Value const&, std::__ndk1::vector<cocos2d::renderer::Texture*,
   std::__ndk1::allocator<cocos2d::renderer::Texture*> >*) */

void seval_to_std_vector_Texture(Value *param_1,vector *param_2)

{
  long lVar1;
  uint uVar2;
  Object *pOVar3;
  ulong uVar4;
  Object *this;
  Texture *pTVar5;
  undefined8 uVar6;
  uint uVar7;
  Texture *local_58;
  uint local_4c;
  Value aVStack_48 [8];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[8] == (Value)0x5) {
    pOVar3 = (Object *)se::Value::toObject(param_1);
    uVar4 = se::Object::isArray(pOVar3);
    if ((uVar4 & 1) != 0) {
      pOVar3 = (Object *)se::Value::toObject(param_1);
      local_4c = 0;
      uVar4 = se::Object::getArrayLength(pOVar3,&local_4c);
      if (((uVar4 & 1) == 0) || (local_4c == 0)) {
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)param_2;
      }
      else {
        uVar7 = 0;
        do {
          se::Value::Value(aVStack_48);
          uVar2 = se::Object::getArrayElement(pOVar3,uVar7,aVStack_48);
          if (local_40 == '\x05' && ((uVar2 ^ 0xffffffff) & 1) == 0) {
            local_58 = (Texture *)0x0;
            this = (Object *)se::Value::toObject(aVStack_48);
            pTVar5 = (Texture *)se::Object::getPrivateData(this);
            local_58 = pTVar5;
            if (pTVar5 == (Texture *)0x0) {
              local_58 = (Texture *)0x0;
            }
            if (*(long **)(param_2 + 8) == *(long **)(param_2 + 0x10)) {
              std::__ndk1::
              vector<cocos2d::renderer::Texture*,std::__ndk1::allocator<cocos2d::renderer::Texture*>>
              ::__push_back_slow_path<cocos2d::renderer::Texture*const&>
                        ((vector<cocos2d::renderer::Texture*,std::__ndk1::allocator<cocos2d::renderer::Texture*>>
                          *)param_2,&local_58);
            }
            else {
              **(long **)(param_2 + 8) = (long)pTVar5;
              *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 8;
            }
          }
          se::Value::~Value(aVStack_48);
          uVar7 = uVar7 + 1;
        } while (uVar7 < local_4c);
      }
      uVar6 = 1;
      goto LAB_008d8778;
    }
  }
  __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                      ,0x4d7,"seval_to_std_vector_Texture");
  __android_log_print(6,"jswrapper","Convert parameter to vector of Texture failed!");
  uVar6 = 0;
LAB_008d8778:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar6);
  }
  return;
}

