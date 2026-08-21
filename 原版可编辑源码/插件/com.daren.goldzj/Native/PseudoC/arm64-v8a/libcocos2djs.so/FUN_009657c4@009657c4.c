
uchar * FUN_009657c4(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  Object *this;
  ulong *puVar3;
  uchar *puVar4;
  uchar *local_50;
  Value aVStack_48 [8];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar3 = (ulong *)*param_2;
  local_50 = (uchar *)0x0;
  se::Value::Value(aVStack_48);
  uVar2 = se::Object::getProperty(*(Object **)(param_1 + 8),"_data",aVStack_48);
  if (((uVar2 & 1) == 0) || (local_40 != '\x05')) {
    puVar4 = (uchar *)0x0;
  }
  else {
    this = (Object *)se::Value::toObject(aVStack_48);
    se::Object::getTypedArrayData(this,&local_50,puVar3);
    puVar4 = local_50;
  }
  se::Value::~Value(aVStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

