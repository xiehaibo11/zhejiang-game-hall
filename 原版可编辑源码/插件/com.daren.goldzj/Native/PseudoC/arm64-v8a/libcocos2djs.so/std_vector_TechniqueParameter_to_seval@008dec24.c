
/* std_vector_TechniqueParameter_to_seval(std::__ndk1::vector<cocos2d::renderer::Technique::Parameter,
   std::__ndk1::allocator<cocos2d::renderer::Technique::Parameter> > const&, se::Value*) */

undefined8 std_vector_TechniqueParameter_to_seval(vector *param_1,Value *param_2)

{
  Parameter *pPVar1;
  long lVar2;
  Object *pOVar3;
  Parameter *pPVar4;
  uint uVar5;
  Object *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pOVar3 = (Object *)
           se::Object::createArrayObject
                     ((*(long *)(param_1 + 8) - *(long *)param_1 >> 3) * -0x71c71c71c71c71c7);
  se::HandleObject::HandleObject((HandleObject *)&local_60,pOVar3);
  se::Value::setObject(param_2,(HandleObject *)&local_60,false);
  pPVar4 = *(Parameter **)param_1;
  pPVar1 = *(Parameter **)(param_1 + 8);
  if (pPVar4 != pPVar1) {
    uVar5 = 0;
    do {
      se::Value::Value(aVStack_58,(Value *)&se::Value::Null);
      TechniqueParameter_to_seval(pPVar4,aVStack_58);
      se::Object::setArrayElement(local_60,uVar5,aVStack_58);
      uVar5 = uVar5 + 1;
      se::Value::~Value(aVStack_58);
      pPVar4 = pPVar4 + 0x48;
    } while (pPVar1 != pPVar4);
  }
  se::HandleObject::~HandleObject((HandleObject *)&local_60);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

