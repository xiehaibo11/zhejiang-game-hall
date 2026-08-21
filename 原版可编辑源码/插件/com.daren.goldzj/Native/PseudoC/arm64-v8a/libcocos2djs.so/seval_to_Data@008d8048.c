
/* seval_to_Data(se::Value const&, cocos2d::Data*) */

uint seval_to_Data(Value *param_1,Data *param_2)

{
  long lVar1;
  uint uVar2;
  Object *pOVar3;
  ulong uVar4;
  ulong local_48;
  uchar *puStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[8] == (Value)0x5) {
    pOVar3 = (Object *)se::Value::toObject(param_1);
    uVar4 = se::Object::isTypedArray(pOVar3);
    if ((uVar4 & 1) != 0) {
      local_48 = 0;
      puStack_40 = (uchar *)0x0;
      pOVar3 = (Object *)se::Value::toObject(param_1);
      uVar2 = se::Object::getTypedArrayData(pOVar3,&puStack_40,&local_48);
      if ((uVar2 & 1) == 0) {
        cocos2d::Data::clear(param_2);
      }
      else {
        cocos2d::Data::copy(param_2,puStack_40,local_48);
      }
      goto LAB_008d8100;
    }
  }
  __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                      ,0x42b,"seval_to_Data");
  __android_log_print(6,"jswrapper","Convert parameter to Data failed!");
  uVar2 = 0;
LAB_008d8100:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

