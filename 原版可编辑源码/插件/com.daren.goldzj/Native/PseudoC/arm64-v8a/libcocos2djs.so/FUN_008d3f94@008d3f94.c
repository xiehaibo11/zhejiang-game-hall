
undefined4 FUN_008d3f94(Value *param_1,ulong *param_2)

{
  long lVar1;
  Object *this;
  ulong uVar2;
  void *pvVar3;
  char *pcVar4;
  ulong uVar5;
  undefined4 uVar6;
  uchar *local_60;
  ulong local_58 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1[8] == (Value)0x5) {
    this = (Object *)se::Value::toObject(param_1);
    uVar2 = se::Object::isArray(this);
    if ((uVar2 & 1) == 0) {
      uVar2 = se::Object::isTypedArray(this);
      if ((uVar2 & 1) == 0) {
        uVar2 = se::Object::isArrayBuffer(this);
        if ((uVar2 & 1) == 0) goto LAB_008d40dc;
        local_60 = (uchar *)0x0;
        local_58[0] = 0;
        uVar2 = se::Object::getArrayBufferData(this,&local_60,local_58);
      }
      else {
        local_60 = (uchar *)0x0;
        local_58[0] = 0;
        uVar2 = se::Object::getTypedArrayData(this,&local_60,local_58);
      }
      if (((uVar2 & 1) != 0) && (local_58[0] != 0)) {
        uVar6 = 1;
        *(undefined1 *)(param_2 + 2) = 0;
        *param_2 = (ulong)local_60;
        param_2[1] = local_58[0] >> 2;
        goto LAB_008d40e0;
      }
      pcVar4 = "Failed to get typed array data";
    }
    else {
      local_60 = (uchar *)((ulong)local_60 & 0xffffffff00000000);
      uVar2 = se::Object::getArrayLength(this,(uint *)&local_60);
      if ((uVar2 & 1) != 0) {
        if ((int)local_60 != 0) {
          pvVar3 = malloc(((ulong)local_60 & 0xffffffff) << 2);
          se::Value::Value((Value *)local_58);
          if ((int)local_60 == 0) {
            uVar2 = 0;
          }
          else {
            uVar5 = 0;
            do {
              uVar2 = se::Object::getArrayElement(this,(uint)uVar5,(Value *)local_58);
              if ((uVar2 & 1) != 0) {
                uVar6 = se::Value::toFloat((Value *)local_58);
                *(undefined4 *)((long)pvVar3 + uVar5 * 4) = uVar6;
              }
              uVar2 = (ulong)local_60 & 0xffffffff;
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar2);
          }
          uVar6 = 1;
          *param_2 = (ulong)pvVar3;
          param_2[1] = uVar2;
          *(undefined1 *)(param_2 + 2) = 1;
          se::Value::~Value((Value *)local_58);
          goto LAB_008d40e0;
        }
      }
      pcVar4 = "Failed to get array data";
    }
    __android_log_print(6,"jswrapper",pcVar4);
  }
LAB_008d40dc:
  uVar6 = 0;
LAB_008d40e0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

