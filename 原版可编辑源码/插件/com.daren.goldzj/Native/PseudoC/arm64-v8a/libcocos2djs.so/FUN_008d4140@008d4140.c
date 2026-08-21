
undefined4 FUN_008d4140(Value *param_1,ulong *param_2)

{
  long lVar1;
  undefined4 uVar2;
  Object *this;
  ulong uVar3;
  void *pvVar4;
  char *pcVar5;
  ulong uVar6;
  uchar *local_60;
  ulong local_58 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1[8] == (Value)0x5) {
    this = (Object *)se::Value::toObject(param_1);
    uVar3 = se::Object::isArray(this);
    if ((uVar3 & 1) == 0) {
      uVar3 = se::Object::isTypedArray(this);
      if ((uVar3 & 1) == 0) {
        uVar3 = se::Object::isArrayBuffer(this);
        if ((uVar3 & 1) == 0) goto LAB_008d4288;
        local_60 = (uchar *)0x0;
        local_58[0] = 0;
        uVar3 = se::Object::getArrayBufferData(this,&local_60,local_58);
      }
      else {
        local_60 = (uchar *)0x0;
        local_58[0] = 0;
        uVar3 = se::Object::getTypedArrayData(this,&local_60,local_58);
      }
      if (((uVar3 & 1) != 0) && (local_58[0] != 0)) {
        uVar2 = 1;
        *(undefined1 *)(param_2 + 2) = 0;
        *param_2 = (ulong)local_60;
        param_2[1] = local_58[0] >> 2;
        goto LAB_008d428c;
      }
      pcVar5 = "Failed to get typed array data";
    }
    else {
      local_60 = (uchar *)((ulong)local_60 & 0xffffffff00000000);
      uVar3 = se::Object::getArrayLength(this,(uint *)&local_60);
      if ((uVar3 & 1) != 0) {
        if ((int)local_60 != 0) {
          pvVar4 = malloc(((ulong)local_60 & 0xffffffff) << 2);
          se::Value::Value((Value *)local_58);
          if ((int)local_60 == 0) {
            uVar3 = 0;
          }
          else {
            uVar6 = 0;
            do {
              uVar3 = se::Object::getArrayElement(this,(uint)uVar6,(Value *)local_58);
              if ((uVar3 & 1) != 0) {
                uVar2 = se::Value::toInt32((Value *)local_58);
                *(undefined4 *)((long)pvVar4 + uVar6 * 4) = uVar2;
              }
              uVar3 = (ulong)local_60 & 0xffffffff;
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar3);
          }
          uVar2 = 1;
          *param_2 = (ulong)pvVar4;
          param_2[1] = uVar3;
          *(undefined1 *)(param_2 + 2) = 1;
          se::Value::~Value((Value *)local_58);
          goto LAB_008d428c;
        }
      }
      pcVar5 = "Failed to get array data";
    }
    __android_log_print(6,"jswrapper",pcVar5);
  }
LAB_008d4288:
  uVar2 = 0;
LAB_008d428c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

