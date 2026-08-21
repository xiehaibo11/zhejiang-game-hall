
void FUN_008d33a4(Value *param_1,undefined4 *param_2,undefined8 *param_3)

{
  long lVar1;
  Object *this;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_48;
  uchar *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[8] == (Value)0x5) {
    local_48 = 0;
    local_40 = (uchar *)0x0;
    this = (Object *)se::Value::toObject(param_1);
    uVar2 = se::Object::isTypedArray(this);
    if ((uVar2 & 1) == 0) {
      uVar2 = se::Object::isArrayBuffer(this);
      if ((uVar2 & 1) == 0) {
        __android_log_print(6,"jswrapper","JSB_get_arraybufferview_dataptr: isn\'t a typed array!\n"
                           );
        goto LAB_008d3468;
      }
      uVar2 = se::Object::getArrayBufferData(this,&local_40,&local_48);
    }
    else {
      uVar2 = se::Object::getTypedArrayData(this,&local_40,&local_48);
    }
    if ((uVar2 & 1) != 0) {
      *param_3 = local_40;
      *param_2 = (int)local_48;
LAB_008d3448:
      uVar3 = 1;
      goto LAB_008d346c;
    }
  }
  else if ((byte)param_1[8] < 2) {
    *param_2 = 0;
    *param_3 = 0;
    goto LAB_008d3448;
  }
LAB_008d3468:
  uVar3 = 0;
LAB_008d346c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

