
/* ccvalue_to_seval(cocos2d::Value const&, se::Value*) */

ulong ccvalue_to_seval(Value *param_1,Value *param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  vector *pvVar6;
  unordered_map *puVar7;
  double dVar8;
  basic_string local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    se::Value::setNull(param_2);
    break;
  default:
    __android_log_print(6,"jswrapper","Could not the way to convert cocos2d::Value::Type (%d) type!"
                       );
    uVar5 = 0;
    goto LAB_008dd144;
  case 2:
    iVar4 = cocos2d::Value::asInt(param_1);
    se::Value::setInt32(param_2,iVar4);
    break;
  case 3:
    uVar3 = cocos2d::Value::asUnsignedInt(param_1);
    se::Value::setUint32(param_2,uVar3);
    break;
  case 4:
  case 5:
    dVar8 = (double)cocos2d::Value::asDouble(param_1);
    se::Value::setNumber(param_2,dVar8);
    break;
  case 6:
    bVar2 = cocos2d::Value::asBool(param_1);
    se::Value::setBoolean(param_2,(bool)(bVar2 & 1));
    break;
  case 7:
    cocos2d::Value::asString();
    se::Value::setString(param_2,local_40);
    if (((byte)local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
    break;
  case 8:
    pvVar6 = (vector *)cocos2d::Value::asValueVector(param_1);
    uVar5 = ccvaluevector_to_seval(pvVar6,param_2);
    goto LAB_008dd174;
  case 9:
    puVar7 = (unordered_map *)cocos2d::Value::asValueMap(param_1);
    uVar5 = ccvaluemap_to_seval(puVar7,param_2);
    goto LAB_008dd174;
  case 10:
    puVar7 = (unordered_map *)cocos2d::Value::asIntKeyMap(param_1);
    uVar5 = ccvaluemapintkey_to_seval(puVar7,param_2);
LAB_008dd174:
    if (*(long *)(lVar1 + 0x28) == local_28) {
      return (ulong)((uint)uVar5 & 1);
    }
    goto LAB_008dd198;
  }
  uVar5 = 1;
LAB_008dd144:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar5;
  }
LAB_008dd198:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

