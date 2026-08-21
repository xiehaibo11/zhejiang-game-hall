
/* seval_to_TechniqueParameter(se::Value const&, cocos2d::renderer::Technique::Parameter*) */

undefined4 seval_to_TechniqueParameter(Value *param_1,Parameter *param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  Object *pOVar4;
  ulong uVar5;
  undefined8 uVar6;
  Object *this;
  Texture *pTVar7;
  ulong uVar8;
  uchar *puVar9;
  undefined4 uVar10;
  uint uVar11;
  double dVar12;
  Texture *local_100;
  uint local_f4;
  long *local_f0;
  long *local_e8;
  long *local_e0;
  ulong local_d8;
  uchar *local_d0;
  undefined8 uStack_c8;
  undefined1 *local_c0;
  uchar *local_b0;
  char cStack_a8;
  undefined7 uStack_a7;
  undefined1 *local_a0;
  Value aVStack_68 [8];
  char local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_1[8] != (Value)0x5) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x788,"seval_to_TechniqueParameter");
    __android_log_print(6,"jswrapper","Convert parameter to TechniqueParameter failed!");
    uVar10 = 0;
    goto LAB_008da86c;
  }
  pOVar4 = (Object *)se::Value::toObject(param_1);
  se::Value::Value(aVStack_68);
  local_d0 = (uchar *)0x0;
  uStack_c8 = 0;
  local_c0 = (undefined1 *)0x0;
  local_e0 = (long *)0x0;
  local_d8 = 0;
  local_f0 = (long *)0x0;
  local_e8 = (long *)0x0;
  uVar5 = se::Object::getProperty(pOVar4,"updateSubImage",aVStack_68);
  if ((uVar5 & 1) != 0) {
    if (param_1[8] == (Value)0x5) {
      pOVar4 = (Object *)se::Value::toObject(param_1);
      uVar6 = se::Object::getPrivateData(pOVar4);
    }
    else {
      uVar6 = 0;
    }
    uVar3 = 0x1d;
LAB_008da81c:
    cocos2d::renderer::Technique::Parameter::Parameter((Parameter *)&local_b0,&local_d0,uVar3,uVar6)
    ;
    cocos2d::renderer::Technique::Parameter::operator=(param_2,(Parameter *)&local_b0);
    goto LAB_008da838;
  }
  uVar5 = se::Object::getProperty(pOVar4,"name",aVStack_68);
  if ((uVar5 & 1) != 0) {
    se::Value::toStringForce();
    if (((ulong)local_d0 & 1) != 0) {
      *local_c0 = 0;
      uStack_c8 = 0;
      if (((ulong)local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
    }
    uStack_c8 = CONCAT71(uStack_a7,cStack_a8);
    local_c0 = local_a0;
    local_d0 = local_b0;
  }
  uVar5 = se::Object::getProperty(pOVar4,"type",aVStack_68);
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
LAB_008da91c:
    uVar5 = se::Object::getProperty(pOVar4,"size",aVStack_68);
    if ((uVar5 & 1) == 0) {
      bVar2 = 0;
    }
    else if (local_60 == '\x03') {
      bVar2 = se::Value::toBoolean(aVStack_68);
      bVar2 = bVar2 & 1;
    }
    else {
      if (local_60 != '\x02') {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                            ,0x7b7,"seval_to_TechniqueParameter");
        __android_log_print(6,"jswrapper","Convert Parameter size failed!");
        goto LAB_008daa4c;
      }
      bVar2 = se::Value::toUint8(aVStack_68);
    }
    uVar5 = se::Object::getProperty(pOVar4,"value",aVStack_68);
    dVar12 = 0.0;
    if ((uVar5 & 1) == 0) {
LAB_008dab28:
      uVar6 = 0;
LAB_008dab2c:
      puVar9 = (uchar *)0x0;
    }
    else if (local_60 == '\x05') {
      pOVar4 = (Object *)se::Value::toObject(aVStack_68);
      uVar5 = se::Object::isArray(pOVar4);
      if ((uVar5 & 1) != 0) {
        if ((uVar3 & 0xff | 2) != 0x1f) {
          __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                              ,0x7c9,"seval_to_TechniqueParameter");
          __android_log_print(6,"jswrapper","Convert Parameter val failed!");
          goto LAB_008daa4c;
        }
        local_f4 = 0;
        se::Object::getArrayLength(pOVar4,&local_f4);
        if (local_f4 != 0) {
          uVar11 = 0;
          do {
            se::Value::Value((Value *)&local_b0);
            se::Object::getArrayElement(pOVar4,uVar11,(Value *)&local_b0);
            local_100 = (Texture *)0x0;
            if (cStack_a8 == '\x05') {
              this = (Object *)se::Value::toObject((Value *)&local_b0);
              pTVar7 = (Texture *)se::Object::getPrivateData(this);
              local_100 = pTVar7;
              if (pTVar7 == (Texture *)0x0) goto LAB_008daae0;
            }
            else {
              pTVar7 = (Texture *)0x0;
LAB_008daae0:
              local_100 = (Texture *)0x0;
            }
            if (local_e8 == local_e0) {
              std::__ndk1::
              vector<cocos2d::renderer::Texture*,std::__ndk1::allocator<cocos2d::renderer::Texture*>>
              ::__push_back_slow_path<cocos2d::renderer::Texture*const&>
                        ((vector<cocos2d::renderer::Texture*,std::__ndk1::allocator<cocos2d::renderer::Texture*>>
                          *)&local_f0,&local_100);
            }
            else {
              *local_e8 = (long)pTVar7;
              local_e8 = local_e8 + 1;
            }
            se::Value::~Value((Value *)&local_b0);
            uVar11 = uVar11 + 1;
          } while (uVar11 < local_f4);
        }
        goto LAB_008dab28;
      }
      uVar5 = se::Object::isTypedArray(pOVar4);
      if ((uVar5 & 1) == 0) {
        uVar5 = se::Object::isArrayBuffer(pOVar4);
        if ((uVar5 & 1) == 0) {
          uVar6 = 0;
          if (((uVar3 & 0xff | 2) != 0x1f) || (local_60 != '\x05')) {
            puVar9 = (uchar *)0x0;
            goto LAB_008dab30;
          }
          pOVar4 = (Object *)se::Value::toObject(aVStack_68);
          uVar6 = se::Object::getPrivateData(pOVar4);
          goto LAB_008dab2c;
        }
        local_b0 = (uchar *)0x0;
        uVar5 = se::Object::getArrayBufferData(pOVar4,&local_b0,&local_d8);
      }
      else {
        local_b0 = (uchar *)0x0;
        uVar5 = se::Object::getTypedArrayData(pOVar4,&local_b0,&local_d8);
      }
      uVar6 = 0;
      puVar9 = local_b0;
      if ((uVar5 & 1) == 0) {
        puVar9 = (uchar *)0x0;
      }
    }
    else {
      if (local_60 != '\x02') goto LAB_008dab28;
      dVar12 = (double)se::Value::toNumber(aVStack_68);
      uVar6 = 0;
      local_d8 = 4;
      bVar2 = 1;
      puVar9 = (uchar *)0x0;
    }
LAB_008dab30:
    switch(uVar3 & 0xff) {
    case 5:
    case 6:
    case 7:
    case 8:
      if (bVar2 == 1) {
        local_100 = (Texture *)CONCAT44(local_100._4_4_,(int)dVar12);
        cocos2d::renderer::Technique::Parameter::Parameter
                  ((Parameter *)&local_b0,&local_d0,uVar3,&local_100,1);
        cocos2d::renderer::Technique::Parameter::operator=(param_2,(Parameter *)&local_b0);
      }
      else {
        uVar8 = cocos2d::renderer::Technique::Parameter::getElements(uVar3);
        uVar5 = 0;
        if ((uVar8 & 0xff) != 0) {
          uVar5 = (local_d8 >> 2) / (uVar8 & 0xff);
        }
        cocos2d::renderer::Technique::Parameter::Parameter
                  ((Parameter *)&local_b0,&local_d0,uVar3,puVar9,uVar5);
        cocos2d::renderer::Technique::Parameter::operator=(param_2,(Parameter *)&local_b0);
      }
      break;
    default:
      goto switchD_008dab58_caseD_9;
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x12:
    case 0x16:
    case 0x1a:
    case 99:
    case 100:
      if (bVar2 == 1) {
        local_100 = (Texture *)CONCAT44(local_100._4_4_,(float)dVar12);
        cocos2d::renderer::Technique::Parameter::Parameter
                  ((Parameter *)&local_b0,&local_d0,uVar3,&local_100,1);
        cocos2d::renderer::Technique::Parameter::operator=(param_2,(Parameter *)&local_b0);
      }
      else {
        uVar8 = cocos2d::renderer::Technique::Parameter::getElements(uVar3);
        uVar5 = 0;
        if ((uVar8 & 0xff) != 0) {
          uVar5 = (local_d8 >> 2) / (uVar8 & 0xff);
        }
        cocos2d::renderer::Technique::Parameter::Parameter
                  ((Parameter *)&local_b0,&local_d0,uVar3,puVar9,uVar5);
        cocos2d::renderer::Technique::Parameter::operator=(param_2,(Parameter *)&local_b0);
      }
      break;
    case 0x1d:
    case 0x1f:
      if (bVar2 == 1) goto LAB_008da81c;
      cocos2d::renderer::Technique::Parameter::Parameter
                ((Parameter *)&local_b0,&local_d0,uVar3,&local_f0);
      cocos2d::renderer::Technique::Parameter::operator=(param_2,(Parameter *)&local_b0);
    }
LAB_008da838:
    cocos2d::renderer::Technique::Parameter::~Parameter((Parameter *)&local_b0);
switchD_008dab58_caseD_9:
    uVar10 = 1;
  }
  else {
    if (local_60 == '\x03') {
      uVar3 = se::Value::toBoolean(aVStack_68);
      uVar3 = uVar3 & 1;
      goto LAB_008da91c;
    }
    if (local_60 == '\x02') {
      uVar3 = se::Value::toUint8(aVStack_68);
      goto LAB_008da91c;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x7b0,"seval_to_TechniqueParameter");
    __android_log_print(6,"jswrapper","Convert Parameter type failed!");
LAB_008daa4c:
    uVar10 = 0;
  }
  if (local_f0 != (long *)0x0) {
    local_e8 = local_f0;
    operator_delete(local_f0);
  }
  if (((ulong)local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  se::Value::~Value(aVStack_68);
LAB_008da86c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

