
/* v8::Template::SetAccessorProperty(v8::Local<v8::Name>, v8::Local<v8::FunctionTemplate>,
   v8::Local<v8::FunctionTemplate>, v8::PropertyAttribute, v8::AccessControl) */

void v8::Template::SetAccessorProperty
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  Isolate *pIVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar4 = *(uint *)(param_1 + 4);
  pIVar6 = (Isolate *)((ulong)uVar4 << 0x20);
  piVar1 = (int *)((ulong)uVar4 << 0x20 | 0x95b0);
  uVar5 = *(undefined4 *)(pIVar6 + 0x2c60);
  *(undefined4 *)(pIVar6 + 0x2c60) = 5;
  puVar2 = (undefined8 *)((ulong)uVar4 << 0x20 | 0x95a0);
  plVar3 = (long *)((ulong)uVar4 << 0x20 | 0x95a8);
  uVar8 = *puVar2;
  lVar7 = *plVar3;
  *piVar1 = *piVar1 + 1;
  internal::ApiNatives::AddAccessorProperty(pIVar6,param_1,param_2,param_3,param_4,param_5);
  if (uVar4 != 0) {
    *puVar2 = uVar8;
    *piVar1 = *piVar1 + -1;
    if (*plVar3 != lVar7) {
      *plVar3 = lVar7;
      internal::HandleScope::DeleteExtensions(pIVar6);
    }
  }
  *(undefined4 *)(pIVar6 + 0x2c60) = uVar5;
  return;
}

