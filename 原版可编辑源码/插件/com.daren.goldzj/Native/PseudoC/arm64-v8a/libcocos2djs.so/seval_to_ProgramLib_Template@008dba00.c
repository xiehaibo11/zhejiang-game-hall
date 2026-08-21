
/* seval_to_ProgramLib_Template(se::Value const&, cocos2d::renderer::ProgramLib::Template*) */

undefined4 seval_to_ProgramLib_Template(Value *param_1,Template *param_2)

{
  Template *pTVar1;
  long lVar2;
  uint uVar3;
  Object *this;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  Value aVStack_48 [8];
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1[8] != (Value)0x5) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x869,"seval_to_ProgramLib_Template");
    __android_log_print(6,"jswrapper","Convert parameter to ProgramLib Template failed!");
    uVar5 = 0;
    goto LAB_008dbcd8;
  }
  this = (Object *)se::Value::toObject(param_1);
  se::Value::Value(aVStack_48);
  uVar4 = se::Object::getProperty(this,"id",aVStack_48);
  if ((uVar4 & 1) == 0) {
LAB_008dbad4:
    uVar4 = se::Object::getProperty(this,"name",aVStack_48);
    if ((uVar4 & 1) != 0) {
      se::Value::toStringForce();
      pTVar1 = param_2 + 8;
      if (((byte)*pTVar1 & 1) == 0) {
        *(undefined2 *)pTVar1 = 0;
      }
      else {
        **(undefined1 **)(param_2 + 0x18) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        if (((byte)param_2[8] & 1) != 0) {
          operator_delete(*(void **)(param_2 + 0x18));
          *(undefined8 *)(param_2 + 8) = 0;
        }
      }
      *(undefined8 *)(param_2 + 0x18) = local_50;
      *(undefined8 *)(param_2 + 0x10) = uStack_58;
      *(undefined8 *)pTVar1 = local_60;
    }
    uVar4 = se::Object::getProperty(this,"vert",aVStack_48);
    if ((uVar4 & 1) != 0) {
      se::Value::toStringForce();
      pTVar1 = param_2 + 0x20;
      if (((byte)*pTVar1 & 1) == 0) {
        *(undefined2 *)pTVar1 = 0;
      }
      else {
        **(undefined1 **)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x28) = 0;
        if (((byte)param_2[0x20] & 1) != 0) {
          operator_delete(*(void **)(param_2 + 0x30));
          *(undefined8 *)(param_2 + 0x20) = 0;
        }
      }
      *(undefined8 *)(param_2 + 0x30) = local_50;
      *(undefined8 *)(param_2 + 0x28) = uStack_58;
      *(undefined8 *)pTVar1 = local_60;
    }
    uVar4 = se::Object::getProperty(this,"frag",aVStack_48);
    if ((uVar4 & 1) != 0) {
      se::Value::toStringForce();
      pTVar1 = param_2 + 0x38;
      if (((byte)*pTVar1 & 1) == 0) {
        *(undefined2 *)pTVar1 = 0;
      }
      else {
        **(undefined1 **)(param_2 + 0x48) = 0;
        *(undefined8 *)(param_2 + 0x40) = 0;
        if (((byte)param_2[0x38] & 1) != 0) {
          operator_delete(*(void **)(param_2 + 0x48));
          *(undefined8 *)(param_2 + 0x38) = 0;
        }
      }
      *(undefined8 *)(param_2 + 0x48) = local_50;
      *(undefined8 *)(param_2 + 0x40) = uStack_58;
      *(undefined8 *)pTVar1 = local_60;
    }
    uVar4 = se::Object::getProperty(this,"defines",aVStack_48);
    if (((uVar4 & 1) != 0) &&
       (uVar4 = seval_to_ccvaluevector(aVStack_48,(vector *)(param_2 + 0x50)), (uVar4 & 1) == 0)) {
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                          ,0x88c,"seval_to_ProgramLib_Template");
      __android_log_print(6,"jswrapper","Convert defines failed!");
      goto LAB_008dbccc;
    }
    uVar5 = 1;
  }
  else {
    if (local_40 == '\x03') {
      uVar3 = se::Value::toBoolean(aVStack_48);
      uVar3 = uVar3 & 1;
LAB_008dbad0:
      *(uint *)param_2 = uVar3;
      goto LAB_008dbad4;
    }
    if (local_40 == '\x02') {
      uVar3 = se::Value::toUint32(aVStack_48);
      goto LAB_008dbad0;
    }
    *(undefined4 *)param_2 = 0;
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x872,"seval_to_ProgramLib_Template");
    __android_log_print(6,"jswrapper","Convert id failed!");
LAB_008dbccc:
    uVar5 = 0;
  }
  se::Value::~Value(aVStack_48);
LAB_008dbcd8:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

