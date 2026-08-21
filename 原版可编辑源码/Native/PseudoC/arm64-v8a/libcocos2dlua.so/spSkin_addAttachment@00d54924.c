
void spSkin_addAttachment(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = _Entry_create(param_2,param_3,param_4);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(long *)(param_1 + 8) = lVar1;
  return;
}

