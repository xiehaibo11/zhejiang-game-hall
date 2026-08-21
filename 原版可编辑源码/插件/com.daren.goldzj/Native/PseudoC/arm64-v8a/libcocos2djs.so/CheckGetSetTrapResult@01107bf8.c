
/* v8::internal::JSProxy::CheckGetSetTrapResult(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Name>, v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::Object>, v8::internal::JSProxy::AccessKind) */

Factory * v8::internal::JSProxy::CheckGetSetTrapResult
                    (Factory *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                    int param_5)

{
  ushort uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  int iVar6;
  ulong local_60;
  byte local_58 [8];
  ulong *local_50;
  ulong *puStack_48;
  ulong *puStack_40;
  undefined8 uStack_38;
  
  local_58[0] = 0;
  puStack_48 = (ulong *)0x0;
  local_50 = (ulong *)0x0;
  uStack_38 = 0;
  puStack_40 = (ulong *)0x0;
  uVar1 = JSReceiver::GetOwnPropertyDescriptor(param_1,param_3,param_2,local_58);
  if ((uVar1 & 0xff) == 0) {
    return (Factory *)0x0;
  }
  if (uVar1 < 0x100) goto LAB_01107d00;
  if (((local_50 == (ulong *)0x0) && ((local_58[0] >> 5 & 1) == 0)) || ((local_58[0] & 0x14) != 0))
  {
LAB_01107c80:
    if (param_5 != 0) {
      if (((puStack_48 == (ulong *)0x0 && puStack_40 == (ulong *)0x0) ||
          ((local_58[0] >> 2 & 1) != 0)) ||
         (((*puStack_40 & 1) == 0 || ((int)*puStack_40 != *(int *)(param_1 + 0xa0)))))
      goto LAB_01107d00;
      uVar4 = 0x92;
      goto LAB_01107d40;
    }
    if (((puStack_48 == (ulong *)0x0 && puStack_40 == (ulong *)0x0) || ((local_58[0] >> 2 & 1) != 0)
        ) || (((iVar6 = (int)*puStack_48, (*puStack_48 & 1) == 0 ||
               (iVar6 != *(int *)(param_1 + 0xa0))) ||
              (((*param_4 & 1) != 0 && ((int)*param_4 == iVar6)))))) {
LAB_01107d00:
      return param_1 + 0xa0;
    }
    uVar4 = 0x7d;
  }
  else {
    local_60 = *param_4;
    uVar2 = Object::SameValue((Object *)&local_60,*local_50);
    if ((uVar2 & 1) != 0) goto LAB_01107c80;
    if (param_5 == 0) {
      uVar4 = 0x7c;
      puVar5 = local_50;
      goto LAB_01107d68;
    }
    uVar4 = 0x91;
LAB_01107d40:
    param_4 = (ulong *)0x0;
  }
  puVar5 = param_4;
  param_4 = (ulong *)0x0;
LAB_01107d68:
  puVar3 = (undefined8 *)Factory::NewTypeError(param_1,uVar4,param_2,puVar5,param_4);
  Isolate::Throw((Isolate *)param_1,*puVar3,0);
  return (Factory *)0x0;
}

