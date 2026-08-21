
/* v8::internal::Object::WriteToReadOnlyProperty(v8::internal::LookupIterator*,
   v8::internal::Handle<v8::internal::Object>, v8::Maybe<v8::internal::ShouldThrow>) */

bool v8::internal::Object::WriteToReadOnlyProperty
               (LookupIterator *param_1,undefined8 param_2,undefined8 param_3)

{
  Factory *this;
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  iVar1 = GetShouldThrow(*(undefined8 *)(param_1 + 0x18),param_3);
  if ((*(int *)(param_1 + 4) != 4) &&
     (uVar2 = LookupIterator::HolderIsReceiver(param_1), (uVar2 & 1) == 0)) {
    uVar6 = 0x45;
    if (iVar1 == 0) {
      uVar6 = 0x46;
    }
    Isolate::CountUsage(*(undefined8 *)(param_1 + 0x18),uVar6);
  }
  this = *(Factory **)(param_1 + 0x18);
  lVar3 = *(long *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  if (lVar3 == 0) {
    lVar3 = Factory::SizeToString(this,*(ulong *)(param_1 + 0x48),true);
    *(long *)(param_1 + 0x20) = lVar3;
  }
  if (iVar1 != 1) {
    uVar4 = TypeOf(this,uVar7);
    puVar5 = (undefined8 *)Factory::NewTypeError(this,0xa5,lVar3,uVar4,uVar7);
    Isolate::Throw((Isolate *)this,*puVar5,0);
  }
  return iVar1 == 1;
}

