
ulong * FUN_01587c68(long param_1,ulong *param_2,undefined4 *param_3)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  LookupIterator aLStack_88 [88];
  
  lVar2 = *(long *)(param_1 + 0x38);
  v8::internal::LookupIterator::PropertyOrElement
            (aLStack_88,(ulong)*(uint *)(lVar2 + 4) << 0x20,lVar2,param_2,lVar2,3);
  uVar1 = v8::internal::JSReceiver::HasProperty(aLStack_88);
  if ((uVar1 & 0xff) == 0) {
    param_2 = (ulong *)0x0;
  }
  else if (uVar1 < 0x100) {
    *param_3 = 0;
  }
  else {
    param_2 = (ulong *)v8::internal::Object::GetProperty
                                 (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x38),
                                  param_2);
    if (param_2 != (ulong *)0x0) {
      if (((*param_2 & 1) == 0) || ((int)*param_2 != *(int *)(*(long *)(param_1 + 8) + 0xa0))) {
        *param_3 = 2;
        uVar3 = *param_2;
        if (((uVar3 & 1) == 0) ||
           (0x3f < *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)))) {
          param_2 = (ulong *)v8::internal::Object::ConvertToString
                                       (*(undefined8 *)(param_1 + 8),param_2);
        }
      }
      else {
        *param_3 = 1;
        param_2 = (ulong *)(*(long *)(param_1 + 8) + 200);
      }
    }
  }
  return param_2;
}

