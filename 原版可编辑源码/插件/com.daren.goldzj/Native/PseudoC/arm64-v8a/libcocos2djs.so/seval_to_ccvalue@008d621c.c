
/* seval_to_ccvalue(se::Value const&, cocos2d::Value*) */

uint seval_to_ccvalue(Value *param_1,Value *param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  Value *pVVar4;
  Value *pVVar5;
  byte bVar6;
  uint uVar7;
  basic_string *pbVar8;
  Object *this;
  ulong uVar9;
  Value *pVVar10;
  void *pvVar11;
  double dVar12;
  Value aVStack_80 [16];
  Value *local_70;
  Value *pVStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  switch(param_1[8]) {
  case (Value)0x2:
    dVar12 = (double)se::Value::toNumber(param_1);
    cocos2d::Value::operator=(param_2,dVar12);
    uVar7 = 1;
    break;
  case (Value)0x3:
    bVar6 = se::Value::toBoolean(param_1);
    cocos2d::Value::operator=(param_2,(bool)(bVar6 & 1));
    uVar7 = 1;
    break;
  case (Value)0x4:
    pbVar8 = (basic_string *)se::Value::toString(param_1);
    cocos2d::Value::operator=(param_2,pbVar8);
    uVar7 = 1;
    break;
  case (Value)0x5:
    this = (Object *)se::Value::toObject(param_1);
    uVar9 = se::Object::isArray(this);
    if ((uVar9 & 1) == 0) {
      pVStack_68 = (Value *)0x0;
      local_70 = (Value *)0x0;
      uStack_58 = 0;
      local_60 = (void *)0x0;
      local_50 = 0x3f800000;
      uVar7 = seval_to_ccvaluemap(param_1,(unordered_map *)&local_70);
      if ((uVar7 & 1) == 0) {
        cocos2d::Value::operator=(param_2,(Value *)&cocos2d::Value::Null);
        bVar1 = true;
        pVVar10 = local_70;
        puVar3 = local_60;
      }
      else {
        cocos2d::Value::Value(aVStack_80,(unordered_map *)&local_70);
        cocos2d::Value::operator=(param_2,aVStack_80);
        cocos2d::Value::~Value(aVStack_80);
        bVar1 = false;
        pVVar10 = local_70;
        puVar3 = local_60;
      }
      while (puVar3 != (void *)0x0) {
        pvVar11 = (void *)*puVar3;
        local_70 = pVVar10;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pVVar10 = local_70;
        puVar3 = pvVar11;
      }
      local_70 = (Value *)0x0;
      pVVar5 = pVStack_68;
      if (pVVar10 != (Value *)0x0) goto LAB_008d647c;
    }
    else {
      local_70 = (Value *)0x0;
      pVStack_68 = (Value *)0x0;
      local_60 = (void *)0x0;
      uVar7 = seval_to_ccvaluevector(param_1,(vector *)&local_70);
      bVar1 = (uVar7 & 1) == 0;
      if (bVar1) {
        cocos2d::Value::operator=(param_2,(Value *)&cocos2d::Value::Null);
        pVVar5 = local_70;
      }
      else {
        cocos2d::Value::Value(aVStack_80,(vector *)&local_70);
        cocos2d::Value::operator=(param_2,aVStack_80);
        cocos2d::Value::~Value(aVStack_80);
        pVVar5 = local_70;
      }
      local_70 = pVVar5;
      pVVar10 = pVVar5;
      pVVar4 = pVStack_68;
      if (pVVar5 != (Value *)0x0) {
        while (local_70 = pVVar10, pVVar4 != pVVar5) {
          cocos2d::Value::~Value(pVVar4 + -0x10);
          pVVar10 = local_70;
          pVVar4 = pVVar4 + -0x10;
        }
LAB_008d647c:
        pVStack_68 = pVVar5;
        operator_delete(pVVar10);
      }
    }
    if (!bVar1) break;
    goto LAB_008d6484;
  default:
    if ((byte)param_1[8] < 2) {
      cocos2d::Value::operator=(param_2,(Value *)&cocos2d::Value::Null);
      uVar7 = 1;
      break;
    }
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x233,"seval_to_ccvalue");
    __android_log_print(6,"jswrapper","type not supported!");
LAB_008d6484:
    uVar7 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7 & 1;
}

