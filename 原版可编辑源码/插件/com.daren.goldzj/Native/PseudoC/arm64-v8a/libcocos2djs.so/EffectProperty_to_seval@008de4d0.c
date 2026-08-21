
/* EffectProperty_to_seval(cocos2d::renderer::Technique::Parameter const&, se::Value*) */

undefined8 EffectProperty_to_seval(Parameter *param_1,Value *param_2)

{
  Parameter PVar1;
  long lVar2;
  type *ptVar3;
  Object *pOVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  Object *local_68;
  Value aVStack_60 [16];
  undefined8 *local_50;
  undefined8 *puStack_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar6 = (uint)(byte)param_1[0x31];
  if ((uVar6 | 2) == 0x1f) {
    PVar1 = param_1[0x30];
    if (PVar1 == (Parameter)0x1) {
      se::Value::Value((Value *)&local_50);
      ptVar3 = (type *)cocos2d::renderer::Technique::Parameter::getTexture(param_1);
      native_ptr_to_seval<cocos2d::renderer::Texture>(ptVar3,(Value *)&local_50,(bool *)0x0);
      se::Value::operator=(param_2,(Value *)&local_50);
      se::Value::~Value((Value *)&local_50);
    }
    else if (PVar1 == (Parameter)0x0) {
      se::Value::operator=(param_2,(Value *)&se::Value::Null);
    }
    else {
      cocos2d::renderer::Technique::Parameter::getTextureArray();
      pOVar4 = (Object *)se::Object::createArrayObject((ulong)(byte)PVar1);
      se::HandleObject::HandleObject((HandleObject *)&local_68,pOVar4);
      uVar6 = 0;
      do {
        se::Value::Value(aVStack_60);
        native_ptr_to_seval<cocos2d::renderer::Texture>((type *)*local_50,aVStack_60,(bool *)0x0);
        se::Object::setArrayElement(local_68,uVar6,aVStack_60);
        se::Value::~Value(aVStack_60);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (byte)PVar1);
      se::Value::setObject(param_2,(HandleObject *)&local_68,false);
      se::HandleObject::~HandleObject((HandleObject *)&local_68);
      if (local_50 != (undefined8 *)0x0) {
        puStack_48 = local_50;
        operator_delete(local_50);
      }
    }
    goto switchD_008de560_caseD_9;
  }
  lVar7 = 0x38;
  if (*(long *)(param_1 + 8) != 0) {
    lVar7 = 0;
  }
  if (0x15 < uVar6 - 5) goto switchD_008de560_caseD_9;
  pauVar8 = *(undefined1 (**) [16])(param_1 + lVar7);
  switch(uVar6) {
  case 5:
    se::Value::setInt32(param_2,*(int *)*pauVar8);
    break;
  case 6:
    local_50 = (undefined8 *)NEON_scvtf(*(undefined8 *)*pauVar8,4);
    Vec2_to_seval((Vec2 *)&local_50,param_2);
    break;
  case 7:
    cocos2d::Vec3::Vec3((Vec3 *)&local_50);
    local_50 = (undefined8 *)NEON_scvtf(*(undefined8 *)*pauVar8,4);
    puStack_48 = (undefined8 *)CONCAT44(puStack_48._4_4_,(float)*(int *)(*pauVar8 + 8));
    Vec3_to_seval((Vec3 *)&local_50,param_2);
    cocos2d::Vec3::~Vec3((Vec3 *)&local_50);
    break;
  case 8:
    cocos2d::Vec4::Vec4((Vec4 *)&local_50);
    auVar9 = NEON_scvtf(*pauVar8,4);
    puStack_48 = auVar9._8_8_;
    local_50 = auVar9._0_8_;
    Vec4_to_seval((Vec4 *)&local_50,param_2);
    goto LAB_008de740;
  case 0xd:
    se::Value::setFloat(param_2,*(float *)*pauVar8);
    break;
  case 0xe:
    local_50 = *(undefined8 **)*pauVar8;
    Vec2_to_seval((Vec2 *)&local_50,param_2);
    break;
  case 0xf:
    cocos2d::Vec3::Vec3((Vec3 *)&local_50);
    local_50 = *(undefined8 **)*pauVar8;
    puStack_48 = (undefined8 *)CONCAT44(puStack_48._4_4_,*(undefined4 *)(*pauVar8 + 8));
    Vec3_to_seval((Vec3 *)&local_50,param_2);
    cocos2d::Vec3::~Vec3((Vec3 *)&local_50);
  case 0x10:
    cocos2d::Vec4::Vec4((Vec4 *)&local_50);
    local_50 = *(undefined8 **)*pauVar8;
    puStack_48 = *(undefined8 **)(*pauVar8 + 8);
    Vec4_to_seval((Vec4 *)&local_50,param_2);
LAB_008de740:
    cocos2d::Vec4::~Vec4((Vec4 *)&local_50);
    break;
  case 0x12:
    uVar5 = 4;
    goto LAB_008de758;
  case 0x16:
    uVar5 = 9;
    goto LAB_008de758;
  case 0x1a:
    uVar5 = 0x10;
LAB_008de758:
    FUN_008de8dc(pauVar8,uVar5,param_2);
  }
switchD_008de560_caseD_9:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

