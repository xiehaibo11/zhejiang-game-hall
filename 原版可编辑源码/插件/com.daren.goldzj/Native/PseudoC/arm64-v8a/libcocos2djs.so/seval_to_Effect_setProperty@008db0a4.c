
/* seval_to_Effect_setProperty(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, se::Value const&, cocos2d::renderer::EffectBase*, int, bool) */

void seval_to_Effect_setProperty
               (basic_string *param_1,Value *param_2,EffectBase *param_3,int param_4,bool param_5)

{
  undefined1 uVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  Object *pOVar5;
  ulong uVar6;
  ulong uVar7;
  Object *this;
  Texture *pTVar8;
  undefined8 uVar9;
  long lVar10;
  Pass *this_00;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  undefined8 local_128;
  ulong *local_120;
  ulong *local_118;
  uint local_10c;
  Texture *local_108;
  Parameter aPStack_100 [8];
  char local_f8;
  Parameter aPStack_b8 [72];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)(**(code **)(*(long *)param_3 + 0x10))(param_3);
  lVar10 = *plVar4;
  if (param_4 == -1) {
    uVar13 = 0;
    uVar12 = plVar4[1] - lVar10 >> 3;
    if (uVar12 != 0) goto LAB_008db120;
  }
  else {
    uVar13 = (ulong)param_4;
    uVar12 = (ulong)(param_4 + 1);
    if (uVar13 < uVar12) {
LAB_008db120:
      do {
        this_00 = *(Pass **)(lVar10 + uVar13 * 8);
        lVar10 = cocos2d::renderer::Pass::getProperty(this_00,param_1);
        if (lVar10 != 0) {
          cocos2d::renderer::Technique::Parameter::Parameter(aPStack_b8);
          uVar1 = *(undefined1 *)(lVar10 + 0x31);
          switch(uVar1) {
          case 5:
            if (param_2[8] == (Value)0x3) {
              uVar3 = se::Value::toBoolean(param_2);
              local_128 = (ulong *)(CONCAT44(local_128._4_4_,uVar3) & 0xffffffff00000001);
            }
            else if (param_2[8] == (Value)0x2) {
              uVar3 = se::Value::toInt32(param_2);
              local_128 = (ulong *)CONCAT44(local_128._4_4_,uVar3);
            }
            else {
              local_128 = (ulong *)((ulong)local_128 & 0xffffffff00000000);
            }
            cocos2d::renderer::Technique::Parameter::Parameter(aPStack_100,param_1,5,&local_128,1);
            cocos2d::renderer::Technique::Parameter::operator=(aPStack_b8,aPStack_100);
            break;
          case 6:
          case 7:
          case 8:
            pOVar5 = (Object *)se::Value::toObject(param_2);
            uVar6 = se::Object::isTypedArray(pOVar5);
            if ((uVar6 & 1) == 0) {
              __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                                  ,0x71f,"seval_to_Effect_setProperty");
              __android_log_print(6,"jswrapper","Convert parameter to int array failed!");
LAB_008db5d8:
              cocos2d::renderer::Technique::Parameter::~Parameter(aPStack_b8);
              uVar9 = 0;
              goto LAB_008db5e8;
            }
            local_128 = (ulong *)0x0;
            local_108 = (Texture *)0x0;
            se::Object::getTypedArrayData(pOVar5,(uchar **)&local_128,(ulong *)&local_108);
            uVar7 = cocos2d::renderer::Technique::Parameter::getElements(uVar1);
            uVar6 = 0;
            if ((uVar7 & 0xff) != 0) {
              uVar6 = ((ulong)local_108 >> 2) / (uVar7 & 0xff);
            }
            if (param_5) {
              cocos2d::renderer::Technique::Parameter::Parameter(aPStack_100,param_1,uVar1,pOVar5);
              cocos2d::renderer::Technique::Parameter::operator=(aPStack_b8,aPStack_100);
            }
            else {
              cocos2d::renderer::Technique::Parameter::Parameter
                        (aPStack_100,param_1,uVar1,local_128,uVar6);
              cocos2d::renderer::Technique::Parameter::operator=(aPStack_b8,aPStack_100);
            }
            break;
          default:
            goto switchD_008db164_caseD_9;
          case 0xd:
            if ((param_2[8] != (Value)0x2) ||
               (fVar14 = (float)se::Value::toFloat(param_2), NAN(fVar14))) {
              fVar14 = 0.0;
            }
            local_128 = (ulong *)CONCAT44(local_128._4_4_,fVar14);
            cocos2d::renderer::Technique::Parameter::Parameter(aPStack_100,param_1,0xd,&local_128,1)
            ;
            cocos2d::renderer::Technique::Parameter::operator=(aPStack_b8,aPStack_100);
            break;
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x12:
          case 0x16:
          case 0x1a:
          case 99:
          case 100:
            pOVar5 = (Object *)se::Value::toObject(param_2);
            uVar6 = se::Object::isTypedArray(pOVar5);
            if ((uVar6 & 1) == 0) {
              __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                                  ,0x73c,"seval_to_Effect_setProperty");
              __android_log_print(6,"jswrapper","Convert parameter to float array failed!");
              goto LAB_008db5d8;
            }
            local_128 = (ulong *)0x0;
            local_108 = (Texture *)0x0;
            se::Object::getTypedArrayData(pOVar5,(uchar **)&local_128,(ulong *)&local_108);
            uVar7 = cocos2d::renderer::Technique::Parameter::getElements(uVar1);
            uVar6 = 0;
            if ((uVar7 & 0xff) != 0) {
              uVar6 = ((ulong)local_108 >> 2) / (uVar7 & 0xff);
            }
            if (param_5) {
              cocos2d::renderer::Technique::Parameter::Parameter(aPStack_100,param_1,uVar1,pOVar5);
              cocos2d::renderer::Technique::Parameter::operator=(aPStack_b8,aPStack_100);
            }
            else {
              cocos2d::renderer::Technique::Parameter::Parameter
                        (aPStack_100,param_1,uVar1,local_128,uVar6);
              cocos2d::renderer::Technique::Parameter::operator=(aPStack_b8,aPStack_100);
            }
            break;
          case 0x1d:
          case 0x1f:
            if (param_2[8] == (Value)0x1) {
              cocos2d::renderer::Technique::Parameter::Parameter(aPStack_100,param_1,uVar1,0);
              cocos2d::renderer::Technique::Parameter::operator=(aPStack_b8,aPStack_100);
            }
            else {
              pOVar5 = (Object *)se::Value::toObject(param_2);
              uVar6 = se::Object::isArray(pOVar5);
              if ((uVar6 & 1) == 0) {
                if (param_2[8] == (Value)0x5) {
                  pOVar5 = (Object *)se::Value::toObject(param_2);
                  uVar9 = se::Object::getPrivateData(pOVar5);
                }
                else {
                  uVar9 = 0;
                }
                cocos2d::renderer::Technique::Parameter::Parameter(aPStack_100,param_1,uVar1,uVar9);
                cocos2d::renderer::Technique::Parameter::operator=(aPStack_b8,aPStack_100);
              }
              else {
                local_10c = 0;
                se::Object::getArrayLength(pOVar5,&local_10c);
                if (local_10c != 1) {
                  local_128 = (ulong *)0x0;
                  local_120 = (ulong *)0x0;
                  local_118 = (ulong *)0x0;
                  if (local_10c != 0) {
                    uVar11 = 0;
                    do {
                      se::Value::Value((Value *)aPStack_100);
                      se::Object::getArrayElement(pOVar5,uVar11,(Value *)aPStack_100);
                      local_108 = (Texture *)0x0;
                      if (local_f8 == '\x05') {
                        this = (Object *)se::Value::toObject((Value *)aPStack_100);
                        pTVar8 = (Texture *)se::Object::getPrivateData(this);
                        local_108 = pTVar8;
                        if (pTVar8 == (Texture *)0x0) goto LAB_008db450;
                      }
                      else {
                        pTVar8 = (Texture *)0x0;
LAB_008db450:
                        local_108 = (Texture *)0x0;
                      }
                      if (local_120 == local_118) {
                        std::__ndk1::
                        vector<cocos2d::renderer::Texture*,std::__ndk1::allocator<cocos2d::renderer::Texture*>>
                        ::__push_back_slow_path<cocos2d::renderer::Texture*const&>
                                  ((vector<cocos2d::renderer::Texture*,std::__ndk1::allocator<cocos2d::renderer::Texture*>>
                                    *)&local_128,&local_108);
                      }
                      else {
                        *local_120 = (ulong)pTVar8;
                        local_120 = local_120 + 1;
                      }
                      se::Value::~Value((Value *)aPStack_100);
                      uVar11 = uVar11 + 1;
                    } while (uVar11 < local_10c);
                  }
                  cocos2d::renderer::Technique::Parameter::Parameter
                            (aPStack_100,param_1,uVar1,&local_128);
                  cocos2d::renderer::Technique::Parameter::operator=(aPStack_b8,aPStack_100);
                  cocos2d::renderer::Technique::Parameter::~Parameter(aPStack_100);
                  if (local_128 != (ulong *)0x0) {
                    local_120 = local_128;
                    operator_delete(local_128);
                  }
                  goto switchD_008db164_caseD_9;
                }
                if (param_2[8] == (Value)0x5) {
                  pOVar5 = (Object *)se::Value::toObject(param_2);
                  uVar9 = se::Object::getPrivateData(pOVar5);
                }
                else {
                  uVar9 = 0;
                }
                cocos2d::renderer::Technique::Parameter::Parameter(aPStack_100,param_1,uVar1,uVar9);
                cocos2d::renderer::Technique::Parameter::operator=(aPStack_b8,aPStack_100);
              }
            }
          }
          cocos2d::renderer::Technique::Parameter::~Parameter(aPStack_100);
switchD_008db164_caseD_9:
          cocos2d::renderer::Pass::setProperty(this_00,param_1,aPStack_b8);
          cocos2d::renderer::Technique::Parameter::~Parameter(aPStack_b8);
        }
        uVar13 = uVar13 + 1;
        if (uVar12 <= uVar13) goto code_r0x008db520;
        lVar10 = *plVar4;
      } while( true );
    }
  }
  uVar9 = 1;
  goto LAB_008db5e8;
code_r0x008db520:
  uVar9 = 1;
LAB_008db5e8:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}

